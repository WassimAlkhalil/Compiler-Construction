#include "Environment.h"
#include "TypeError.h"


// Variable is a class that is used to store information about a variable 
Variable::Variable(string id, BasicTypes type, bool constant) : identifier{id}, type{type}, checkConstant{constant}
{
    if(type == BasicTypes::NONE) {
        throw TypeError("Error: Unspecified variable type detected!");
    }
}

// Environment is a class that is used to store information about the current scope
Environment::Environment()
{
    enterScope(); // Enter the global scope 
} 

void Environment::enterScope()
{
    scopeList.push_back(unordered_map<string, Variable*>{}); // Add a new scope to the stack 
}

void Environment::exitScope()
{
    scopeList.pop_front(); // Remove the current scope from the stack 
}