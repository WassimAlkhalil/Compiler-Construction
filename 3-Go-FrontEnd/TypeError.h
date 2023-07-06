#ifndef TYPEEERROR_HEADER 
#define TYPEEERROR_HEADER

#include <exception>
#include <string>
#include "TypeChecker.h"

using namespace std;

// TypeError is a custom exception class that is thrown when a type error is encountered. 
class TypeError : public exception {
private:
    string error{};
public:
    TypeError(string dialogue) : error{
        "Error: "+ dialogue
        } {}
    const char* what() const noexcept override { 
        return error.c_str(); 
    } 
};

#endif
