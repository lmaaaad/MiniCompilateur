
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
#line 1 "syntax.y"

	int nb_ligne=1;
	int col=1;
	int i=0;	
	int j=0;
	int t=0;
	int s;
	int A=1;
	int operateur[10];
	int opera = 0;
	float k;
	int affect;
	int type;
	int y=0;
	char displ[50];
	char sauvType[25];
	char save[20];
	char IDF[100][20];
	char sign[40];
	char IDFF[20];
	char IDFD[100][20];
	char cstStr[10];
	float cstNum[10];
	float calculResult[10];
	char STR[100];
	char v[20];
	
	int  valCst;
	char *valChar;
	float valFloat;
	char *valStr;

	int condition=0;




/* Line 189 of yacc.c  */
#line 111 "syntax.tab.c"

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
     vrg = 258,
     mc_idf = 259,
     mc_div = 260,
     mc_prog = 261,
     mc_id = 262,
     mc_data = 263,
     mc_work = 264,
     mc_storage = 265,
     mc_section = 266,
     mc_proc = 267,
     mc_stop = 268,
     mc_run = 269,
     err_lex = 270,
     mc_int = 271,
     mc_char = 272,
     mc_float = 273,
     mc_str = 274,
     mc_const = 275,
     mc_and = 276,
     mc_or = 277,
     mc_not = 278,
     mc_line = 279,
     mc_size = 280,
     mc_accept = 281,
     mc_display = 282,
     mc_if = 283,
     mc_else = 284,
     mc_end = 285,
     mc_move = 286,
     mc_to = 287,
     hash = 288,
     dol = 289,
     pourc = 290,
     an = 291,
     aro = 292,
     Dpoint = 293,
     moin = 294,
     plus = 295,
     slash = 296,
     egl = 297,
     cote = 298,
     mul = 299,
     pipe = 300,
     pa_ouv = 301,
     pa_fer = 302,
     point = 303,
     l = 304,
     g = 305,
     ge = 306,
     le = 307,
     eq = 308,
     di = 309,
     idf = 310,
     cst_char = 311,
     cst_int = 312,
     cst_reel = 313,
     cst_str = 314
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 39 "syntax.y"
 
   int entier; 
   char* str;
   float reel;




/* Line 214 of yacc.c  */
#line 215 "syntax.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 227 "syntax.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   217

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNRULES -- Number of states.  */
#define YYNSTATES  185

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    31,    34,    37,    40,    41,    50,
      54,    59,    65,    67,    69,    71,    73,    77,    79,    81,
      83,    85,    87,    89,    92,    95,    98,   101,   102,   104,
     106,   115,   123,   129,   133,   135,   145,   149,   150,   158,
     164,   168,   176,   181,   183,   185,   187,   189,   191,   193,
     195,   197,   199,   201,   203,   205,   213,   221,   229,   234,
     239,   244,   248,   252,   256,   260,   264,   268,   272,   276,
     280,   284,   286,   288,   290
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    -1,     4,     5,    48,     6,    39,     7,
      48,    55,    62,    48,     8,     5,    48,     9,    39,    10,
      11,    48,    63,    12,     5,    48,    71,    13,    14,    48,
      -1,    65,    63,    -1,    66,    63,    -1,    64,    63,    -1,
      -1,    68,    24,    57,     3,    25,    57,    67,    48,    -1,
      68,    67,    48,    -1,    20,    55,    67,    48,    -1,    20,
      55,    42,    69,    48,    -1,    16,    -1,    18,    -1,    17,
      -1,    19,    -1,    55,    45,    68,    -1,    55,    -1,    56,
      -1,    59,    -1,    70,    -1,    57,    -1,    58,    -1,    72,
      71,    -1,    76,    71,    -1,    83,    71,    -1,    84,    71,
      -1,    -1,    73,    -1,    74,    -1,    26,    46,    59,    38,
      37,    55,    47,    48,    -1,    27,    46,    59,    38,    75,
      47,    48,    -1,    27,    46,    59,    47,    48,    -1,    55,
       3,    75,    -1,    55,    -1,    28,    46,    78,    47,    38,
      71,    77,    30,    48,    -1,    29,    38,    71,    -1,    -1,
      46,    79,    82,    79,    47,    81,    78,    -1,    46,    79,
      82,    79,    47,    -1,    79,    82,    79,    -1,    23,    46,
      79,    47,    81,    78,    47,    -1,    23,    46,    78,    47,
      -1,    80,    -1,    85,    -1,    70,    -1,    55,    -1,    21,
      -1,    22,    -1,    49,    -1,    50,    -1,    51,    -1,    52,
      -1,    53,    -1,    54,    -1,    31,    55,    32,    55,    71,
      30,    48,    -1,    31,    55,    32,    57,    71,    30,    48,
      -1,    31,    57,    32,    57,    71,    30,    48,    -1,    55,
      42,    85,    48,    -1,    55,    42,    69,    48,    -1,    55,
      42,    55,    48,    -1,    55,    86,    55,    -1,    55,    86,
      70,    -1,    70,    86,    70,    -1,    70,    86,    55,    -1,
      55,    86,    85,    -1,    85,    86,    55,    -1,    70,    86,
      85,    -1,    85,    86,    70,    -1,    46,    85,    47,    -1,
      85,    86,    85,    -1,    40,    -1,    39,    -1,    44,    -1,
      41,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    54,    57,    58,    59,    60,    65,    87,
     106,   120,   179,   180,   181,   182,   187,   188,   192,   193,
     194,   197,   198,   203,   204,   205,   206,   207,   211,   211,
     213,   271,   292,   296,   308,   320,   323,   324,   327,   328,
     329,   330,   331,   333,   337,   341,   341,   344,   344,   347,
     347,   347,   347,   347,   347,   351,   362,   372,   377,   413,
     472,   506,   531,   554,   562,   579,   597,   608,   613,   617,
     618,   625,   625,   625,   625
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "vrg", "mc_idf", "mc_div", "mc_prog",
  "mc_id", "mc_data", "mc_work", "mc_storage", "mc_section", "mc_proc",
  "mc_stop", "mc_run", "err_lex", "mc_int", "mc_char", "mc_float",
  "mc_str", "mc_const", "mc_and", "mc_or", "mc_not", "mc_line", "mc_size",
  "mc_accept", "mc_display", "mc_if", "mc_else", "mc_end", "mc_move",
  "mc_to", "hash", "dol", "pourc", "an", "aro", "Dpoint", "moin", "plus",
  "slash", "egl", "cote", "mul", "pipe", "pa_ouv", "pa_fer", "point", "l",
  "g", "ge", "le", "eq", "di", "idf", "cst_char", "cst_int", "cst_reel",
  "cst_str", "$accept", "S", "$@1", "P_DEC", "P_DEC_TAB", "P_DEC_VAR",
  "P_DEC_CONST", "TYPE", "LIST_IDF", "CST", "CST_NUM", "P_INST",
  "ACC_OR_DIS", "ACC", "DIS", "idf_DIS", "CONDITION_IF", "ELSE",
  "CONDITION", "EXPRESSION", "EX1", "EXP_LOG", "EXP_COMPA", "MOVE",
  "EXPR_ARITH", "CALCUL", "OPERATEUR", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    62,    61,    63,    63,    63,    63,    64,    65,
      66,    66,    67,    67,    67,    67,    68,    68,    69,    69,
      69,    70,    70,    71,    71,    71,    71,    71,    72,    72,
      73,    74,    74,    75,    75,    76,    77,    77,    78,    78,
      78,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    84,    84,
      84,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    86,    86,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,    26,     2,     2,     2,     0,     8,     3,
       4,     5,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     0,     1,     1,
       8,     7,     5,     3,     1,     9,     3,     0,     7,     5,
       3,     7,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     7,     7,     7,     4,     4,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     0,    17,     0,     7,     7,     7,     0,     0,     0,
       0,     6,     4,     5,    12,    14,    13,    15,     0,     0,
       0,     0,    16,     0,     0,     9,    18,    21,    22,    19,
       0,    20,    10,    27,     0,    11,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    27,    27,    27,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
       0,     0,     0,     0,     0,    46,    45,     0,     0,    43,
      44,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    72,    71,    74,    73,
       0,     0,     0,    49,    50,    51,    52,    53,    54,     0,
       0,    27,    27,    27,     0,     0,     0,    60,    59,    58,
       3,     8,     0,    34,     0,    32,     0,     0,     0,    69,
      61,    62,    65,    64,    63,    67,    27,    40,    66,    68,
      70,     0,     0,     0,     0,     0,     0,    42,     0,     0,
      37,     0,     0,     0,     0,    33,    31,    47,    48,     0,
      39,     0,     0,    55,    56,    57,    30,     0,     0,    27,
       0,    41,    38,    36,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    11,    23,    24,    25,    26,    39,    27,    50,
      86,    61,    62,    63,    64,   134,    65,   172,    87,    88,
      89,   169,   119,    66,    67,    90,   120
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -102
static const yytype_int16 yypact[] =
{
       6,    10,    40,    -4,  -102,    46,    17,    66,    16,    23,
    -102,    35,    88,    87,    50,    94,    69,    95,    86,    70,
      -7,    65,    81,   115,    -7,    -7,    -7,   123,    15,    78,
     130,  -102,  -102,  -102,  -102,  -102,  -102,  -102,    79,    89,
      57,    98,  -102,   101,   165,  -102,  -102,  -102,  -102,  -102,
     121,  -102,  -102,    -2,   145,  -102,   125,   126,   127,    -8,
     132,   162,    -2,  -102,  -102,    -2,    -2,    -2,   119,   118,
     120,   -16,   146,   149,    30,   166,  -102,  -102,  -102,  -102,
     148,   144,   -24,   137,    36,   -23,   -23,   138,   109,  -102,
     -23,     8,   129,    44,    84,   136,   -23,    90,   139,   140,
     152,   135,   143,   -16,   109,   104,  -102,  -102,  -102,  -102,
      49,    54,   154,  -102,  -102,  -102,  -102,  -102,  -102,    36,
      64,    -2,    -2,    -2,   -23,   -23,   104,  -102,  -102,  -102,
    -102,  -102,   141,   190,   147,  -102,   150,   103,    36,  -102,
     -23,   -23,   -23,   -23,   -23,   -23,    -2,  -102,   -23,   -23,
     -23,   168,   169,   170,   155,   135,   153,  -102,    58,   156,
     175,   157,   158,   159,   160,  -102,  -102,  -102,  -102,   -16,
      58,   171,   180,  -102,  -102,  -102,  -102,   164,   -16,    -2,
     167,  -102,  -102,  -102,  -102
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,    12,  -102,  -102,  -102,   -22,   183,   142,
     -39,   -62,  -102,  -102,  -102,    59,  -102,  -102,  -101,   -76,
    -102,    25,   113,  -102,  -102,   -65,   -74
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      76,    51,   136,    77,    78,    79,    41,    83,   104,    97,
       1,   110,   111,    21,   101,     3,   106,   107,   108,   105,
     110,   109,   111,   102,    56,    57,    58,   137,   126,    59,
      84,    34,    35,    36,    37,    96,    31,    32,    33,    85,
       4,    47,    48,   147,     5,   142,   145,    72,    22,    73,
     110,   111,     6,    60,   125,   150,     7,    40,    99,   151,
     152,   153,   159,   121,     9,   122,   110,   111,   177,   110,
     111,   141,   144,     8,   110,   111,    93,   182,    10,   167,
     168,   149,    93,    12,   160,    94,    46,    47,    48,    49,
      93,    85,    14,    47,    48,    93,    13,    19,    15,   124,
      93,    47,    48,    16,   140,    18,    47,    48,    17,   143,
      93,    47,    48,    46,    47,    48,    49,   183,    20,   148,
      28,    47,    48,   106,   107,   108,    29,    30,   109,   106,
     107,   108,   127,    22,   109,    43,    44,    45,   129,    34,
      35,    36,    37,   106,   107,   108,    52,    38,   109,    53,
     158,   139,   113,   114,   115,   116,   117,   118,   113,   114,
     115,   116,   117,   118,    34,    35,    36,    37,    54,    55,
      68,    69,    70,    71,    74,    75,    80,    81,    91,    82,
      98,    92,   100,   103,   128,   112,   123,   130,   131,   132,
     133,   135,   146,   155,   156,   178,   154,   157,   161,   162,
     163,   166,   164,   170,   171,   173,   174,   175,   176,   179,
     180,   181,    42,     0,   165,   184,    95,   138
};

static const yytype_int16 yycheck[] =
{
      62,    40,   103,    65,    66,    67,    28,    23,    84,    74,
       4,    85,    86,    20,    38,     5,    39,    40,    41,    84,
      94,    44,    96,    47,    26,    27,    28,   103,    93,    31,
      46,    16,    17,    18,    19,    74,    24,    25,    26,    55,
       0,    57,    58,   119,    48,   110,   111,    55,    55,    57,
     124,   125,     6,    55,    93,   120,    39,    42,    80,   121,
     122,   123,   138,    55,    48,    57,   140,   141,   169,   143,
     144,   110,   111,     7,   148,   149,    46,   178,    55,    21,
      22,   120,    46,    48,   146,    55,    56,    57,    58,    59,
      46,    55,     5,    57,    58,    46,     8,    11,    48,    55,
      46,    57,    58,     9,    55,    10,    57,    58,    39,    55,
      46,    57,    58,    56,    57,    58,    59,   179,    48,    55,
      55,    57,    58,    39,    40,    41,    45,    12,    44,    39,
      40,    41,    48,    55,    44,     5,    57,    48,    48,    16,
      17,    18,    19,    39,    40,    41,    48,    24,    44,    48,
      47,    47,    49,    50,    51,    52,    53,    54,    49,    50,
      51,    52,    53,    54,    16,    17,    18,    19,     3,    48,
      25,    46,    46,    46,    42,    13,    57,    59,    32,    59,
      14,    32,    38,    46,    48,    47,    57,    48,    48,    37,
      55,    48,    38,     3,    47,   170,    55,    47,    30,    30,
      30,    48,    47,    47,    29,    48,    48,    48,    48,    38,
      30,    47,    29,    -1,   155,    48,    74,   104
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    61,     5,     0,    48,     6,    39,     7,    48,
      55,    62,    48,     8,     5,    48,     9,    39,    10,    11,
      48,    20,    55,    63,    64,    65,    66,    68,    55,    45,
      12,    63,    63,    63,    16,    17,    18,    19,    24,    67,
      42,    67,    68,     5,    57,    48,    56,    57,    58,    59,
      69,    70,    48,    48,     3,    48,    26,    27,    28,    31,
      55,    71,    72,    73,    74,    76,    83,    84,    25,    46,
      46,    46,    55,    57,    42,    13,    71,    71,    71,    71,
      57,    59,    59,    23,    46,    55,    70,    78,    79,    80,
      85,    32,    32,    46,    55,    69,    70,    85,    14,    67,
      38,    38,    47,    46,    79,    85,    39,    40,    41,    44,
      86,    86,    47,    49,    50,    51,    52,    53,    54,    82,
      86,    55,    57,    57,    55,    70,    85,    48,    48,    48,
      48,    48,    37,    55,    75,    48,    78,    79,    82,    47,
      55,    70,    85,    55,    70,    85,    38,    79,    55,    70,
      85,    71,    71,    71,    55,     3,    47,    47,    47,    79,
      71,    30,    30,    30,    47,    75,    48,    21,    22,    81,
      47,    29,    77,    48,    48,    48,    48,    78,    81,    38,
      30,    47,    78,    71,    48
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
        case 2:

/* Line 1455 of yacc.c  */
#line 54 "syntax.y"
    {i=0;;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 54 "syntax.y"
    { printf ("\n\nSyntaxe Correcte \n\nSemantique Correcte\n \t\t\t\t *** GREAT JOB ***\n ");
						YYACCEPT;
						;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 65 "syntax.y"
    { strcpy(sauvType,save);	
																	for (j=0; j<i; j++)
																	{ if(doubleDeclaration(IDF[j])==0)	
																		{insererTypeIDF(IDF[j] , sauvType );
																		 DonnerVS(IDF[j] ,1);
																		 }
																	   else { if(doubleDeclaration(IDF[j])==-1)
																		{printf("\n /52==============> Erreur Semantique : Double declaration a la ligne : %d et la colonne : %d <==============\n",nb_ligne,col);
																		return -1;}
																	  }
																	}

																    Re_TAB(IDF,i);	i=0;
																	if (((yyvsp[(6) - (8)].entier)<(yyvsp[(3) - (8)].entier)) || ((yyvsp[(6) - (8)].entier)<0))
																	{printf("\n ==============> Erreur Semantique : Fausse taille  a la ligne :%d  et la colonne : %d <==============\n",nb_ligne,col);
																	return -1;}
																	   ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 87 "syntax.y"
    {  for (j=0; j<i; j++)
								   { if(doubleDeclaration(IDF[j])==0)	
								   	{ 
										insererTypeIDF(IDF[j] , save);
								   		DonnerVS(IDF[j] ,1);
									}
								      	else{
											 if(doubleDeclaration(IDF[j])==-1)
								   				{
										   		printf("\n ==============> Erreur Semantique : Double declaration a la ligne : %d et la colonne : %d <==============\n",nb_ligne,col);
								   				return -1;
												}
								     		}

								   }
								   	Re_TAB(IDF,i); i=0;
								   	;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 106 "syntax.y"
    { 
						int x ;
										 if(doubleDeclaration((yyvsp[(2) - (4)].str))==-1)	
											{
												printf("\n ==============> Erreur Semantique : Double declaration a la ligne : %d et la colonne : %d <==============\n",nb_ligne,col);
											return -1;
											}
										   else {
										insererTypeIDF((yyvsp[(2) - (4)].str) , save );
											 DonnerVS((yyvsp[(2) - (4)].str) ,0);
									updateCodeCst((yyvsp[(2) - (4)].str),1);
										   }
												
												;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 120 "syntax.y"
    {
					int x = doubleDeclaration((yyvsp[(2) - (5)].str));
												if(x==-1)
													{
														if(getCstDec((yyvsp[(2) - (5)].str))==0){

														printf("\n ==============> Erreur Semantique : Double declaration a la ligne %d <==============\n",nb_ligne);
														return -1;
														}
														else if(get_type((yyvsp[(2) - (5)].str))!=type){
															printf("\n ==============> Erreur Semantique :Incompatibilté des types a la ligne %d <==============\n",nb_ligne);
														return -1;
														}
														
													}
												else switch (type)
												{
												case 1 : 
													insererTypeIDF((yyvsp[(2) - (5)].str) ,"INT");
													sprintf(v , "%d" , valCst);
													DonnerVS((yyvsp[(2) - (5)].str),0);
													insererVAL((yyvsp[(2) - (5)].str),v);

													
												break;

												case 2 :
													insererTypeIDF((yyvsp[(2) - (5)].str) ,"FLOAT");
													DonnerVS((yyvsp[(2) - (5)].str),0);
													sprintf(v , "%f" , valCst);	
													insererVAL((yyvsp[(2) - (5)].str),v);

												break;

												case 3 :
													insererTypeIDF((yyvsp[(2) - (5)].str),"CHAR");
													DonnerVS((yyvsp[(2) - (5)].str),0);
													insererVAL((yyvsp[(2) - (5)].str),cstStr);
												break;

												case 4 :
													insererTypeIDF((yyvsp[(2) - (5)].str),"STRING");
													DonnerVS((yyvsp[(2) - (5)].str),0);
													insererVAL((yyvsp[(2) - (5)].str),cstStr);
												break;
												
												} 
													setCstDec((yyvsp[(2) - (5)].str),0);
													updateCodeCst((yyvsp[(2) - (5)].str),0);

												Re_TAB(IDF,i);i=0;
												;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 179 "syntax.y"
    {strcpy(save,"INT");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 180 "syntax.y"
    {strcpy(save,"FLOAT");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 181 "syntax.y"
    {strcpy(save,"CHAR");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 182 "syntax.y"
    {strcpy(save,"STRING");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 187 "syntax.y"
    {  strcpy(IDFF , (yyvsp[(1) - (3)].str));  strcpy(IDF[i] , IDFF);  i++;  ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 188 "syntax.y"
    { strcpy(IDFF , (yyvsp[(1) - (1)].str));  strcpy(IDF[i], IDFF);  i++;  ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 192 "syntax.y"
    { strcpy(cstStr,(yyvsp[(1) - (1)].str));   type =3; ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 193 "syntax.y"
    { strcpy(cstStr,(yyvsp[(1) - (1)].str)); 	 type =4; ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 197 "syntax.y"
    {valCst=(yyvsp[(1) - (1)].entier);valFloat=(yyvsp[(1) - (1)].entier); cstNum[y]=valCst; y++; type=1; ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 198 "syntax.y"
    {valCst=(yyvsp[(1) - (1)].reel); valFloat=(yyvsp[(1) - (1)].reel); cstNum[y]=valCst; y++; type=2; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 213 "syntax.y"
    { strcpy(STR,(yyvsp[(3) - (8)].str));	
															 SuppMsg((yyvsp[(3) - (8)].str));

																if (strlen((yyvsp[(3) - (8)].str))!=3)
															{
																printf(" ==============> Erreur Semantique : Message accept FAUSSE !!! a la ligne :%d et la colonne :%d ",nb_ligne,col);
																return -1;
															}
															else if (nonDeclared((yyvsp[(6) - (8)].str))==-1)
																{printf("\n ==============> Erreur Semantique : valeur non declarer a la ligne : %d et la colonne : %d <==============\n",nb_ligne,col);
																 return -1;}
															else {
																switch (STR[1])
																{
																	case '$' :
																	if (get_type((yyvsp[(6) - (8)].str))!=1) //get type return 1 si l'idf est un entier
																	{
																	printf("==============>Erreur Semantique : incompatibilite de Type a la ligne : %d et la colonne : %d <==============", nb_ligne,col);
																	return -1;
																	}

																	break;

																	case '%' :
																	if (get_type((yyvsp[(6) - (8)].str))!=2) //get type return 2 si l'idf est un float
																	{
																	printf(" ==============>Erreur Semantique : incompatibilite de Type a la ligne : %d et la colonne : %d <==============", nb_ligne,col);
																	return -1;
																	}

																	break;

																	case '#' :
																	if (get_type((yyvsp[(6) - (8)].str))!=4) //get type return 4 si l'idf est un string
																	{
																	printf(" ==============>Erreur Semantique : incompatibilite de Type a la ligne : %d et la colonne : %d <==============", nb_ligne,col);
																	return -1;
																	}


																	break;

																	case '&' :
																	if (get_type((yyvsp[(6) - (8)].str))!=3) //get type return 3 si l'idf est un CHAR
																	{
																	printf(" ==============>Erreur Semantique : incompatibilite de Type a la ligne : %d et la colonne : %d <==============\n", nb_ligne,col);
																	return -1;
																	}
																	break;
																}
																SuppMsg((yyvsp[(3) - (8)].str));

																}

		  ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 271 "syntax.y"
    {   A=0;
																strcpy(displ,(yyvsp[(3) - (7)].str));
																chercher_sign(displ, sign);
																SuppMsg((yyvsp[(3) - (7)].str));
																if ( strlen(sign) != t)
																{	
																printf (" ==============>Erreur Semantique : y'a un difference entre le nombre des idf est le sign pour afficher !! a la ligne :%d et la colonne : %d <============== \n",nb_ligne,col);
																return -1;
																}
																else if (Incomsign(IDFD,sign,t) == -1)
																{
															    printf(" ==============>Erreur Semantique : incompatibilite de Type a la ligne : %d et la colonne : %d <============== \n", nb_ligne,col);
															    return -1;
																}

																RE_tab(sign,t);
																Re_TAB(IDFD,t);
																t=0;
																	;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 292 "syntax.y"
    {SuppMsg((yyvsp[(3) - (5)].str));;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 296 "syntax.y"
    {if (nonDeclared((yyvsp[(1) - (3)].str))==-1)
							{printf("\n ==============> Erreur Semantique : valeur non declarer a la ligne %d <============== \n",nb_ligne);
							 return -1;}  
						  else 	 
						  {
							strcpy(IDFD[t],(yyvsp[(1) - (3)].str));
							t++;
						  }
							 
							 
							 ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 308 "syntax.y"
    {if (nonDeclared((yyvsp[(1) - (1)].str))==-1)
				{printf("\n ==============> Erreur Semantique : valeur non declarer a la ligne %d <============== \n",nb_ligne);
				 return -1;}
		       	else 	 
		      	  {
		      		strcpy(IDFD[t],(yyvsp[(1) - (1)].str));
		      		t++;
		      	  };}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 333 "syntax.y"
    { if(type >2 ){
	printf(" ==============> Erreur Semantique : incompatibilte de type  a la ligne: %d et la colonne : %d  !!! <============== \n",nb_ligne,col);
										return -1;
};}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 341 "syntax.y"
    {type = 1;;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 341 "syntax.y"
    { type = get_type((yyvsp[(1) - (1)].str));;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 351 "syntax.y"
    {if (nonDeclared((yyvsp[(2) - (7)].str))==-1 || nonDeclared((yyvsp[(4) - (7)].str))==-1)
													
													{printf(" ==============>Erreur Semantique : l 'idf est non Declarer dans la  partie declaration  a la ligne %d et la colonne : %d !!! <============== \n",nb_ligne,col);
													return -1;}
													else if (get_type((yyvsp[(2) - (7)].str)) != 1 || get_type((yyvsp[(4) - (7)].str)) != 1)
													{
													printf(" ==============>Erreur semantique : incompatibilite de Type !! il faut ytiliser que des entier ! a la ligne  %d et la colonne :%d <============== \n", nb_ligne,col); 
													return -1 ;
													}
												;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 362 "syntax.y"
    { if (nonDeclared((yyvsp[(2) - (7)].str))==-1)
													
													{printf(" ==============>Erreur Semantique : l'idf est non Declarer dans la  partie declaration  a la ligne %d et la colonne  !!! <==============\n",nb_ligne,col);
													return -1;}
													else if (get_type((yyvsp[(2) - (7)].str)) != 1)
													{
													printf(" ==============>Erreur semantique : incompatibilite de Type !! il faut ytiliser que des entier ! a la ligne %d et la colonne <============== \n", nb_ligne,col); 
													return -1;
													}
	 												;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 377 "syntax.y"
    {
			  					if (nonDeclared((yyvsp[(1) - (4)].str))==-1)
								{printf(" ==============>Erreur Semantique : la variable %s est non Declarer dans la  partie declaration  a la ligne :%d et la colonne : %d !!! <============== \n",(yyvsp[(1) - (4)].str),nb_ligne,col);
								return -1;
								}
								if(DemanderVS((yyvsp[(1) - (4)].str))==0){
								if(  getCstDec((yyvsp[(1) - (4)].str))==0){
															printf(" ==============>Erreur semantique : le %s c'est une constante , tu peut pas fait une affectation  , a la ligne %d et la colonne : %d<============== \n ",(yyvsp[(1) - (4)].str),nb_ligne,col);
															return -1;
											}
									
								}
								
								
								switch(get_type((yyvsp[(1) - (4)].str))){
									case 1:
										sprintf(v , "%d" , (int)calculResult[j-1]);	
										insererVAL((yyvsp[(1) - (4)].str),v);  
										break;
									case 2:
										sprintf(v , "%f" , calculResult[j-1]);	
										insererVAL((yyvsp[(1) - (4)].str),v);  
										break;
								}
								if(DemanderVS((yyvsp[(1) - (4)].str))==0){
									if(getCstDec((yyvsp[(1) - (4)].str))==1)
										setCstDec((yyvsp[(1) - (4)].str),0);
								}

;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 413 "syntax.y"
    {	
			   								

			   					if (nonDeclared((yyvsp[(1) - (4)].str))==-1)
								{printf(" ==============>Erreur Semantique : la variable %s est non Declarer dans la  partie declaration  a la ligne %d et la colonnes %d !!! <============== \n",(yyvsp[(1) - (4)].str),nb_ligne,col);
								return -1;}
								else if ( DemanderVS((yyvsp[(1) - (4)].str)) ==0 ) {
												if(  getCstDec((yyvsp[(1) - (4)].str))==0){

															printf(" ==============>Erreur semantique : le %s c'est une constante , tu peut pas fait une affectation  , a la ligne %d et la colonne : %d<============== \n",(yyvsp[(1) - (4)].str),nb_ligne,col);
															return -1;
												}			
															}
															 
								if( ( type <3 && get_type((yyvsp[(1) - (4)].str)) < 3 ) ){
									switch(get_type((yyvsp[(1) - (4)].str))){
										case 1: 
											sprintf(v , "%d" , (int)valFloat);
											insererVAL((yyvsp[(1) - (4)].str),v); 
											setCstDec((yyvsp[(1) - (4)].str),0);

											break;
										case 2:
											sprintf(v , "%f" , valFloat);
											insererVAL((yyvsp[(1) - (4)].str),v);
											setCstDec((yyvsp[(1) - (4)].str),0);

											break;
									}
								}

								else if(get_type((yyvsp[(1) - (4)].str)) != type){

									printf(" ==============>Erreur Semantique : imncompatibilte de type  a la ligne : %d et la colonnes %d !!! <============== \n",nb_ligne);
								return -1;
								}
									


								else switch (type)
											{
											case 3 :
												insererVAL((yyvsp[(1) - (4)].str),cstStr);
												setCstDec((yyvsp[(1) - (4)].str),0);
											break;
											case 4 :
												insererVAL((yyvsp[(1) - (4)].str),cstStr);
												setCstDec((yyvsp[(1) - (4)].str),0);
											break;
											
											}

		   ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 472 "syntax.y"
    {  
			   					if(nonDeclared((yyvsp[(1) - (4)].str)) == -1){
									   printf(" ==============> Erreur Semantique: variable %s non declare a la ligne : %d et la colonne : %d <============== \n",(yyvsp[(3) - (4)].str),nb_ligne,col);return -1;
								   }
																
								if(nonDeclared((yyvsp[(3) - (4)].str)) == -1){
									printf(" ==============> Erreur Semantique: variable %s non declare a la ligne : %d et la colonne : %d <============== \n",(yyvsp[(3) - (4)].str),nb_ligne,col);return -1;
								}

								if ( DemanderVS((yyvsp[(1) - (4)].str)) ==0 ) {
												if(  getCstDec((yyvsp[(1) - (4)].str))==0){

															printf(" ==============>Erreur semantique : le %s c'est une constante , tu peut pas fait une affectation  , a la ligne %d et la colonne : %d<============== \n",(yyvsp[(1) - (4)].str),nb_ligne,col);
															return -1;
												}			
															}

								if(get_type((yyvsp[(1) - (4)].str))<2 && get_type((yyvsp[(3) - (4)].str))<2){
									if(get_type((yyvsp[(1) - (4)].str))==1){
										updateValIdf((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].str));
									}
								}
								else	if(get_type((yyvsp[(1) - (4)].str)) != get_type((yyvsp[(3) - (4)].str))){
											printf(" ==============> Erreur Semantique : incompatibilte de type  a la ligne : %d et la colonne : %d !!! <============== \n",nb_ligne,col);
										return -1;
									}

								updateValIdf((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].str));



								;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 506 "syntax.y"
    {
	 				if(nonDeclared((yyvsp[(1) - (3)].str) )==-1 ){
		 				printf("Erreur Semantique idf non declare a la ligne : %d et la colonne : %d <============== \n ",nb_ligne,col);return -1;
	 				}
	 				if(nonDeclared((yyvsp[(3) - (3)].str))==-1){
										printf(" ==============> Erreur Semantique idf non declaré a la ligne : %d et la colonne : %d  <==============\n",nb_ligne,col); return -1;
									}
					
					

					if(get_type((yyvsp[(1) - (3)].str)) != get_type((yyvsp[(3) - (3)].str))){ 

									printf(" ==============> Erreur Semantique : incompatibilte de type  a la ligne: %d et la colonne : %d  !!! <============== \n",nb_ligne,col);
										return -1;
								}
					
					
					calcul((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str),operateur[opera-1],&k); opera--;
					calculResult[j]= k;  j++;
					

 ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 531 "syntax.y"
    {
	 								if(nonDeclared((yyvsp[(1) - (3)].str)) == -1 ){
		 							printf("==============> Erreur Semantique idf non declare a la ligne : %d et la colonne : %d <============== \n ",nb_ligne,col);
									return -1;
	 							}

								 if(get_type((yyvsp[(1) - (3)].str)) >2 ||  type > 2 ){ 
									printf("==============> Erreur Semantique : imncompatibilte de type  a la ligne : %d et la colonne : %d  !!!<============== \n",nb_ligne,col);
								return -1;}
								
								if(valCst==0 && operateur[opera-1]==4){
									printf("==============> Erreur Semantique : devision sur ZEROOO a la ligne : %d et la colonne : %d <============== \n",nb_ligne,col);
									return -1;
								}
								
								 calculIdfXCst((yyvsp[(1) - (3)].str),&valFloat,operateur[opera-1],&k); opera--;
								 					calculResult[j]= k; j++;

		;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 554 "syntax.y"
    {
			
			calculCstXCst(&cstNum[y-1],&cstNum[y-2],operateur[opera-1],&k); opera--;
			
			calculResult[j]=k;	j++;				


		;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 562 "syntax.y"
    {

	 								if(nonDeclared((yyvsp[(3) - (3)].str) )==-1 ){
		 								printf("==============>Erreur Semantique idf non declare a la ligne : %d et la colonne : %d <============== \n ",nb_ligne,col);return -1;
	 									}
										 
									 if(get_type((yyvsp[(3) - (3)].str)) >2 ||  type > 2){
									printf("==============> Erreur Semantique : imncompatibilte de type  a la ligne : %d et la colonne : %d  !!! <============== \n",nb_ligne,col);
								return -1;}
								
								 calculIdfXCst((yyvsp[(3) - (3)].str),&valFloat,operateur[opera-1],&k); opera--;
										 					calculResult[j]= k;j++; 

										 
										 	;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 579 "syntax.y"
    { 
	 								if(nonDeclared((yyvsp[(1) - (3)].str) )==-1 ){
		 							printf("==============> Erreur Semantique idf non declare a la ligne : %d et la colonne : %d <============== \n",nb_ligne,col);return -1;
	 									}
										
								calculIdfXCst((yyvsp[(1) - (3)].str),&calculResult[j-1],operateur[opera-1],&k);opera--;
								
								calculResult[j]= k; j++;
								 


								// na7sbo w n7ato f sommet de pile, resultat ta3 calcul tkon f sommet sema hna ndiro idf operateur sommet de pile, apres nremplaciw sommet l9dim b resultat jdida,
								// f expression arethmetique (idf oper calcul) nvidiw tableau, tkon deja fih ghir 1
								// f le cas ta3 calcul oper calcul, nahasbo sommet de pile operateur l'element li 9bel sommet, na7iwhom w n7ato resultat



									;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 597 "syntax.y"
    {
	 								if(nonDeclared((yyvsp[(3) - (3)].str) )==-1 ){
		 							printf("==============> Erreur Semantique : idf non declare a la ligne : %d et la colonne : %d <============== \n ",nb_ligne,col);return -1;
	 									}
										 
										 calculIdfXCst((yyvsp[(3) - (3)].str),&calculResult[j-1],operateur[opera-1],&k); opera--;
										 
										
								calculResult[j]= k; j++;
										 
										 ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 608 "syntax.y"
    {
			calculCstXCst(&cstNum[y-1],&calculResult[j-1],operateur[opera-1],&k); opera--;
			calculResult[j]=k;j++;

		;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 613 "syntax.y"
    {
			calculCstXCst(&cstNum[y-1],&calculResult[j-1],operateur[opera-1],&k); opera--;
			calculResult[j]=k;j++;
		;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 617 "syntax.y"
    {;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 618 "syntax.y"
    {
			calculCstXCst(&calculResult[j-1], &calculResult[j-2],operateur,&k);opera--;
			calculResult[j]=k;j++;
		;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 625 "syntax.y"
    { operateur[opera]=1;opera++; ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 625 "syntax.y"
    { operateur[opera]=2;opera++; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 625 "syntax.y"
    { operateur[opera]=3;opera++; ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 625 "syntax.y"
    { operateur[opera]=4; opera++;;}
    break;



/* Line 1455 of yacc.c  */
#line 2301 "syntax.tab.c"
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
#line 632 "syntax.y"

int yyerror(char*msg)
{
	printf("\n!!!   Erreur Syntaxique : a la ligne : %d  et la Colonne : %d  !!!! \n",nb_ligne,col);
	return 1;
}
main()
{
	initialisation();
	yyparse();
	afficher();
}
yywrap()
{}
