#ifndef ENVIRONMENT_HEADER
#define ENVIRONMENT_HEADER

#include <list>
#include <string>
#include <unordered_map>
#include <vector>
#include <utility> 

#include "Absyn.H"

using namespace std;

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


// Environment is a stack of scopes (unordered_maps) 
class Environment
{
private:
    list<unordered_map<string, Variable*>> scopeList; // List of scopes 
public:
    Environment();
    void enterScope();
    void exitScope();
};

#endif