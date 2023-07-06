#pragma once
#include "TypeCompare.h"
#include "Scope.h"

#include <unordered_map>
#include <list>
#include <memory>
#include <string>


using namespace std;


class Environment {
public:
    // enterScope is used for entering a new scope 
    void enterScope(const string& name) {
        if (scopeList.size() == 0) {
            scopeList.emplace_back();
            scopeList.back().name = name;
            scopeList.back().parent = nullptr;
            currentScope = &scopeList.back();
        } else {
            auto& prev_scope = scopeList.back();
            scopeList.emplace_back();
            scopeList.back().name = name;
            scopeList.back().parent = &prev_scope;
            currentScope = &scopeList.back();
        }
    }
    // exitScope is used for exiting the current scope 
    void exitScope() {
        scopeList.pop_back();
        currentScope = &scopeList.back();
    }
    // createFunction is used for creating function in the current scope 
    auto createFunction(string name, unique_ptr<FunctionItem>&& type) -> void {
        currentScope->createFunction(name, move(type));
    }
    // createStruct is used for creating struct in the current scope 
    auto createStruct(string name, unique_ptr<StructItem>&& type) -> void {
        currentScope->createStruct(name, move(type));
    }
    // createVariable is used for creating variable in the current scope 
    auto createVariable(string name, unique_ptr<VariableItem>&& type) -> void {
        currentScope->createVariable(name, move(type));
    }
    // checkFunction is used for checking function in the current scope and all parent scopes 
    auto checkFunction(const string& name) const -> const FunctionItem* {
        return currentScope->checkFunction(name);
    }
    // checkStruct is used for checking struct in the current scope and all parent scopes 
    auto checkStruct(const string& name) const -> const StructItem* {
        return currentScope->checkStruct(name);
    }
    // checkVariable is used for checking variable in the current scope and all parent scopes
    auto checkVariable(const string& name) const -> const VariableItem* {
        return currentScope->checkVariable(name); 
    }
    // checkCurrentVariable is used for checking variable in the current scope 
    auto checkCurrentVariable(const string& name) const -> const VariableItem* {
        return currentScope->checkCurrentVariable(name); 
    }


public:
    list<Scope>      scopeList; // list of all scopes 
    Scope*           currentScope = nullptr; // pointer to the current scope 
};

using std::list;
using std::string;
using std::unordered_map;
using std::vector;
using std::pair;

// Types is an enum class that contains all the types that are supported by the language 
enum class BasicTypes
{
    NONE, // Default type 
    BOOL, 
    INT,
    STRING,
    STRUCT,
};

// Variable is a class that contains an identifier and a type 
class Variable
{
private:
    string       identifier;
    BasicTypes   type;

public:
    const bool checkConstant;
    string typeId;
    Variable(string id, BasicTypes type, bool constant = false); // Constructor
};


// Function is a class that contains an identifier, a return type and a list of arguments
class Function
{
private:
    string identifier;
    BasicTypes returnType;
    vector<pair<string,string>> argumentList;

public:

};


// Struct is a class that contains a list of fields and a list of methods 
class Struct 
{
private:
    string identifier;
    unordered_map<string, Function> methodes;
    vector<pair<string, string>> fieldList;
};


// // Environment is a stack of scopes (unordered_maps) 
// class Environment
// {
// private:
//     list<unordered_map<string, Variable*>> scopeList; // List of scopes 
// public:
//     Environment();
//     void enterScope();
//     void exitScope();
// };
