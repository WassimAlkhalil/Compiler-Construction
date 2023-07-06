
#pragma once
#include "TypeCompare.h"

#include <unordered_map>
#include <list>
#include <memory>
#include <string>

using namespace std;

class Scope {
public:
    // createFunction is used for creating function in the current scope 
    auto createFunction(const string& name, unique_ptr<FunctionItem>&& type) -> void {
        functionSymbols[name] = move(type);
    }
    // createStruct is used for creating struct in the current scope 
    auto createStruct(const string& name, unique_ptr<StructItem>&& type) -> void {
        structSymbols[name] = move(type);
    }
    // createVariable is used for creating variable in the current scope 
    auto createVariable(const string& name, unique_ptr<VariableItem>&& type) -> void {
        variableSymbols[name] = move(type);
    }
    // checkFunction is used for checking function in the current scope and all parent scopes
    auto checkFunction(const string& name) const -> const FunctionItem* {
        auto it = functionSymbols.find(name);
        if (it != functionSymbols.end()) {
            return it->second.get();
        } else if (parent != nullptr) {
            return parent->checkFunction(name);
        } else {
            return nullptr;
        }
    }
    // checkStruct is used for checking struct in the current scope and all parent scopes
    auto checkStruct(const string& name) const -> const StructItem* {
        auto it = structSymbols.find(name);
        if (it != structSymbols.end()) {
            return it->second.get();
        } else if (parent != nullptr) {
            return parent->checkStruct(name);
        } else {
            return nullptr;
        }
    }
    // checkVariable is used for checking variable in the current scope and all parent scopes
    auto checkVariable(const string& name, bool is_local = false) const -> const VariableItem* {
        auto it = variableSymbols.find(name);
        if (it != variableSymbols.end()) {
            return it->second.get();
        } else if (parent != nullptr) {
            return parent->checkVariable(name);
        } else {
            return nullptr;
        }
    }
    // checkCurrentVariable is used for checking variable in the current scope
    auto checkCurrentVariable(const string& name) const -> const VariableItem* {
        auto it = variableSymbols.find(name);
        if (it != variableSymbols.end()) {
            return it->second.get();
        } else {
            return nullptr;
        }
    }

public:
    Scope*                                                         parent = nullptr; 
    unordered_map<string, unique_ptr<FunctionItem>>                functionSymbols; 
    unordered_map<string, unique_ptr<StructItem>>                  structSymbols; 
    unordered_map<string, unique_ptr<VariableItem>>                variableSymbols;
    string                                                         name;
};

