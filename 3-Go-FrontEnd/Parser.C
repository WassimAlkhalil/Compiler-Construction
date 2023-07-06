/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         go_lang_parse
#define yylex           go_lang_lex
#define yyerror         go_lang_error
#define yydebug         go_lang_debug
#define yynerrs         go_lang_nerrs

/* First part of user prologue.  */
#line 20 "GoLang.y"

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
extern YY_BUFFER_STATE go_lang__scan_string(const char *str, yyscan_t scanner);
extern void go_lang__delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void go_lang_lex_destroy(yyscan_t scanner);
extern char* go_lang_get_text(yyscan_t scanner);

extern yyscan_t go_lang__initialize_lexer(FILE * inp);

/* End C preamble code */

#line 105 "Parser.C"

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

#include "Bison.H"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL__BANG = 4,                      /* _BANG  */
  YYSYMBOL__BANGEQ = 5,                    /* _BANGEQ  */
  YYSYMBOL__DAMP = 6,                      /* _DAMP  */
  YYSYMBOL__LPAREN = 7,                    /* _LPAREN  */
  YYSYMBOL__RPAREN = 8,                    /* _RPAREN  */
  YYSYMBOL__STAR = 9,                      /* _STAR  */
  YYSYMBOL__PLUS = 10,                     /* _PLUS  */
  YYSYMBOL__DPLUS = 11,                    /* _DPLUS  */
  YYSYMBOL__PLUSEQ = 12,                   /* _PLUSEQ  */
  YYSYMBOL__COMMA = 13,                    /* _COMMA  */
  YYSYMBOL__MINUS = 14,                    /* _MINUS  */
  YYSYMBOL__DMINUS = 15,                   /* _DMINUS  */
  YYSYMBOL__MINUSEQ = 16,                  /* _MINUSEQ  */
  YYSYMBOL__DOT = 17,                      /* _DOT  */
  YYSYMBOL__SLASH = 18,                    /* _SLASH  */
  YYSYMBOL__COLONEQ = 19,                  /* _COLONEQ  */
  YYSYMBOL__SEMI = 20,                     /* _SEMI  */
  YYSYMBOL__LT = 21,                       /* _LT  */
  YYSYMBOL__LDARROW = 22,                  /* _LDARROW  */
  YYSYMBOL__SYMB_16 = 23,                  /* _SYMB_16  */
  YYSYMBOL__EQ = 24,                       /* _EQ  */
  YYSYMBOL__DEQ = 25,                      /* _DEQ  */
  YYSYMBOL__GT = 26,                       /* _GT  */
  YYSYMBOL__GTEQ = 27,                     /* _GTEQ  */
  YYSYMBOL__KW_bool = 28,                  /* _KW_bool  */
  YYSYMBOL__KW_const = 29,                 /* _KW_const  */
  YYSYMBOL__KW_else = 30,                  /* _KW_else  */
  YYSYMBOL__KW_false = 31,                 /* _KW_false  */
  YYSYMBOL__KW_for = 32,                   /* _KW_for  */
  YYSYMBOL__KW_func = 33,                  /* _KW_func  */
  YYSYMBOL__KW_if = 34,                    /* _KW_if  */
  YYSYMBOL__KW_import = 35,                /* _KW_import  */
  YYSYMBOL__KW_int = 36,                   /* _KW_int  */
  YYSYMBOL__KW_package = 37,               /* _KW_package  */
  YYSYMBOL__KW_return = 38,                /* _KW_return  */
  YYSYMBOL__KW_string = 39,                /* _KW_string  */
  YYSYMBOL__KW_struct = 40,                /* _KW_struct  */
  YYSYMBOL__KW_true = 41,                  /* _KW_true  */
  YYSYMBOL__KW_type = 42,                  /* _KW_type  */
  YYSYMBOL__KW_var = 43,                   /* _KW_var  */
  YYSYMBOL__LBRACE = 44,                   /* _LBRACE  */
  YYSYMBOL__DBAR = 45,                     /* _DBAR  */
  YYSYMBOL__RBRACE = 46,                   /* _RBRACE  */
  YYSYMBOL_T_Id = 47,                      /* T_Id  */
  YYSYMBOL_T_Library = 48,                 /* T_Library  */
  YYSYMBOL__INTEGER_ = 49,                 /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 50,                  /* _DOUBLE_  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_Program = 52,                   /* Program  */
  YYSYMBOL_Def = 53,                       /* Def  */
  YYSYMBOL_ListDef = 54,                   /* ListDef  */
  YYSYMBOL_Field = 55,                     /* Field  */
  YYSYMBOL_ListField = 56,                 /* ListField  */
  YYSYMBOL_Argument = 57,                  /* Argument  */
  YYSYMBOL_ListArgument = 58,              /* ListArgument  */
  YYSYMBOL_Statment = 59,                  /* Statment  */
  YYSYMBOL_ListStatment = 60,              /* ListStatment  */
  YYSYMBOL_Declaration = 61,               /* Declaration  */
  YYSYMBOL_ConstDeclaration = 62,          /* ConstDeclaration  */
  YYSYMBOL_ConstSpecification = 63,        /* ConstSpecification  */
  YYSYMBOL_VariableDeclaration = 64,       /* VariableDeclaration  */
  YYSYMBOL_VariableSpecification = 65,     /* VariableSpecification  */
  YYSYMBOL_SimpleStatment = 66,            /* SimpleStatment  */
  YYSYMBOL_ShortVariableDeclaration = 67,  /* ShortVariableDeclaration  */
  YYSYMBOL_Expression15 = 68,              /* Expression15  */
  YYSYMBOL_Expression14 = 69,              /* Expression14  */
  YYSYMBOL_Expression13 = 70,              /* Expression13  */
  YYSYMBOL_Expression12 = 71,              /* Expression12  */
  YYSYMBOL_Expression11 = 72,              /* Expression11  */
  YYSYMBOL_Expression10 = 73,              /* Expression10  */
  YYSYMBOL_Expression9 = 74,               /* Expression9  */
  YYSYMBOL_Expression8 = 75,               /* Expression8  */
  YYSYMBOL_Expression4 = 76,               /* Expression4  */
  YYSYMBOL_Expression3 = 77,               /* Expression3  */
  YYSYMBOL_Expression2 = 78,               /* Expression2  */
  YYSYMBOL_Expression = 79,                /* Expression  */
  YYSYMBOL_Expression1 = 80,               /* Expression1  */
  YYSYMBOL_Expression5 = 81,               /* Expression5  */
  YYSYMBOL_Expression6 = 82,               /* Expression6  */
  YYSYMBOL_Expression7 = 83,               /* Expression7  */
  YYSYMBOL_ListExpression = 84,            /* ListExpression  */
  YYSYMBOL_Type = 85,                      /* Type  */
  YYSYMBOL_ListId = 86                     /* ListId  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 78 "GoLang.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, go_lang_get_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 237 "Parser.C"


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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   724

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  209

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   180,   180,   182,   183,   184,   185,   186,   187,   188,
     190,   191,   193,   194,   195,   197,   198,   200,   202,   203,
     204,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   220,   221,   223,   224,   226,   228,
     229,   231,   233,   234,   235,   237,   239,   241,   242,   243,
     244,   245,   246,   248,   249,   250,   251,   252,   254,   255,
     256,   257,   258,   259,   261,   262,   263,   265,   266,   267,
     269,   270,   272,   273,   274,   275,   276,   278,   279,   280,
     282,   283,   285,   286,   288,   289,   290,   291,   293,   295,
     297,   299,   301,   303,   304,   305,   307,   308,   309,   310,
     316,   317
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_BANG",
  "_BANGEQ", "_DAMP", "_LPAREN", "_RPAREN", "_STAR", "_PLUS", "_DPLUS",
  "_PLUSEQ", "_COMMA", "_MINUS", "_DMINUS", "_MINUSEQ", "_DOT", "_SLASH",
  "_COLONEQ", "_SEMI", "_LT", "_LDARROW", "_SYMB_16", "_EQ", "_DEQ", "_GT",
  "_GTEQ", "_KW_bool", "_KW_const", "_KW_else", "_KW_false", "_KW_for",
  "_KW_func", "_KW_if", "_KW_import", "_KW_int", "_KW_package",
  "_KW_return", "_KW_string", "_KW_struct", "_KW_true", "_KW_type",
  "_KW_var", "_LBRACE", "_DBAR", "_RBRACE", "T_Id", "T_Library",
  "_INTEGER_", "_DOUBLE_", "$accept", "Program", "Def", "ListDef", "Field",
  "ListField", "Argument", "ListArgument", "Statment", "ListStatment",
  "Declaration", "ConstDeclaration", "ConstSpecification",
  "VariableDeclaration", "VariableSpecification", "SimpleStatment",
  "ShortVariableDeclaration", "Expression15", "Expression14",
  "Expression13", "Expression12", "Expression11", "Expression10",
  "Expression9", "Expression8", "Expression4", "Expression3",
  "Expression2", "Expression", "Expression1", "Expression5", "Expression6",
  "Expression7", "ListExpression", "Type", "ListId", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
#endif

#define YYPACT_NINF (-102)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-101)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -102,    53,    35,  -102,     5,     8,    11,    15,  -102,    45,
      88,  -102,  -102,    61,    96,    62,    71,  -102,  -102,  -102,
    -102,   114,    96,   113,   119,  -102,    82,  -102,    62,    74,
      -3,   123,  -102,  -102,    93,  -102,    12,   121,    62,    50,
    -102,   661,  -102,  -102,   130,   661,   661,   661,   661,   661,
     661,    95,  -102,   608,   674,   649,  -102,    95,  -102,  -102,
      13,  -102,  -102,  -102,   132,  -102,  -102,   134,  -102,  -102,
      56,  -102,     4,     7,   133,   118,    30,   149,    21,  -102,
     137,  -102,  -102,  -102,  -102,   143,   157,   156,   153,   161,
      89,  -102,   162,  -102,  -102,  -102,  -102,   160,  -102,     3,
     131,   154,    -6,   158,   135,  -102,   163,  -102,    84,   198,
     661,    95,  -102,  -102,  -102,  -102,   129,   661,   661,   661,
     661,   661,   661,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   661,  -102,   661,  -102,   661,  -102,  -102,   136,
    -102,   661,   166,  -102,   661,  -102,   661,  -102,  -102,   661,
     168,  -102,   169,  -102,  -102,  -102,  -102,     4,     4,     7,
     133,   133,   133,   133,   118,   118,  -102,  -102,  -102,  -102,
     149,  -102,  -102,   239,  -102,  -102,   661,   280,   164,   321,
     138,   362,  -102,   661,  -102,  -102,   403,  -102,  -102,   661,
    -102,  -102,   151,  -102,  -102,   141,   444,   150,  -102,   167,
    -102,   485,   152,   526,  -102,  -102,  -102,   567,  -102
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      10,     0,     2,     1,     0,     0,     0,     0,    11,     0,
       0,     8,     9,     0,     0,    18,     0,    96,    97,    99,
      98,     0,     0,    19,     0,    15,     0,    17,    18,     0,
       0,     0,    20,    34,     0,     5,    13,     0,     0,     0,
      34,    93,    12,    16,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,    47,     0,    34,     4,
      51,    49,    50,    35,     0,    36,    37,     0,    45,    57,
      63,    66,    69,    71,    76,    79,    92,    83,    87,    89,
       0,    88,    81,    90,    91,     0,     0,    51,    94,     0,
       0,    62,     0,    60,    58,    61,    59,   100,    38,     0,
       0,     0,     0,     0,     0,    25,     0,    41,     0,     0,
      93,     0,    22,    23,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    93,     3,    93,    14,    34,     0,
      52,    93,     0,    34,    23,    34,     0,    34,    24,    93,
      42,    29,     0,   101,    54,    64,    65,    67,    68,    70,
      72,    74,    73,    75,    78,    77,    80,    85,    86,    84,
      82,    46,    95,     0,    34,    39,    93,     0,     0,     0,
       0,     0,    44,    93,    53,     7,     0,    40,    28,     0,
      26,    34,    30,    43,     6,     0,     0,     0,    34,    31,
      34,     0,     0,     0,    27,    34,    32,     0,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,  -102,    77,  -102,   172,   159,   146,   -40,
    -102,  -102,  -102,  -102,  -102,    -7,  -102,  -102,  -102,   -43,
     -34,    90,    25,   -37,  -102,    83,  -102,  -101,   -30,  -102,
      86,  -102,  -102,  -100,   -21,   -48
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     8,     2,    37,    30,    23,    24,    63,    39,
      64,    65,    98,    66,   107,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    89,    21,    85
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      86,    27,    91,    99,    93,    94,    95,    96,    34,   108,
     152,    88,     9,   117,   133,    42,    92,   119,   109,    41,
     110,   120,   118,   102,   104,   106,   111,   141,   167,   168,
     169,    17,  -100,   129,   171,   126,   172,   130,   145,    18,
      17,   175,    19,    35,    36,   131,   101,   103,    18,   182,
      20,    19,    10,     3,    45,   127,    11,    46,    12,    20,
      47,    48,    13,   153,    49,    50,   132,   114,     4,   139,
       5,   115,     6,   116,   155,   156,   187,     7,   142,    51,
      88,    52,    53,   193,    54,   157,   158,   150,    55,   164,
     165,    56,    14,    57,    58,    15,    59,    60,   173,    61,
      62,    16,    17,   177,    88,   179,    88,   181,   149,    22,
      18,    88,    17,    19,   178,    25,   180,    17,    33,    88,
      18,    20,    26,    19,    17,    18,    28,    29,    19,    31,
      38,    20,    18,   138,   186,    19,    20,    40,    90,   122,
     123,    43,    97,    20,   124,   125,    88,   160,   161,   162,
     163,   196,   112,    88,   113,   128,   121,   133,   201,   195,
     203,    45,   134,   110,    46,   207,   136,    47,    48,   137,
     140,    49,    50,   111,   144,   143,    36,   184,   146,   147,
     174,   197,   191,   148,   189,   198,    51,    32,    52,    53,
     176,    54,   183,   154,   200,    55,   205,   202,    56,   100,
      57,    58,    45,   135,    60,    46,    61,    62,    47,    48,
      44,   159,    49,    50,   166,   170,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,    52,
      53,     0,    54,     0,     0,     0,    55,     0,     0,    56,
       0,    57,    58,    45,   151,    60,    46,    61,    62,    47,
      48,     0,     0,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
      52,    53,     0,    54,     0,     0,     0,    55,     0,     0,
      56,     0,    57,    58,    45,   185,    60,    46,    61,    62,
      47,    48,     0,     0,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,    52,    53,     0,    54,     0,     0,     0,    55,     0,
       0,    56,     0,    57,    58,    45,   188,    60,    46,    61,
      62,    47,    48,     0,     0,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,    52,    53,     0,    54,     0,     0,     0,    55,
       0,     0,    56,     0,    57,    58,    45,   190,    60,    46,
      61,    62,    47,    48,     0,     0,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,    52,    53,     0,    54,     0,     0,     0,
      55,     0,     0,    56,     0,    57,    58,    45,   192,    60,
      46,    61,    62,    47,    48,     0,     0,    49,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,    52,    53,     0,    54,     0,     0,
       0,    55,     0,     0,    56,     0,    57,    58,    45,   194,
      60,    46,    61,    62,    47,    48,     0,     0,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,    52,    53,     0,    54,     0,
       0,     0,    55,     0,     0,    56,     0,    57,    58,    45,
     199,    60,    46,    61,    62,    47,    48,     0,     0,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,    52,    53,     0,    54,
       0,     0,     0,    55,     0,     0,    56,     0,    57,    58,
      45,   204,    60,    46,    61,    62,    47,    48,     0,     0,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,    52,    53,     0,
      54,     0,     0,     0,    55,     0,     0,    56,     0,    57,
      58,    45,   206,    60,    46,    61,    62,    47,    48,     0,
       0,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,    52,    53,
       0,    54,     0,     0,     0,    55,     0,     0,    56,     0,
      57,    58,    45,   208,    60,    46,    61,    62,    47,    48,
       0,     0,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,    52,
      53,     0,    54,     0,     0,     0,    55,     0,     0,    56,
       0,    57,    58,    45,     0,    60,    46,    61,    62,    47,
      48,     0,     0,    49,    50,    45,     0,     0,    46,   105,
       0,    47,    48,     0,     0,    49,    50,     0,    45,     0,
      52,    46,     0,     0,    47,    48,     0,     0,    49,    50,
      56,     0,    52,     0,     0,     0,    87,     0,    61,    62,
       0,     0,    56,     0,     0,    52,     0,     0,    87,     0,
      61,    62,     0,     0,     0,    56,     0,     0,     0,     0,
       0,    60,     0,    61,    62
};

static const yytype_int16 yycheck[] =
{
      40,    22,    45,    51,    47,    48,    49,    50,    29,    57,
     110,    41,     7,     9,    20,    36,    46,    10,    58,     7,
       7,    14,    18,    53,    54,    55,    13,    24,   129,   130,
     131,    28,    19,    12,   134,     5,   136,    16,    44,    36,
      28,   141,    39,    46,    47,    24,    53,    54,    36,   149,
      47,    39,    47,     0,     4,    25,    48,     7,    47,    47,
      10,    11,    47,   111,    14,    15,    45,    11,    33,    90,
      35,    15,    37,    17,   117,   118,   176,    42,    99,    29,
     110,    31,    32,   183,    34,   119,   120,   108,    38,   126,
     127,    41,    47,    43,    44,     7,    46,    47,   138,    49,
      50,    40,    28,   143,   134,   145,   136,   147,    24,    47,
      36,   141,    28,    39,   144,    44,   146,    28,    44,   149,
      36,    47,     8,    39,    28,    36,    13,     8,    39,    47,
       7,    47,    36,    44,   174,    39,    47,    44,     8,    21,
      22,    20,    47,    47,    26,    27,   176,   122,   123,   124,
     125,   191,    20,   183,    20,     6,    23,    20,   198,   189,
     200,     4,    19,     7,     7,   205,    13,    10,    11,     8,
       8,    14,    15,    13,    20,    44,    47,     8,    20,    44,
      44,    30,    44,    20,    20,    44,    29,    28,    31,    32,
      24,    34,    24,   116,    44,    38,    44,    30,    41,    53,
      43,    44,     4,    46,    47,     7,    49,    50,    10,    11,
      38,   121,    14,    15,   128,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    43,    44,     4,    46,    47,     7,    49,    50,    10,
      11,    -1,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    -1,    34,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    43,    44,     4,    46,    47,     7,    49,    50,
      10,    11,    -1,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    -1,    34,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    43,    44,     4,    46,    47,     7,    49,
      50,    10,    11,    -1,    -1,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    -1,    34,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    43,    44,     4,    46,    47,     7,
      49,    50,    10,    11,    -1,    -1,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    -1,    34,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    43,    44,     4,    46,    47,
       7,    49,    50,    10,    11,    -1,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    -1,    34,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    43,    44,     4,    46,
      47,     7,    49,    50,    10,    11,    -1,    -1,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    -1,    34,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    43,    44,     4,
      46,    47,     7,    49,    50,    10,    11,    -1,    -1,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    -1,    34,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    43,    44,
       4,    46,    47,     7,    49,    50,    10,    11,    -1,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    -1,
      34,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    43,
      44,     4,    46,    47,     7,    49,    50,    10,    11,    -1,
      -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      43,    44,     4,    46,    47,     7,    49,    50,    10,    11,
      -1,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    43,    44,     4,    -1,    47,     7,    49,    50,    10,
      11,    -1,    -1,    14,    15,     4,    -1,    -1,     7,    20,
      -1,    10,    11,    -1,    -1,    14,    15,    -1,     4,    -1,
      31,     7,    -1,    -1,    10,    11,    -1,    -1,    14,    15,
      41,    -1,    31,    -1,    -1,    -1,    47,    -1,    49,    50,
      -1,    -1,    41,    -1,    -1,    31,    -1,    -1,    47,    -1,
      49,    50,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    49,    50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    52,    54,     0,    33,    35,    37,    42,    53,     7,
      47,    48,    47,    47,    47,     7,    40,    28,    36,    39,
      47,    85,    47,    57,    58,    44,     8,    85,    13,     8,
      56,    47,    58,    44,    85,    46,    47,    55,     7,    60,
      44,     7,    85,    20,    57,     4,     7,    10,    11,    14,
      15,    29,    31,    32,    34,    38,    41,    43,    44,    46,
      47,    49,    50,    59,    61,    62,    64,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    86,    60,    47,    79,    84,
       8,    70,    79,    70,    70,    70,    70,    47,    63,    86,
      59,    66,    79,    66,    79,    20,    79,    65,    86,    60,
       7,    13,    20,    20,    11,    15,    17,     9,    18,    10,
      14,    23,    21,    22,    26,    27,     5,    25,     6,    12,
      16,    24,    45,    20,    19,    46,    13,     8,    44,    85,
       8,    24,    85,    44,    20,    44,    20,    44,    20,    24,
      85,    46,    84,    86,    55,    70,    70,    71,    71,    72,
      73,    73,    73,    73,    74,    74,    81,    78,    78,    78,
      76,    84,    84,    60,    44,    84,    24,    60,    79,    60,
      79,    60,    84,    24,     8,    46,    60,    84,    46,    20,
      46,    44,    46,    84,    46,    79,    60,    30,    44,    46,
      44,    60,    30,    60,    46,    44,    46,    60,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    55,    55,    55,    56,    56,    57,    58,    58,
      58,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    60,    60,    61,    61,    62,    63,
      63,    64,    65,    65,    65,    66,    67,    68,    68,    68,
      68,    68,    68,    69,    69,    69,    69,    69,    70,    70,
      70,    70,    70,    70,    71,    71,    71,    72,    72,    72,
      73,    73,    74,    74,    74,    74,    74,    75,    75,    75,
      76,    76,    77,    77,    78,    78,    78,    78,    79,    80,
      81,    82,    83,    84,    84,    84,    85,    85,    85,    85,
      86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     9,     8,     6,    13,    12,     2,     2,
       0,     2,     2,     1,     4,     0,     3,     2,     0,     1,
       3,     2,     2,     2,     3,     2,     5,     9,     5,     3,
       5,     7,     9,    11,     0,     2,     1,     1,     2,     3,
       4,     2,     2,     4,     3,     1,     3,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     2,     1,     2,     2,
       2,     2,     2,     1,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     0,     1,     3,     1,     1,     1,     1,
       1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

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

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, result);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner, YYSTYPE *result)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, result);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, YYSTYPE *result)
{
/* Lookahead token kind.  */
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
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  case 2: /* Program: ListDef  */
#line 180 "GoLang.y"
                  { (yyval.program_) = new PDefs((yyvsp[0].listdef_)); result->program_ = (yyval.program_); }
#line 1560 "Parser.C"
    break;

  case 3: /* Def: _KW_func T_Id _LPAREN ListArgument _RPAREN Type _LBRACE ListStatment _RBRACE  */
#line 182 "GoLang.y"
                                                                                   { std::reverse((yyvsp[-5].listargument_)->begin(),(yyvsp[-5].listargument_)->end()) ;(yyval.def_) = new DFun((yyvsp[-7]._string), (yyvsp[-5].listargument_), (yyvsp[-3].type_), (yyvsp[-1].liststatment_)); result->def_ = (yyval.def_); }
#line 1566 "Parser.C"
    break;

  case 4: /* Def: _KW_func T_Id _LPAREN ListArgument _RPAREN _LBRACE ListStatment _RBRACE  */
#line 183 "GoLang.y"
                                                                            { std::reverse((yyvsp[-4].listargument_)->begin(),(yyvsp[-4].listargument_)->end()) ;(yyval.def_) = new DFunWithoutType((yyvsp[-6]._string), (yyvsp[-4].listargument_), (yyvsp[-1].liststatment_)); result->def_ = (yyval.def_); }
#line 1572 "Parser.C"
    break;

  case 5: /* Def: _KW_type T_Id _KW_struct _LBRACE ListField _RBRACE  */
#line 184 "GoLang.y"
                                                       { (yyval.def_) = new DStruct((yyvsp[-4]._string), (yyvsp[-1].listfield_)); result->def_ = (yyval.def_); }
#line 1578 "Parser.C"
    break;

  case 6: /* Def: _KW_func _LPAREN T_Id Type _RPAREN T_Id _LPAREN Argument _RPAREN Type _LBRACE ListStatment _RBRACE  */
#line 185 "GoLang.y"
                                                                                                       { (yyval.def_) = new DMethode((yyvsp[-10]._string), (yyvsp[-9].type_), (yyvsp[-7]._string), (yyvsp[-5].argument_), (yyvsp[-3].type_), (yyvsp[-1].liststatment_)); result->def_ = (yyval.def_); }
#line 1584 "Parser.C"
    break;

  case 7: /* Def: _KW_func _LPAREN T_Id Type _RPAREN T_Id _LPAREN Argument _RPAREN _LBRACE ListStatment _RBRACE  */
#line 186 "GoLang.y"
                                                                                                  { (yyval.def_) = new DMethodeWithoutType((yyvsp[-9]._string), (yyvsp[-8].type_), (yyvsp[-6]._string), (yyvsp[-4].argument_), (yyvsp[-1].liststatment_)); result->def_ = (yyval.def_); }
#line 1590 "Parser.C"
    break;

  case 8: /* Def: _KW_import T_Library  */
#line 187 "GoLang.y"
                         { (yyval.def_) = new DImport((yyvsp[0]._string)); result->def_ = (yyval.def_); }
#line 1596 "Parser.C"
    break;

  case 9: /* Def: _KW_package T_Id  */
#line 188 "GoLang.y"
                     { (yyval.def_) = new DPackage((yyvsp[0]._string)); result->def_ = (yyval.def_); }
#line 1602 "Parser.C"
    break;

  case 10: /* ListDef: %empty  */
#line 190 "GoLang.y"
                      { (yyval.listdef_) = new ListDef(); result->listdef_ = (yyval.listdef_); }
#line 1608 "Parser.C"
    break;

  case 11: /* ListDef: ListDef Def  */
#line 191 "GoLang.y"
                { (yyvsp[-1].listdef_)->push_back((yyvsp[0].def_)); (yyval.listdef_) = (yyvsp[-1].listdef_); result->listdef_ = (yyval.listdef_); }
#line 1614 "Parser.C"
    break;

  case 12: /* Field: T_Id Type  */
#line 193 "GoLang.y"
                  { (yyval.field_) = new FDeclaration((yyvsp[-1]._string), (yyvsp[0].type_)); result->field_ = (yyval.field_); }
#line 1620 "Parser.C"
    break;

  case 13: /* Field: T_Id  */
#line 194 "GoLang.y"
         { (yyval.field_) = new FStatment((yyvsp[0]._string)); result->field_ = (yyval.field_); }
#line 1626 "Parser.C"
    break;

  case 14: /* Field: T_Id _LPAREN ListExpression _RPAREN  */
#line 195 "GoLang.y"
                                        { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.field_) = new FStatmentMethode((yyvsp[-3]._string), (yyvsp[-1].listexpression_)); result->field_ = (yyval.field_); }
#line 1632 "Parser.C"
    break;

  case 15: /* ListField: %empty  */
#line 197 "GoLang.y"
                        { (yyval.listfield_) = new ListField(); result->listfield_ = (yyval.listfield_); }
#line 1638 "Parser.C"
    break;

  case 16: /* ListField: ListField Field _SEMI  */
#line 198 "GoLang.y"
                          { (yyvsp[-2].listfield_)->push_back((yyvsp[-1].field_)); (yyval.listfield_) = (yyvsp[-2].listfield_); result->listfield_ = (yyval.listfield_); }
#line 1644 "Parser.C"
    break;

  case 17: /* Argument: T_Id Type  */
#line 200 "GoLang.y"
                     { (yyval.argument_) = new AArgument((yyvsp[-1]._string), (yyvsp[0].type_)); result->argument_ = (yyval.argument_); }
#line 1650 "Parser.C"
    break;

  case 18: /* ListArgument: %empty  */
#line 202 "GoLang.y"
                           { (yyval.listargument_) = new ListArgument(); result->listargument_ = (yyval.listargument_); }
#line 1656 "Parser.C"
    break;

  case 19: /* ListArgument: Argument  */
#line 203 "GoLang.y"
             { (yyval.listargument_) = new ListArgument(); (yyval.listargument_)->push_back((yyvsp[0].argument_)); result->listargument_ = (yyval.listargument_); }
#line 1662 "Parser.C"
    break;

  case 20: /* ListArgument: Argument _COMMA ListArgument  */
#line 204 "GoLang.y"
                                 { (yyvsp[0].listargument_)->push_back((yyvsp[-2].argument_)); (yyval.listargument_) = (yyvsp[0].listargument_); result->listargument_ = (yyval.listargument_); }
#line 1668 "Parser.C"
    break;

  case 21: /* Statment: Expression _SEMI  */
#line 206 "GoLang.y"
                            { (yyval.statment_) = new SExprssion((yyvsp[-1].expression_)); result->statment_ = (yyval.statment_); }
#line 1674 "Parser.C"
    break;

  case 22: /* Statment: Declaration _SEMI  */
#line 207 "GoLang.y"
                      { (yyval.statment_) = new SDeclaration((yyvsp[-1].declaration_)); result->statment_ = (yyval.statment_); }
#line 1680 "Parser.C"
    break;

  case 23: /* Statment: SimpleStatment _SEMI  */
#line 208 "GoLang.y"
                         { (yyval.statment_) = new SSimpleStatment((yyvsp[-1].simplestatment_)); result->statment_ = (yyval.statment_); }
#line 1686 "Parser.C"
    break;

  case 24: /* Statment: _KW_return Expression _SEMI  */
#line 209 "GoLang.y"
                                { (yyval.statment_) = new SReturn((yyvsp[-1].expression_)); result->statment_ = (yyval.statment_); }
#line 1692 "Parser.C"
    break;

  case 25: /* Statment: _KW_return _SEMI  */
#line 210 "GoLang.y"
                     { (yyval.statment_) = new SReturnV(); result->statment_ = (yyval.statment_); }
#line 1698 "Parser.C"
    break;

  case 26: /* Statment: _KW_for Expression _LBRACE ListStatment _RBRACE  */
#line 211 "GoLang.y"
                                                    { (yyval.statment_) = new SWhile((yyvsp[-3].expression_), (yyvsp[-1].liststatment_)); result->statment_ = (yyval.statment_); }
#line 1704 "Parser.C"
    break;

  case 27: /* Statment: _KW_for SimpleStatment _SEMI Expression _SEMI Expression _LBRACE ListStatment _RBRACE  */
#line 212 "GoLang.y"
                                                                                          { (yyval.statment_) = new SFor((yyvsp[-7].simplestatment_), (yyvsp[-5].expression_), (yyvsp[-3].expression_), (yyvsp[-1].liststatment_)); result->statment_ = (yyval.statment_); }
#line 1710 "Parser.C"
    break;

  case 28: /* Statment: _KW_for Statment _LBRACE ListStatment _RBRACE  */
#line 213 "GoLang.y"
                                                  { (yyval.statment_) = new SForSimple((yyvsp[-3].statment_), (yyvsp[-1].liststatment_)); result->statment_ = (yyval.statment_); }
#line 1716 "Parser.C"
    break;

  case 29: /* Statment: _LBRACE ListStatment _RBRACE  */
#line 214 "GoLang.y"
                                 { (yyval.statment_) = new SBlock((yyvsp[-1].liststatment_)); result->statment_ = (yyval.statment_); }
#line 1722 "Parser.C"
    break;

  case 30: /* Statment: _KW_if Expression _LBRACE ListStatment _RBRACE  */
#line 215 "GoLang.y"
                                                   { (yyval.statment_) = new SIf((yyvsp[-3].expression_), (yyvsp[-1].liststatment_)); result->statment_ = (yyval.statment_); }
#line 1728 "Parser.C"
    break;

  case 31: /* Statment: _KW_if SimpleStatment _SEMI Expression _LBRACE ListStatment _RBRACE  */
#line 216 "GoLang.y"
                                                                        { (yyval.statment_) = new SIfSimple((yyvsp[-5].simplestatment_), (yyvsp[-3].expression_), (yyvsp[-1].liststatment_)); result->statment_ = (yyval.statment_); }
#line 1734 "Parser.C"
    break;

  case 32: /* Statment: _KW_if Expression _LBRACE ListStatment _RBRACE _KW_else _LBRACE ListStatment _RBRACE  */
#line 217 "GoLang.y"
                                                                                         { (yyval.statment_) = new SIfElse((yyvsp[-7].expression_), (yyvsp[-5].liststatment_), (yyvsp[-1].liststatment_)); result->statment_ = (yyval.statment_); }
#line 1740 "Parser.C"
    break;

  case 33: /* Statment: _KW_if SimpleStatment _SEMI Expression _LBRACE ListStatment _RBRACE _KW_else _LBRACE ListStatment _RBRACE  */
#line 218 "GoLang.y"
                                                                                                              { (yyval.statment_) = new SIfElseSimple((yyvsp[-9].simplestatment_), (yyvsp[-7].expression_), (yyvsp[-5].liststatment_), (yyvsp[-1].liststatment_)); result->statment_ = (yyval.statment_); }
#line 1746 "Parser.C"
    break;

  case 34: /* ListStatment: %empty  */
#line 220 "GoLang.y"
                           { (yyval.liststatment_) = new ListStatment(); result->liststatment_ = (yyval.liststatment_); }
#line 1752 "Parser.C"
    break;

  case 35: /* ListStatment: ListStatment Statment  */
#line 221 "GoLang.y"
                          { (yyvsp[-1].liststatment_)->push_back((yyvsp[0].statment_)); (yyval.liststatment_) = (yyvsp[-1].liststatment_); result->liststatment_ = (yyval.liststatment_); }
#line 1758 "Parser.C"
    break;

  case 36: /* Declaration: ConstDeclaration  */
#line 223 "GoLang.y"
                               { (yyval.declaration_) = new DeclarationConstDeclaration((yyvsp[0].constdeclaration_)); result->declaration_ = (yyval.declaration_); }
#line 1764 "Parser.C"
    break;

  case 37: /* Declaration: VariableDeclaration  */
#line 224 "GoLang.y"
                        { (yyval.declaration_) = new DeclarationVariableDeclaration((yyvsp[0].variabledeclaration_)); result->declaration_ = (yyval.declaration_); }
#line 1770 "Parser.C"
    break;

  case 38: /* ConstDeclaration: _KW_const ConstSpecification  */
#line 226 "GoLang.y"
                                                { (yyval.constdeclaration_) = new DConstant((yyvsp[0].constspecification_)); result->constdeclaration_ = (yyval.constdeclaration_); }
#line 1776 "Parser.C"
    break;

  case 39: /* ConstSpecification: ListId _EQ ListExpression  */
#line 228 "GoLang.y"
                                               { std::reverse((yyvsp[-2].listid_)->begin(),(yyvsp[-2].listid_)->end()) ; std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.constspecification_) = new ConstSpecification1((yyvsp[-2].listid_), (yyvsp[0].listexpression_)); result->constspecification_ = (yyval.constspecification_); }
#line 1782 "Parser.C"
    break;

  case 40: /* ConstSpecification: ListId Type _EQ ListExpression  */
#line 229 "GoLang.y"
                                   { std::reverse((yyvsp[-3].listid_)->begin(),(yyvsp[-3].listid_)->end()) ; std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.constspecification_) = new ConstSpecification2((yyvsp[-3].listid_), (yyvsp[-2].type_), (yyvsp[0].listexpression_)); result->constspecification_ = (yyval.constspecification_); }
#line 1788 "Parser.C"
    break;

  case 41: /* VariableDeclaration: _KW_var VariableSpecification  */
#line 231 "GoLang.y"
                                                    { (yyval.variabledeclaration_) = new DVariable((yyvsp[0].variablespecification_)); result->variabledeclaration_ = (yyval.variabledeclaration_); }
#line 1794 "Parser.C"
    break;

  case 42: /* VariableSpecification: ListId Type  */
#line 233 "GoLang.y"
                                    { std::reverse((yyvsp[-1].listid_)->begin(),(yyvsp[-1].listid_)->end()) ;(yyval.variablespecification_) = new VariableSpecification1((yyvsp[-1].listid_), (yyvsp[0].type_)); result->variablespecification_ = (yyval.variablespecification_); }
#line 1800 "Parser.C"
    break;

  case 43: /* VariableSpecification: ListId Type _EQ ListExpression  */
#line 234 "GoLang.y"
                                   { std::reverse((yyvsp[-3].listid_)->begin(),(yyvsp[-3].listid_)->end()) ; std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.variablespecification_) = new VariableSpecification2((yyvsp[-3].listid_), (yyvsp[-2].type_), (yyvsp[0].listexpression_)); result->variablespecification_ = (yyval.variablespecification_); }
#line 1806 "Parser.C"
    break;

  case 44: /* VariableSpecification: ListId _EQ ListExpression  */
#line 235 "GoLang.y"
                              { std::reverse((yyvsp[-2].listid_)->begin(),(yyvsp[-2].listid_)->end()) ; std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.variablespecification_) = new VariableSpecification3((yyvsp[-2].listid_), (yyvsp[0].listexpression_)); result->variablespecification_ = (yyval.variablespecification_); }
#line 1812 "Parser.C"
    break;

  case 45: /* SimpleStatment: ShortVariableDeclaration  */
#line 237 "GoLang.y"
                                          { (yyval.simplestatment_) = new SimpleStatmentShortVariableDeclaration((yyvsp[0].shortvariabledeclaration_)); result->simplestatment_ = (yyval.simplestatment_); }
#line 1818 "Parser.C"
    break;

  case 46: /* ShortVariableDeclaration: ListId _COLONEQ ListExpression  */
#line 239 "GoLang.y"
                                                          { std::reverse((yyvsp[-2].listid_)->begin(),(yyvsp[-2].listid_)->end()) ; std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.shortvariabledeclaration_) = new SDVar((yyvsp[-2].listid_), (yyvsp[0].listexpression_)); result->shortvariabledeclaration_ = (yyval.shortvariabledeclaration_); }
#line 1824 "Parser.C"
    break;

  case 47: /* Expression15: _KW_true  */
#line 241 "GoLang.y"
                        { (yyval.expression_) = new ETrue(); result->expression_ = (yyval.expression_); }
#line 1830 "Parser.C"
    break;

  case 48: /* Expression15: _KW_false  */
#line 242 "GoLang.y"
              { (yyval.expression_) = new EFalse(); result->expression_ = (yyval.expression_); }
#line 1836 "Parser.C"
    break;

  case 49: /* Expression15: _INTEGER_  */
#line 243 "GoLang.y"
              { (yyval.expression_) = new EInt((yyvsp[0]._int)); result->expression_ = (yyval.expression_); }
#line 1842 "Parser.C"
    break;

  case 50: /* Expression15: _DOUBLE_  */
#line 244 "GoLang.y"
             { (yyval.expression_) = new EDouble((yyvsp[0]._double)); result->expression_ = (yyval.expression_); }
#line 1848 "Parser.C"
    break;

  case 51: /* Expression15: T_Id  */
#line 245 "GoLang.y"
         { (yyval.expression_) = new EId((yyvsp[0]._string)); result->expression_ = (yyval.expression_); }
#line 1854 "Parser.C"
    break;

  case 52: /* Expression15: _LPAREN Expression _RPAREN  */
#line 246 "GoLang.y"
                               { (yyval.expression_) = (yyvsp[-1].expression_); result->expression_ = (yyval.expression_); }
#line 1860 "Parser.C"
    break;

  case 53: /* Expression14: T_Id _LPAREN ListExpression _RPAREN  */
#line 248 "GoLang.y"
                                                   { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.expression_) = new EApp((yyvsp[-3]._string), (yyvsp[-1].listexpression_)); result->expression_ = (yyval.expression_); }
#line 1866 "Parser.C"
    break;

  case 54: /* Expression14: Expression14 _DOT Field  */
#line 249 "GoLang.y"
                            { (yyval.expression_) = new EProj((yyvsp[-2].expression_), (yyvsp[0].field_)); result->expression_ = (yyval.expression_); }
#line 1872 "Parser.C"
    break;

  case 55: /* Expression14: Expression14 _DPLUS  */
#line 250 "GoLang.y"
                        { (yyval.expression_) = new EPIncr((yyvsp[-1].expression_)); result->expression_ = (yyval.expression_); }
#line 1878 "Parser.C"
    break;

  case 56: /* Expression14: Expression14 _DMINUS  */
#line 251 "GoLang.y"
                         { (yyval.expression_) = new EPDecr((yyvsp[-1].expression_)); result->expression_ = (yyval.expression_); }
#line 1884 "Parser.C"
    break;

  case 57: /* Expression14: Expression15  */
#line 252 "GoLang.y"
                 { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 1890 "Parser.C"
    break;

  case 58: /* Expression13: _DPLUS Expression13  */
#line 254 "GoLang.y"
                                   { (yyval.expression_) = new EIncr((yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 1896 "Parser.C"
    break;

  case 59: /* Expression13: _DMINUS Expression13  */
#line 255 "GoLang.y"
                         { (yyval.expression_) = new EDecr((yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 1902 "Parser.C"
    break;

  case 60: /* Expression13: _PLUS Expression13  */
#line 256 "GoLang.y"
                       { (yyval.expression_) = new EUPlus((yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 1908 "Parser.C"
    break;

  case 61: /* Expression13: _MINUS Expression13  */
#line 257 "GoLang.y"
                        { (yyval.expression_) = new EUMinus((yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 1914 "Parser.C"
    break;

  case 62: /* Expression13: _BANG Expression13  */
#line 258 "GoLang.y"
                       { (yyval.expression_) = new ENeg((yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 1920 "Parser.C"
    break;

  case 63: /* Expression13: Expression14  */
#line 259 "GoLang.y"
                 { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 1926 "Parser.C"
    break;

  case 64: /* Expression12: Expression12 _STAR Expression13  */
#line 261 "GoLang.y"
                                               { (yyval.expression_) = new ETimes((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 1932 "Parser.C"
    break;

  case 65: /* Expression12: Expression12 _SLASH Expression13  */
#line 262 "GoLang.y"
                                     { (yyval.expression_) = new EDiv((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 1938 "Parser.C"
    break;

  case 66: /* Expression12: Expression13  */
#line 263 "GoLang.y"
                 { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 1944 "Parser.C"
    break;

  case 67: /* Expression11: Expression11 _PLUS Expression12  */
#line 265 "GoLang.y"
                                               { (yyval.expression_) = new EPlus((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 1950 "Parser.C"
    break;

  case 68: /* Expression11: Expression11 _MINUS Expression12  */
#line 266 "GoLang.y"
                                     { (yyval.expression_) = new EMinus((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 1956 "Parser.C"
    break;

  case 69: /* Expression11: Expression12  */
#line 267 "GoLang.y"
                 { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 1962 "Parser.C"
    break;

  case 70: /* Expression10: Expression10 _SYMB_16 Expression11  */
#line 269 "GoLang.y"
                                                  { (yyval.expression_) = new ETwc((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 1968 "Parser.C"
    break;

  case 71: /* Expression10: Expression11  */
#line 270 "GoLang.y"
                 { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 1974 "Parser.C"
    break;

  case 72: /* Expression9: Expression9 _LT Expression10  */
#line 272 "GoLang.y"
                                           { (yyval.expression_) = new ELt((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 1980 "Parser.C"
    break;

  case 73: /* Expression9: Expression9 _GT Expression10  */
#line 273 "GoLang.y"
                                 { (yyval.expression_) = new EGt((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 1986 "Parser.C"
    break;

  case 74: /* Expression9: Expression9 _LDARROW Expression10  */
#line 274 "GoLang.y"
                                      { (yyval.expression_) = new ELtEq((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 1992 "Parser.C"
    break;

  case 75: /* Expression9: Expression9 _GTEQ Expression10  */
#line 275 "GoLang.y"
                                   { (yyval.expression_) = new EGtEq((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 1998 "Parser.C"
    break;

  case 76: /* Expression9: Expression10  */
#line 276 "GoLang.y"
                 { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 2004 "Parser.C"
    break;

  case 77: /* Expression8: Expression8 _DEQ Expression9  */
#line 278 "GoLang.y"
                                           { (yyval.expression_) = new EEq((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 2010 "Parser.C"
    break;

  case 78: /* Expression8: Expression8 _BANGEQ Expression9  */
#line 279 "GoLang.y"
                                    { (yyval.expression_) = new ENEq((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 2016 "Parser.C"
    break;

  case 79: /* Expression8: Expression9  */
#line 280 "GoLang.y"
                { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 2022 "Parser.C"
    break;

  case 80: /* Expression4: Expression4 _DAMP Expression5  */
#line 282 "GoLang.y"
                                            { (yyval.expression_) = new EAnd((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 2028 "Parser.C"
    break;

  case 81: /* Expression4: Expression5  */
#line 283 "GoLang.y"
                { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 2034 "Parser.C"
    break;

  case 82: /* Expression3: Expression3 _DBAR Expression4  */
#line 285 "GoLang.y"
                                            { (yyval.expression_) = new EOr((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 2040 "Parser.C"
    break;

  case 83: /* Expression3: Expression4  */
#line 286 "GoLang.y"
                { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 2046 "Parser.C"
    break;

  case 84: /* Expression2: Expression3 _EQ Expression2  */
#line 288 "GoLang.y"
                                          { (yyval.expression_) = new EAss((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 2052 "Parser.C"
    break;

  case 85: /* Expression2: Expression3 _PLUSEQ Expression2  */
#line 289 "GoLang.y"
                                    { (yyval.expression_) = new EAssadd((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 2058 "Parser.C"
    break;

  case 86: /* Expression2: Expression3 _MINUSEQ Expression2  */
#line 290 "GoLang.y"
                                     { (yyval.expression_) = new EAssSub((yyvsp[-2].expression_), (yyvsp[0].expression_)); result->expression_ = (yyval.expression_); }
#line 2064 "Parser.C"
    break;

  case 87: /* Expression2: Expression3  */
#line 291 "GoLang.y"
                { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 2070 "Parser.C"
    break;

  case 88: /* Expression: Expression1  */
#line 293 "GoLang.y"
                         { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 2076 "Parser.C"
    break;

  case 89: /* Expression1: Expression2  */
#line 295 "GoLang.y"
                          { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 2082 "Parser.C"
    break;

  case 90: /* Expression5: Expression6  */
#line 297 "GoLang.y"
                          { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 2088 "Parser.C"
    break;

  case 91: /* Expression6: Expression7  */
#line 299 "GoLang.y"
                          { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 2094 "Parser.C"
    break;

  case 92: /* Expression7: Expression8  */
#line 301 "GoLang.y"
                          { (yyval.expression_) = (yyvsp[0].expression_); result->expression_ = (yyval.expression_); }
#line 2100 "Parser.C"
    break;

  case 93: /* ListExpression: %empty  */
#line 303 "GoLang.y"
                             { (yyval.listexpression_) = new ListExpression(); result->listexpression_ = (yyval.listexpression_); }
#line 2106 "Parser.C"
    break;

  case 94: /* ListExpression: Expression  */
#line 304 "GoLang.y"
               { (yyval.listexpression_) = new ListExpression(); (yyval.listexpression_)->push_back((yyvsp[0].expression_)); result->listexpression_ = (yyval.listexpression_); }
#line 2112 "Parser.C"
    break;

  case 95: /* ListExpression: Expression _COMMA ListExpression  */
#line 305 "GoLang.y"
                                     { (yyvsp[0].listexpression_)->push_back((yyvsp[-2].expression_)); (yyval.listexpression_) = (yyvsp[0].listexpression_); result->listexpression_ = (yyval.listexpression_); }
#line 2118 "Parser.C"
    break;

  case 96: /* Type: _KW_bool  */
#line 307 "GoLang.y"
                { (yyval.type_) = new Type_bool(); result->type_ = (yyval.type_); }
#line 2124 "Parser.C"
    break;

  case 97: /* Type: _KW_int  */
#line 308 "GoLang.y"
            { (yyval.type_) = new Type_int(); result->type_ = (yyval.type_); }
#line 2130 "Parser.C"
    break;

  case 98: /* Type: T_Id  */
#line 309 "GoLang.y"
         { (yyval.type_) = new TypeId((yyvsp[0]._string)); result->type_ = (yyval.type_); }
#line 2136 "Parser.C"
    break;

  case 99: /* Type: _KW_string  */
#line 310 "GoLang.y"
               { (yyval.type_) = new Type_string(); result->type_ = (yyval.type_); }
#line 2142 "Parser.C"
    break;

  case 100: /* ListId: T_Id  */
#line 316 "GoLang.y"
              { (yyval.listid_) = new ListId(); (yyval.listid_)->push_back((yyvsp[0]._string)); result->listid_ = (yyval.listid_); }
#line 2148 "Parser.C"
    break;

  case 101: /* ListId: T_Id _COMMA ListId  */
#line 317 "GoLang.y"
                       { (yyvsp[0].listid_)->push_back((yyvsp[-2]._string)); (yyval.listid_) = (yyvsp[0].listid_); result->listid_ = (yyval.listid_); }
#line 2154 "Parser.C"
    break;


#line 2158 "Parser.C"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, scanner, result, YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, result, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 320 "GoLang.y"



/* Entrypoint: parse Program* from file. */
Program* pProgram(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
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
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
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
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
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
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
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
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
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
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
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
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
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
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
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
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listfield_;
  }
}

/* Entrypoint: parse ListField* from string. */
ListField* psListField(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listfield_;
  }
}

/* Entrypoint: parse Argument* from file. */
Argument* pArgument(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.argument_;
  }
}

/* Entrypoint: parse Argument* from string. */
Argument* psArgument(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.argument_;
  }
}

/* Entrypoint: parse ListArgument* from file. */
ListArgument* pListArgument(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listargument_->begin(), result.listargument_->end());
    return result.listargument_;
  }
}

/* Entrypoint: parse ListArgument* from string. */
ListArgument* psListArgument(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listargument_->begin(), result.listargument_->end());
    return result.listargument_;
  }
}

/* Entrypoint: parse Statment* from file. */
Statment* pStatment(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.statment_;
  }
}

/* Entrypoint: parse Statment* from string. */
Statment* psStatment(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.statment_;
  }
}

/* Entrypoint: parse ListStatment* from file. */
ListStatment* pListStatment(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.liststatment_;
  }
}

/* Entrypoint: parse ListStatment* from string. */
ListStatment* psListStatment(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.liststatment_;
  }
}

/* Entrypoint: parse Declaration* from file. */
Declaration* pDeclaration(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.declaration_;
  }
}

/* Entrypoint: parse Declaration* from string. */
Declaration* psDeclaration(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.declaration_;
  }
}

/* Entrypoint: parse ConstDeclaration* from file. */
ConstDeclaration* pConstDeclaration(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.constdeclaration_;
  }
}

/* Entrypoint: parse ConstDeclaration* from string. */
ConstDeclaration* psConstDeclaration(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.constdeclaration_;
  }
}

/* Entrypoint: parse ConstSpecification* from file. */
ConstSpecification* pConstSpecification(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.constspecification_;
  }
}

/* Entrypoint: parse ConstSpecification* from string. */
ConstSpecification* psConstSpecification(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.constspecification_;
  }
}

/* Entrypoint: parse VariableDeclaration* from file. */
VariableDeclaration* pVariableDeclaration(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.variabledeclaration_;
  }
}

/* Entrypoint: parse VariableDeclaration* from string. */
VariableDeclaration* psVariableDeclaration(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.variabledeclaration_;
  }
}

/* Entrypoint: parse VariableSpecification* from file. */
VariableSpecification* pVariableSpecification(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.variablespecification_;
  }
}

/* Entrypoint: parse VariableSpecification* from string. */
VariableSpecification* psVariableSpecification(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.variablespecification_;
  }
}

/* Entrypoint: parse SimpleStatment* from file. */
SimpleStatment* pSimpleStatment(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.simplestatment_;
  }
}

/* Entrypoint: parse SimpleStatment* from string. */
SimpleStatment* psSimpleStatment(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.simplestatment_;
  }
}

/* Entrypoint: parse ShortVariableDeclaration* from file. */
ShortVariableDeclaration* pShortVariableDeclaration(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.shortvariabledeclaration_;
  }
}

/* Entrypoint: parse ShortVariableDeclaration* from string. */
ShortVariableDeclaration* psShortVariableDeclaration(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.shortvariabledeclaration_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression15(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression15(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression14(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression14(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression13(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression13(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression12(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression12(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression11(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression11(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression10(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression10(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression9(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression9(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression8(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression8(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression4(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression4(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression3(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression3(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression5(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression5(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression6(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression6(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression7(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression7(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse ListExpression* from file. */
ListExpression* pListExpression(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexpression_->begin(), result.listexpression_->end());
    return result.listexpression_;
  }
}

/* Entrypoint: parse ListExpression* from string. */
ListExpression* psListExpression(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexpression_->begin(), result.listexpression_->end());
    return result.listexpression_;
  }
}

/* Entrypoint: parse Type* from file. */
Type* pType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
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
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse ListType* from file. */
ListType* pListType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listtype_->begin(), result.listtype_->end());
    return result.listtype_;
  }
}

/* Entrypoint: parse ListType* from string. */
ListType* psListType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listtype_->begin(), result.listtype_->end());
    return result.listtype_;
  }
}

/* Entrypoint: parse ListId* from file. */
ListId* pListId(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = go_lang__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  go_lang_lex_destroy(scanner);
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
  yyscan_t scanner = go_lang__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = go_lang__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  go_lang__delete_buffer(buf, scanner);
  go_lang_lex_destroy(scanner);
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



