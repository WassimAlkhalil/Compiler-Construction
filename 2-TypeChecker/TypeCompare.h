#pragma once

#include "Absyn.H"
#include <unordered_map>
#include <memory>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

enum class ITEM_KIND {
    VARIABLE,
    FUNCTION,
    STRUCT
};
class BaseItem {
public:
    ITEM_KIND m_kind;
    BaseItem(ITEM_KIND kind)
        : m_kind(kind) {}
    virtual ~BaseItem() {}
};
class VariableItem : public BaseItem {
public:
    VariableItem(const string& name, const Type* type)
        : BaseItem(ITEM_KIND::VARIABLE)
        , name(name)
        , type(type) {}

public:
    string          name;
    const Type*     type;
};


class StructItem : public BaseItem {
public:
    StructItem(const string& name, const unordered_map<string, const Type*>& fields)
        : BaseItem(ITEM_KIND::STRUCT)
        , name(name)
        , fieldList(fields) {}

public:
    string                                      name;
    unordered_map<string, const Type*>          fieldList;
};
class FunctionItem : public BaseItem {
public:
    FunctionItem(const string& name, Type* returnType, const vector<pair<string, const Type*>>& arguments)
        : BaseItem(ITEM_KIND::FUNCTION)
        , name(name)
        , arguments(arguments)
        , returnStatment(returnType) {}

public:
    string                                       name;
    vector<pair<string, const Type*>>            arguments;
    Type*                                        returnStatment;
};

// checkType is used for checking the type 
static auto checkType(const Type* type) -> unique_ptr<Type> {
    unique_ptr<Type> result;
    if (dynamic_cast<const Type_void*>(type)) {
        result = make_unique<Type_void>();
    } else if (dynamic_cast<const Type_bool*>(type)) {
        result = make_unique<Type_bool>();
    } else if (dynamic_cast<const Type_int*>(type)) {
        result = make_unique<Type_int>();
    } else if (dynamic_cast<const Type_double*>(type)) {
        result = make_unique<Type_double>();
    } else if (dynamic_cast<const TypeId*>(type)) {
        result = make_unique<TypeId>(((TypeId*)type)->id_);
    } else {
        cout << "Error *** invalid type: allowed types are: void, bool, int, double" << endl;
        exit(1);
    }
    return result;
}
// checkTypeName is used for checking the type name 
static auto checkTypeName(const Type* type) -> const string {
    string result;
    if (dynamic_cast<const Type_void*>(type)) {
        result = "void";
    } else if (dynamic_cast<const Type_bool*>(type)) {
        result = "bool";
    } else if (dynamic_cast<const Type_int*>(type)) {
        result = "int";
    } else if (dynamic_cast<const Type_double*>(type)) {
        result = "double";
    } else if (dynamic_cast<const TypeId*>(type)) {
        result = ((TypeId*)type)->id_;
    } else {
        result = "Error *** invalid type name: allowed types are: void, bool, int, double";
    }
    return result;
}

// checkTypeVoid is used for checking the type void 
static auto checkTypeVoid(const Type* type) -> bool { 
    return typeid(Type_void) == typeid(*type); 
    }
// checkTypeBool is used for checking the type bool 
static auto checkTypeBool(const Type* type) -> bool { 
    return typeid(Type_bool) == typeid(*type); 
    }
// checkTypeInt is used for checking the type int 
static auto checkTypeInt(const Type* type) -> bool { 
    return typeid(Type_int) == typeid(*type); 
    }
// checkTypeDouble is used for checking the type double
static auto checkTypeDouble(const Type* type) -> bool { 
    return typeid(Type_double) == typeid(*type); 
    }
// checkTypeNumeric is used for checking the type numeric
static auto checkNumericType(const Type* type) -> bool {
    bool caseInt = typeid(Type_int) == typeid(*type);
    bool caseDouble = typeid(Type_double) == typeid(*type);
    return caseInt || caseDouble;
}
// checkTypeBasic is used for checking the type basic
static auto is_type_basic(const Type* type) -> bool {
    bool caseInt = typeid(Type_int) == typeid(*type);
    bool caseDouble = typeid(Type_double) == typeid(*type);
    bool caseBool = typeid(Type_bool) == typeid(*type);
    return caseInt || caseDouble || caseBool;
}
// checkTypeCustom is used for checking the type custom
static auto is_type_custom(const Type* type) -> bool {
    bool caseId = typeid(TypeId) == typeid(*type);
    return caseId;
}

// matchedTypes is used for checking whether the types are matched 
static auto matchedTypes(const Type* firstType, const Type* secondType) -> bool {
    return checkTypeName(firstType) == checkTypeName(secondType);
}
// compareTypes is used for comparing the type Integer and Double 
static auto compareTypes(const Type* expectedType, const Type* currentType) -> bool {
    return checkTypeDouble(expectedType) && checkTypeInt(currentType);
}
// checkMismatchedTypes is used for checking whether the types are mismatched
static auto checkMismatchedTypes(const Type* firstType, const Type* secondType) -> bool {
    if (matchedTypes(firstType, secondType)) {
        return true;
    } else if (compareTypes(firstType, secondType)) {
        return true;
    } else {
        return false;
    }
}