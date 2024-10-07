# Compiler Construction
This project focused on designing and implementing a frontend for a subset of a chosen programming language C/C++ and Go. The primary objectives include building a grammar, parser, and type checker to ensure syntactic and semantic correctness of test programs, as well as optionally generating intermediate code.

## Grammar
The first part of the project involved defining a grammar for a subset of the language. The grammar was written in LBNF (Labelled BNF) using the BNFC tool. It supports the following constructs:

- Function definitions
- Argument lists and type declarations
- Control flow structures (if-else, loops)
- Variable declarations and assignments

### Test Programs
- **10 Legal Test Programs**: These programs demonstrate the correct usage of supported constructs like functions, loops, and variable declarations.
- **10 Syntactically Illegal Programs**: These programs contain syntax errors that the parser successfully identifies and rejects.
- **5 Semantically Illegal Programs**: These programs contain semantic errors that the type checker is designed to catch (e.g., type mismatches or undefined variables).

## Type Checker
The type checker verifies the correctness of the programs by ensuring type safety across functions, variables, and expressions. The type checker operates in two phases:
1. Building a symbol table for functions and variables.
2. Checking each expression and statement against the symbol table for type consistency.

The type checker covers:
- Type inference for variables
- Function return type verification
- Type checking for arithmetic and boolean expressions
- Support for implicit type conversions (e.g., int to double)

## Frontend
The frontend consists of the grammar and type checker combined with a basic parser. The parser translates the source code written in the subset language into an abstract syntax tree (AST). The following steps are performed:

1. **Parsing**: Using the defined grammar, the parser processes the input source code.
2. **Type Checking**: The type checker verifies the type correctness of the program.
3. **Code Generation (optional)**: The frontend may include basic code generation for further compilation steps.

### Supported Language Subset
This frontend focuses on a subset of the [chosen language] with key features such as:
- Functions and return types
- If-else conditions
- For and while loops
- Simple arithmetic and boolean expressions
