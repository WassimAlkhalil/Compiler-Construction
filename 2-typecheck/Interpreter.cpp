#include "Interpreter.h"
#include "ErrorManagment.h"

#include <iostream>
#include <memory>
#include <string>
#include <unordered_map>
#include <list>
#include <typeinfo>
#include <algorithm>

using namespace std;

ErrorManagment errorManagment;

void Interpreter::visitProgram(Program *t) {} // abstract class
void Interpreter::visitDef(Def *t) {}         // abstract class
void Interpreter::visitField(Field *t) {}     // abstract class
void Interpreter::visitArg(Arg *t) {}         // abstract class
void Interpreter::visitStm(Stm *t) {}         // abstract class
void Interpreter::visitIdIn(IdIn *t) {}       // abstract class
void Interpreter::visitExp(Exp *t) {}         // abstract class
void Interpreter::visitType(Type *t) {}       // abstract class


void Interpreter::visitPDefs(PDefs *p_defs)
{   
     environment.enterScope("global");

    ListDef* defs = p_defs->listdef_;
    for (int i = 0; i < defs->size(); i++) {
        Def* def = defs->at(i);

        if (dynamic_cast<DFun*>(def)) {
            DFun*       definition = (DFun*)def;
            auto&       arguments = definition->listarg_;
            size_t      argumentsNumber = arguments->size();
            string      functionName = definition->id_;
            
            /*
                int foo(){}
                int foo(){}
                Example of a duplicate function definition

                TYPE ERROR
                Error *** function foo already defined
            */
            // Check whether the function is already defined in the (global) scope

            if (nullptr != environment.checkFunction(functionName)) {
                errorManagment.duplicateFunctionDetected("function", functionName);
            }

            vector<pair<string, const Type*>> argumentVector;

            /*
            int foo(void a){}

            TYPE ERROR
            Error *** argument void in function foo is void
            */
            // Check whether an argument type is void

            for (auto& arg : *arguments) {
                const string argumentName = ((ADecl*)arg)->id_;
                if (checkTypeVoid(((ADecl*)arg)->type_)) {
                    errorManagment.typeVoidDetected("function", functionName, "argument", argumentName);
                }

                /*
                int foo(int a, int a){}

                TYPE ERROR
                Error *** multiple definition of argument a in function foo
                */
                // Check whether there are duplicate argument names in the function

                for (int j = 0; j < argumentVector.size(); j++) {
                    if (argumentName == argumentVector[j].first) {
                        errorManagment.duplicateArgumentDetected(functionName, argumentName);
                    }
                }
                argumentVector.push_back(make_pair(argumentName, ((ADecl*)arg)->type_));
            }

            unique_ptr<FunctionItem> functionType = make_unique<FunctionItem>(functionName, definition->type_, argumentVector);
            environment.createFunction(functionName, move(functionType));
        } else if (dynamic_cast<DStruct*>(def)) {
            DStruct*    definition      = (DStruct*)def;
            auto&       fields          = definition->listfield_;
            size_t      fieldsNumber    = fields->size();
            string      structName      = definition->id_;

            /*
                struct foo{
                    int a;
                    }
                struct foo{
                    int a;
                    }

                TYPE ERROR
                Error ***struct foo has been declared
            */
            // Check whether the struct is already defined in the (global) scope

            if (nullptr != environment.checkStruct(structName)) {
                errorManagment.duplicateStructDetected("struct", structName);
            }
            
            // mapFieldNameToType is a map of the struct fields (name, type) 
            unordered_map<string, const Type*> mapFieldNameToType;
            for (auto& field : *fields) {

                /*
                    struct foo{
                            void a;
                            }

                    TYPE ERROR
                    Error *** in function foo: detected that argument a has type 'void'
                */
                // Check whether there are duplicate member type 'void'

                const string fieldName = ((FDecl*)field)->id_;
                if (checkTypeVoid(((FDecl*)field)->type_)) {
                    errorManagment.typeVoidDetected("struct", structName, "argument", fieldName);
                }

                /*
                struct bar{
                            int a;
                            double a;
                        }

                TYPE ERROR      
                Error ***duplicate struct bar in field a
                */
                // Check whether there are duplicate member names in the struct

                if (mapFieldNameToType.find(fieldName) != mapFieldNameToType.end()) {
                    errorManagment.duplicateFieldDetected(structName, fieldName);
                }
                mapFieldNameToType[fieldName] = ((FDecl*)field)->type_;
            }

            // Create a new struct type and add it to the (global scope) 
            unique_ptr<StructItem> structType = make_unique<StructItem>(structName, mapFieldNameToType);
            environment.createStruct(structName, move(structType));
        }
    }
    /*
        GLONBAL SCOPE IS EMPTY
    */
    // Check whether the 'main' function is defined in the (global) scope and whether it has correct signature and return type
    if (nullptr == environment.checkFunction("main")) {

        cout << "Error ***'main' is not found" << endl;
        return;
    }

    if (p_defs->listdef_) p_defs->listdef_->accept(this);
}
/*
 DFun checks whether the function is already defined in the (global) scope and whether it has the correct signature and return type
*/
void Interpreter::visitDFun(DFun *d_fun)
{
    currentFunction.clear();

    if (d_fun->type_)
        d_fun->type_->accept(this);

    visitId(d_fun->id_);

    currentFunction.name = d_fun->id_;
    currentFunction.returnOutput = d_fun->type_;
    
    if (false == checkTypeVoid(d_fun->type_)){
        currentFunction.returnStatmentRequired = true;
    }else{
        currentFunction.returnStatmentRequired = false;
    }

    d_fun->returnStatment = currentFunction.returnStatmentRequired;

    environment.enterScope("function " + d_fun->id_);
    if (d_fun->listarg_)
        d_fun->listarg_->accept(this);

    currentFunction.type = make_unique<FunctionItem>(d_fun->id_, d_fun->type_, currentFunction.argumentVector);

    if (d_fun->liststm_)
        d_fun->liststm_->accept(this);

    currentFunction.clear();
    environment.exitScope();
}
// DStruct checks whether the struct is already defined in the (global) scope and whether it has the correct signature and return type 
void Interpreter::visitDStruct(DStruct *d_struct)
{
    visitId(d_struct->id_);
    currentStruct.name = d_struct->id_;
    if (d_struct->listfield_)
        d_struct->listfield_->accept(this);

    environment.createStruct(d_struct->id_, make_unique<StructItem>(d_struct->id_, move(currentStruct.fieldList)));
    currentStruct.clear();
}
/*
    struct foo{
        int a;
        int a;
    }

    TYPE ERROR
    Error ***duplicate struct foo in field a
*/
void Interpreter::visitFDecl(FDecl *f_decl)
{   
    if (currentStruct.fieldList.count(f_decl->id_) == 1)
    {
        errorManagment.duplicateFieldDetected(currentStruct.name, f_decl->id_);
    }

    if (f_decl->type_)
        f_decl->type_->accept(this);
        
        currentStruct.fieldList[f_decl->id_] = f_decl->type_;

    visitId(f_decl->id_);
}
/*
    int foo(void a, void a){}

    TYPE ERROR
    Error ***argument void in function foo is void
*/
// Check whether there are duplicate argument names in the function
void Interpreter::visitADecl(ADecl *a_decl)
{
    // CHECK THAT LATER
    if (checkTypeVoid(a_decl->type_))
    {
        errorManagment.typeVoidDetected("function", currentFunction.name, "argument", a_decl->id_);
    }

    // add_var adds a new variable to the current scope (function) 
    environment.createVariable(a_decl->id_, make_unique<VariableItem>(a_decl->id_, a_decl->type_));
    if (a_decl->type_)
        a_decl->type_->accept(this);

    currentFunction.argumentVector.push_back(make_pair(a_decl->id_, a_decl->type_));

    visitId(a_decl->id_);
}
// we don't need to do anything here, because the id is already visited in the visitADecl function 
void Interpreter::visitSExp(SExp *s_exp)
{
    if (s_exp->exp_)
        s_exp->exp_->accept(this);
}

void Interpreter::visitSDecls(SDecls *s_decls)
{
    if (checkTypeVoid(s_decls->type_))
    {
        errorManagment.variableDeclaredWithTypeVoid(currentFunction.name);
    }
    if (s_decls->type_)
        s_decls->type_->accept(this);
    
        currentDeclaration.type = s_decls->type_;

    if (s_decls->listidin_)
        s_decls->listidin_->accept(this);
}

/*
    int foo(){
        return 1;
    }

    TYPE ERROR
    Error ***in function foo: type 'void' is incompatible with type 'int'
*/
// SReturn checks whether the return type is void or not 
void Interpreter::visitSReturn(SReturn *s_return)
{
    if (s_return->exp_)
        s_return->exp_->accept(this);
    const Type *expectedType = currentFunction.returnOutput;
    const Type *currentType = currentExpression.type;
    if (!checkMismatchedTypes(expectedType, currentType))
    {
        errorManagment.mismatchedTypes(currentFunction.name, checkTypeName(expectedType), checkTypeName(currentType));
    }
}
/*
        void foo(){
            return;
        }

        int main() {
            return 0;
        }

        TYPE ERROR
        Error ***in function foo: type 'int' is incompatible with type 'void'
    */
    // SReturnV checks whether the return type is void or not
void Interpreter::visitSReturnV(SReturnV *s_return_v)
{
    const Type *expectedType = currentFunction.returnOutput;
    const Type *currentType = currentExpression.type;
    
    if (!checkTypeVoid(expectedType))
    {
        // if the condition is true, then the return type is not void
        errorManagment.mismatchedTypes(currentFunction.name, checkTypeName(expectedType), "void");
    }
}
// SBlock checks whether the block is empty or not 
void Interpreter::visitSBlock(SBlock *s_block)
{
    environment.enterScope("");
    if (s_block->liststm_)
        s_block->liststm_->accept(this);
    environment.exitScope();
}
/*
    int foo(){
        int a;
        int a;
    }

    TYPE ERROR
    Error ***in function main: variable x is already declared
*/
// IdNoInit checks whether the variable is already declared in the current scope (function)
void Interpreter::visitIdNoInit(IdNoInit *id_no_init)
{
    visitId(id_no_init->id_);
    const string &variableName      = id_no_init->id_;
    const Type *expectedType        = currentDeclaration.type;
    const VariableItem *variable    = environment.checkCurrentVariable(id_no_init->id_);
    if (nullptr == variable){
        environment.createVariable(variableName, make_unique<VariableItem>(variableName, expectedType));
    }else{
        errorManagment.declaredVariable(currentFunction.name, variableName);
    }
}
// IdInit checks whether the variable is already declared in the current scope (function) and whether the type of the variable is the same as the type of the expression
void Interpreter::visitIdInit(IdInit *id_init)
{
    visitId(id_init->id_);
    if (id_init->exp_)
        id_init->exp_->accept(this);
    const Type *currentType = currentExpression.type;
    const Type *expectedType = currentDeclaration.type;

    /*
        int foo(){
            int a = true;
        }

        TYPE ERROR
        E: in function foo: type 'bool' is incompatible with type 'int'
    */
    // Check whether the type of the variable is the same as the type of the expression
    if (!checkMismatchedTypes(expectedType, currentType))
    {
        errorManagment.mismatchedTypes(currentFunction.name, checkTypeName(expectedType), checkTypeName(currentType));
    }
    // Check whether the variable is already declared in the current scope (function)
    if (nullptr == environment.checkCurrentVariable(id_init->id_))
    {
        environment.createVariable(id_init->id_, make_unique<VariableItem>(id_init->id_, expectedType));
    }
    /*
        int foo(){
            int a = 1;
            int a = 2;
        }

        TYPE ERROR
        Error ***in function foo: variable a is already declared
    */
    // If the variable is already declared in the current scope (function), then throw an error
    else
    {
        errorManagment.declaredVariable(currentFunction.name, id_init->id_);
    }
}
// ETrue checks whether the type of the expression is bool or not 
void Interpreter::visitETrue(ETrue *e_true)
{
    e_true->type = make_unique<Type_bool>();
    currentExpression.assignableValue = false;
    currentExpression.type = e_true->type.get();
}
// EFalse checks whether the type of the expression is bool or not
void Interpreter::visitEFalse(EFalse *e_false)
{
    e_false->type = make_unique<Type_bool>();
    currentExpression.assignableValue = false;
    currentExpression.type = e_false->type.get();
}
// EInt checks whether the type of the expression is int or not
void Interpreter::visitEInt(EInt *e_int)
{
    visitInteger(e_int->integer_);
    e_int->type = make_unique<Type_int>();
    currentExpression.assignableValue = false;
    currentExpression.type = e_int->type.get();
}
// EDouble checks whether the type of the expression is double or not
void Interpreter::visitEDouble(EDouble *e_double)
{
    visitDouble(e_double->double_);
    e_double->type = make_unique<Type_double>();
    currentExpression.assignableValue = false;
    currentExpression.type = e_double->type.get();
}

void Interpreter::visitType_bool(Type_bool *type_bool) {}

void Interpreter::visitType_int(Type_int *type_int) {}

void Interpreter::visitType_double(Type_double *type_double){}

void Interpreter::visitType_void(Type_void *type_void){}
// we don't need to do anything in TypeId, because we already visited the Id in the visitId function
void Interpreter::visitTypeId(TypeId *type_id)
{
    visitId(type_id->id_);
}
// we don't need to do anything in ListDef, because we already visited the Defs in the visitPDefs function
void Interpreter::visitListDef(ListDef *list_def)
{
    for (ListDef::iterator i = list_def->begin(); i != list_def->end(); ++i)
    {
        (*i)->accept(this);
    }
}
// we don't need to do anything in ListField, because we already visited the Fields in the visitDStruct function
void Interpreter::visitListField(ListField *list_field)
{
    for (ListField::iterator i = list_field->begin(); i != list_field->end(); ++i)
    {
        (*i)->accept(this);
    }
}
// we don't need to do anything in ListArg, because we already visited the Args in the visitDFun function
void Interpreter::visitListArg(ListArg *list_arg)
{
    for (ListArg::iterator i = list_arg->begin(); i != list_arg->end(); ++i)
    {
        (*i)->accept(this);
    }
}
// we don't need to do anything in ListStm, because we already visited the Stms in the visitDFun function
void Interpreter::visitListStm(ListStm *list_stm)
{
    for (ListStm::iterator i = list_stm->begin(); i != list_stm->end(); ++i)
    {
        (*i)->accept(this);
    }
}
// we don't need to do anything in ListIdIn, because we already visited the Ids in the visitSDecls function
void Interpreter::visitListIdIn(ListIdIn *list_id_in)
{
    for (ListIdIn::iterator i = list_id_in->begin(); i != list_id_in->end(); ++i)
    {
        (*i)->accept(this);
    }
}

// ListExp checks whether the type of the expression is the same as the type of the function call
void Interpreter::visitListExp(ListExp *list_exp)
{
    int argumentNumber = list_exp->size();
    int paramterNumber = currentExpression.currentFunctionCall->arguments.size();
    /*
        int foo(int a, int b){}
        int main(){
            foo(1);
        }

        TYPE ERROR
        Error ***in function main: function call foo has 1 arguments, but 2 parameters are expected
    */
    if (argumentNumber != paramterNumber)
    {
        errorManagment.mismatchedParameterNumbers(
            currentFunction.name, currentExpression.currentFunctionCall-> name, paramterNumber, argumentNumber);
    }

    int c = 0;
    for (ListExp::iterator i = list_exp->begin(); i != list_exp->end(); ++i)
    {
        (*i)->accept(this);

        const Type *expectedType = currentExpression.currentFunctionCall->arguments[c].second;
        const Type *currentType = currentExpression.type;
        
        if (!checkMismatchedTypes(expectedType, currentType))
        {   
            /*
                int foo(int a, int b){}

                int main(){
                    foo(1, true);
                }

                TYPE ERROR
                Error *** function main has expression function call foo: expected type 'int', but received type 'bool'
            */
            const string expression = format("function call %s", currentExpression.currentFunctionCall-> name.c_str());
            errorManagment.wrongExpressionType(
                currentFunction.name, expression, checkTypeName(expectedType), checkTypeName(currentType));
        }
        c++;
    }
}

void Interpreter::visitListId(ListId *list_id)
{
    for (ListId::iterator i = list_id->begin(); i != list_id->end(); ++i)
    {
        visitId(*i);
    }
}
void Interpreter::visitInteger(Integer x) {}
void Interpreter::visitChar(Char x) {}
void Interpreter::visitDouble(Double x) {}
void Interpreter::visitString(String x) {}
void Interpreter::visitIdent(Ident x) {}
void Interpreter::visitId(Id x) {}

/*************************** EXPRESSIONS ***************************/

void Interpreter::visitEId(EId* e_id) {
 
 visitId(e_id->id_);
    
    string id = e_id->id_;
    const VariableItem* variable = environment.checkVariable(id);
    if (variable == nullptr) { 
        errorManagment.declareVariable(currentFunction.name, e_id->id_); 
      }

    e_id->type = checkType(variable->type);
    currentExpression.assignableValue = true;
    currentExpression.type = e_id->type.get();

}

// EApp checks whether the function is already defined in the (global) scope and whether it has the correct signature and return type
void Interpreter::visitEApp(EApp* e_app) {
 
  visitId(e_app->id_);


    const FunctionItem* function = environment.checkFunction(e_app->id_);
    if (function == nullptr) { 
        /*
            int foo(){
                bar();
            }

            TYPE ERROR
            Error ***in function foo: undefined function bar
        */
        errorManagment.defineFunction(currentFunction.name, e_app->id_); 
        }
    currentExpression.currentFunctionCall = function;
    if (e_app->listexp_) e_app->listexp_->accept(this);

    e_app->type = move(checkType(function->returnStatment));

    currentExpression.type = e_app->type.get();

}

void Interpreter::visitEProj(EProj* e_proj) {
 
   if (e_proj->exp_) e_proj->exp_->accept(this);
    Type* expressionType = currentExpression.type;
 
    const string& structName = checkTypeName(expressionType);
    const StructItem* structur = environment.checkStruct(structName);

    if (structur == nullptr) { 
            errorManagment.declareStruct(currentFunction.name, structName); 
        }


    size_t fieldsNumber = structur->fieldList.count(e_proj->id_);
    if (fieldsNumber < 1) {
        errorManagment.declareField(currentFunction.name, e_proj->id_);
    } else if (fieldsNumber > 1) {
        errorManagment.duplicateFieldDetected(structName, e_proj->id_);
    }
    const Type* newType = structur->fieldList.at(e_proj->id_);
    visitId(e_proj->id_);
    e_proj->type = move(checkType(newType));
    currentExpression.type = e_proj->type.get();

}

void Interpreter::visitEPIncr(EPIncr* ep_incr) {

if (ep_incr->exp_) ep_incr->exp_->accept(this);

    if (!checkNumericType(currentExpression.type)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(currentExpression.type));
    }
    if (!currentExpression.assignableValue) { 
        /*
            int foo(){
                1++;
            }

            TYPE ERROR
            Error ***in function foo: in expression type _++: expected assignable value, but received a non-assignable value
        */
        errorManagment.assignableValueExpected(currentFunction.name, "_++"); 
        }

    ep_incr->type = checkType(currentExpression.type);
}

void Interpreter::visitEPDecr(EPDecr* ep_decr) {

  if (ep_decr->exp_) ep_decr->exp_->accept(this);
  
    if (!checkNumericType(currentExpression.type)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(currentExpression.type));
    }
    // Check whether the expression is assignable or not 
    /*
        int foo(){
            1--;
        }

        TYPE ERROR
        Error ***in function foo: in expression type _--: expected assignable value, but received a non-assignable value
    */
    if (!currentExpression.assignableValue) { 
        errorManagment.assignableValueExpected(currentFunction.name, "_--"); }

    ep_decr->type = checkType(currentExpression.type);

}

void Interpreter::visitEIncr(EIncr* e_incr) {

  if (e_incr->exp_) e_incr->exp_->accept(this);

    if (!checkNumericType(currentExpression.type)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(currentExpression.type));
    }
    // Check whether the expression is assignable or not
    /*
        int foo(){
            ++1;
        }

        TYPE ERROR
        Error ***in function foo: in expression type ++_: expected assignable value, but received a non-assignable value
    */
    if (!currentExpression.assignableValue) { 
        errorManagment.assignableValueExpected(currentFunction.name, "++_"); 
        }

    e_incr->type = checkType(currentExpression.type);

}

void Interpreter::visitEDecr(EDecr* e_decr) {
    /*
        int foo(){
            --1;
        }

        TYPE ERROR
        Error ***in function foo: in expression type --_: expected assignable value, but received a non-assignable value
    */
  if (e_decr->exp_) e_decr->exp_->accept(this);
    if (!checkNumericType(currentExpression.type)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(currentExpression.type));
    }
    if (!currentExpression.assignableValue) { 
            errorManagment.assignableValueExpected(currentFunction.name, "--_"); 
        }

    e_decr->type = checkType(currentExpression.type);
}

void Interpreter::visitEUPlus(EUPlus* eu_plus) {

  if (eu_plus->exp_) eu_plus->exp_->accept(this);
    if (!checkNumericType(currentExpression.type)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(currentExpression.type));
    }
    currentExpression.type = currentExpression.type;

    eu_plus->type = checkType(currentExpression.type);
}

void Interpreter::visitEUMinus(EUMinus* eu_minus) {

  if (eu_minus->exp_) eu_minus->exp_->accept(this);
    if (!checkNumericType(currentExpression.type)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(currentExpression.type));
    }
    currentExpression.type = currentExpression.type;

    eu_minus->type = checkType(currentExpression.type);
}

void Interpreter::visitETwc(ETwc* e_twc) {
   
  if (e_twc->exp_1) e_twc->exp_1->accept(this);
    Type* leftHandType = currentExpression.type;
    if (e_twc->exp_2) e_twc->exp_2->accept(this);
    Type* rightHandType = currentExpression.type;

    bool leftHand = checkNumericType(leftHandType);
    bool rightHand = checkNumericType(rightHandType);
    if (!leftHand) { 
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftHandType)); 
        }
    if (!rightHand) { 
    errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightHandType)); 
    }

    e_twc->type = make_unique<Type_int>();
    currentExpression.type = e_twc->type.get();

}

void Interpreter::visitEEq(EEq* e_eq) {

  if (e_eq->exp_1) e_eq->exp_1->accept(this);
  Type* expr_lh = currentExpression.type;
  if (e_eq->exp_2) e_eq->exp_2->accept(this);
  Type* expr_rh = currentExpression.type;

  e_eq->type = make_unique<Type_bool>();
  currentExpression.type = e_eq->type.get();


}
/*
    x = 1;
    y = 2; 

    if (x == y) {
        return 1;
    } else {
        return 0;
    }
*/

void Interpreter::visitENEq(ENEq* en_eq) {
  
  if (en_eq->exp_1) en_eq->exp_1->accept(this);
    Type* leftHandExpression = currentExpression.type;
    if (en_eq->exp_2) en_eq->exp_2->accept(this);
    Type* rightHandExpression = currentExpression.type;


    en_eq->type = make_unique<Type_bool>();
    currentExpression.type = en_eq->type.get();

}

void Interpreter::visitEAnd(EAnd* e_and) {

  if (e_and->exp_1) e_and->exp_1->accept(this);
    Type* leftHandType = currentExpression.type;
    if (e_and->exp_2) e_and->exp_2->accept(this);
    Type* rightHandType = currentExpression.type;

    bool leftHand = checkTypeBool(leftHandType);
    bool rightHand = checkTypeBool(rightHandType);
    if (!leftHand) { 
        errorManagment.wrongExpressionType(currentFunction.name, "&&", "bool", checkTypeName(leftHandType)); 
        }
    if (!rightHand) { 
        errorManagment.wrongExpressionType(currentFunction.name, "&&", "bool", checkTypeName(rightHandType)); 
        }


    e_and->type = make_unique<Type_bool>();
    currentExpression.type = e_and->type.get();

}

void Interpreter::visitEOr(EOr* e_or) {

if (e_or->exp_1) e_or->exp_1->accept(this);
    Type* leftHandType = currentExpression.type;
    if (e_or->exp_2) e_or->exp_2->accept(this);
    Type* rightHandType = currentExpression.type;

    bool leftHand = checkTypeBool(leftHandType);
    bool rightHand = checkTypeBool(rightHandType);
    if (!leftHand) { 
        errorManagment.wrongExpressionType(currentFunction.name, "||", "bool", checkTypeName(leftHandType)); 
        }
    if (!rightHand) { 
        errorManagment.wrongExpressionType(currentFunction.name, "||", "bool", checkTypeName(rightHandType)); 
        }


    e_or->type = make_unique<Type_bool>();
    currentExpression.type = e_or->type.get();
}

void Interpreter::visitEAss(EAss* e_ass) {

  if (e_ass->exp_1) e_ass->exp_1->accept(this);

    if (!currentExpression.assignableValue) { 
        errorManagment.assignableValueExpected(currentFunction.name, "="); 
        }
    Type* leftHandType = currentExpression.type;
    if (e_ass->exp_2) e_ass->exp_2->accept(this);
    Type* rightHandType = currentExpression.type;


    if (!checkMismatchedTypes(leftHandType, rightHandType)) {
        errorManagment.wrongExpressionType(currentFunction.name, "=", checkTypeName(leftHandType), checkTypeName(rightHandType));
    }


    e_ass->type = checkType(leftHandType);
    currentExpression.type = e_ass->type.get();
    
}

void Interpreter::visitECond(ECond* e_cond) {

  if (e_cond->exp_1) e_cond->exp_1->accept(this);
  Type *tp1 = currentExpression.type;
  // first expression is of type bool
  if(!checkTypeBool(tp1)){
    errorManagment.wrongExpressionType(currentFunction.name,"?", "bool", checkTypeName(tp1));
  }

  if (e_cond->exp_2) e_cond->exp_2->accept(this);
  Type *tp2 = currentExpression.type;

  if (e_cond->exp_3) e_cond->exp_3->accept(this);
  Type *tp3 = currentExpression.type;
  
  /* 
     Implicit convertion from int to double exists, so two numeric expressions should be accepted.
     If either of the two numeric branch expression is of type double, return type would be double (one int would be converted to double).
     Otherwise return type would be int.
  */

  if(checkNumericType(tp2) && checkNumericType(tp3)){
    if(checkTypeName(tp2) == "double" || checkTypeName(tp3) == "double") e_cond->type = make_unique<Type_double>();
    else e_cond->type = make_unique<Type_int>();
  }
  else if(checkTypeName(tp2) != checkTypeName(tp3)){
    errorManagment.mismatchedTypes(currentFunction.name, checkTypeName(tp2), checkTypeName(tp3));
  } else {
    // Both branch expressions are of the same type, so this expression will have the same type as them
    e_cond->type = checkType(tp2);
  }

  currentExpression.type = e_cond->type.get();

}


/*
    if (condition) {
        stm_1;
    } else {
        stm_2;
    }
*/

void Interpreter::visitSIfElse(SIfElse *s_if_else)
{
 if (s_if_else->exp_) s_if_else->exp_->accept(this);

    Type* if_expression = currentExpression.type; // Get the type of the expression inside the if statement
    if (s_if_else->stm_1) s_if_else->stm_1->accept(this); // Visit the statement inside the if statement 
    if (s_if_else->stm_2) s_if_else->stm_2->accept(this); // Visit the statement inside the else statement

    // Check if the type of the expression if of type bool 
    if (!checkTypeBool(if_expression)) {
        cout << "TYPE ERROR" << endl;
        cout << "Error *** Invalid type in the if statement expression\n" << endl;
        exit(1);
    }
}

void Interpreter::visitEDiv(EDiv *e_div)
{
    if (e_div->exp_1) e_div->exp_1->accept(this); // Visit the left expression of the division
    Type* dividend = currentExpression.type; // Get the type of the left expression
    if (e_div->exp_2) e_div->exp_2->accept(this); // Visit the right expression of the division
    Type* divisor = currentExpression.type; // Get the type of the right expression

    // Check if the dicidend and the divisor are of type int or double
    if (!checkNumericType(dividend)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(dividend));
        exit(1);
    } else if (!checkNumericType(divisor)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(divisor));
        exit(1);
    }

    if (checkTypeDouble(dividend)) {
        e_div->type = make_unique<Type_double>(); // If at least one exp (right or left) is of type double all the expressions should be converted into double
        currentExpression.type = e_div->type.get(); // Determine the type of the division expression
    } else {
        e_div->type = checkType(divisor); // If both expressions are of type int, then the type of the division expression is int
        currentExpression.type = e_div->type.get(); // Determine the type of the division expression
    }
}

void Interpreter::visitEGtEq(EGtEq *e_gt_eq)
{
    // Visit the left expression of the greater than or equal operation 
    if (e_gt_eq->exp_1) e_gt_eq->exp_1->accept(this); 
    Type* leftExpression = currentExpression.type; // Get the type of the left expression
    if (e_gt_eq->exp_2) e_gt_eq->exp_2->accept(this); // Visit the right expression of the greater than or equal operation
    Type* rightExpression = currentExpression.type; // Get the type of the right expression

    // Check if the left expression is of type int or double 
    if (!checkNumericType(leftExpression)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftExpression));
        exit(1);
        // Check if the right expression is of type int or double
    } else if (!checkNumericType(rightExpression)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightExpression));
        exit(1);
    }

    e_gt_eq->type = make_unique<Type_bool>(); // Set the type of the greater than or equal expression to bool
    currentExpression.type = e_gt_eq->type.get(); // Determine the type of the greater than or equal expression
}


/*int i = 0;
while (i < 10) {
    // Code innerhalb der Schleife
    i++;
}
*/
void Interpreter::visitSWhile(SWhile *s_while)
{
    // Visit the condition expression of the while loop
    if (s_while->exp_) s_while->exp_->accept(this);
    Type* condition = currentExpression.type;

    // Check if the condition expression is of type bool
    if (!checkTypeBool(condition)) {
        errorManagment.mismatchedTypes(currentFunction.name, "bool", checkTypeName(condition));
        exit(1);
    }

    // Visit the statement inside the while loop
    if (s_while->stm_) s_while->stm_->accept(this);
}
/*  
int a = 10;
int b = 5;
int c = a - b;  // Ergebnis ist 5
*/
void Interpreter::visitEMinus(EMinus *e_minus)
{
    // Visit the left expression of the subtraction
    if (e_minus->exp_1) e_minus->exp_1->accept(this);
    Type* leftExpression = currentExpression.type;

    // Visit the right expression of the subtraction
    if (e_minus->exp_2) e_minus->exp_2->accept(this);
    Type* rightExpression = currentExpression.type;

    // Check if the left and right expressions are of numeric type
    if (!checkNumericType(leftExpression)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftExpression));
        exit(1);
    } else if (!checkNumericType(rightExpression)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightExpression));
        exit(1);
    }

    // Determine the type of the subtraction expression
    if (checkTypeDouble(leftExpression) || checkTypeDouble(rightExpression)) {
        e_minus->type = make_unique<Type_double>();
    } else {
        e_minus->type = make_unique<Type_int>();
    }
    currentExpression.type = e_minus->type.get();
}
/*  int a = 10;
int b = 5;
bool result = a > b;  // Ergebnis ist true
 */
void Interpreter::visitEGt(EGt *e_gt)
{
    // Visit the left expression of the greater than operation
    if (e_gt->exp_1) e_gt->exp_1->accept(this);
    Type* leftExpression = currentExpression.type;

    // Visit the right expression of the greater than operation
    if (e_gt->exp_2) e_gt->exp_2->accept(this);
    Type* rightExpression = currentExpression.type;

    // Check if the left and right expressions are of numeric type
    if (!checkNumericType(leftExpression)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftExpression));
        exit(1);
    } else if (!checkNumericType(rightExpression)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightExpression));
        exit(1);
    }

    // Set the type of the greater than expression to bool
    e_gt->type = make_unique<Type_bool>();
    currentExpression.type = e_gt->type.get();
}


void Interpreter::visitSDoWhile(SDoWhile *s_do_while)
{
    // Visit the statement inside the do-while loop
    if (s_do_while->stm_) s_do_while->stm_->accept(this);

    // Visit the condition expression of the do-while loop
    if (s_do_while->exp_) s_do_while->exp_->accept(this);

    // Check if the condition expression is of type bool
    Type* condition = currentExpression.type;
    if (!checkTypeBool(condition)) {
        cout << "Error: The condition of a do-while loop must be of type bool" << endl;
        exit(1);
    }
}

void Interpreter::visitEPlus(EPlus *e_plus)
{
    // Visit the left expression of the addition
    if (e_plus->exp_1) e_plus->exp_1->accept(this);
    Type* leftExpression = currentExpression.type;

    // Visit the right expression of the addition
    if (e_plus->exp_2) e_plus->exp_2->accept(this);
    Type* rightExpression = currentExpression.type;

    // Check if the left expression is of type int
    if (!checkNumericType(leftExpression)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftExpression));
        exit(1);
    }
    // Check if the right expression is not of type int
    else if (!checkNumericType(rightExpression)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightExpression));
        exit(1);
    }

    // Determine the type of the addition expression
    // if at least one exp (right or left) is of type double all the expressions should be converted into double
    if (checkTypeDouble(leftExpression)) {
        e_plus->type = make_unique<Type_double>();
        currentExpression.type = e_plus->type.get();
    } else {
        e_plus->type = checkType(rightExpression);
        currentExpression.type = e_plus->type.get();
    }
}

void Interpreter::visitELt(ELt *e_lt)
{
    // Visit the left expression of the less than operation
    if (e_lt->exp_1) {e_lt->exp_1->accept(this);}
    Type* leftExpression = currentExpression.type;

    // Visit the right expression of the less than operation
    if (e_lt->exp_2) {e_lt->exp_2->accept(this);}
    Type* rightExpression = currentExpression.type;

    // Check if the left expression is not numeric
    if (!checkNumericType(leftExpression)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftExpression));
        exit(1);
    }
    // Check if the right expression is not numeric
    else if (!checkNumericType(rightExpression)) {
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightExpression));
        exit(1);
    }

    // Set the type of the less than expression to bool
    e_lt->type = make_unique<Type_bool>();
    currentExpression.type = e_lt->type.get();
}


// [TODO] SSU-YUNG
void Interpreter::visitSFor(SFor *s_for)
{

    if (s_for->exp_1)
        s_for->exp_1->accept(this);
    if (s_for->exp_2)
        s_for->exp_2->accept(this);
    Type *currentType = currentExpression.type;
    if(!checkTypeBool(currentType)){
        errorManagment.mismatchedTypes(currentFunction.name,"bool",checkTypeName(currentType));
    }
    if (s_for->exp_3)
        s_for->exp_3->accept(this);
    if (s_for->stm_)
        s_for->stm_->accept(this);
}

void Interpreter::visitETimes(ETimes *e_times)
{
    if (e_times->exp_1) e_times->exp_1->accept(this);
    Type *leftType = currentExpression.type;
    if(!checkNumericType(leftType)){
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftType));
    }

    if (e_times->exp_2) e_times->exp_2->accept(this);
    Type *rightType = currentExpression.type;
    if(!checkNumericType(rightType)){
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightType));
    }

    // since we made sure both are numeric, if either is double, the other can be converted to double,
    // so the outcome would be double
    if(checkTypeDouble(leftType) || checkTypeDouble(rightType)){
        e_times->type = make_unique<Type_double>();
    } else {
        e_times->type = make_unique<Type_int>();
    }
    currentExpression.type = e_times->type.get();
}

void Interpreter::visitELtEq(ELtEq *e_lt_eq)
{
    if (e_lt_eq->exp_1) e_lt_eq->exp_1->accept(this);
    Type *leftType = currentExpression.type;
    if(!checkNumericType(leftType)){
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftType));
    }

    if (e_lt_eq->exp_2) e_lt_eq->exp_2->accept(this);
    Type *rightType = currentExpression.type;
    if(!checkNumericType(rightType)){
        errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightType));
    }

    e_lt_eq->type = make_unique<Type_bool>();
    currentExpression.type = e_lt_eq->type.get();
}
