#ifndef TYPECHECKER_HEADER
#define TYPECHECKER_HEADER

#include "Absyn.H"
#include "Environment.h"
#include "TypeCompare.h"
#include "ErrorManagment.h"
#include <memory>
#include <vector>



class TypeChecker : public Visitor
{
private:
  Environment environment;

  vector<string> idList{};
  vector<string> typeList{};

  bool start = true;
  bool checkLiteral = false;
  BasicTypes currentBasicType = BasicTypes::NONE;
  string currentType = "";
  string currentId   = "";

  struct FunctionInformation {
        string                                           name; // name of the current function 
        vector<pair<string, const Type*>>                argumentVector; // arguments of the current function 
        Type*                                            returnOutput = nullptr; // return type of the current function, if = nullptr, return type = void 
        unique_ptr<FunctionItem>                         type; // type of the current function 
        bool                                             returnStatmentRequired; // whether the current function has a return statement 

        // clear is used for clearing the information of the current function 
        auto clear() -> void {
            name = "";
            argumentVector.clear();
            returnOutput = nullptr;
            type = nullptr;
        }
    };

    FunctionInformation currentFunction;

     // StructInformation is used for storing information of the current struct 
    struct StructInfo {
        string                                  name; // name of the current struct 
        unordered_map<string, const Type*>      fieldList; // fields of the current struct
        unique_ptr<StructItem>                  type; // type of the current struct

    // clear is used for clearing the information of the current struct
        auto clear() -> void {
            name = "";
            fieldList.clear();
            type = nullptr;
        }
    };
    StructInfo currentStruct;

     // ExpressionInformation is used for storing information of the current expression 
    struct ExpressionInformation {
        Type*                                   type; 
        bool                                    assignableValue = true; 
        const FunctionItem*                     currentFunctionCall = nullptr; 
    };
    ExpressionInformation currentExpression;

    // DeclarationInformation is used for storing information of the current declaration 
    struct DeclarationInformation {
        Type* type = nullptr;
        bool  isConst = false;
    };
    DeclarationInformation currentDeclaration;

    string latestIdName;
    
public:
  void visitProgram(Program *p);
  void visitDef(Def *p);
  void visitField(Field *p);
  void visitArgument(Argument *p);
  void visitStatment(Statment *p);
  void visitDeclaration(Declaration *p);
  void visitConstDeclaration(ConstDeclaration *p);
  void visitConstSpecification(ConstSpecification *p);
  void visitVariableDeclaration(VariableDeclaration *p);
  void visitVariableSpecification(VariableSpecification *p);
  void visitSimpleStatment(SimpleStatment *p);
  void visitShortVariableDeclaration(ShortVariableDeclaration *p);
  void visitExpression(Expression *p);
  void visitType(Type *p);
  void visitPDefs(PDefs *p);
  void visitDFun(DFun *p);
  void visitDFunWithoutType(DFunWithoutType *p);
  void visitDStruct(DStruct *p);
  void visitDMethode(DMethode *p);
  void visitDMethodeWithoutType(DMethodeWithoutType *p);
  void visitDImport(DImport *p);
  void visitDPackage(DPackage *p);
  void visitFDeclaration(FDeclaration *p);
  void visitAArgument(AArgument *p);
  void visitSExprssion(SExprssion *p);
  void visitSDeclaration(SDeclaration *p);
  void visitSSimpleStatment(SSimpleStatment *p);
  void visitSReturn(SReturn *p);
  void visitSReturnV(SReturnV *p);
  void visitSWhile(SWhile *p);
  void visitSFor(SFor *p);
  void visitSForSimple(SForSimple *p);
  void visitSBlock(SBlock *p);
  void visitSIf(SIf *p);
  void visitSIfSimple(SIfSimple *p);
  void visitSIfElse(SIfElse *p);
  void visitSIfElseSimple(SIfElseSimple *p);
  void visitDeclarationConstDeclaration(DeclarationConstDeclaration *p);
  void visitDeclarationVariableDeclaration(DeclarationVariableDeclaration *p);
  void visitDConstant(DConstant *p);
  void visitConstSpecification1(ConstSpecification1 *p);
  void visitConstSpecification2(ConstSpecification2 *p);
  void visitDVariable(DVariable *p);
  void visitVariableSpecification1(VariableSpecification1 *p);
  void visitVariableSpecification2(VariableSpecification2 *p);
  void visitVariableSpecification3(VariableSpecification3 *p);
  void visitSimpleStatmentShortVariableDeclaration(SimpleStatmentShortVariableDeclaration *p);
  void visitSDVar(SDVar *p);
  void visitETrue(ETrue *p);
  void visitEFalse(EFalse *p);
  void visitEInt(EInt *p);
  void visitEDouble(EDouble *p);
  void visitEId(EId *p);
  void visitEApp(EApp *p);
  void visitEProj(EProj *p);
  void visitFStatment(FStatment *p);
  void visitFStatmentMethode(FStatmentMethode *p);
  void visitEPIncr(EPIncr *p);
  void visitEPDecr(EPDecr *p);
  void visitEIncr(EIncr *p);
  void visitEDecr(EDecr *p);
  void visitEUPlus(EUPlus *p);
  void visitEUMinus(EUMinus *p);
  void visitENeg(ENeg *p);
  void visitETimes(ETimes *p);
  void visitEDiv(EDiv *p);
  void visitEPlus(EPlus *p);
  void visitEMinus(EMinus *p);
  void visitETwc(ETwc *p);
  void visitELt(ELt *p);
  void visitEGt(EGt *p);
  void visitELtEq(ELtEq *p);
  void visitEGtEq(EGtEq *p);
  void visitEEq(EEq *p);
  void visitENEq(ENEq *p);
  void visitEAnd(EAnd *p);
  void visitEOr(EOr *p);
  void visitEAss(EAss *p);
  void visitEAssadd(EAssadd *p);
  void visitEAssSub(EAssSub *p);
  void visitType_bool(Type_bool *p);
  void visitType_int(Type_int *p);
  void visitTypeId(TypeId *p);
  void visitType_string(Type_string *p);
  void visitListDef(ListDef *p);
  void visitListField(ListField *p);
  void visitListArgument(ListArgument *p);
  void visitListStatment(ListStatment *p);
  void visitListExpression(ListExpression *p);
  void visitListType(ListType *p);
  void visitListId(ListId *p);

  void visitInteger(Integer x);
  void visitChar(Char x);
  void visitDouble(Double x);
  void visitString(String x);
  void visitIdent(Ident x);
  void visitId(Id x);

};


#endif
