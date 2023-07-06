#pragma once
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// template source: https://stackoverflow.com/questions/2342162/stdstring-formatting-like-sprintf
template <typename... Args>
// format is a function that takes a string and a variable number of arguments and returns a string with the arguments formatted into the string according to the format string (like sprintf) 
// args... is a variadic template argument that allows us to pass a variable number of arguments to the function
auto format(const string &format, Args... args) -> string
{   
    int stringSize = snprintf(nullptr, 0, format.c_str(), args...) + 1;
    if (stringSize <= 0)
    {
        assert(false);
    }

    auto size = static_cast<size_t>(stringSize);

    unique_ptr<char[]> buf(new char[size]);
    snprintf(buf.get(), size, format.c_str(), args...);
    return string(buf.get(), buf.get() + size - 1);
}

class ErrorManagment
{
public:
    // defineFunction is called when a function is not defined 
    auto defineFunction(const string &functionName, const string &functionId) -> void
    {
        auto stringFormat = format("Error *** in function %s: undefined function %s", functionName.c_str(), 
                                                                                      functionId.c_str());
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;

        this->errorManager();
    }
    // defineStruct is called when a struct is not defined 
    auto declareStruct(const string &functionName, const string &structId) -> void
    {
        auto stringFormat = format("Error *** in function %s: undefined struct %s", functionName.c_str(), 
                                                                                    structId.c_str());
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;

        this->errorManager();
    }
    // declareField is called when a field is not defined
    auto declareField(const string &functionName, const string &fieldId) -> void
    {
        auto stringFormat = format("Error *** in function %s: undefined field %s", functionName.c_str(), 
                                                                                   fieldId.c_str());
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;

        this->errorManager();
    }
    // mismatchedParameterNumbers is called when the number of parameters in a function call does not match the number of parameters in the function definition
    auto mismatchedParameterNumbers(const string &functionName, const string &functionId, int expected, int current)-> void
    {
        auto stringFormat = format("Error *** in function %s: the function %s expects %d parameters, but only %d were provided", functionName.c_str(), 
                                                                                                                                 functionId.c_str(),
                                                                                                                                 expected, 
                                                                                                                                 current);
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;

        this->errorManager();
    }
    // duplicateFunctionOrStructDetected is called when a function or struct is defined more than once
    auto duplicateFunctionDetected(const char *entityType, const string &entityName) -> void
    {
        auto stringFormat = format("Error *** %s %s has been declared\n", entityType, 
                                                                          entityName.c_str());
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;

        this->errorManager();
    }
    // duplicateStructDetected is called when a struct is defined more than once
    auto duplicateStructDetected(const char *entityType, const string &entityName) -> void
    {
        auto stringFormat = format("Error *** %s %s has been declared\n", entityType, 
                                                                          entityName.c_str());
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;

        this->errorManager();
    }
    // duplicateArgumentDetected is called when an argument is defined more than once in a function definition 
    auto duplicateArgumentDetected(const string &memberName, const string &entityName) -> void
    {
        auto stringFormat = format("Error *** duplicate %s %s in %s %s\n", "argument",
                                                                           entityName.c_str(),
                                                                           "function",
                                                                           memberName.c_str());
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;

        this->errorManager();
    }
    // duplicateFieldDetected is called when a field is defined more than once in a struct definition 
    auto duplicateFieldDetected(const string &memberName, const string &entityName) -> void
    {
        auto stringFormat = format("Error *** duplicate %s %s in %s %s\n", "field",
                                                                           entityName.c_str(),
                                                                           "struct",
                                                                           memberName.c_str());
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;

        this->errorManager();
        
    }
    // variableDeclaredWithTypeVoid is called when a variable is declared with type void 
    auto variableDeclaredWithTypeVoid(const string &functionName) -> void
    {
        auto stringFormat = format("Error *** in function %s: invalid variable declaration of type '%s", functionName.c_str(), 
                                                                                                         "void");
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;
        this->errorManager();
    }
    // declaredVariable is called when a variable is declared more than once in a function definition
    auto declaredVariable(const string &functionName, const string &variableName) -> void
    {
        auto stringFormat = format("Error *** in function %s: variable %s has been defined\n", functionName.c_str(),
                                                                                               variableName.c_str());
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;
        this->errorManager();
    }
    // assignableValueExpected is called when a non-assignable value is assigned to a variable 
    auto assignableValueExpected(const string &function, const string &expression)
    {
        auto stringFormat = format("Error *** in function %s: in expression type %s: expected assignable value, but received a non-assignable value", function.c_str(),
                                                                                                                                                      expression.c_str());
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;
        this->errorManager();
    }
                            
    // typeVoidDetected is called when a variable or field is declared with type void 
    auto typeVoidDetected(const char *entityType, const string &entityName, const char *memberType, const string &memberName)
    {
        auto stringFormat = format("Error *** in %s %s: detected that %s %s has type '%s'\n", memberType,
                                                                                              memberName.c_str(),  
                                                                                              entityType,
                                                                                              entityName.c_str(),
                                                                                              "void");
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;

        this->errorManager();
    }
    // wrongExpressionType is called when an expression is of the wrong type is used in a function definition 
    auto wrongExpressionType(
        const string &functionName, const string &expression, const string &expectedType, const string &currentType)
    {
        auto stringFormat = format("Error *** function %s has %s: expected type is '%s', but received type '%s'\n", functionName.c_str(),
                                                                                                                    expression.c_str(), 
                                                                                                                    expectedType.c_str(), 
                                                                                                                    currentType.c_str());
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;
        this->errorManager();
    }
    // mismatchedTypes is called when two types are mismatched in a function definition 
    auto mismatchedTypes(const string &functionName, const string &expectedType, const string &currentType)-> void
    {
        auto stringFormat = format("Error *** in function %s: type '%s' mismatched with type '%s'\n", functionName.c_str(),
                                                                                                      expectedType.c_str(), 
                                                                                                      currentType.c_str());
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;
        this->errorManager();
    }
    // declareVariable is called when a variable is not declared in a function definition 
    auto declareVariable(const string &functionName, const string &variableName) -> void
    {
        auto stringFormat = format("Error *** in function %s: undefined variable '%s'\n", functionName.c_str(), 
                                                                                          variableName.c_str());
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;
        this->errorManager();
    }
    // numericTypeExpected is called when a variable is not of a numerical type in a function definition 
    auto numericTypeExpected(const string &functionName, const string &currentType)-> void
    {
        auto stringFormat = format("Error *** in function %s: variable '%s' must be of type integer or double\n", functionName.c_str(),
                                                                                                                  currentType.c_str());
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;
        this->errorManager();
    }
    
    auto assignToConst(const string &functionName, const string &varName)-> void
    {
        auto stringFormat = format("Error *** in function %s: assignment to a constant variable '%s'\n", functionName.c_str(), varName.c_str());
        cout << "TYPE ERROR" << endl;
        cerr << stringFormat << endl;
        this->errorManager();
    }

private:
    auto errorManager() -> void { 
        exit(1); 
        }
};