/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_GO_LANG_BISON_H_INCLUDED
# define YY_GO_LANG_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int go_lang_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    _ERROR_ = 258,                 /* _ERROR_  */
    _BANG = 259,                   /* _BANG  */
    _BANGEQ = 260,                 /* _BANGEQ  */
    _DAMP = 261,                   /* _DAMP  */
    _LPAREN = 262,                 /* _LPAREN  */
    _RPAREN = 263,                 /* _RPAREN  */
    _STAR = 264,                   /* _STAR  */
    _PLUS = 265,                   /* _PLUS  */
    _DPLUS = 266,                  /* _DPLUS  */
    _PLUSEQ = 267,                 /* _PLUSEQ  */
    _COMMA = 268,                  /* _COMMA  */
    _MINUS = 269,                  /* _MINUS  */
    _DMINUS = 270,                 /* _DMINUS  */
    _MINUSEQ = 271,                /* _MINUSEQ  */
    _DOT = 272,                    /* _DOT  */
    _SLASH = 273,                  /* _SLASH  */
    _COLONEQ = 274,                /* _COLONEQ  */
    _SEMI = 275,                   /* _SEMI  */
    _LT = 276,                     /* _LT  */
    _LDARROW = 277,                /* _LDARROW  */
    _SYMB_16 = 278,                /* _SYMB_16  */
    _EQ = 279,                     /* _EQ  */
    _DEQ = 280,                    /* _DEQ  */
    _GT = 281,                     /* _GT  */
    _GTEQ = 282,                   /* _GTEQ  */
    _KW_bool = 283,                /* _KW_bool  */
    _KW_const = 284,               /* _KW_const  */
    _KW_else = 285,                /* _KW_else  */
    _KW_false = 286,               /* _KW_false  */
    _KW_for = 287,                 /* _KW_for  */
    _KW_func = 288,                /* _KW_func  */
    _KW_if = 289,                  /* _KW_if  */
    _KW_import = 290,              /* _KW_import  */
    _KW_int = 291,                 /* _KW_int  */
    _KW_package = 292,             /* _KW_package  */
    _KW_return = 293,              /* _KW_return  */
    _KW_string = 294,              /* _KW_string  */
    _KW_struct = 295,              /* _KW_struct  */
    _KW_true = 296,                /* _KW_true  */
    _KW_type = 297,                /* _KW_type  */
    _KW_var = 298,                 /* _KW_var  */
    _LBRACE = 299,                 /* _LBRACE  */
    _DBAR = 300,                   /* _DBAR  */
    _RBRACE = 301,                 /* _RBRACE  */
    T_Id = 302,                    /* T_Id  */
    T_Library = 303,               /* T_Library  */
    _INTEGER_ = 304,               /* _INTEGER_  */
    _DOUBLE_ = 305                 /* _DOUBLE_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 50 "GoLang.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  Program* program_;
  Def* def_;
  ListDef* listdef_;
  Field* field_;
  ListField* listfield_;
  Argument* argument_;
  ListArgument* listargument_;
  Statment* statment_;
  ListStatment* liststatment_;
  Declaration* declaration_;
  ConstDeclaration* constdeclaration_;
  ConstSpecification* constspecification_;
  VariableDeclaration* variabledeclaration_;
  VariableSpecification* variablespecification_;
  SimpleStatment* simplestatment_;
  ShortVariableDeclaration* shortvariabledeclaration_;
  Expression* expression_;
  ListExpression* listexpression_;
  Type* type_;
  ListType* listtype_;
  ListId* listid_;

#line 142 "Bison.H"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int go_lang_parse (yyscan_t scanner, YYSTYPE *result);

#endif /* !YY_GO_LANG_BISON_H_INCLUDED  */
