#pragma once
#ifndef INTERPRETER_HEADER
#define INTERPRETER_HEADER

#include "Absyn.H"
#include "TypeCompare.h"
#include "Environment.h"
#include <memory>
#include <vector>

using namespace std;

class Interpreter : public Visitor {
    // FunctionInformation is used for storing information of the current function 
    struct FunctionInformation {
        string                                           name; // name of the current function 
        vector<pair<string, const Type*>>                argumentVector; // arguments of the current function 
        Type*                                            returnOutput = nullptr; // return type of the current function 
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
    };
    DeclarationInformation currentDeclaration;

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

public:
    Environment environment;

public:
    auto init(Program* program) -> void;

public:
    void visitProgram(Program* p);
    void visitDef(Def* p);
    void visitField(Field* p);
    void visitArg(Arg* p);
    void visitStm(Stm* p);
    void visitIdIn(IdIn* p);
    void visitExp(Exp* p);
    void visitType(Type* p);
    void visitPDefs(PDefs* p);
    void visitDFun(DFun* p);
    void visitDStruct(DStruct* p);
    void visitFDecl(FDecl* p);
    void visitADecl(ADecl* p);
    void visitSExp(SExp* p);
    void visitSDecls(SDecls* p);
    void visitSReturn(SReturn* p);
    void visitSReturnV(SReturnV* p);
    void visitSWhile(SWhile* p);
    void visitSDoWhile(SDoWhile* p);
    void visitSFor(SFor* p);
    void visitSBlock(SBlock* p);
    void visitSIfElse(SIfElse* p);
    void visitIdNoInit(IdNoInit* p);
    void visitIdInit(IdInit* p);
    void visitETrue(ETrue* p);
    void visitEFalse(EFalse* p);
    void visitEInt(EInt* p);
    void visitEDouble(EDouble* p);
    void visitEId(EId* p);
    void visitEApp(EApp* p);
    void visitEProj(EProj* p);
    void visitEPIncr(EPIncr* p);
    void visitEPDecr(EPDecr* p);
    void visitEIncr(EIncr* p);
    void visitEDecr(EDecr* p);
    void visitEUPlus(EUPlus* p);
    void visitEUMinus(EUMinus* p);
    void visitETimes(ETimes* p);
    void visitEDiv(EDiv* p);
    void visitEPlus(EPlus* p);
    void visitEMinus(EMinus* p);
    void visitETwc(ETwc* p);
    void visitELt(ELt* p);
    void visitEGt(EGt* p);
    void visitELtEq(ELtEq* p);
    void visitEGtEq(EGtEq* p);
    void visitEEq(EEq* p);
    void visitENEq(ENEq* p);
    void visitEAnd(EAnd* p);
    void visitEOr(EOr* p);
    void visitEAss(EAss* p);
    void visitECond(ECond* p);
    void visitType_bool(Type_bool* p);
    void visitType_int(Type_int* p);
    void visitType_double(Type_double* p);
    void visitType_void(Type_void* p);
    void visitTypeId(TypeId* p);
    void visitListDef(ListDef* p);
    void visitListField(ListField* p);
    void visitListArg(ListArg* p);
    void visitListStm(ListStm* p);
    void visitListIdIn(ListIdIn* p);
    void visitListExp(ListExp* p);
    void visitListId(ListId* p);

    void visitInteger(Integer x);
    void visitChar(Char x);
    void visitDouble(Double x);
    void visitString(String x);
    void visitIdent(Ident x);
    void visitId(Id x);
};


#endif
