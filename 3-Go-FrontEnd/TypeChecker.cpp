#include <iostream>
#include "TypeChecker.h"
using namespace std;

#include <iostream>
#include <memory>
#include <string>
#include <unordered_map>
#include <list>
#include <typeinfo>
#include <algorithm>

ErrorManagment errorManagment;

void TypeChecker::visitProgram(Program *t) {}
void TypeChecker::visitDef(Def *t) {}
void TypeChecker::visitField(Field *t) {}
void TypeChecker::visitArgument(Argument *t) {}
void TypeChecker::visitStatment(Statment *t) {}
void TypeChecker::visitDeclaration(Declaration *t) {}
void TypeChecker::visitConstDeclaration(ConstDeclaration *t) {}
void TypeChecker::visitConstSpecification(ConstSpecification *t) {}
void TypeChecker::visitVariableDeclaration(VariableDeclaration *t) {}
void TypeChecker::visitVariableSpecification(VariableSpecification *t) {}
void TypeChecker::visitSimpleStatment(SimpleStatment *t) {}
void TypeChecker::visitShortVariableDeclaration(ShortVariableDeclaration *t) {}
void TypeChecker::visitExpression(Expression *t) {}
void TypeChecker::visitType(Type *t) {}

void TypeChecker::visitPDefs(PDefs *p_defs)
{
  environment.enterScope("global");

    ListDef* defs = p_defs->listdef_;
    for (int i = 0; i < defs->size(); i++) {
        Def* def = defs->at(i);

        if (dynamic_cast<DFun*>(def)) {
            DFun*       definition = (DFun*)def;
            auto&       arguments = definition->listargument_;
            size_t      argumentsNumber = arguments->size();
            string      functionName = definition->id_;
            
            // Check whether the function is already defined in the (global) scope
            if (nullptr != environment.checkFunction(functionName)) {
                errorManagment.duplicateFunctionDetected("function", functionName);
            }

            vector<pair<string, const Type*>> argumentVector;

            for (auto& arg : *arguments) {
                const string argumentName = ((AArgument*)arg)->id_;

                // Check whether there are duplicate argument names in the function
                for (int j = 0; j < argumentVector.size(); j++) {
                    if (argumentName == argumentVector[j].first) {
                        errorManagment.duplicateArgumentDetected(functionName, argumentName);
                    }
                }
                argumentVector.push_back(make_pair(argumentName, ((AArgument*)arg)->type_));
            }

            unique_ptr<FunctionItem> functionType = make_unique<FunctionItem>(functionName, definition->type_, argumentVector);
            environment.createFunction(functionName, move(functionType));
        } if (dynamic_cast<DFunWithoutType*>(def)) {
            DFunWithoutType*       definition = (DFunWithoutType*)def;
            auto&       arguments = definition->listargument_;
            size_t      argumentsNumber = arguments->size();
            string      functionName = definition->id_;
            
            // Check whether the function is already defined in the (global) scope
            if (nullptr != environment.checkFunction(functionName)) {
                errorManagment.duplicateFunctionDetected("function", functionName);
            }

            vector<pair<string, const Type*>> argumentVector;

            for (auto& arg : *arguments) {
                const string argumentName = ((AArgument*)arg)->id_;

                // Check whether there are duplicate argument names in the function
                for (int j = 0; j < argumentVector.size(); j++) {
                    if (argumentName == argumentVector[j].first) {
                        errorManagment.duplicateArgumentDetected(functionName, argumentName);
                    }
                }
                argumentVector.push_back(make_pair(argumentName, ((AArgument*)arg)->type_));
            }

            unique_ptr<FunctionItem> functionType = make_unique<FunctionItem>(functionName, nullptr, argumentVector);
            environment.createFunction(functionName, move(functionType));
        } else if (dynamic_cast<DStruct*>(def)) {
            DStruct*    definition      = (DStruct*)def;
            auto&       fields          = definition->listfield_;
            size_t      fieldsNumber    = fields->size();
            string      structName      = definition->id_;
            // Check whether the struct is already defined in the (global) scope

            if (nullptr != environment.checkStruct(structName)) {
                errorManagment.duplicateStructDetected("struct", structName);
            }
            
            // mapFieldNameToType is a map of the struct fields (name, type) 
            unordered_map<string, const Type*> mapFieldNameToType;
            for (auto& field : *fields) {
                // Check whether there are duplicate member type 'void'

                const string fieldName = ((FDeclaration*)field)->id_;
                // Check whether there are duplicate member names in the struct

                if (mapFieldNameToType.find(fieldName) != mapFieldNameToType.end()) {
                    errorManagment.duplicateFieldDetected(structName, fieldName);
                }
                mapFieldNameToType[fieldName] = ((FDeclaration*)field)->type_;
            }

            // Create a new struct type and add it to the (global scope) 
            unique_ptr<StructItem> structType = make_unique<StructItem>(structName, mapFieldNameToType);
            environment.createStruct(structName, move(structType));
        }
        // DImport & DPackage can be ignored since they don't require type checking for now
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

void TypeChecker::visitDFun(DFun *d_fun)
{
    if (d_fun->type_)
        d_fun->type_->accept(this);

    visitId(d_fun->id_);

    currentFunction.name = d_fun->id_;
    currentFunction.returnOutput = d_fun->type_;
    currentFunction.returnStatmentRequired = true;

    d_fun->returnStatment = currentFunction.returnStatmentRequired;

    environment.enterScope("function " + d_fun->id_);
    if (d_fun->listargument_)
        d_fun->listargument_->accept(this);

    currentFunction.type = make_unique<FunctionItem>(d_fun->id_, d_fun->type_, currentFunction.argumentVector);

    if (d_fun->liststatment_)
        d_fun->liststatment_->accept(this);

    currentFunction.clear();
    environment.exitScope();
}

void TypeChecker::visitDFunWithoutType(DFunWithoutType *d_fun_without_type)
{
    visitId(d_fun_without_type->id_);

    currentFunction.name = d_fun_without_type->id_;
    currentFunction.returnOutput = nullptr;
    currentFunction.returnStatmentRequired = false;

    environment.enterScope("function " + d_fun_without_type->id_);
    if (d_fun_without_type->listargument_)
        d_fun_without_type->listargument_->accept(this);

    currentFunction.type = make_unique<FunctionItem>(d_fun_without_type->id_, nullptr, currentFunction.argumentVector);

    if (d_fun_without_type->liststatment_)
        d_fun_without_type->liststatment_->accept(this);

    currentFunction.clear();
    environment.exitScope();
}

void TypeChecker::visitDStruct(DStruct *d_struct)
{
  visitId(d_struct->id_);
  currentStruct.name = d_struct->id_;
  if (d_struct->listfield_)
      d_struct->listfield_->accept(this);

  environment.createStruct(d_struct->id_, make_unique<StructItem>(d_struct->id_, move(currentStruct.fieldList)));
  currentStruct.clear();
}

void TypeChecker::visitDMethode(DMethode *d_methode)
{
    if (d_methode->type_2)
        d_methode->type_2->accept(this); 

    visitId(d_methode->id_2); 
    
    if (d_methode->type_1)  
      d_methode->type_1->accept(this); 

    TypeId* tpid = dynamic_cast<TypeId*>(d_methode->type_1);
    if(!tpid){
      errorManagment.declareStruct(currentFunction.name,"");
    }
    if (nullptr == environment.checkStruct(tpid->id_)) {
      errorManagment.duplicateStructDetected("struct", tpid->id_);
    }

    visitId(d_methode->id_1); 
    
    currentFunction.name = d_methode->id_1; 
    currentFunction.returnOutput = d_methode->type_1; 
    currentFunction.returnStatmentRequired = true; 

    environment.enterScope("method " + d_methode->id_1);

    if (d_methode->argument_) 
        d_methode->argument_->accept(this); 

    currentFunction.type = make_unique<FunctionItem>(d_methode->id_1, d_methode->type_1, currentFunction.argumentVector);

    if (d_methode->liststatment_)
        d_methode->liststatment_->accept(this);

    currentFunction.clear();
    environment.exitScope();
}

void TypeChecker::visitDMethodeWithoutType(DMethodeWithoutType *d_methode_without_type)
{
  visitId(d_methode_without_type->id_2);

  if (d_methode_without_type->type_) d_methode_without_type->type_->accept(this);
  TypeId* tpid = dynamic_cast<TypeId*>(d_methode_without_type->type_);
  if(!tpid){
    errorManagment.declareStruct(currentFunction.name,"");
  }
  
  if (nullptr == environment.checkStruct(tpid->id_)) {
    errorManagment.duplicateStructDetected("struct", tpid->id_);
  }

  visitId(d_methode_without_type->id_1);
  currentFunction.name = d_methode_without_type->id_1; 
  currentFunction.returnOutput = nullptr; 
  currentFunction.returnStatmentRequired = true; 

  environment.enterScope("method " + d_methode_without_type->id_1);

  
  if (d_methode_without_type->argument_) d_methode_without_type->argument_->accept(this);
  currentFunction.type = make_unique<FunctionItem>(d_methode_without_type->id_1, nullptr, currentFunction.argumentVector);

  if (d_methode_without_type->liststatment_) d_methode_without_type->liststatment_->accept(this);
  currentFunction.clear();
  environment.exitScope();
}

void TypeChecker::visitDImport(DImport *d_import) {}

void TypeChecker::visitDPackage(DPackage *d_package)
{
  visitId(d_package->id_);
}

void TypeChecker::visitFDeclaration(FDeclaration *f_declaration)
{
  if (currentStruct.fieldList.count(f_declaration->id_) == 1) {
      errorManagment.duplicateFieldDetected(currentStruct.name, f_declaration->id_);
  }

  if (f_declaration->type_) f_declaration->type_->accept(this);   
  currentStruct.fieldList[f_declaration->id_] = f_declaration->type_;
  visitId(f_declaration->id_);
}

// TODO
void TypeChecker::visitFStatment(FStatment *f_statment)
{
  visitId(f_statment->id_);
}

// TODO
void TypeChecker::visitFStatmentMethode(FStatmentMethode *f_statment_methode)
{
  visitId(f_statment_methode->id_);
  if (f_statment_methode->listexpression_) f_statment_methode->listexpression_->accept(this);
}

void TypeChecker::visitAArgument(AArgument *a_argument)
{
  // visitId(a_argument->id_);
  // string id = a_argument->id_;

  // if (a_argument->type_) a_argument->type_->accept(this);
  // string type = currentType;

  // idList.push_back(id);
  // typeList.push_back(type);

  visitId(a_argument->id_);
  // add_var adds a new variable to the current scope (function) 
  environment.createVariable(a_argument->id_, make_unique<VariableItem>(a_argument->id_, a_argument->type_, false));
  if (a_argument->type_) a_argument->type_->accept(this);

  currentFunction.argumentVector.push_back(make_pair(a_argument->id_, a_argument->type_));
}

void TypeChecker::visitSExprssion(SExprssion *s_exprssion)
{
  if (s_exprssion->expression_) s_exprssion->expression_->accept(this);
}

void TypeChecker::visitSDeclaration(SDeclaration *s_declaration)
{
  if (s_declaration->declaration_) s_declaration->declaration_->accept(this);
}

void TypeChecker::visitSSimpleStatment(SSimpleStatment *s_simple_statment)
{
  if (s_simple_statment->simplestatment_) s_simple_statment->simplestatment_->accept(this);
}


void TypeChecker::visitSReturn(SReturn *s_return)
{
  if (s_return->expression_) s_return->expression_->accept(this);
  const Type *expectedType = currentFunction.returnOutput;
  const Type *currentType = currentExpression.type;

  if (!checkMismatchedTypes(expectedType, currentType)){
      errorManagment.mismatchedTypes(currentFunction.name, checkTypeName(expectedType), checkTypeName(currentType));
  }
}

void TypeChecker::visitSReturnV(SReturnV *s_return_v){
  const Type *expectedType = currentFunction.returnOutput;
  
  if (expectedType != nullptr){
      errorManagment.mismatchedTypes(currentFunction.name, checkTypeName(expectedType), "void");
  }
}

void TypeChecker::visitSWhile(SWhile *s_while)
{
  if (s_while->expression_) s_while->expression_->accept(this);
  Type* condition = currentExpression.type;
  // Check if the condition expression is of type bool
  if (!checkTypeBool(condition)) {
      errorManagment.mismatchedTypes(currentFunction.name, "bool", checkTypeName(condition));
  }

  if (s_while->liststatment_) s_while->liststatment_->accept(this);
}

void TypeChecker::visitSFor(SFor *s_for)
{
  if (s_for->simplestatment_) s_for->simplestatment_->accept(this);
  if (s_for->expression_1) s_for->expression_1->accept(this);
  Type* condition = currentExpression.type;
  if (!checkTypeBool(condition)) {
      errorManagment.mismatchedTypes(currentFunction.name, "bool", checkTypeName(condition));
  }
  if (s_for->expression_2) s_for->expression_2->accept(this);
  if (s_for->liststatment_) s_for->liststatment_->accept(this);
}

void TypeChecker::visitSForSimple(SForSimple *s_for_simple)
{
  if (s_for_simple->statment_) s_for_simple->statment_->accept(this);
  if (s_for_simple->liststatment_) s_for_simple->liststatment_->accept(this);
}

void TypeChecker::visitSBlock(SBlock *s_block)
{
  environment.enterScope("");
  if (s_block->liststatment_) s_block->liststatment_->accept(this);
  environment.exitScope();

}

void TypeChecker::visitSIf(SIf *s_if)
{
  if (s_if->expression_) s_if->expression_->accept(this);
  Type* if_expression = currentExpression.type; // Get the type of the expression inside the if statement
  // Check if the type of the expression if of type bool 
  if (!checkTypeBool(if_expression)) {
      cout << "TYPE ERROR" << endl;
      cout << "Error *** Invalid type in the if statement expression\n" << endl;
      exit(1);
  }

  if (s_if->liststatment_) s_if->liststatment_->accept(this);
}

void TypeChecker::visitSIfSimple(SIfSimple *s_if_simple)
{
  if (s_if_simple->simplestatment_) s_if_simple->simplestatment_->accept(this);

  if (s_if_simple->expression_) s_if_simple->expression_->accept(this);
  Type* if_expression = currentExpression.type; // Get the type of the expression inside the if statement
  // Check if the type of the expression if of type bool 
  if (!checkTypeBool(if_expression)) {
      cout << "TYPE ERROR" << endl;
      cout << "Error *** Invalid type in the if statement expression\n" << endl;
      exit(1);
  }

  if (s_if_simple->liststatment_) s_if_simple->liststatment_->accept(this);
}

void TypeChecker::visitSIfElse(SIfElse *s_if_else)
{
  if (s_if_else->expression_) s_if_else->expression_->accept(this);

  Type* if_expression = currentExpression.type; // Get the type of the expression inside the if statement
  // Check if the type of the expression if of type bool 
  if (!checkTypeBool(if_expression)) {
      cout << "TYPE ERROR" << endl;
      cout << "Error *** Invalid type in the if statement expression\n" << endl;
      exit(1);
  }

  if (s_if_else->liststatment_1) s_if_else->liststatment_1->accept(this);
  if (s_if_else->liststatment_2) s_if_else->liststatment_2->accept(this);
}

void TypeChecker::visitSIfElseSimple(SIfElseSimple *s_if_else_simple)
{
  if (s_if_else_simple->simplestatment_) s_if_else_simple->simplestatment_->accept(this);

  if (s_if_else_simple->expression_) s_if_else_simple->expression_->accept(this);
  Type* if_expression = currentExpression.type; // Get the type of the expression inside the if statement
  // Check if the type of the expression if of type bool 
  if (!checkTypeBool(if_expression)) {
      cout << "TYPE ERROR" << endl;
      cout << "Error *** Invalid type in the if statement expression\n" << endl;
      exit(1);
  }

  if (s_if_else_simple->liststatment_1) s_if_else_simple->liststatment_1->accept(this);
  if (s_if_else_simple->liststatment_2) s_if_else_simple->liststatment_2->accept(this);
}

void TypeChecker::visitDeclarationConstDeclaration(DeclarationConstDeclaration *declaration_const_declaration)
{
  if (declaration_const_declaration->constdeclaration_) declaration_const_declaration->constdeclaration_->accept(this);
}

void TypeChecker::visitDeclarationVariableDeclaration(DeclarationVariableDeclaration *declaration_variable_declaration)
{
  if (declaration_variable_declaration->variabledeclaration_) declaration_variable_declaration->variabledeclaration_->accept(this);
}

void TypeChecker::visitDConstant(DConstant *d_const)
{
  currentDeclaration.isConst = true;
  if (d_const->constspecification_) d_const->constspecification_->accept(this);
  currentDeclaration.isConst = false;

}

void TypeChecker::visitConstSpecification1(ConstSpecification1 *const_specification)
{
  if (const_specification->listid_) const_specification->listid_->accept(this);

  if (const_specification->listexpression_) const_specification->listexpression_->accept(this);

  // i is the id, (*j)->type.get() is the Type object
  ListId::iterator i = const_specification->listid_->begin();
  ListExpression::iterator j = const_specification->listexpression_->begin();
  while(i != const_specification->listid_->end() && j != const_specification->listexpression_->end()){
    // cout << *i + checkTypeName((*j)->type.get()) << endl;
    if (nullptr == environment.checkCurrentVariable(*i)) 
      environment.createVariable(*i, make_unique<VariableItem>(*i, (*j)->type.get(), true));
    else
      errorManagment.declaredVariable(currentFunction.name, *i);
    i++; j++;
  }
}

void TypeChecker::visitConstSpecification2(ConstSpecification2 *const_specification)
{
  if (const_specification->listid_) const_specification->listid_->accept(this);
  if (const_specification->type_) const_specification->type_->accept(this);
  if (const_specification->listexpression_) const_specification->listexpression_->accept(this);

  // i is the id, (*j)->type.get() is the Type object
  ListId::iterator i = const_specification->listid_->begin();
  ListExpression::iterator j = const_specification->listexpression_->begin();
  Type* expectedType = const_specification->type_;
  while(i != const_specification->listid_->end() && j != const_specification->listexpression_->end()){
    // cout << *i + checkTypeName((*j)->type.get()) << endl;
    if (!checkMismatchedTypes(expectedType, (*j)->type.get()))
      errorManagment.mismatchedTypes(currentFunction.name, checkTypeName(expectedType), checkTypeName((*j)->type.get()));

    if (nullptr == environment.checkCurrentVariable(*i)) 
      environment.createVariable(*i, make_unique<VariableItem>(*i, (*j)->type.get(), true));
    else
      errorManagment.declaredVariable(currentFunction.name, *i);

    i++; j++;
  }
}

void TypeChecker::visitDVariable(DVariable *d_var)
{
  if (d_var->variablespecification_) d_var->variablespecification_->accept(this);
}

void TypeChecker::visitVariableSpecification1(VariableSpecification1 *variable_specification)
{
  if (variable_specification->listid_) variable_specification->listid_->accept(this);
  if (variable_specification->type_) variable_specification->type_->accept(this);

  Type* expectedType = variable_specification->type_;
  ListId::iterator i = variable_specification->listid_->begin();
  while(i != variable_specification->listid_->end()){
    // cout << *i + checkTypeName((*j)->type.get()) << endl;
    if (nullptr == environment.checkCurrentVariable(*i)) 
      environment.createVariable(*i, make_unique<VariableItem>(*i, expectedType, false));
    else
      errorManagment.declaredVariable(currentFunction.name, *i);

    i++;
  }
}

void TypeChecker::visitVariableSpecification2(VariableSpecification2 *variable_specification)
{
  if (variable_specification->listid_) variable_specification->listid_->accept(this);
  if (variable_specification->type_) variable_specification->type_->accept(this);
  if (variable_specification->listexpression_) variable_specification->listexpression_->accept(this);

  // i is the id, (*j)->type.get() is the Type object
  ListId::iterator i = variable_specification->listid_->begin();
  ListExpression::iterator j = variable_specification->listexpression_->begin();
  Type* expectedType = variable_specification->type_;
  while(i != variable_specification->listid_->end() && j != variable_specification->listexpression_->end()){
    // cout << *i + checkTypeName((*j)->type.get()) << endl;
    if (!checkMismatchedTypes(expectedType, (*j)->type.get()))
      errorManagment.mismatchedTypes(currentFunction.name, checkTypeName(expectedType), checkTypeName((*j)->type.get()));

    if (nullptr == environment.checkCurrentVariable(*i)) 
      environment.createVariable(*i, make_unique<VariableItem>(*i, (*j)->type.get(), false));
    else
      errorManagment.declaredVariable(currentFunction.name, *i);

    i++; j++;
  }
}

void TypeChecker::visitVariableSpecification3(VariableSpecification3 *variable_specification)
{
  if (variable_specification->listid_) variable_specification->listid_->accept(this);
  if (variable_specification->listexpression_) variable_specification->listexpression_->accept(this);

  // i is the id, (*j)->type.get() is the Type object
  ListId::iterator i = variable_specification->listid_->begin();
  ListExpression::iterator j = variable_specification->listexpression_->begin();
  while(i != variable_specification->listid_->end() && j != variable_specification->listexpression_->end()){
    // cout << *i + checkTypeName((*j)->type.get()) << endl;
    if (nullptr == environment.checkCurrentVariable(*i)) 
      environment.createVariable(*i, make_unique<VariableItem>(*i, (*j)->type.get(), false));
    else
      errorManagment.declaredVariable(currentFunction.name, *i);
    i++; j++;
  }
}

void TypeChecker::visitSimpleStatmentShortVariableDeclaration(SimpleStatmentShortVariableDeclaration *simple_statment_short_variable_declaration)
{
  if (simple_statment_short_variable_declaration->shortvariabledeclaration_) simple_statment_short_variable_declaration->shortvariabledeclaration_->accept(this);
}

void TypeChecker::visitSDVar(SDVar *sd_var)
{
  if (sd_var->listid_) sd_var->listid_->accept(this);
  if (sd_var->listexpression_) sd_var->listexpression_->accept(this);

  // i is the id, (*j)->type.get() is the Type object
  ListId::iterator i = sd_var->listid_->begin();
  ListExpression::iterator j = sd_var->listexpression_->begin();
  while(i != sd_var->listid_->end() && j != sd_var->listexpression_->end()){
    // cout << *i + checkTypeName((*j)->type.get()) << endl;
    if (nullptr == environment.checkCurrentVariable(*i)) 
      environment.createVariable(*i, make_unique<VariableItem>(*i, (*j)->type.get(), false));
    else
      errorManagment.declaredVariable(currentFunction.name, *i);
    i++; j++;
  }
}

void TypeChecker::visitETrue(ETrue *e_true)
{
  e_true->type = make_unique<Type_bool>();
  currentExpression.assignableValue = false;
  currentExpression.type = e_true->type.get();
}

void TypeChecker::visitEFalse(EFalse *e_false)
{
  e_false->type = make_unique<Type_bool>();
  currentExpression.assignableValue = false;
  currentExpression.type = e_false->type.get();
}

void TypeChecker::visitEInt(EInt *e_int)
{
  visitInteger(e_int->integer_);
  e_int->type = make_unique<Type_int>();
  currentExpression.assignableValue = false;
  currentExpression.type = e_int->type.get();
}

// TODO: not sure if we should implement double
void TypeChecker::visitEDouble(EDouble *e_double)
{
  visitDouble(e_double->double_);
}

void TypeChecker::visitEId(EId *e_id)
{
  visitId(e_id->id_);
  string id = e_id->id_;
  latestIdName = id;
  const VariableItem* variable = environment.checkVariable(id);
  
  if (variable == nullptr) { 
    errorManagment.declareVariable(currentFunction.name, e_id->id_); 
  }

  e_id->type = checkType(variable->type);
  currentExpression.assignableValue = true;
  currentExpression.type = e_id->type.get();
}

void TypeChecker::visitEApp(EApp *e_app)
{
  visitId(e_app->id_);
  const FunctionItem* function = environment.checkFunction(e_app->id_);
  if (function == nullptr) { 
    errorManagment.defineFunction(currentFunction.name, e_app->id_); 
    /*
        int foo(){
            bar();
        }

        TYPE ERROR
        Error ***in function foo: undefined function bar
    */
  }
  currentExpression.currentFunctionCall = function;
  if (e_app->listexpression_) e_app->listexpression_->accept(this);
  e_app->type = move(checkType(function->returnStatment));
  currentExpression.type = e_app->type.get();
}

void TypeChecker::visitEProj(EProj *e_proj)
{
  if (e_proj->expression_) e_proj->expression_->accept(this);
  EId* eid = dynamic_cast<EId*>(e_proj->expression_);
  // check if the left expression is an ID
  if(!eid){
    errorManagment.wrongExpressionType(currentFunction.name,"Struct Projection","ID",checkTypeName(e_proj->expression_->type.get()));
  }

  if (e_proj->field_) e_proj->field_->accept(this);
  FStatment* fstm = dynamic_cast<FStatment*>(e_proj->field_);
  // check if the right-hand-side field is an ID
  if(!fstm){
     errorManagment.declareField(currentFunction.name,"");
  }

  const VariableItem* v = environment.checkVariable(eid->id_); // the name of the struct is v->type
  auto structure = environment.checkStruct(checkTypeName(v->type));
  // if structure not defined
  if(structure == nullptr){
    errorManagment.declareStruct(currentFunction.name,checkTypeName(e_proj->expression_->type.get()));
  }
  auto fd = structure->fieldList.find(fstm->id_);
  // if field not defined
  if(fd == structure->fieldList.end()){
    errorManagment.declareField(currentFunction.name, fstm->id_);
  } 
  
  e_proj->type = checkType(fd->second);
  currentExpression.type = e_proj->type.get();
}

void TypeChecker::visitEPIncr(EPIncr *ep_incr)
{
  if (ep_incr->expression_) ep_incr->expression_->accept(this);

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

void TypeChecker::visitEPDecr(EPDecr *ep_decr)
{
  if (ep_decr->expression_) ep_decr->expression_->accept(this);
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
      errorManagment.assignableValueExpected(currentFunction.name, "_--"); 
    }

    ep_decr->type = checkType(currentExpression.type);
}

void TypeChecker::visitEIncr(EIncr *e_incr)
{
  if (e_incr->expression_) e_incr->expression_->accept(this);
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

void TypeChecker::visitEDecr(EDecr *e_decr)
{
  if (e_decr->expression_) e_decr->expression_->accept(this);
  if (!checkNumericType(currentExpression.type)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(currentExpression.type));
      /*
        int foo(){
            --1;
        }

        TYPE ERROR
        Error ***in function foo: in expression type --_: expected assignable value, but received a non-assignable value
    */
  }
  if (!currentExpression.assignableValue) { 
    errorManagment.assignableValueExpected(currentFunction.name, "--_"); 
  }

  e_decr->type = checkType(currentExpression.type);
}

void TypeChecker::visitEUPlus(EUPlus *eu_plus)
{
  if (eu_plus->expression_) eu_plus->expression_->accept(this);
  if (!checkNumericType(currentExpression.type)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(currentExpression.type));
  }
  currentExpression.type = currentExpression.type;

  eu_plus->type = checkType(currentExpression.type);
}

void TypeChecker::visitEUMinus(EUMinus *eu_minus)
{
  if (eu_minus->expression_) eu_minus->expression_->accept(this);
  if (!checkNumericType(currentExpression.type)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(currentExpression.type));
  }
  currentExpression.type = currentExpression.type;

  eu_minus->type = checkType(currentExpression.type);
}

void TypeChecker::visitENeg(ENeg *e_neg)
{
  if (e_neg->expression_) e_neg->expression_->accept(this);
  if(!checkTypeBool(currentExpression.type)){
    errorManagment.mismatchedTypes(currentFunction.name,"bool",checkTypeName(currentExpression.type));
  }
  e_neg->type = make_unique<Type_bool>();
  currentExpression.type = e_neg->type.get();
}

void TypeChecker::visitETimes(ETimes *e_times)
{
  if (e_times->expression_1) e_times->expression_1->accept(this);
  Type *leftType = currentExpression.type;
  if(!checkNumericType(leftType)){
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftType));
  }

  if (e_times->expression_2) e_times->expression_2->accept(this);
  Type *rightType = currentExpression.type;
  if(!checkNumericType(rightType)){
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightType));
  }
  e_times->type = make_unique<Type_int>();
  currentExpression.type = e_times->type.get();
}

void TypeChecker::visitEDiv(EDiv *e_div)
{
  if (e_div->expression_1) e_div->expression_1->accept(this);
  Type* dividend = currentExpression.type; // Get the type of the left expression
  if (e_div->expression_2) e_div->expression_2->accept(this);
  Type* divisor = currentExpression.type; // Get the type of the right expression

  // Check if the dicidend and the divisor are of type int or double
  if (!checkNumericType(dividend)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(dividend));
  }
  if (!checkNumericType(divisor)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(divisor));
  }

  e_div->type = checkType(divisor); 
  currentExpression.type = e_div->type.get(); 
  
}

void TypeChecker::visitEPlus(EPlus *e_plus)
{
  if (e_plus->expression_1) e_plus->expression_1->accept(this);
  Type* leftExpression = currentExpression.type;
  if (e_plus->expression_2) e_plus->expression_2->accept(this);
  Type* rightExpression = currentExpression.type;

  // Check if the left expression is of type int
  if (!checkNumericType(leftExpression)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftExpression));
  }
  // Check if the right expression is not of type int
  else if (!checkNumericType(rightExpression)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightExpression));
  }

  e_plus->type = checkType(rightExpression);
  currentExpression.type = e_plus->type.get();
}

void TypeChecker::visitEMinus(EMinus *e_minus)
{
  if (e_minus->expression_1) e_minus->expression_1->accept(this);
  Type* leftExpression = currentExpression.type;
  if (e_minus->expression_2) e_minus->expression_2->accept(this);
  Type* rightExpression = currentExpression.type;

  // Check if the left and right expressions are of numeric type
  if (!checkNumericType(leftExpression)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftExpression));
  } 
  if (!checkNumericType(rightExpression)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightExpression));
  }

  e_minus->type = make_unique<Type_int>();
  currentExpression.type = e_minus->type.get();
}

void TypeChecker::visitETwc(ETwc *e_twc)
{
  if (e_twc->expression_1) e_twc->expression_1->accept(this);
  Type* leftHandType = currentExpression.type;
  if (e_twc->expression_2) e_twc->expression_2->accept(this);
  Type* rightHandType = currentExpression.type;
 
  if (!checkNumericType(leftHandType)) { 
    errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftHandType)); 
  }
  if (!checkNumericType(rightHandType)) { 
    errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightHandType)); 
  }

  e_twc->type = make_unique<Type_int>();
  currentExpression.type = e_twc->type.get();
}

void TypeChecker::visitELt(ELt *e_lt)
{
  if (e_lt->expression_1) e_lt->expression_1->accept(this);
  Type* leftExpression = currentExpression.type;
  if (e_lt->expression_2) e_lt->expression_2->accept(this);
  Type* rightExpression = currentExpression.type;

  // Check if the left expression is not numeric
  if (!checkNumericType(leftExpression)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftExpression));
  }
  // Check if the right expression is not numeric
  if (!checkNumericType(rightExpression)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightExpression));
  }

  // Set the type of the less than expression to bool
  e_lt->type = make_unique<Type_bool>();
  currentExpression.type = e_lt->type.get();
}

void TypeChecker::visitEGt(EGt *e_gt)
{
  if (e_gt->expression_1) e_gt->expression_1->accept(this);
  Type* leftExpression = currentExpression.type;
  if (e_gt->expression_2) e_gt->expression_2->accept(this);
  Type* rightExpression = currentExpression.type;

  // Check if the left and right expressions are of numeric type
  if (!checkNumericType(leftExpression)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftExpression));
  } else if (!checkNumericType(rightExpression)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightExpression));
  }

  // Set the type of the greater than expression to bool
  e_gt->type = make_unique<Type_bool>();
  currentExpression.type = e_gt->type.get();
}

void TypeChecker::visitELtEq(ELtEq *e_lt_eq)
{
  if (e_lt_eq->expression_1) e_lt_eq->expression_1->accept(this);
  Type *leftType = currentExpression.type;
  if(!checkNumericType(leftType)){
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftType));
  }
  if (e_lt_eq->expression_2) e_lt_eq->expression_2->accept(this);
  Type *rightType = currentExpression.type;
  if(!checkNumericType(rightType)){
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightType));
  }

  e_lt_eq->type = make_unique<Type_bool>();
  currentExpression.type = e_lt_eq->type.get();
}

void TypeChecker::visitEGtEq(EGtEq *e_gt_eq)
{
  if (e_gt_eq->expression_1) e_gt_eq->expression_1->accept(this);
  Type* leftExpression = currentExpression.type; // Get the type of the left expression
  if (e_gt_eq->expression_2) e_gt_eq->expression_2->accept(this);
  Type* rightExpression = currentExpression.type; // Get the type of the right expression

  // Check if the left expression is of type int or double 
  if (!checkNumericType(leftExpression)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftExpression));
  } 
  // Check if the right expression is of type int or double
  if (!checkNumericType(rightExpression)) {
      errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(rightExpression));
  }

  e_gt_eq->type = make_unique<Type_bool>(); // Set the type of the greater than or equal expression to bool
  currentExpression.type = e_gt_eq->type.get(); // Determine the type of the greater than or equal expression

}

void TypeChecker::visitEEq(EEq *e_eq)
{
  if (e_eq->expression_1) e_eq->expression_1->accept(this);
  Type* expr_lh = currentExpression.type;
  if (e_eq->expression_2) e_eq->expression_2->accept(this);
  Type* expr_rh = currentExpression.type;

  e_eq->type = make_unique<Type_bool>();
  currentExpression.type = e_eq->type.get();
}

void TypeChecker::visitENEq(ENEq *en_eq)
{
  if (en_eq->expression_1) en_eq->expression_1->accept(this);
  Type* leftHandExpression = currentExpression.type;
  if (en_eq->expression_2) en_eq->expression_2->accept(this);
  Type* rightHandExpression = currentExpression.type;

  en_eq->type = make_unique<Type_bool>();
  currentExpression.type = en_eq->type.get();
}

void TypeChecker::visitEAnd(EAnd *e_and)
{
  if (e_and->expression_1) e_and->expression_1->accept(this);
  Type* leftHandType = currentExpression.type;
  if (e_and->expression_2) e_and->expression_2->accept(this);
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

void TypeChecker::visitEOr(EOr *e_or)
{
  if (e_or->expression_1) e_or->expression_1->accept(this);
  Type* leftHandType = currentExpression.type;
  if (e_or->expression_2) e_or->expression_2->accept(this);
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

void TypeChecker::visitEAss(EAss *e_ass)
{
  if (e_ass->expression_1) e_ass->expression_1->accept(this);
  if (!currentExpression.assignableValue) { 
    errorManagment.assignableValueExpected(currentFunction.name, "="); 
  }
  Type* leftHandType = e_ass->expression_1->type.get();
  const VariableItem* v = environment.checkVariable(latestIdName);
  if(v->isConst){
    errorManagment.assignToConst(currentFunction.name, v->name);
  }

  if (e_ass->expression_2) e_ass->expression_2->accept(this);
  Type* rightHandType = currentExpression.type;
  if (!checkMismatchedTypes(leftHandType, rightHandType)) {
      errorManagment.wrongExpressionType(currentFunction.name, "=", checkTypeName(leftHandType), checkTypeName(rightHandType));
  }

  e_ass->type = checkType(leftHandType);
  currentExpression.type = e_ass->type.get();
}

void TypeChecker::visitEAssadd(EAssadd *e_assadd)
{
  if (e_assadd->expression_1) e_assadd->expression_1->accept(this);
  Type* leftHandType = currentExpression.type;

  // check left-hand-side numeric
  if(!checkNumericType(leftHandType)){
    errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftHandType));
  }
  // check left-hand-side assignable
  if (!currentExpression.assignableValue) { 
    errorManagment.assignableValueExpected(currentFunction.name, "="); 
  }
  const VariableItem* v = environment.checkVariable(latestIdName);
  if(v->isConst){
    errorManagment.assignToConst(currentFunction.name, v->name);
  }
 
  if (e_assadd->expression_2) e_assadd->expression_2->accept(this);
  Type* rightHandType = currentExpression.type;
  if (!checkMismatchedTypes(leftHandType, rightHandType)) {
      errorManagment.wrongExpressionType(currentFunction.name, "=", checkTypeName(leftHandType), checkTypeName(rightHandType));
  }
  e_assadd->type = checkType(leftHandType);
  currentExpression.type = e_assadd->type.get();
}

void TypeChecker::visitEAssSub(EAssSub *e_ass_sub)
{
  if (e_ass_sub->expression_1) e_ass_sub->expression_1->accept(this);
  Type* leftHandType = currentExpression.type;
  // check left-hand-side numeric
  if(!checkNumericType(leftHandType)){
    errorManagment.numericTypeExpected(currentFunction.name, checkTypeName(leftHandType));
  }
  // check left-hand-side assignable
  if (!currentExpression.assignableValue) { 
    errorManagment.assignableValueExpected(currentFunction.name, "="); 
  }
  const VariableItem* v = environment.checkVariable(latestIdName);
  if(v->isConst){
    errorManagment.assignToConst(currentFunction.name, v->name);
  }

  if (e_ass_sub->expression_2) e_ass_sub->expression_2->accept(this);
  Type* rightHandType = currentExpression.type;
  if (!checkMismatchedTypes(leftHandType, rightHandType)) {
      errorManagment.wrongExpressionType(currentFunction.name, "=", checkTypeName(leftHandType), checkTypeName(rightHandType));
  }
  e_ass_sub->type = checkType(leftHandType);
  currentExpression.type = e_ass_sub->type.get();
}

void TypeChecker::visitType_bool(Type_bool *type_bool)
{
  // currentBasicType = BasicTypes::BOOL;
  // currentType = "bool";
}

void TypeChecker::visitType_int(Type_int *type_int)
{
  // currentBasicType = BasicTypes::INT;
  // currentType = "int";    
}

void TypeChecker::visitTypeId(TypeId *type_id)
{
  currentBasicType = BasicTypes::STRUCT;
  currentType = type_id->id_;
  visitId(type_id->id_);
}

void TypeChecker::visitType_string(Type_string *type_string)
{
  currentBasicType = BasicTypes::STRING;
  currentType = "string";
}

void TypeChecker::visitListDef(ListDef *list_def)
{
  for (ListDef::iterator i = list_def->begin() ; i != list_def->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void TypeChecker::visitListField(ListField *list_field)
{
  for (ListField::iterator i = list_field->begin() ; i != list_field->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void TypeChecker::visitListArgument(ListArgument *list_argument)
{
  for (ListArgument::iterator i = list_argument->begin() ; i != list_argument->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void TypeChecker::visitListStatment(ListStatment *list_statment)
{
  for (ListStatment::iterator i = list_statment->begin() ; i != list_statment->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void TypeChecker::visitListExpression(ListExpression *list_expression)
{
  for (ListExpression::iterator i = list_expression->begin() ; i != list_expression->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void TypeChecker::visitListType(ListType *list_type)
{
  for (ListType::iterator i = list_type->begin() ; i != list_type->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void TypeChecker::visitListId(ListId *list_id)
{
  for (ListId::iterator i = list_id->begin() ; i != list_id->end() ; ++i)
  {
    visitId(*i) ;
  }
}

void TypeChecker::visitInteger(Integer x){}

void TypeChecker::visitChar(Char x){}

void TypeChecker::visitDouble(Double x){}

void TypeChecker::visitString(String x){}

void TypeChecker::visitIdent(Ident x){}

void TypeChecker::visitId(Id x){}



