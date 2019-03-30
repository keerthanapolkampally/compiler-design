
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "par.y"

	#include <stdlib.h>
	#include <stdio.h>

	int yyerror(char *msg);

	#include "scope_sym.h"
	#include "lex.yy.c"
	#define SCOPE_LIST scope_list[cur_scope].symbol_table
	
	void error_expr(int,int,int);

	int cur_datatype, param_list[10], func_type;
	int p_idx = 0, p=0, right_side = 0;
	int is_decl = 0, is_loop = 0, is_func = 0,ret_status = 0;
    
	extern insert1** constant_table;
    insert2 scope_list[num_tables];



/* Line 189 of yacc.c  */
#line 95 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     LOGICAL_AND = 259,
     LOGICAL_OR = 260,
     LS_EQ = 261,
     GR_EQ = 262,
     EQ = 263,
     NOT_EQ = 264,
     MUL_ASSIGN = 265,
     DIV_ASSIGN = 266,
     MOD_ASSIGN = 267,
     ADD_ASSIGN = 268,
     SUB_ASSIGN = 269,
     INCREMENT = 270,
     DECREMENT = 271,
     SHORT = 272,
     INT = 273,
     LONG = 274,
     LONG_LONG = 275,
     SIGNED = 276,
     UNSIGNED = 277,
     CONST = 278,
     VOID = 279,
     CHAR = 280,
     FLOAT = 281,
     IF = 282,
     FOR = 283,
     WHILE = 284,
     CONTINUE = 285,
     BREAK = 286,
     RETURN = 287,
     IDENTIFIER = 288,
     DEC_CONSTANT = 289,
     HEX_CONSTANT = 290,
     CHAR_CONSTANT = 291,
     FLOAT_CONSTANT = 292,
     UMINUS = 293,
     LOWER_THAN_ELSE = 294,
     ELSE = 295
   };
#endif
/* Tokens.  */
#define STRING 258
#define LOGICAL_AND 259
#define LOGICAL_OR 260
#define LS_EQ 261
#define GR_EQ 262
#define EQ 263
#define NOT_EQ 264
#define MUL_ASSIGN 265
#define DIV_ASSIGN 266
#define MOD_ASSIGN 267
#define ADD_ASSIGN 268
#define SUB_ASSIGN 269
#define INCREMENT 270
#define DECREMENT 271
#define SHORT 272
#define INT 273
#define LONG 274
#define LONG_LONG 275
#define SIGNED 276
#define UNSIGNED 277
#define CONST 278
#define VOID 279
#define CHAR 280
#define FLOAT 281
#define IF 282
#define FOR 283
#define WHILE 284
#define CONTINUE 285
#define BREAK 286
#define RETURN 287
#define IDENTIFIER 288
#define DEC_CONSTANT 289
#define HEX_CONSTANT 290
#define CHAR_CONSTANT 291
#define FLOAT_CONSTANT 292
#define UMINUS 293
#define LOWER_THAN_ELSE 294
#define ELSE 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 23 "par.y"

	int data_type;
	insert1* val1;



/* Line 214 of yacc.c  */
#line 218 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 230 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   478

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNRULES -- Number of states.  */
#define YYNSTATES  196

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,     2,     2,    46,     2,     2,
      52,    53,    44,    42,    38,    43,     2,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    51,
      40,    39,    41,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    55,     2,     2,     2,     2,
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
      35,    36,    37,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    12,    16,    19,    22,
      26,    28,    30,    32,    34,    35,    36,    45,    48,    50,
      53,    55,    58,    60,    62,    64,    66,    69,    71,    73,
      76,    78,    81,    83,    85,    87,    89,    90,    94,    96,
      99,   101,   103,   104,   105,   111,   114,   115,   117,   119,
     121,   123,   126,   129,   132,   135,   139,   140,   148,   149,
     158,   164,   172,   173,   180,   183,   185,   189,   191,   195,
     199,   203,   207,   211,   215,   219,   223,   226,   228,   230,
     232,   236,   240,   244,   248,   252,   255,   258,   261,   264,
     266,   268,   270,   272,   274,   276,   278,   280,   282,   286,
     290,   294,   298,   302,   306,   309,   311,   313,   315,   317,
     319,   321,   326,   328,   330,   334,   338,   342,   346,   351,
     355,   359,   361,   363
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    59,    60,    -1,    60,    -1,    64,    -1,
      61,    -1,    67,    62,    51,    -1,    62,    51,    -1,    91,
      51,    -1,    62,    38,    63,    -1,    63,    -1,    90,    -1,
      93,    -1,    97,    -1,    -1,    -1,    67,    93,    65,    52,
      72,    53,    66,    76,    -1,    68,    69,    -1,    68,    -1,
      70,    71,    -1,    71,    -1,    44,    69,    -1,    44,    -1,
      21,    -1,    22,    -1,    18,    -1,    17,    18,    -1,    17,
      -1,    19,    -1,    19,    18,    -1,    20,    -1,    20,    18,
      -1,    25,    -1,    26,    -1,    24,    -1,    73,    -1,    -1,
      73,    38,    74,    -1,    74,    -1,    67,    93,    -1,    76,
      -1,    80,    -1,    -1,    -1,    54,    77,    79,    78,    55,
      -1,    79,    75,    -1,    -1,    84,    -1,    81,    -1,    85,
      -1,    61,    -1,    99,    51,    -1,    32,    51,    -1,    30,
      51,    -1,    31,    51,    -1,    32,    89,    51,    -1,    -1,
      28,    52,    87,    87,    53,    82,    75,    -1,    -1,    28,
      52,    87,    87,    88,    53,    83,    75,    -1,    27,    52,
      88,    53,    75,    -1,    27,    52,    88,    53,    75,    50,
      75,    -1,    -1,    29,    52,    88,    53,    86,    75,    -1,
      88,    51,    -1,    51,    -1,    88,    38,    89,    -1,    89,
      -1,    89,    41,    89,    -1,    89,    40,    89,    -1,    89,
       8,    89,    -1,    89,     9,    89,    -1,    89,     6,    89,
      -1,    89,     7,    89,    -1,    89,     4,    89,    -1,    89,
       5,    89,    -1,    47,    89,    -1,    95,    -1,    90,    -1,
      91,    -1,    92,    94,    95,    -1,    92,    94,    97,    -1,
      92,    94,    99,    -1,    92,    94,    91,    -1,    91,    94,
      91,    -1,    93,    15,    -1,    93,    16,    -1,    16,    93,
      -1,    15,    93,    -1,    93,    -1,    97,    -1,    33,    -1,
      39,    -1,    13,    -1,    14,    -1,    10,    -1,    11,    -1,
      12,    -1,    95,    42,    95,    -1,    95,    43,    95,    -1,
      95,    44,    95,    -1,    95,    45,    95,    -1,    95,    46,
      95,    -1,    52,    95,    53,    -1,    43,    95,    -1,    93,
      -1,    96,    -1,    34,    -1,    35,    -1,    36,    -1,    37,
      -1,    93,    56,    98,    57,    -1,    96,    -1,    93,    -1,
      93,    42,    93,    -1,    93,    43,    93,    -1,    93,    44,
      93,    -1,    93,    45,    93,    -1,    93,    52,   100,    53,
      -1,    93,    52,    53,    -1,   100,    38,   101,    -1,   101,
      -1,    89,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    72,    76,    77,    81,    82,    83,    87,
      88,    92,    93,    94,   100,   104,    99,   114,   115,   119,
     120,   124,   125,   129,   130,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   147,   148,   152,   153,   157,
     161,   162,   167,   170,   167,   177,   178,   182,   183,   184,
     185,   186,   187,   195,   196,   197,   208,   208,   209,   209,
     213,   214,   218,   218,   226,   227,   231,   232,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     252,   253,   254,   255,   256,   260,   261,   262,   263,   267,
     268,   272,   286,   287,   288,   289,   290,   291,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   307,   308,   309,
     310,   314,   339,   340,   341,   342,   343,   344,   348,   351,
     357,   358,   362,   363
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "LOGICAL_AND", "LOGICAL_OR",
  "LS_EQ", "GR_EQ", "EQ", "NOT_EQ", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "INCREMENT", "DECREMENT",
  "SHORT", "INT", "LONG", "LONG_LONG", "SIGNED", "UNSIGNED", "CONST",
  "VOID", "CHAR", "FLOAT", "IF", "FOR", "WHILE", "CONTINUE", "BREAK",
  "RETURN", "IDENTIFIER", "DEC_CONSTANT", "HEX_CONSTANT", "CHAR_CONSTANT",
  "FLOAT_CONSTANT", "','", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'!'", "UMINUS", "LOWER_THAN_ELSE", "ELSE", "';'", "'('", "')'",
  "'{'", "'}'", "'['", "']'", "$accept", "init1", "global", "declaration",
  "declaration_list", "sub_decl", "function", "$@1", "$@2", "type",
  "data_type", "pointer", "sign_specifier", "type_specifier",
  "argument_list", "arguments", "arg", "stmt", "compound_stmt", "$@3",
  "$@4", "statements", "single_stmt", "for_block", "$@5", "$@6",
  "if_block", "while_block", "$@7", "expression_stmt", "expression",
  "fundamental_expression", "assignment_expression", "unary_expression",
  "left_side", "identifier", "assign_op", "arithmetic_expression",
  "constant", "arr_def", "array_index", "function_definition",
  "parameter_list", "parameter", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    44,    61,
      60,    62,    43,    45,    42,    47,    37,    33,   293,   294,
     295,    59,    40,    41,   123,   125,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    60,    60,    61,    61,    61,    62,
      62,    63,    63,    63,    65,    66,    64,    67,    67,    68,
      68,    69,    69,    70,    70,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    73,    73,    74,
      75,    75,    77,    78,    76,    79,    79,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    82,    81,    83,    81,
      84,    84,    86,    85,    87,    87,    88,    88,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    90,    90,    90,    91,    91,    91,    91,    92,
      92,    93,    94,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      96,    97,    98,    98,    98,    98,    98,    98,    99,    99,
     100,   100,   101,   101
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     3,     2,     2,     3,
       1,     1,     1,     1,     0,     0,     8,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     2,     1,     1,     2,
       1,     2,     1,     1,     1,     1,     0,     3,     1,     2,
       1,     1,     0,     0,     5,     2,     0,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     0,     7,     0,     8,
       5,     7,     0,     6,     2,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     2,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     3,     3,     3,     3,     4,     3,
       3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    27,    25,    28,    30,    23,    24,    34,
      32,    33,    91,     0,     3,     5,     0,    10,     4,     0,
      18,     0,    20,    11,     0,     0,    89,    90,    88,    87,
      26,    29,    31,     1,     2,     0,     7,     0,     0,    89,
      22,    17,    19,    95,    96,    97,    93,    94,    92,     8,
       0,     0,    85,    86,     0,     9,     6,     0,    21,    84,
       0,   107,   108,   109,   110,     0,     0,    83,   105,    80,
     106,    81,    82,   113,   112,     0,    36,   105,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,     0,    35,    38,   103,   123,     0,   119,   122,
      78,    79,   105,    77,    90,     0,   121,    98,    99,   100,
     101,   102,   114,   115,   116,   117,    39,    15,     0,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,    37,    74,    75,    72,    73,    70,    71,    69,    68,
     120,    42,    16,    46,    43,     0,     0,     0,     0,     0,
       0,    50,     0,    45,    40,     0,    41,    48,    47,    49,
      89,     0,     0,     0,     0,    53,    54,    52,     0,    44,
      51,     0,    67,    65,     0,     0,     0,    55,     0,     0,
       0,    64,    62,    66,    60,    56,     0,     0,     0,     0,
      58,    63,    61,    57,     0,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,   151,    16,    17,    18,    57,   130,   152,
      20,    41,    21,    22,    92,    93,    94,   153,   154,   143,
     155,   144,   156,   157,   189,   194,   158,   159,   187,   174,
     175,   172,   100,   101,    25,   102,    50,   103,    70,   104,
      75,   161,   105,   106
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -149
static const yytype_int16 yypact[] =
{
     427,   -23,   -23,    -6,  -149,    -3,    30,  -149,  -149,  -149,
    -149,  -149,  -149,   404,  -149,  -149,    19,  -149,  -149,    10,
     -15,   447,  -149,  -149,   228,   170,    22,    25,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,    10,  -149,    39,   170,    -7,
     -15,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
      10,   358,  -149,  -149,   378,  -149,  -149,     7,  -149,  -149,
       5,  -149,  -149,  -149,  -149,   398,   398,  -149,    12,   432,
    -149,  -149,  -149,   182,  -149,    18,   437,  -149,  -149,   363,
     104,   398,   398,   398,   398,   398,   -23,   -23,   -23,   -23,
    -149,   -23,    51,    33,  -149,  -149,  -149,   335,  -149,   249,
    -149,   170,   158,   432,  -149,   -31,  -149,    89,    89,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,   437,  -149,
     335,   335,   335,   335,   335,   335,   335,   335,   200,  -149,
      40,  -149,   377,   120,  -149,  -149,    -1,    -1,  -149,  -149,
    -149,  -149,  -149,  -149,   244,    53,    56,    59,    67,    70,
     289,  -149,    10,  -149,  -149,    68,  -149,  -149,  -149,  -149,
      94,    79,   335,   312,   335,  -149,  -149,  -149,   108,  -149,
    -149,   -20,   249,  -149,   312,    41,     3,  -149,   335,   244,
     266,  -149,  -149,   249,    81,  -149,    14,   244,   244,   244,
    -149,  -149,  -149,  -149,   244,  -149
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,   129,    93,   -16,   119,  -149,  -149,  -149,     4,
    -149,   103,  -149,   137,  -149,  -149,    44,    99,    35,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,   -10,
    -148,   -25,    34,    11,  -149,     0,   141,   315,   122,    23,
    -149,   126,  -149,    57
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -90
static const yytype_int16 yytable[] =
{
      26,    28,    29,    37,    19,   122,   123,   128,    52,    53,
      12,    24,    30,    26,   171,    31,   176,    19,   178,    39,
      52,    53,   129,    27,    24,     1,     2,    52,    53,    40,
      38,   -12,   186,   179,    23,    26,    27,    52,    53,   126,
     127,   178,    27,    12,   -12,   -14,    38,    23,    32,    54,
      60,    68,   178,    23,    73,    99,   182,    35,    27,    76,
     -12,    59,    67,   -13,    80,    77,    77,   190,    54,    23,
      36,   118,   119,   -12,    71,    90,   -13,    35,    54,   178,
      91,    77,    77,    77,    77,    77,   112,   113,   114,   115,
      56,   116,   181,    15,   141,   132,   133,   134,   135,   136,
     137,   138,   139,    99,   117,   162,    15,    96,   163,    52,
      53,   164,   120,   121,   122,   123,   124,   125,   165,     1,
       2,   166,    91,   169,   120,   168,   122,   123,   124,   125,
     170,   188,   -12,    83,    84,    85,    37,    12,    61,    62,
      63,    64,    34,    58,   160,   -12,    80,    65,   126,   127,
      54,    97,    26,   183,    55,    24,    66,    98,    42,   177,
     126,   127,   131,    38,   180,   142,    51,    27,   -89,   -89,
     -89,   -89,   -89,    52,    53,    27,    74,    72,    23,   160,
      43,    44,    45,    46,    47,   140,    23,   160,   160,   160,
      24,     0,     0,     0,   160,     0,     0,   -89,    24,    24,
      24,     0,    27,    96,     0,    24,     0,     0,     0,    48,
      27,    27,    27,    23,    54,     1,     2,    27,     0,     0,
       0,    23,    23,    23,    86,    87,    88,    89,    23,     0,
       0,     0,     0,    12,    61,    62,    63,    64,    43,    44,
      45,    46,    47,    65,     0,     0,     0,    97,     0,     0,
       0,     0,    66,   120,   121,   122,   123,   124,   125,     1,
       2,     3,     4,     5,     6,     7,     8,    48,     9,    10,
      11,   145,   146,   147,   148,   149,   150,    12,   184,    49,
       0,     1,     2,     0,     0,     0,   191,   192,   193,   126,
     127,     0,     0,   195,     0,     0,     0,     0,   141,    12,
      61,    62,    63,    64,     1,     2,     0,     0,     0,    65,
       0,     0,     0,    97,     0,     0,     0,     0,    66,   185,
       0,     0,    12,    61,    62,    63,    64,     1,     2,     0,
       0,     0,    65,     0,     0,     0,    97,     0,     0,     0,
     167,    66,     0,     0,     0,    12,    61,    62,    63,    64,
       1,     2,     0,     0,     0,    65,     0,     0,     0,    97,
       0,     0,     0,   173,    66,     0,    69,     0,    12,    61,
      62,    63,    64,     1,     2,     0,     0,     0,    65,     0,
      78,    79,    97,   122,   123,   124,   125,    66,     0,     0,
       0,    12,    61,    62,    63,    64,   107,   108,   109,   110,
     111,    65,     0,     0,    33,    81,    82,    83,    84,    85,
      66,    12,    61,    62,    63,    64,    95,   126,   127,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     9,    10,
      11,    12,    61,    62,    63,    64,     0,    12,     0,     0,
       0,    65,     1,     2,     3,     4,     5,     6,     7,     8,
      66,     9,    10,    11,     3,     4,     5,     6,     7,     8,
      12,     9,    10,    11,     3,     4,     5,     6,     0,     0,
       0,     9,    10,    11,    81,    82,    83,    84,    85
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,    19,     0,     6,     7,    38,    15,    16,
      33,     0,    18,    13,   162,    18,   164,    13,    38,    19,
      15,    16,    53,     0,    13,    15,    16,    15,    16,    44,
      19,    38,   180,    53,     0,    35,    13,    15,    16,    40,
      41,    38,    19,    33,    51,    52,    35,    13,    18,    56,
      50,    51,    38,    19,    54,    80,    53,    38,    35,    52,
      38,    50,    51,    38,    52,    65,    66,    53,    56,    35,
      51,    38,    97,    51,    51,    57,    51,    38,    56,    38,
      76,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      51,    91,    51,     0,    54,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    53,    52,    13,     3,    52,    15,
      16,    52,     4,     5,     6,     7,     8,     9,    51,    15,
      16,    51,   118,    55,     4,   150,     6,     7,     8,     9,
      51,    50,    38,    44,    45,    46,   152,    33,    34,    35,
      36,    37,    13,    40,   144,    51,    52,    43,    40,    41,
      56,    47,   152,   178,    35,   144,    52,    53,    21,    51,
      40,    41,   118,   152,   174,   130,    25,   144,    10,    11,
      12,    13,    14,    15,    16,   152,    54,    51,   144,   179,
      10,    11,    12,    13,    14,   128,   152,   187,   188,   189,
     179,    -1,    -1,    -1,   194,    -1,    -1,    39,   187,   188,
     189,    -1,   179,     3,    -1,   194,    -1,    -1,    -1,    39,
     187,   188,   189,   179,    56,    15,    16,   194,    -1,    -1,
      -1,   187,   188,   189,    42,    43,    44,    45,   194,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    10,    11,
      12,    13,    14,    43,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    52,     4,     5,     6,     7,     8,     9,    15,
      16,    17,    18,    19,    20,    21,    22,    39,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,   179,    51,
      -1,    15,    16,    -1,    -1,    -1,   187,   188,   189,    40,
      41,    -1,    -1,   194,    -1,    -1,    -1,    -1,    54,    33,
      34,    35,    36,    37,    15,    16,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,    33,    34,    35,    36,    37,    15,    16,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      15,    16,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    52,    -1,    51,    -1,    33,    34,
      35,    36,    37,    15,    16,    -1,    -1,    -1,    43,    -1,
      65,    66,    47,     6,     7,     8,     9,    52,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    81,    82,    83,    84,
      85,    43,    -1,    -1,     0,    42,    43,    44,    45,    46,
      52,    33,    34,    35,    36,    37,    53,    40,    41,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    24,    25,
      26,    33,    34,    35,    36,    37,    -1,    33,    -1,    -1,
      -1,    43,    15,    16,    17,    18,    19,    20,    21,    22,
      52,    24,    25,    26,    17,    18,    19,    20,    21,    22,
      33,    24,    25,    26,    17,    18,    19,    20,    -1,    -1,
      -1,    24,    25,    26,    42,    43,    44,    45,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    16,    17,    18,    19,    20,    21,    22,    24,
      25,    26,    33,    59,    60,    61,    62,    63,    64,    67,
      68,    70,    71,    90,    91,    92,    93,    97,    93,    93,
      18,    18,    18,     0,    60,    38,    51,    62,    91,    93,
      44,    69,    71,    10,    11,    12,    13,    14,    39,    51,
      94,    94,    15,    16,    56,    63,    51,    65,    69,    91,
      93,    34,    35,    36,    37,    43,    52,    91,    93,    95,
      96,    97,    99,    93,    96,    98,    52,    93,    95,    95,
      52,    42,    43,    44,    45,    46,    42,    43,    44,    45,
      57,    67,    72,    73,    74,    53,     3,    47,    53,    89,
      90,    91,    93,    95,    97,   100,   101,    95,    95,    95,
      95,    95,    93,    93,    93,    93,    93,    53,    38,    89,
       4,     5,     6,     7,     8,     9,    40,    41,    38,    53,
      66,    74,    89,    89,    89,    89,    89,    89,    89,    89,
     101,    54,    76,    77,    79,    27,    28,    29,    30,    31,
      32,    61,    67,    75,    76,    78,    80,    81,    84,    85,
      93,    99,    52,    52,    52,    51,    51,    51,    89,    55,
      51,    88,    89,    51,    87,    88,    88,    51,    38,    53,
      87,    51,    53,    89,    75,    53,    88,    86,    50,    82,
      53,    75,    75,    75,    83,    75
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:

/* Line 1455 of yacc.c  */
#line 81 "par.y"
    { is_decl = 0; }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 100 "par.y"
    {   func_type = cur_datatype;
								is_decl = 0;
							    cur_scope = create_scope(); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 104 "par.y"
    {   is_decl = 0;
								fill_param_list((yyvsp[(2) - (6)].val1),param_list,p_idx);
								p_idx = 0;
								is_func = 1;
								p=1; }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 110 "par.y"
    {	is_func = 0; }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 114 "par.y"
    { is_decl = 1; }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 115 "par.y"
    { is_decl = 1; }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 134 "par.y"
    {cur_datatype = INT;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 135 "par.y"
    {cur_datatype = SHORT;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 136 "par.y"
    {cur_datatype = SHORT;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 137 "par.y"
    {cur_datatype = LONG;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 138 "par.y"
    {cur_datatype = LONG;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 139 "par.y"
    {cur_datatype = LONG_LONG;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 140 "par.y"
    {cur_datatype = LONG_LONG;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 141 "par.y"
    {cur_datatype = CHAR;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 142 "par.y"
    {cur_datatype = FLOAT;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 143 "par.y"
    {cur_datatype = VOID;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 157 "par.y"
    {  param_list[p_idx++] = (yyvsp[(2) - (2)].val1)->data_type;  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 167 "par.y"
    { if(!p)cur_scope = create_scope();
			 else p = 0; }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 170 "par.y"
    { if(func_type != VOID && ret_status == 0) yyerror("No return statement for non-void function.");
					if(ret_status == 1) ret_status = 0;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 173 "par.y"
    { cur_scope = exit_scope(); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 187 "par.y"
    { ret_status = 1;
						if(is_func)
					  {
						if(func_type != VOID)
						yyerror("return type (VOID) does not match function type");
					  }
					  else yyerror("return statement not inside function definition"); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 195 "par.y"
    { if(!is_loop) { yyerror("continue incorrectly used :( "); } }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 196 "par.y"
    { if(!is_loop) { yyerror("break incorrectly used :( "); } }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 197 "par.y"
    {      ret_status = 1;
														if(is_func)
													{
														if(func_type != (yyvsp[(2) - (3)].data_type))
														yyerror("return type does not match function type");
													}
													else yyerror("return statement not in function definition");
												 }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 208 "par.y"
    { is_loop = 1; }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 208 "par.y"
    { is_loop = 0; }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 209 "par.y"
    { is_loop = 1; }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 209 "par.y"
    { is_loop = 0; }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 218 "par.y"
    { is_loop = 1; }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 218 "par.y"
    { is_loop = 0; }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 236 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 237 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 238 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 239 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 240 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 241 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 242 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 243 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 244 "par.y"
    { (yyval.data_type) = (yyvsp[(2) - (2)].data_type); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 245 "par.y"
    { (yyval.data_type) = (yyvsp[(1) - (1)].data_type); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 246 "par.y"
    { (yyval.data_type) = (yyvsp[(1) - (1)].data_type); }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 247 "par.y"
    { (yyval.data_type) = (yyvsp[(1) - (1)].data_type); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 252 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),1); (yyval.data_type) = (yyvsp[(3) - (3)].data_type); right_side=0; }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 253 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),1); (yyval.data_type) = (yyvsp[(3) - (3)].data_type); right_side=0; }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 254 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),1); (yyval.data_type) = (yyvsp[(3) - (3)].data_type); right_side=0; }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 255 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),1); (yyval.data_type) = (yyvsp[(3) - (3)].data_type); right_side=0; }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 256 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),1); (yyval.data_type) = (yyvsp[(3) - (3)].data_type); right_side=0; }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 260 "par.y"
    { (yyval.data_type) = (yyvsp[(1) - (2)].val1)->data_type; }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 261 "par.y"
    { (yyval.data_type) = (yyvsp[(1) - (2)].val1)->data_type; }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 262 "par.y"
    { (yyval.data_type) = (yyvsp[(2) - (2)].val1)->data_type; }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 263 "par.y"
    { (yyval.data_type) = (yyvsp[(2) - (2)].val1)->data_type; }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 267 "par.y"
    { (yyval.data_type) = (yyvsp[(1) - (1)].val1)->data_type; }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 268 "par.y"
    { (yyval.data_type) = (yyvsp[(1) - (1)].data_type); }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 272 "par.y"
    { if(is_decl && !right_side) 
                          {
                            (yyvsp[(1) - (1)].val1) = insert(SCOPE_LIST,yytext,INT_MAX,cur_datatype);
                        	if((yyvsp[(1) - (1)].val1) == NULL) yyerror("Redeclaration of variable");
                          }
                          else {
                            (yyvsp[(1) - (1)].val1) = bottom_up(yytext);
                            if((yyvsp[(1) - (1)].val1) == NULL) yyerror("Variable not declared");
                            }
                            (yyval.val1) = (yyvsp[(1) - (1)].val1);
                        }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 286 "par.y"
    { right_side=1; }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 287 "par.y"
    { right_side=1; }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 288 "par.y"
    { right_side=1; }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 289 "par.y"
    { right_side=1; }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 290 "par.y"
    { right_side=1; }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 291 "par.y"
    { right_side=1; }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 295 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),0); }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 296 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),0); }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 297 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),0); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 298 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),0); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 299 "par.y"
    { error_expr((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),0); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 300 "par.y"
    { (yyval.data_type) = (yyvsp[(2) - (3)].data_type); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 301 "par.y"
    { (yyval.data_type) = (yyvsp[(2) - (2)].data_type); }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 302 "par.y"
    {(yyval.data_type) = (yyvsp[(1) - (1)].val1)->data_type;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 303 "par.y"
    {(yyval.data_type) = (yyvsp[(1) - (1)].val1)->data_type;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 307 "par.y"
    {(yyvsp[(1) - (1)].val1)->is_const=1; (yyval.val1) = (yyvsp[(1) - (1)].val1);}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 308 "par.y"
    {(yyvsp[(1) - (1)].val1)->is_const=1; (yyval.val1) = (yyvsp[(1) - (1)].val1);}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 309 "par.y"
    {(yyvsp[(1) - (1)].val1)->is_const=1; (yyval.val1) = (yyvsp[(1) - (1)].val1);}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 310 "par.y"
    {(yyvsp[(1) - (1)].val1)->is_const=1; (yyval.val1) = (yyvsp[(1) - (1)].val1);}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 314 "par.y"
    {	if(is_decl)
												{
												if((yyvsp[(3) - (4)].val1)->value <= 0)
												yyerror("size of array is not positive");
												else
                                                if((yyvsp[(3) - (4)].val1)->is_const && !right_side)
												(yyvsp[(1) - (4)].val1)->arr_dim = (yyvsp[(3) - (4)].val1)->value;
												else if(right_side) {
												{
													if((yyvsp[(3) - (4)].val1)->value > (yyvsp[(1) - (4)].val1)->arr_dim)
													yyerror("Array index out of bound");
													if((yyvsp[(3) - (4)].val1)->value < 0)
													yyerror("Array index cannot be negative");
												} }
												}
												else if((yyvsp[(3) - (4)].val1)->is_const) {
												if((yyvsp[(3) - (4)].val1)->value > (yyvsp[(1) - (4)].val1)->arr_dim)
												yyerror("Array index out of bound");
												if((yyvsp[(3) - (4)].val1)->value < 0)
												yyerror("Array index cannot be negative");
												}
												(yyval.data_type) = (yyvsp[(1) - (4)].val1)->data_type;
											}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 339 "par.y"
    { (yyval.val1) = (yyvsp[(1) - (1)].val1); }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 340 "par.y"
    { (yyval.val1) = (yyvsp[(1) - (1)].val1); }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 341 "par.y"
    {(yyval.val1) = (yyvsp[(1) - (3)].val1);}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 342 "par.y"
    {(yyval.val1) = (yyvsp[(1) - (3)].val1);}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 343 "par.y"
    {(yyval.val1) = (yyvsp[(1) - (3)].val1);}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 344 "par.y"
    {(yyval.val1) = (yyvsp[(1) - (3)].val1);}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 348 "par.y"
    {	(yyval.data_type) = (yyvsp[(1) - (4)].val1)->data_type;
												check_param_list((yyvsp[(1) - (4)].val1),param_list,p_idx);
												p_idx = 0;	}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 351 "par.y"
    {	(yyval.data_type) = (yyvsp[(1) - (3)].val1)->data_type;
												check_param_list((yyvsp[(1) - (3)].val1),param_list,p_idx);
												p_idx = 0;	}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 362 "par.y"
    { param_list[p_idx++] = (yyvsp[(1) - (1)].data_type); }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 363 "par.y"
    { param_list[p_idx++] = STRING; }
    break;



/* Line 1455 of yacc.c  */
#line 2320 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



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
		      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 366 "par.y"


void error_expr(int left, int right, int flag)
{
	if(left != right)
	{
		switch(flag)
		{
			case 0: yyerror("Type mismatch in arithmetic expression"); break;
			case 1: yyerror("Type mismatch in assignment expression"); break;
			case 2: yyerror("Type mismatch in logical expression"); break;
		}
	}
}

int main(int argc, char *argv[])
{
	 int i;
	 for(i=0; i<num_tables;i++)
	 {
	  scope_list[i].symbol_table = NULL;
	  scope_list[i].parent = -1;
	 }

	constant_table = create_table();
    scope_list[0].symbol_table = create_table();

	if(!yyparse())
	{
		printf("\nPARSING COMPLETE\n\n\n");
	}
	else
	{
			printf("\nPARSING FAILED!\n\n\n");
	}


	printf("SYMBOL TABLES\n\n");
	view_all();

	printf("CONSTANT TABLE");
	view_constant_table(constant_table);
	
	return 0;
}

int yyerror(char *msg)
{
	printf("Line no: %d Error message: %s Token: %s\n", yylineno, msg, yytext);
	exit(0);
}

