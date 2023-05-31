/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         cpp_parse
#define yylex           cpp_lex
#define yyerror         cpp_error
#define yydebug         cpp_debug
#define yynerrs         cpp_nerrs

/* First part of user prologue.  */
#line 20 "CPP.y"

/* Begin C preamble code */

#include <algorithm> /* for std::reverse */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Absyn.H"

#define YYMAXDEPTH 10000000

/* The type yyscan_t is defined by flex, but we need it in the parser already. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE cpp__scan_string(const char *str, yyscan_t scanner);
extern void cpp__delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void cpp_lex_destroy(yyscan_t scanner);
extern char* cpp_get_text(yyscan_t scanner);

extern yyscan_t cpp__initialize_lexer(FILE * inp);

/* End C preamble code */

#line 104 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_CPP_BISON_H_INCLUDED
# define YY_CPP_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int cpp_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _ERROR_ = 258,
    _BANGEQ = 259,
    _DAMP = 260,
    _LPAREN = 261,
    _RPAREN = 262,
    _STAR = 263,
    _PLUS = 264,
    _DPLUS = 265,
    _COMMA = 266,
    _MINUS = 267,
    _DMINUS = 268,
    _DOT = 269,
    _SLASH = 270,
    _COLON = 271,
    _SEMI = 272,
    _LT = 273,
    _LDARROW = 274,
    _SYMB_14 = 275,
    _EQ = 276,
    _DEQ = 277,
    _GT = 278,
    _GTEQ = 279,
    _QUESTION = 280,
    _KW_bool = 281,
    _KW_do = 282,
    _KW_double = 283,
    _KW_else = 284,
    _KW_false = 285,
    _KW_for = 286,
    _KW_if = 287,
    _KW_int = 288,
    _KW_return = 289,
    _KW_struct = 290,
    _KW_true = 291,
    _KW_void = 292,
    _KW_while = 293,
    _LBRACE = 294,
    _DBAR = 295,
    _RBRACE = 296,
    T_Id = 297,
    _INTEGER_ = 298,
    _DOUBLE_ = 299
  };
#endif
/* Tokens.  */
#define _ERROR_ 258
#define _BANGEQ 259
#define _DAMP 260
#define _LPAREN 261
#define _RPAREN 262
#define _STAR 263
#define _PLUS 264
#define _DPLUS 265
#define _COMMA 266
#define _MINUS 267
#define _DMINUS 268
#define _DOT 269
#define _SLASH 270
#define _COLON 271
#define _SEMI 272
#define _LT 273
#define _LDARROW 274
#define _SYMB_14 275
#define _EQ 276
#define _DEQ 277
#define _GT 278
#define _GTEQ 279
#define _QUESTION 280
#define _KW_bool 281
#define _KW_do 282
#define _KW_double 283
#define _KW_else 284
#define _KW_false 285
#define _KW_for 286
#define _KW_if 287
#define _KW_int 288
#define _KW_return 289
#define _KW_struct 290
#define _KW_true 291
#define _KW_void 292
#define _KW_while 293
#define _LBRACE 294
#define _DBAR 295
#define _RBRACE 296
#define T_Id 297
#define _INTEGER_ 298
#define _DOUBLE_ 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 50 "CPP.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  Program* program_;
  Def* def_;
  ListDef* listdef_;
  Field* field_;
  ListField* listfield_;
  Arg* arg_;
  ListArg* listarg_;
  Stm* stm_;
  ListStm* liststm_;
  IdIn* idin_;
  ListIdIn* listidin_;
  Exp* exp_;
  ListExp* listexp_;
  Type* type_;
  ListId* listid_;

#line 266 "y.tab.c"

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



int cpp_parse (yyscan_t scanner, YYSTYPE *result);

#endif /* !YY_CPP_BISON_H_INCLUDED  */

/* Second part of user prologue.  */
#line 72 "CPP.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, cpp_get_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 307 "y.tab.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   201

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

#define YYUNDEFTOK  2
#define YYMAXUTOK   299


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   162,   162,   164,   165,   167,   168,   170,   172,   173,
     175,   177,   178,   179,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   191,   192,   194,   195,   197,   198,   200,
     201,   202,   203,   204,   205,   207,   208,   209,   210,   211,
     213,   214,   215,   216,   217,   219,   220,   221,   223,   224,
     225,   227,   228,   230,   231,   232,   233,   234,   236,   237,
     238,   240,   241,   243,   244,   246,   247,   248,   250,   252,
     254,   256,   258,   260,   261,   262,   264,   265,   266,   267,
     268
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_ERROR_", "_BANGEQ", "_DAMP", "_LPAREN",
  "_RPAREN", "_STAR", "_PLUS", "_DPLUS", "_COMMA", "_MINUS", "_DMINUS",
  "_DOT", "_SLASH", "_COLON", "_SEMI", "_LT", "_LDARROW", "_SYMB_14",
  "_EQ", "_DEQ", "_GT", "_GTEQ", "_QUESTION", "_KW_bool", "_KW_do",
  "_KW_double", "_KW_else", "_KW_false", "_KW_for", "_KW_if", "_KW_int",
  "_KW_return", "_KW_struct", "_KW_true", "_KW_void", "_KW_while",
  "_LBRACE", "_DBAR", "_RBRACE", "T_Id", "_INTEGER_", "_DOUBLE_",
  "$accept", "Program", "Def", "ListDef", "Field", "ListField", "Arg",
  "ListArg", "Stm", "ListStm", "IdIn", "ListIdIn", "Exp15", "Exp14",
  "Exp13", "Exp12", "Exp11", "Exp10", "Exp9", "Exp8", "Exp4", "Exp3",
  "Exp2", "Exp", "Exp1", "Exp5", "Exp6", "Exp7", "ListExp", "Type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

#define YYPACT_NINF (-92)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-81)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -92,    12,   158,   -92,   -92,   -92,   -92,   -27,   -92,   -92,
     -92,   -17,    -5,    35,   159,   159,    28,    19,    20,    50,
      57,    24,   159,    51,   -92,   159,    36,   -92,   -92,   -92,
     -92,   -92,    46,   139,   139,   139,   139,   139,   134,   -92,
      61,    75,    27,   -92,    80,   -92,   -92,     7,   -92,   -92,
     -92,   -92,    18,   -92,     3,    26,    82,    -2,     4,    90,
     -11,   -92,    89,   -92,   -92,   -92,   -92,    67,   104,   106,
     -92,   -92,   -92,   -92,    73,   139,   139,   -92,    97,   139,
      95,   139,   -92,   -92,    76,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     -92,    96,   108,   103,   -92,   118,   113,   128,   -92,   135,
     -92,   130,   143,   -92,   -92,   -92,     3,     3,    26,    82,
      82,    82,    82,    -2,    -2,   -92,   -92,   137,    90,   139,
      67,   -92,   139,   139,   134,   134,   139,   -92,   139,   -92,
     -92,   147,   138,   127,   -92,   -92,   -92,   140,   139,   134,
     -92,   151,   -92,   134,   -92
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     2,     1,    76,    78,    77,     0,    79,    80,
       6,     0,     0,     0,     0,    11,     0,     0,     0,    12,
       0,     0,     8,     0,     7,    11,     0,    10,     9,     4,
      13,    23,     0,     0,     0,     0,     0,     0,     0,    30,
       0,     0,     0,    29,     0,    23,     3,    33,    31,    32,
      24,    39,    44,    47,    50,    52,    57,    60,    72,    64,
      67,    69,     0,    68,    62,    70,    71,     0,    33,     0,
      42,    40,    43,    41,     0,     0,     0,    17,     0,     0,
       0,    73,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    25,    27,     0,    34,     0,     0,     0,    16,     0,
      21,    74,     0,    36,    45,    46,    48,    49,    51,    53,
      55,    54,    56,    59,    58,    61,    65,     0,    63,     0,
       0,    15,     0,     0,     0,     0,    73,    35,     0,    26,
      28,     0,     0,     0,    18,    75,    66,     0,     0,     0,
      19,     0,    22,     0,    20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   -92,   -92,   -92,   141,   -92,   149,   -37,   114,
     -92,    49,   -92,   -92,   -32,   -64,    91,     1,   -44,   -92,
      98,   -92,   -91,   -33,   -92,    92,   -92,   -92,    53,     5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    10,     2,    16,    17,    19,    20,    50,    32,
     102,   103,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,   112,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,    74,    70,    71,    72,    73,   126,    11,    94,    78,
      97,    85,     3,    81,    98,    12,    90,    91,    86,    18,
      21,    92,    93,   116,   117,    13,    95,    18,    82,    99,
      21,    83,    84,    33,    14,    87,    34,    35,    88,    36,
      37,    15,   106,   107,    77,    22,   109,   146,   111,   -80,
     123,   124,    33,   114,   115,    34,    35,    39,    36,    37,
      23,    25,    24,    43,    26,   127,    27,    75,    29,    68,
      48,    49,     4,    38,     5,    31,    39,    40,    41,     6,
      42,    76,    43,     8,    44,    45,    79,    46,    47,    48,
      49,   119,   120,   121,   122,    96,   139,   143,   144,   141,
     142,    33,    89,   111,    34,    35,   100,    36,    37,   101,
      81,   105,   152,   104,   108,   151,   154,   129,   113,   130,
     131,     4,    38,     5,   132,    39,    40,    41,     6,    42,
     133,    43,     8,    44,    45,   134,   110,    47,    48,    49,
      33,   136,   135,    34,    35,    33,    36,    37,    34,    35,
     137,    36,    37,   138,   147,   148,   149,   150,   153,    80,
       4,    38,     5,    28,    39,    40,    41,     6,    42,    39,
      43,     8,    44,    45,    30,    43,    47,    48,    49,   140,
     118,    68,    48,    49,     4,     4,     5,     5,   125,   145,
       0,     6,     6,     7,     0,     8,     8,   128,     0,     0,
       9,     9
};

static const yytype_int16 yycheck[] =
{
      33,    38,    34,    35,    36,    37,    97,     2,     4,    42,
      21,     8,     0,     6,    25,    42,    18,    19,    15,    14,
      15,    23,    24,    87,    88,    42,    22,    22,    10,    40,
      25,    13,    14,     6,    39,     9,     9,    10,    12,    12,
      13,     6,    75,    76,    17,    17,    79,   138,    81,    42,
      94,    95,     6,    85,    86,     9,    10,    30,    12,    13,
      41,    11,    42,    36,     7,    98,    42,     6,    17,    42,
      43,    44,    26,    27,    28,    39,    30,    31,    32,    33,
      34,     6,    36,    37,    38,    39,     6,    41,    42,    43,
      44,    90,    91,    92,    93,     5,   129,   134,   135,   132,
     133,     6,    20,   136,     9,    10,    17,    12,    13,    42,
       6,    38,   149,     7,    17,   148,   153,    21,    42,    11,
      17,    26,    27,    28,     6,    30,    31,    32,    33,    34,
      17,    36,    37,    38,    39,     7,    41,    42,    43,    44,
       6,    11,     7,     9,    10,     6,    12,    13,     9,    10,
       7,    12,    13,    16,     7,    17,    29,    17,     7,    45,
      26,    27,    28,    22,    30,    31,    32,    33,    34,    30,
      36,    37,    38,    39,    25,    36,    42,    43,    44,   130,
      89,    42,    43,    44,    26,    26,    28,    28,    96,   136,
      -1,    33,    33,    35,    -1,    37,    37,    99,    -1,    -1,
      42,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    46,    48,     0,    26,    28,    33,    35,    37,    42,
      47,    74,    42,    42,    39,     6,    49,    50,    74,    51,
      52,    74,    17,    41,    42,    11,     7,    42,    50,    17,
      52,    39,    54,     6,     9,    10,    12,    13,    27,    30,
      31,    32,    34,    36,    38,    39,    41,    42,    43,    44,
      53,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    74,    42,    68,
      59,    59,    59,    59,    53,     6,     6,    17,    68,     6,
      54,     6,    10,    13,    14,     8,    15,     9,    12,    20,
      18,    19,    23,    24,     4,    22,     5,    21,    25,    40,
      17,    42,    55,    56,     7,    38,    68,    68,    17,    68,
      41,    68,    73,    42,    59,    59,    60,    60,    61,    62,
      62,    62,    62,    63,    63,    70,    67,    68,    65,    21,
      11,    17,     6,    17,     7,     7,    11,     7,    16,    68,
      56,    68,    68,    53,    53,    73,    67,     7,    17,    29,
      17,    68,    53,     7,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    49,    50,    50,
      51,    52,    52,    52,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    54,    54,    55,    55,    56,    56,    57,
      57,    57,    57,    57,    57,    58,    58,    58,    58,    58,
      59,    59,    59,    59,    59,    60,    60,    60,    61,    61,
      61,    62,    62,    63,    63,    63,    63,    63,    64,    64,
      64,    65,    65,    66,    66,    67,    67,    67,    68,    69,
      70,    71,    72,    73,    73,    73,    74,    74,    74,    74,
      74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     8,     6,     0,     2,     2,     2,     3,
       2,     0,     1,     3,     2,     3,     3,     2,     5,     7,
       9,     3,     7,     0,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     2,     1,
       2,     2,     2,     2,     1,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     5,     1,     1,     1,
       1,     1,     1,     0,     1,     3,     1,     1,     1,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, result, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, scanner, result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (result);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, scanner, result);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t scanner, YYSTYPE *result)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner, result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, result); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, YYSTYPE *result)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 162 "CPP.y"
                  { (yyval.program_) = new PDefs((yyvsp[0].listdef_)); result->program_ = (yyval.program_); }
#line 1693 "y.tab.c"
    break;

  case 3:
#line 164 "CPP.y"
                                                                { std::reverse((yyvsp[-4].listarg_)->begin(),(yyvsp[-4].listarg_)->end()) ;(yyval.def_) = new DFun((yyvsp[-7].type_), (yyvsp[-6]._string), (yyvsp[-4].listarg_), (yyvsp[-1].liststm_)); result->def_ = (yyval.def_); }
#line 1699 "y.tab.c"
    break;

  case 4:
#line 165 "CPP.y"
                                                    { std::reverse((yyvsp[-2].listfield_)->begin(),(yyvsp[-2].listfield_)->end()) ;(yyval.def_) = new DStruct((yyvsp[-4]._string), (yyvsp[-2].listfield_)); result->def_ = (yyval.def_); }
#line 1705 "y.tab.c"
    break;

  case 5:
#line 167 "CPP.y"
                      { (yyval.listdef_) = new ListDef(); result->listdef_ = (yyval.listdef_); }
#line 1711 "y.tab.c"
    break;

  case 6:
#line 168 "CPP.y"
                { (yyvsp[-1].listdef_)->push_back((yyvsp[0].def_)); (yyval.listdef_) = (yyvsp[-1].listdef_); result->listdef_ = (yyval.listdef_); }
#line 1717 "y.tab.c"
    break;

  case 7:
#line 170 "CPP.y"
                  { (yyval.field_) = new FDecl((yyvsp[-1].type_), (yyvsp[0]._string)); result->field_ = (yyval.field_); }
#line 1723 "y.tab.c"
    break;

  case 8:
#line 172 "CPP.y"
                        { (yyval.listfield_) = new ListField(); (yyval.listfield_)->push_back((yyvsp[-1].field_)); result->listfield_ = (yyval.listfield_); }
#line 1729 "y.tab.c"
    break;

  case 9:
#line 173 "CPP.y"
                          { (yyvsp[0].listfield_)->push_back((yyvsp[-2].field_)); (yyval.listfield_) = (yyvsp[0].listfield_); result->listfield_ = (yyval.listfield_); }
#line 1735 "y.tab.c"
    break;

  case 10:
#line 175 "CPP.y"
                { (yyval.arg_) = new ADecl((yyvsp[-1].type_), (yyvsp[0]._string)); result->arg_ = (yyval.arg_); }
#line 1741 "y.tab.c"
    break;

  case 11:
#line 177 "CPP.y"
                      { (yyval.listarg_) = new ListArg(); result->listarg_ = (yyval.listarg_); }
#line 1747 "y.tab.c"
    break;

  case 12:
#line 178 "CPP.y"
        { (yyval.listarg_) = new ListArg(); (yyval.listarg_)->push_back((yyvsp[0].arg_)); result->listarg_ = (yyval.listarg_); }
#line 1753 "y.tab.c"
    break;

  case 13:
#line 179 "CPP.y"
                       { (yyvsp[0].listarg_)->push_back((yyvsp[-2].arg_)); (yyval.listarg_) = (yyvsp[0].listarg_); result->listarg_ = (yyval.listarg_); }
#line 1759 "y.tab.c"
    break;

  case 14:
#line 181 "CPP.y"
                { (yyval.stm_) = new SExp((yyvsp[-1].exp_)); result->stm_ = (yyval.stm_); }
#line 1765 "y.tab.c"
    break;

  case 15:
#line 182 "CPP.y"
                        { std::reverse((yyvsp[-1].listidin_)->begin(),(yyvsp[-1].listidin_)->end()) ;(yyval.stm_) = new SDecls((yyvsp[-2].type_), (yyvsp[-1].listidin_)); result->stm_ = (yyval.stm_); }
#line 1771 "y.tab.c"
    break;

  case 16:
#line 183 "CPP.y"
                         { (yyval.stm_) = new SReturn((yyvsp[-1].exp_)); result->stm_ = (yyval.stm_); }
#line 1777 "y.tab.c"
    break;

  case 17:
#line 184 "CPP.y"
                     { (yyval.stm_) = new SReturnV(); result->stm_ = (yyval.stm_); }
#line 1783 "y.tab.c"
    break;

  case 18:
#line 185 "CPP.y"
                                      { (yyval.stm_) = new SWhile((yyvsp[-2].exp_), (yyvsp[0].stm_)); result->stm_ = (yyval.stm_); }
#line 1789 "y.tab.c"
    break;

  case 19:
#line 186 "CPP.y"
                                                   { (yyval.stm_) = new SDoWhile((yyvsp[-5].stm_), (yyvsp[-2].exp_)); result->stm_ = (yyval.stm_); }
#line 1795 "y.tab.c"
    break;

  case 20:
#line 187 "CPP.y"
                                                        { (yyval.stm_) = new SFor((yyvsp[-6].exp_), (yyvsp[-4].exp_), (yyvsp[-2].exp_), (yyvsp[0].stm_)); result->stm_ = (yyval.stm_); }
#line 1801 "y.tab.c"
    break;

  case 21:
#line 188 "CPP.y"
                            { (yyval.stm_) = new SBlock((yyvsp[-1].liststm_)); result->stm_ = (yyval.stm_); }
#line 1807 "y.tab.c"
    break;

  case 22:
#line 189 "CPP.y"
                                                { (yyval.stm_) = new SIfElse((yyvsp[-4].exp_), (yyvsp[-2].stm_), (yyvsp[0].stm_)); result->stm_ = (yyval.stm_); }
#line 1813 "y.tab.c"
    break;

  case 23:
#line 191 "CPP.y"
                      { (yyval.liststm_) = new ListStm(); result->liststm_ = (yyval.liststm_); }
#line 1819 "y.tab.c"
    break;

  case 24:
#line 192 "CPP.y"
                { (yyvsp[-1].liststm_)->push_back((yyvsp[0].stm_)); (yyval.liststm_) = (yyvsp[-1].liststm_); result->liststm_ = (yyval.liststm_); }
#line 1825 "y.tab.c"
    break;

  case 25:
#line 194 "CPP.y"
            { (yyval.idin_) = new IdNoInit((yyvsp[0]._string)); result->idin_ = (yyval.idin_); }
#line 1831 "y.tab.c"
    break;

  case 26:
#line 195 "CPP.y"
                 { (yyval.idin_) = new IdInit((yyvsp[-2]._string), (yyvsp[0].exp_)); result->idin_ = (yyval.idin_); }
#line 1837 "y.tab.c"
    break;

  case 27:
#line 197 "CPP.y"
                { (yyval.listidin_) = new ListIdIn(); (yyval.listidin_)->push_back((yyvsp[0].idin_)); result->listidin_ = (yyval.listidin_); }
#line 1843 "y.tab.c"
    break;

  case 28:
#line 198 "CPP.y"
                         { (yyvsp[0].listidin_)->push_back((yyvsp[-2].idin_)); (yyval.listidin_) = (yyvsp[0].listidin_); result->listidin_ = (yyval.listidin_); }
#line 1849 "y.tab.c"
    break;

  case 29:
#line 200 "CPP.y"
                 { (yyval.exp_) = new ETrue(); result->exp_ = (yyval.exp_); }
#line 1855 "y.tab.c"
    break;

  case 30:
#line 201 "CPP.y"
              { (yyval.exp_) = new EFalse(); result->exp_ = (yyval.exp_); }
#line 1861 "y.tab.c"
    break;

  case 31:
#line 202 "CPP.y"
              { (yyval.exp_) = new EInt((yyvsp[0]._int)); result->exp_ = (yyval.exp_); }
#line 1867 "y.tab.c"
    break;

  case 32:
#line 203 "CPP.y"
             { (yyval.exp_) = new EDouble((yyvsp[0]._double)); result->exp_ = (yyval.exp_); }
#line 1873 "y.tab.c"
    break;

  case 33:
#line 204 "CPP.y"
         { (yyval.exp_) = new EId((yyvsp[0]._string)); result->exp_ = (yyval.exp_); }
#line 1879 "y.tab.c"
    break;

  case 34:
#line 205 "CPP.y"
                        { (yyval.exp_) = (yyvsp[-1].exp_); result->exp_ = (yyval.exp_); }
#line 1885 "y.tab.c"
    break;

  case 35:
#line 207 "CPP.y"
                                     { std::reverse((yyvsp[-1].listexp_)->begin(),(yyvsp[-1].listexp_)->end()) ;(yyval.exp_) = new EApp((yyvsp[-3]._string), (yyvsp[-1].listexp_)); result->exp_ = (yyval.exp_); }
#line 1891 "y.tab.c"
    break;

  case 36:
#line 208 "CPP.y"
                    { (yyval.exp_) = new EProj((yyvsp[-2].exp_), (yyvsp[0]._string)); result->exp_ = (yyval.exp_); }
#line 1897 "y.tab.c"
    break;

  case 37:
#line 209 "CPP.y"
                 { (yyval.exp_) = new EPIncr((yyvsp[-1].exp_)); result->exp_ = (yyval.exp_); }
#line 1903 "y.tab.c"
    break;

  case 38:
#line 210 "CPP.y"
                  { (yyval.exp_) = new EPDecr((yyvsp[-1].exp_)); result->exp_ = (yyval.exp_); }
#line 1909 "y.tab.c"
    break;

  case 39:
#line 211 "CPP.y"
          { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 1915 "y.tab.c"
    break;

  case 40:
#line 213 "CPP.y"
                     { (yyval.exp_) = new EIncr((yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 1921 "y.tab.c"
    break;

  case 41:
#line 214 "CPP.y"
                  { (yyval.exp_) = new EDecr((yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 1927 "y.tab.c"
    break;

  case 42:
#line 215 "CPP.y"
                { (yyval.exp_) = new EUPlus((yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 1933 "y.tab.c"
    break;

  case 43:
#line 216 "CPP.y"
                 { (yyval.exp_) = new EUMinus((yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 1939 "y.tab.c"
    break;

  case 44:
#line 217 "CPP.y"
          { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 1945 "y.tab.c"
    break;

  case 45:
#line 219 "CPP.y"
                          { (yyval.exp_) = new ETimes((yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 1951 "y.tab.c"
    break;

  case 46:
#line 220 "CPP.y"
                       { (yyval.exp_) = new EDiv((yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 1957 "y.tab.c"
    break;

  case 47:
#line 221 "CPP.y"
          { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 1963 "y.tab.c"
    break;

  case 48:
#line 223 "CPP.y"
                          { (yyval.exp_) = new EPlus((yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 1969 "y.tab.c"
    break;

  case 49:
#line 224 "CPP.y"
                       { (yyval.exp_) = new EMinus((yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 1975 "y.tab.c"
    break;

  case 50:
#line 225 "CPP.y"
          { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 1981 "y.tab.c"
    break;

  case 51:
#line 227 "CPP.y"
                             { (yyval.exp_) = new ETwc((yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 1987 "y.tab.c"
    break;

  case 52:
#line 228 "CPP.y"
          { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 1993 "y.tab.c"
    break;

  case 53:
#line 230 "CPP.y"
                      { (yyval.exp_) = new ELt((yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 1999 "y.tab.c"
    break;

  case 54:
#line 231 "CPP.y"
                   { (yyval.exp_) = new EGt((yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 2005 "y.tab.c"
    break;

  case 55:
#line 232 "CPP.y"
                        { (yyval.exp_) = new ELtEq((yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 2011 "y.tab.c"
    break;

  case 56:
#line 233 "CPP.y"
                     { (yyval.exp_) = new EGtEq((yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 2017 "y.tab.c"
    break;

  case 57:
#line 234 "CPP.y"
          { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 2023 "y.tab.c"
    break;

  case 58:
#line 236 "CPP.y"
                      { (yyval.exp_) = new EEq((yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 2029 "y.tab.c"
    break;

  case 59:
#line 237 "CPP.y"
                      { (yyval.exp_) = new ENEq((yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 2035 "y.tab.c"
    break;

  case 60:
#line 238 "CPP.y"
         { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 2041 "y.tab.c"
    break;

  case 61:
#line 240 "CPP.y"
                       { (yyval.exp_) = new EAnd((yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 2047 "y.tab.c"
    break;

  case 62:
#line 241 "CPP.y"
         { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 2053 "y.tab.c"
    break;

  case 63:
#line 243 "CPP.y"
                       { (yyval.exp_) = new EOr((yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 2059 "y.tab.c"
    break;

  case 64:
#line 244 "CPP.y"
         { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 2065 "y.tab.c"
    break;

  case 65:
#line 246 "CPP.y"
                     { (yyval.exp_) = new EAss((yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 2071 "y.tab.c"
    break;

  case 66:
#line 247 "CPP.y"
                                   { (yyval.exp_) = new ECond((yyvsp[-4].exp_), (yyvsp[-2].exp_), (yyvsp[0].exp_)); result->exp_ = (yyval.exp_); }
#line 2077 "y.tab.c"
    break;

  case 67:
#line 248 "CPP.y"
         { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 2083 "y.tab.c"
    break;

  case 68:
#line 250 "CPP.y"
           { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 2089 "y.tab.c"
    break;

  case 69:
#line 252 "CPP.y"
            { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 2095 "y.tab.c"
    break;

  case 70:
#line 254 "CPP.y"
            { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 2101 "y.tab.c"
    break;

  case 71:
#line 256 "CPP.y"
            { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 2107 "y.tab.c"
    break;

  case 72:
#line 258 "CPP.y"
            { (yyval.exp_) = (yyvsp[0].exp_); result->exp_ = (yyval.exp_); }
#line 2113 "y.tab.c"
    break;

  case 73:
#line 260 "CPP.y"
                      { (yyval.listexp_) = new ListExp(); result->listexp_ = (yyval.listexp_); }
#line 2119 "y.tab.c"
    break;

  case 74:
#line 261 "CPP.y"
        { (yyval.listexp_) = new ListExp(); (yyval.listexp_)->push_back((yyvsp[0].exp_)); result->listexp_ = (yyval.listexp_); }
#line 2125 "y.tab.c"
    break;

  case 75:
#line 262 "CPP.y"
                       { (yyvsp[0].listexp_)->push_back((yyvsp[-2].exp_)); (yyval.listexp_) = (yyvsp[0].listexp_); result->listexp_ = (yyval.listexp_); }
#line 2131 "y.tab.c"
    break;

  case 76:
#line 264 "CPP.y"
                { (yyval.type_) = new Type_bool(); result->type_ = (yyval.type_); }
#line 2137 "y.tab.c"
    break;

  case 77:
#line 265 "CPP.y"
            { (yyval.type_) = new Type_int(); result->type_ = (yyval.type_); }
#line 2143 "y.tab.c"
    break;

  case 78:
#line 266 "CPP.y"
               { (yyval.type_) = new Type_double(); result->type_ = (yyval.type_); }
#line 2149 "y.tab.c"
    break;

  case 79:
#line 267 "CPP.y"
             { (yyval.type_) = new Type_void(); result->type_ = (yyval.type_); }
#line 2155 "y.tab.c"
    break;

  case 80:
#line 268 "CPP.y"
         { (yyval.type_) = new TypeId((yyvsp[0]._string)); result->type_ = (yyval.type_); }
#line 2161 "y.tab.c"
    break;


#line 2165 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, scanner, result, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, scanner, result, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner, result);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, result, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, result);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 274 "CPP.y"



/* Entrypoint: parse Program* from file. */
Program* pProgram(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse Program* from string. */
Program* psProgram(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse Def* from file. */
Def* pDef(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.def_;
  }
}

/* Entrypoint: parse Def* from string. */
Def* psDef(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.def_;
  }
}

/* Entrypoint: parse ListDef* from file. */
ListDef* pListDef(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listdef_;
  }
}

/* Entrypoint: parse ListDef* from string. */
ListDef* psListDef(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listdef_;
  }
}

/* Entrypoint: parse Field* from file. */
Field* pField(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.field_;
  }
}

/* Entrypoint: parse Field* from string. */
Field* psField(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.field_;
  }
}

/* Entrypoint: parse ListField* from file. */
ListField* pListField(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listfield_->begin(), result.listfield_->end());
    return result.listfield_;
  }
}

/* Entrypoint: parse ListField* from string. */
ListField* psListField(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listfield_->begin(), result.listfield_->end());
    return result.listfield_;
  }
}

/* Entrypoint: parse Arg* from file. */
Arg* pArg(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.arg_;
  }
}

/* Entrypoint: parse Arg* from string. */
Arg* psArg(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.arg_;
  }
}

/* Entrypoint: parse ListArg* from file. */
ListArg* pListArg(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listarg_->begin(), result.listarg_->end());
    return result.listarg_;
  }
}

/* Entrypoint: parse ListArg* from string. */
ListArg* psListArg(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listarg_->begin(), result.listarg_->end());
    return result.listarg_;
  }
}

/* Entrypoint: parse Stm* from file. */
Stm* pStm(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.stm_;
  }
}

/* Entrypoint: parse Stm* from string. */
Stm* psStm(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.stm_;
  }
}

/* Entrypoint: parse ListStm* from file. */
ListStm* pListStm(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.liststm_;
  }
}

/* Entrypoint: parse ListStm* from string. */
ListStm* psListStm(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.liststm_;
  }
}

/* Entrypoint: parse IdIn* from file. */
IdIn* pIdIn(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.idin_;
  }
}

/* Entrypoint: parse IdIn* from string. */
IdIn* psIdIn(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.idin_;
  }
}

/* Entrypoint: parse ListIdIn* from file. */
ListIdIn* pListIdIn(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listidin_->begin(), result.listidin_->end());
    return result.listidin_;
  }
}

/* Entrypoint: parse ListIdIn* from string. */
ListIdIn* psListIdIn(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listidin_->begin(), result.listidin_->end());
    return result.listidin_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp15(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp15(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp14(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp14(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp13(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp13(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp12(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp12(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp11(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp11(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp10(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp10(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp9(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp9(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp8(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp8(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp4(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp4(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp3(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp3(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp5(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp5(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp6(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp6(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from file. */
Exp* pExp7(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse Exp* from string. */
Exp* psExp7(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse ListExp* from file. */
ListExp* pListExp(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexp_->begin(), result.listexp_->end());
    return result.listexp_;
  }
}

/* Entrypoint: parse ListExp* from string. */
ListExp* psListExp(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexp_->begin(), result.listexp_->end());
    return result.listexp_;
  }
}

/* Entrypoint: parse Type* from file. */
Type* pType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from string. */
Type* psType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse ListId* from file. */
ListId* pListId(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listid_->begin(), result.listid_->end());
    return result.listid_;
  }
}

/* Entrypoint: parse ListId* from string. */
ListId* psListId(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = cpp__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = cpp__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  cpp__delete_buffer(buf, scanner);
  cpp_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listid_->begin(), result.listid_->end());
    return result.listid_;
  }
}



