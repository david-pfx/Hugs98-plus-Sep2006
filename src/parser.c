/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.2"

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
#line 17 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"

#ifndef lint
#define lint
#endif
#define defTycon(n,l,lhs,rhs,w)	 tyconDefn(intOf(l),lhs,rhs,w); sp-=n
#define sigdecl(l,vs,t)		 ap(SIGDECL,triple(l,vs,t))
#define fixdecl(l,ops,a,p)	 ap(FIXDECL,\
				    triple(l,ops,mkInt(mkSyntax(a,intOf(p)))))
#define grded(gs)		 ap(GUARDED,gs)
#define bang(t)			 ap(BANG,t)
#define only(t)			 ap(ONLY,t)
#define letrec(bs,e)		 (nonNull(bs) ? ap(LETREC,pair(bs,e)) : e)
#define qualify(ps,t)		 (nonNull(ps) ? ap(QUAL,pair(ps,t)) : t)
#define exportSelf()		 singleton(ap(MODULEENT,mkCon(module(currentModule).text)))
#define yyerror(s)		 /* errors handled elsewhere */
#define YYSTYPE			 Cell

#ifdef YYBISON
# if !defined(__GNUC__) || __GNUC__ <= 1
static void __yy_memcpy Args((char*,char*, unsigned int));
# endif
#endif

#ifdef _MANAGED
static void yymemcpy (char *yyto, const char *yyfrom, size_t yycount);
#endif

static Cell   local gcShadow	 Args((Int,Cell));
static Void   local syntaxError	 Args((String));
static String local unexpected	 Args((Void));
static Cell   local checkPrec	 Args((Cell));
static Cell   local buildTuple	 Args((List));
static List   local checkCtxt	 Args((List));
static Cell   local checkPred	 Args((Cell));
static Pair   local checkDo	 Args((List));
static Cell   local checkTyLhs	 Args((Cell));
static Cell   local checkConstr	 Args((Cell));

#if MUDO
static Pair   local checkMDo	 Args((List));
#endif

#if !TREX
static Void   local noTREX	 Args((String));
#endif
#if !IPARAM
static Void   local noIP	 Args((String));
#endif
#if !MUDO
static Void   local noMDo	 Args((String));
#endif

/* For the purposes of reasonably portable garbage collection, it is
 * necessary to simulate the YACC stack on the Hugs stack to keep
 * track of all intermediate constructs.  The lexical analyser
 * pushes a token onto the stack for each token that is found, with
 * these elements being removed as reduce actions are performed,
 * taking account of look-ahead tokens as described by gcShadow()
 * below.
 *
 * Of the non-terminals used below, only start, topDecl & begin
 * do not leave any values on the Hugs stack.  The same is true for the
 * terminals EXPR and SCRIPT.  At the end of a successful parse, there
 * should only be one element left on the stack, containing the result
 * of the parse.
 */

#define gc0(e)			gcShadow(0,e)
#define gc1(e)			gcShadow(1,e)
#define gc2(e)			gcShadow(2,e)
#define gc3(e)			gcShadow(3,e)
#define gc4(e)			gcShadow(4,e)
#define gc5(e)			gcShadow(5,e)
#define gc6(e)			gcShadow(6,e)
#define gc7(e)			gcShadow(7,e)



/* Line 189 of yacc.c  */
#line 151 "../parser.c"

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
     EXPR = 258,
     CTXT = 259,
     SCRIPT = 260,
     CASEXP = 261,
     OF = 262,
     DATA = 263,
     TYPE = 264,
     IF = 265,
     THEN = 266,
     ELSE = 267,
     WHERE = 268,
     LET = 269,
     IN = 270,
     INFIXN = 271,
     INFIXL = 272,
     INFIXR = 273,
     PRIMITIVE = 274,
     TNEWTYPE = 275,
     DEFAULT = 276,
     DERIVING = 277,
     DO = 278,
     TCLASS = 279,
     TINSTANCE = 280,
     MDO = 281,
     REPEAT = 282,
     ALL = 283,
     NUMLIT = 284,
     CHARLIT = 285,
     STRINGLIT = 286,
     VAROP = 287,
     VARID = 288,
     CONOP = 289,
     CONID = 290,
     QVAROP = 291,
     QVARID = 292,
     QCONOP = 293,
     QCONID = 294,
     RECSELID = 295,
     IPVARID = 296,
     COCO = 297,
     UPTO = 298,
     FROM = 299,
     ARROW = 300,
     IMPLIES = 301,
     TMODULE = 302,
     IMPORT = 303,
     HIDING = 304,
     QUALIFIED = 305,
     ASMOD = 306,
     NEEDPRIMS = 307,
     FOREIGN = 308
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 246 "../parser.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4111

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  165
/* YYNRULES -- Number of rules.  */
#define YYNRULES  501
/* YYNRULES -- Number of states.  */
#define YYNSTATES  891

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,     2,     2,     2,     2,     2,
      54,    56,     2,    72,    55,    48,    61,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    58,
       2,    43,     2,     2,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,    46,    59,     2,    71,    60,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    47,    70,    51,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    44,    49,
      50,    53,    62,    63,    64,    65,    66,    67,    68
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    13,    15,    20,    25,    33,
      39,    42,    43,    45,    47,    49,    50,    53,    55,    58,
      63,    64,    67,    71,    75,    80,    84,    86,    88,    90,
      95,   100,   103,   104,   106,   108,   111,   115,   117,   119,
     121,   125,   128,   130,   131,   135,   141,   148,   153,   156,
     157,   162,   166,   167,   169,   171,   174,   178,   180,   182,
     184,   189,   194,   195,   197,   199,   202,   206,   208,   210,
     212,   215,   219,   223,   225,   227,   232,   239,   242,   248,
     256,   259,   264,   267,   273,   281,   284,   287,   290,   293,
     295,   297,   301,   303,   307,   309,   313,   315,   320,   322,
     326,   328,   333,   337,   341,   345,   347,   349,   354,   358,
     360,   364,   367,   370,   374,   377,   381,   384,   386,   388,
     390,   394,   396,   400,   404,   409,   410,   413,   418,   419,
     421,   425,   427,   432,   436,   438,   440,   443,   445,   453,
     460,   469,   477,   485,   490,   494,   499,   502,   505,   508,
     512,   514,   518,   520,   521,   523,   527,   529,   530,   533,
     537,   539,   543,   545,   546,   549,   554,   556,   560,   562,
     566,   570,   574,   576,   581,   583,   587,   593,   596,   598,
     602,   604,   607,   609,   613,   617,   619,   623,   625,   629,
     633,   637,   641,   645,   649,   653,   655,   657,   659,   661,
     665,   669,   673,   675,   677,   679,   682,   684,   687,   689,
     691,   693,   695,   698,   702,   706,   710,   714,   718,   722,
     726,   732,   736,   739,   741,   745,   749,   753,   757,   761,
     765,   769,   771,   775,   779,   782,   786,   789,   793,   796,
     800,   804,   806,   807,   811,   813,   817,   819,   823,   827,
     828,   831,   834,   837,   839,   842,   847,   850,   852,   854,
     856,   860,   864,   868,   872,   876,   881,   886,   891,   894,
     897,   900,   902,   905,   907,   910,   912,   917,   918,   921,
     922,   925,   929,   933,   934,   937,   940,   943,   947,   950,
     952,   954,   956,   960,   962,   966,   968,   970,   972,   974,
     976,   978,   980,   983,   986,   990,   995,   999,  1004,  1008,
    1013,  1017,  1022,  1024,  1026,  1028,  1030,  1033,  1036,  1038,
    1040,  1042,  1046,  1048,  1053,  1055,  1057,  1059,  1063,  1067,
    1071,  1075,  1078,  1082,  1088,  1092,  1096,  1100,  1102,  1103,
    1105,  1109,  1111,  1115,  1117,  1121,  1123,  1127,  1129,  1131,
    1135,  1137,  1139,  1141,  1143,  1145,  1147,  1149,  1154,  1158,
    1161,  1166,  1170,  1175,  1179,  1182,  1187,  1191,  1198,  1203,
    1208,  1210,  1215,  1220,  1225,  1229,  1232,  1236,  1239,  1242,
    1244,  1247,  1249,  1251,  1255,  1258,  1260,  1262,  1264,  1269,
    1274,  1276,  1278,  1280,  1282,  1286,  1290,  1294,  1300,  1302,
    1306,  1311,  1316,  1321,  1325,  1329,  1333,  1335,  1339,  1341,
    1344,  1348,  1351,  1353,  1357,  1359,  1362,  1364,  1367,  1369,
    1374,  1376,  1379,  1383,  1386,  1388,  1392,  1395,  1397,  1398,
    1400,  1404,  1406,  1408,  1412,  1414,  1416,  1419,  1423,  1428,
    1431,  1437,  1441,  1444,  1448,  1450,  1454,  1456,  1459,  1461,
    1464,  1467,  1471,  1474,  1476,  1478,  1480,  1482,  1484,  1486,
    1488,  1490,  1494,  1498,  1502,  1506,  1510,  1512,  1516,  1518,
    1520,  1524,  1526,  1530,  1532,  1534,  1536,  1538,  1540,  1542,
    1544,  1546,  1548,  1552,  1554,  1556,  1558,  1560,  1562,  1566,
    1568,  1570,  1574,  1576,  1580,  1582,  1584,  1586,  1588,  1590,
    1591,  1593
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      74,     0,    -1,     3,   185,   161,    -1,     4,   130,    -1,
       5,    75,    -1,     1,    -1,    76,   236,    79,   237,    -1,
      76,    69,    79,    70,    -1,    62,    77,    80,    13,    69,
      79,   237,    -1,    62,    77,    80,    13,     1,    -1,    62,
       1,    -1,    -1,   221,    -1,   221,    -1,    31,    -1,    -1,
      58,    79,    -1,    96,    -1,    86,    87,    -1,    86,    58,
      87,    96,    -1,    -1,    54,    56,    -1,    54,    55,    56,
      -1,    54,    81,    56,    -1,    54,    81,    55,    56,    -1,
      81,    55,    82,    -1,    82,    -1,   223,    -1,   225,    -1,
     221,    54,    44,    56,    -1,   221,    54,    83,    56,    -1,
      62,    78,    -1,    -1,    55,    -1,    84,    -1,    84,    55,
      -1,    84,    55,    85,    -1,    85,    -1,   223,    -1,   225,
      -1,    86,    58,    88,    -1,    86,    58,    -1,    88,    -1,
      -1,    63,    78,    89,    -1,    63,    78,    66,    78,    89,
      -1,    63,    65,    78,    66,    78,    89,    -1,    63,    65,
      78,    89,    -1,    63,     1,    -1,    -1,    64,    54,    90,
      56,    -1,    54,    90,    56,    -1,    -1,    55,    -1,    91,
      -1,    91,    55,    -1,    91,    55,    92,    -1,    92,    -1,
     222,    -1,    35,    -1,    35,    54,    44,    56,    -1,    35,
      54,    93,    56,    -1,    -1,    55,    -1,    94,    -1,    94,
      55,    -1,    94,    55,    95,    -1,    95,    -1,   222,    -1,
     224,    -1,    96,    58,    -1,    96,    58,    97,    -1,    96,
      58,   152,    -1,    97,    -1,   152,    -1,     9,    98,    43,
     134,    -1,     9,    98,    43,   134,    15,    99,    -1,     9,
       1,    -1,     8,   138,    43,   101,   110,    -1,     8,   130,
      53,    98,    43,   101,   110,    -1,     8,   138,    -1,     8,
     130,    53,    98,    -1,     8,     1,    -1,    20,   138,    43,
     107,   110,    -1,    20,   130,    53,    98,    43,   107,   110,
      -1,    20,     1,    -1,    67,    29,    -1,    67,     1,    -1,
      98,   220,    -1,    35,    -1,     1,    -1,    99,    55,   100,
      -1,   100,    -1,   222,    42,   123,    -1,   222,    -1,   101,
      47,   102,    -1,   102,    -1,    28,   128,    61,   103,    -1,
     104,    -1,   130,    53,   104,    -1,   104,    -1,    52,   136,
     232,   106,    -1,   137,   232,   106,    -1,   138,   232,   106,
      -1,   127,   232,   106,    -1,   138,    -1,   105,    -1,   224,
      69,   108,    70,    -1,   224,    69,    70,    -1,     1,    -1,
     138,    52,   139,    -1,   138,   127,    -1,   105,   139,    -1,
     105,    52,   139,    -1,   105,   127,    -1,    54,    34,    56,
      -1,    52,   136,    -1,   136,    -1,   127,    -1,   102,    -1,
     108,    55,   109,    -1,   109,    -1,   148,    42,   126,    -1,
     148,    42,   134,    -1,   148,    42,    52,   134,    -1,    -1,
      22,   221,    -1,    22,    54,   111,    56,    -1,    -1,   112,
      -1,   112,    55,   221,    -1,   221,    -1,    19,   113,    42,
     123,    -1,   113,    55,   114,    -1,   114,    -1,     1,    -1,
     222,    31,    -1,   222,    -1,    68,    63,   222,    31,   222,
      42,   123,    -1,    68,    63,   222,   222,    42,   123,    -1,
      68,    63,   222,   222,    31,   222,    42,   123,    -1,    68,
      63,   222,   222,   222,    42,   123,    -1,    68,   222,   222,
      31,   222,    42,   123,    -1,    24,   115,   119,   160,    -1,
      25,   116,   160,    -1,    21,    54,   117,    56,    -1,    24,
       1,    -1,    25,     1,    -1,    21,     1,    -1,   130,    53,
     138,    -1,   138,    -1,   130,    53,   138,    -1,   138,    -1,
      -1,   118,    -1,   118,    55,   134,    -1,   134,    -1,    -1,
      47,   120,    -1,   120,    55,   121,    -1,   121,    -1,   122,
      50,   122,    -1,     1,    -1,    -1,   122,   220,    -1,    28,
     128,    61,   124,    -1,   124,    -1,   130,    53,   125,    -1,
     125,    -1,   127,    50,   125,    -1,   137,    50,   125,    -1,
     138,    50,   125,    -1,   136,    -1,    28,   128,    61,   129,
      -1,   127,    -1,    54,   126,    56,    -1,    54,   131,    53,
     134,    56,    -1,   128,   220,    -1,   220,    -1,   130,    53,
     134,    -1,   134,    -1,    54,    56,    -1,   138,    -1,    54,
     138,    56,    -1,    54,   141,    56,    -1,   132,    -1,    54,
     133,    56,    -1,   132,    -1,    54,   133,    56,    -1,   220,
      46,   220,    -1,    41,    42,   134,    -1,   141,    55,   132,
      -1,   133,    55,   138,    -1,   133,    55,   132,    -1,   138,
      55,   132,    -1,   132,    -1,   135,    -1,   138,    -1,   137,
      -1,   127,    50,   134,    -1,   137,    50,   134,    -1,   138,
      50,   134,    -1,     1,    -1,   137,    -1,   138,    -1,   137,
     139,    -1,   140,    -1,   138,   139,    -1,   221,    -1,   140,
      -1,   221,    -1,   220,    -1,    54,    56,    -1,    54,    50,
      56,    -1,    54,   135,    56,    -1,    54,   138,    56,    -1,
      54,   219,    56,    -1,    54,   141,    56,    -1,    54,   142,
      56,    -1,    54,   143,    56,    -1,    54,   143,    47,   134,
      56,    -1,    57,   134,    59,    -1,    57,    59,    -1,    71,
      -1,   141,    55,   138,    -1,   138,    55,   138,    -1,   135,
      55,   134,    -1,   138,    55,   135,    -1,   141,    55,   135,
      -1,   142,    55,   134,    -1,   143,    55,   144,    -1,   144,
      -1,   220,    42,   134,    -1,    16,   146,   147,    -1,    16,
       1,    -1,    17,   146,   147,    -1,    17,     1,    -1,    18,
     146,   147,    -1,    18,     1,    -1,   148,    42,   123,    -1,
     148,    42,     1,    -1,    29,    -1,    -1,   147,    55,   234,
      -1,   234,    -1,   148,    55,   222,    -1,   222,    -1,    69,
     150,   237,    -1,    69,   151,   237,    -1,    -1,   150,    58,
      -1,   151,    58,    -1,   150,   152,    -1,   145,    -1,   153,
     156,    -1,   153,    42,   134,   156,    -1,   169,   156,    -1,
     154,    -1,   155,    -1,   168,    -1,   174,   226,   169,    -1,
     172,   226,   169,    -1,    29,   226,   169,    -1,   222,   228,
     169,    -1,   222,    72,   170,    -1,    54,   154,    56,   176,
      -1,    54,   155,    56,   176,    -1,    54,   168,    56,   176,
      -1,   222,   176,    -1,   155,   176,    -1,   157,   160,    -1,
       1,    -1,    43,   185,    -1,   158,    -1,   158,   159,    -1,
     159,    -1,    47,   187,    43,   185,    -1,    -1,    13,   149,
      -1,    -1,    13,   162,    -1,    69,   163,   237,    -1,    69,
     164,   237,    -1,    -1,   163,    58,    -1,   164,    58,    -1,
     163,   165,    -1,    41,    43,   185,    -1,    41,     1,    -1,
     152,    -1,   168,    -1,   167,    -1,   169,    42,   134,    -1,
     169,    -1,   222,    72,    29,    -1,   222,    -1,    29,    -1,
     171,    -1,   222,    -1,   171,    -1,   174,    -1,   172,    -1,
      48,   173,    -1,    48,     1,    -1,   222,   233,   173,    -1,
     222,   233,    48,   173,    -1,    29,   233,   173,    -1,    29,
     233,    48,   173,    -1,   174,   233,   173,    -1,   174,   233,
      48,   173,    -1,   172,   233,   173,    -1,   172,   233,    48,
     173,    -1,   175,    -1,   176,    -1,   175,    -1,   177,    -1,
     175,   176,    -1,   218,   176,    -1,    29,    -1,   222,    -1,
     177,    -1,   222,    45,   176,    -1,   218,    -1,   225,    69,
     180,    70,    -1,    30,    -1,    31,    -1,    71,    -1,    54,
     167,    56,    -1,    54,   168,    56,    -1,    54,   178,    56,
      -1,    57,   179,    59,    -1,    51,   176,    -1,    54,   183,
      56,    -1,    54,   183,    47,   166,    56,    -1,   178,    55,
     166,    -1,   166,    55,   166,    -1,   179,    55,   166,    -1,
     166,    -1,    -1,   181,    -1,   181,    55,   182,    -1,   182,
      -1,   223,    43,   166,    -1,   222,    -1,   183,    55,   184,
      -1,   184,    -1,   220,    43,   166,    -1,   186,    -1,     1,
      -1,   188,    42,   129,    -1,   187,    -1,   188,    -1,   189,
      -1,   190,    -1,   192,    -1,   191,    -1,   193,    -1,   190,
     235,    48,   192,    -1,   190,   235,   192,    -1,    48,   192,
      -1,   192,   235,    48,   192,    -1,   192,   235,   192,    -1,
     190,   235,    48,   193,    -1,   190,   235,   193,    -1,    48,
     193,    -1,   192,   235,    48,   193,    -1,   192,   235,   193,
      -1,     6,   185,     7,    69,   202,   237,    -1,    23,    69,
     208,   237,    -1,    26,    69,   208,   237,    -1,   197,    -1,
      46,   196,    50,   185,    -1,    14,   162,    15,   185,    -1,
      10,   185,   194,   195,    -1,    58,    11,   185,    -1,    11,
     185,    -1,    58,    12,   185,    -1,    12,   185,    -1,   196,
     176,    -1,   176,    -1,   197,   198,    -1,   198,    -1,   223,
      -1,   223,    45,   198,    -1,    51,   198,    -1,    41,    -1,
      71,    -1,   218,    -1,   225,    69,   211,    70,    -1,   198,
      69,   211,    70,    -1,    29,    -1,    30,    -1,    31,    -1,
      27,    -1,    54,   185,    56,    -1,    54,   199,    56,    -1,
      54,   200,    56,    -1,    54,   200,    47,   185,    56,    -1,
      40,    -1,    57,   214,    59,    -1,    54,   192,   235,    56,
      -1,    54,   231,   187,    56,    -1,    54,   233,   187,    56,
      -1,   199,    55,   185,    -1,   185,    55,   185,    -1,   200,
      55,   201,    -1,   201,    -1,   220,    43,   185,    -1,   203,
      -1,    58,   202,    -1,   203,    58,   204,    -1,   203,    58,
      -1,   204,    -1,   166,   205,   160,    -1,   206,    -1,    50,
     185,    -1,     1,    -1,   206,   207,    -1,   207,    -1,    47,
     187,    50,   185,    -1,   209,    -1,    58,   208,    -1,   209,
      58,   210,    -1,   209,    58,    -1,   210,    -1,   186,    49,
     185,    -1,    14,   162,    -1,   186,    -1,    -1,   212,    -1,
     212,    55,   213,    -1,   213,    -1,   222,    -1,   223,    43,
     185,    -1,   185,    -1,   199,    -1,   185,   215,    -1,   185,
      44,   185,    -1,   185,    55,   185,    44,    -1,   185,    44,
      -1,   185,    55,   185,    44,   185,    -1,   215,    47,   216,
      -1,    47,   216,    -1,   216,    55,   217,    -1,   217,    -1,
     185,    49,   185,    -1,   185,    -1,    14,   162,    -1,   225,
      -1,    54,    56,    -1,    57,    59,    -1,    54,   219,    56,
      -1,   219,    55,    -1,    55,    -1,    33,    -1,    64,    -1,
      65,    -1,    66,    -1,    39,    -1,    35,    -1,   220,    -1,
      54,    32,    56,    -1,    54,    72,    56,    -1,    54,    48,
      56,    -1,    54,    52,    56,    -1,    54,    61,    56,    -1,
      37,    -1,    54,    36,    56,    -1,   222,    -1,    35,    -1,
      54,    34,    56,    -1,    39,    -1,    54,    38,    56,    -1,
     224,    -1,    72,    -1,    48,    -1,   229,    -1,    72,    -1,
     229,    -1,    48,    -1,   229,    -1,    32,    -1,    60,   220,
      60,    -1,    52,    -1,    61,    -1,    48,    -1,   231,    -1,
      36,    -1,    60,    37,    60,    -1,   227,    -1,    34,    -1,
      60,    35,    60,    -1,    38,    -1,    60,    39,    60,    -1,
     232,    -1,   226,    -1,   232,    -1,   230,    -1,   233,    -1,
      -1,    70,    -1,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   120,   120,   121,   122,   123,   136,   140,   144,   146,
     148,   154,   157,   159,   160,   168,   169,   170,   171,   172,
     177,   178,   179,   180,   181,   183,   184,   189,   190,   191,
     192,   193,   195,   196,   197,   198,   200,   201,   203,   204,
     209,   210,   211,   213,   224,   226,   229,   232,   235,   237,
     238,   239,   241,   242,   243,   244,   246,   247,   249,   250,
     251,   252,   254,   255,   256,   257,   259,   260,   262,   263,
     268,   269,   270,   271,   272,   277,   278,   281,   282,   285,
     289,   291,   294,   295,   298,   302,   303,   309,   311,   312,
     313,   315,   316,   318,   320,   322,   323,   325,   327,   329,
     330,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     342,   343,   344,   345,   346,   347,   349,   350,   351,   353,
     355,   356,   358,   359,   360,   362,   363,   364,   366,   367,
     369,   370,   375,   377,   378,   379,   381,   382,   387,   389,
     391,   393,   395,   401,   402,   403,   404,   405,   406,   408,
     409,   411,   412,   414,   415,   417,   418,   420,   421,   424,
     425,   427,   428,   430,   431,   436,   438,   440,   441,   443,
     444,   445,   446,   448,   450,   452,   453,   455,   456,   458,
     459,   461,   462,   463,   464,   465,   466,   468,   469,   471,
     478,   486,   487,   488,   489,   490,   493,   494,   496,   497,
     498,   499,   500,   502,   503,   505,   506,   508,   509,   511,
     512,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     529,   536,   537,   538,   541,   542,   544,   545,   546,   547,
     550,   551,   553,   560,   561,   562,   563,   564,   565,   566,
     567,   569,   570,   572,   573,   575,   576,   578,   579,   581,
     582,   583,   585,   587,   588,   589,   592,   594,   595,   596,
     598,   599,   600,   601,   602,   604,   605,   606,   607,   608,
     610,   611,   613,   614,   616,   617,   619,   621,   622,   627,
     628,   631,   632,   635,   636,   637,   640,   642,   649,   650,
     655,   656,   658,   659,   661,   663,   664,   665,   667,   668,
     670,   671,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,   684,   685,   687,   688,   690,   691,   693,   694,
     695,   697,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   709,   716,   719,   720,   722,   723,   725,   726,
     728,   729,   731,   732,   735,   736,   738,   750,   751,   753,
     754,   756,   757,   759,   760,   762,   763,   765,   766,   767,
     768,   770,   772,   773,   774,   775,   777,   779,   780,   781,
     788,   790,   793,   794,   799,   800,   802,   803,   806,   807,
     809,   810,   812,   813,   814,   815,   816,   817,   818,   819,
     821,   822,   823,   824,   825,   826,   828,   835,   836,   838,
     839,   840,   841,   843,   844,   847,   848,   850,   859,   860,
     862,   863,   864,   866,   868,   869,   870,   872,   873,   875,
     878,   879,   881,   882,   883,   886,   887,   889,   891,   892,
     894,   895,   897,   898,   903,   904,   905,   921,   922,   923,
     924,   927,   928,   930,   931,   933,   934,   935,   940,   941,
     942,   943,   945,   946,   948,   949,   950,   951,   953,   954,
     956,   957,   958,   959,   960,   961,   963,   964,   965,   967,
     968,   970,   971,   972,   974,   975,   976,   978,   979,   981,
     982,   984,   985,   986,   987,   989,   990,   992,   993,   994,
     997,   998,  1000,  1001,  1002,  1004,  1005,  1007,  1008,  1013,
    1016,  1017
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EXPR", "CTXT", "SCRIPT", "CASEXP", "OF",
  "DATA", "TYPE", "IF", "THEN", "ELSE", "WHERE", "LET", "IN", "INFIXN",
  "INFIXL", "INFIXR", "PRIMITIVE", "TNEWTYPE", "DEFAULT", "DERIVING", "DO",
  "TCLASS", "TINSTANCE", "MDO", "REPEAT", "ALL", "NUMLIT", "CHARLIT",
  "STRINGLIT", "VAROP", "VARID", "CONOP", "CONID", "QVAROP", "QVARID",
  "QCONOP", "QCONID", "RECSELID", "IPVARID", "COCO", "'='", "UPTO", "'@'",
  "'\\\\'", "'|'", "'-'", "FROM", "ARROW", "'~'", "'!'", "IMPLIES", "'('",
  "','", "')'", "'['", "';'", "']'", "'`'", "'.'", "TMODULE", "IMPORT",
  "HIDING", "QUALIFIED", "ASMOD", "NEEDPRIMS", "FOREIGN", "'{'", "'}'",
  "'_'", "'+'", "$accept", "start", "topModule", "startMain", "modname",
  "modid", "modBody", "expspec", "exports", "export", "qnames", "qnames1",
  "qname", "impDecls", "chase", "impDecl", "impspec", "imports",
  "imports1", "import", "names", "names1", "name", "topDecls", "topDecl",
  "tyLhs", "invars", "invar", "constrs", "pconstr", "qconstr", "constr",
  "btype3", "bbtype", "nconstr", "fieldspecs", "fieldspec", "deriving",
  "derivs0", "derivs", "prims", "prim", "crule", "irule", "dtypes",
  "dtypes1", "fds", "fds1", "fd", "varids0", "topType", "topType0",
  "topType1", "polyType", "bpolyType", "varids", "sigType", "context",
  "lcontext", "lacks", "lacks1", "type", "type1", "btype", "btype1",
  "btype2", "atype", "atype1", "btypes2", "typeTuple", "tfields", "tfield",
  "gendecl", "optDigit", "ops", "vars", "decls", "decls0", "decls1",
  "decl", "funlhs", "funlhs0", "funlhs1", "rhs", "rhs1", "gdrhs", "gddef",
  "wherePart", "lwherePart", "ldecls", "ldecls0", "ldecls1", "ldecl",
  "pat", "pat_npk", "npk", "pat0", "pat0_INT", "pat0_vI", "infixPat",
  "pat10", "pat10_vI", "fpat", "apat", "apat_vI", "pats2", "pats1",
  "patbinds", "patbinds1", "patbind", "patfields", "patfield", "exp",
  "exp_err", "exp0", "exp0a", "exp0b", "infixExpa", "infixExpb", "exp10a",
  "exp10b", "then_exp", "else_exp", "pats", "appExp", "aexp", "exps2",
  "vfields", "vfield", "alts", "alts1", "alt", "altRhs", "guardAlts",
  "guardAlt", "stmts", "stmts1", "stmt", "fbinds", "fbinds1", "fbind",
  "list", "zipquals", "quals", "qual", "gcon", "tupCommas", "varid",
  "qconid", "var", "qvar", "con", "qcon", "varop", "varop_mi", "varop_pl",
  "varop_mipl", "qvarop", "qvarop_mi", "conop", "qconop", "op", "qop",
  "begin", "end", 0
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
     295,   296,   297,    61,   298,    64,    92,   124,    45,   299,
     300,   126,    33,   301,    40,    44,    41,    91,    59,    93,
      96,    46,   302,   303,   304,   305,   306,   307,   308,   123,
     125,    95,    43
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    76,    77,    78,    78,    79,    79,    79,    79,    79,
      80,    80,    80,    80,    80,    81,    81,    82,    82,    82,
      82,    82,    83,    83,    83,    83,    84,    84,    85,    85,
      86,    86,    86,    87,    88,    88,    88,    88,    88,    89,
      89,    89,    90,    90,    90,    90,    91,    91,    92,    92,
      92,    92,    93,    93,    93,    93,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   105,   105,   105,   106,   106,   106,   107,
     108,   108,   109,   109,   109,   110,   110,   110,   111,   111,
     112,   112,    97,   113,   113,   113,   114,   114,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   124,   124,   125,
     125,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     129,   130,   130,   130,   130,   130,   130,   131,   131,   132,
     132,   133,   133,   133,   133,   133,   134,   134,   135,   135,
     135,   135,   135,   136,   136,   137,   137,   138,   138,   139,
     139,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   141,   141,   142,   142,   142,   142,
     143,   143,   144,   145,   145,   145,   145,   145,   145,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   150,   151,   152,   152,   152,   152,   153,   153,   153,
     154,   154,   154,   154,   154,   155,   155,   155,   155,   155,
     156,   156,   157,   157,   158,   158,   159,   160,   160,   161,
     161,   162,   162,   163,   163,   163,   164,   165,   165,   165,
     166,   166,   167,   167,   168,   169,   169,   169,   170,   170,
     171,   171,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   173,   173,   174,   174,   175,   175,   176,   176,
     176,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   183,   183,   184,   185,   185,   186,
     186,   187,   187,   188,   188,   189,   189,   190,   190,   190,
     190,   190,   191,   191,   191,   191,   191,   192,   192,   192,
     192,   193,   193,   193,   194,   194,   195,   195,   196,   196,
     197,   197,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   199,   199,   200,   200,   201,   202,   202,
     203,   203,   203,   204,   205,   205,   205,   206,   206,   207,
     208,   208,   209,   209,   209,   210,   210,   210,   211,   211,
     212,   212,   213,   213,   214,   214,   214,   214,   214,   214,
     214,   215,   215,   216,   216,   217,   217,   217,   218,   218,
     218,   218,   219,   219,   220,   220,   220,   220,   221,   221,
     222,   222,   222,   222,   222,   222,   223,   223,   223,   224,
     224,   225,   225,   225,   226,   226,   226,   227,   227,   228,
     228,   229,   229,   229,   229,   230,   230,   231,   231,   231,
     232,   232,   233,   233,   233,   234,   234,   235,   235,   236,
     237,   237
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     4,     4,     7,     5,
       2,     0,     1,     1,     1,     0,     2,     1,     2,     4,
       0,     2,     3,     3,     4,     3,     1,     1,     1,     4,
       4,     2,     0,     1,     1,     2,     3,     1,     1,     1,
       3,     2,     1,     0,     3,     5,     6,     4,     2,     0,
       4,     3,     0,     1,     1,     2,     3,     1,     1,     1,
       4,     4,     0,     1,     1,     2,     3,     1,     1,     1,
       2,     3,     3,     1,     1,     4,     6,     2,     5,     7,
       2,     4,     2,     5,     7,     2,     2,     2,     2,     1,
       1,     3,     1,     3,     1,     3,     1,     4,     1,     3,
       1,     4,     3,     3,     3,     1,     1,     4,     3,     1,
       3,     2,     2,     3,     2,     3,     2,     1,     1,     1,
       3,     1,     3,     3,     4,     0,     2,     4,     0,     1,
       3,     1,     4,     3,     1,     1,     2,     1,     7,     6,
       8,     7,     7,     4,     3,     4,     2,     2,     2,     3,
       1,     3,     1,     0,     1,     3,     1,     0,     2,     3,
       1,     3,     1,     0,     2,     4,     1,     3,     1,     3,
       3,     3,     1,     4,     1,     3,     5,     2,     1,     3,
       1,     2,     1,     3,     3,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     3,
       3,     3,     1,     1,     1,     2,     1,     2,     1,     1,
       1,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       5,     3,     2,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     2,     3,     2,     3,     2,     3,
       3,     1,     0,     3,     1,     3,     1,     3,     3,     0,
       2,     2,     2,     1,     2,     4,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     4,     4,     4,     2,     2,
       2,     1,     2,     1,     2,     1,     4,     0,     2,     0,
       2,     3,     3,     0,     2,     2,     2,     3,     2,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     4,     3,     4,     3,     4,
       3,     4,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     3,     1,     4,     1,     1,     1,     3,     3,     3,
       3,     2,     3,     5,     3,     3,     3,     1,     0,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     2,
       4,     3,     4,     3,     2,     4,     3,     6,     4,     4,
       1,     4,     4,     4,     3,     2,     3,     2,     2,     1,
       2,     1,     1,     3,     2,     1,     1,     1,     4,     4,
       1,     1,     1,     1,     3,     3,     3,     5,     1,     3,
       4,     4,     4,     3,     3,     3,     1,     3,     1,     2,
       3,     2,     1,     3,     1,     2,     1,     2,     1,     4,
       1,     2,     3,     2,     1,     3,     2,     1,     0,     1,
       3,     1,     1,     3,     1,     1,     2,     3,     4,     2,
       5,     3,     2,     3,     1,     3,     1,     2,     1,     2,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     1,     3,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     3,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     0,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     5,     0,     0,    11,     0,   348,     0,     0,     0,
       0,     0,   393,   390,   391,   392,   454,   469,   466,   471,
     398,   385,     0,     0,     0,     0,     0,   455,   456,   457,
     386,   279,   347,   350,   351,   352,   353,   355,   354,   356,
     370,   381,   387,   460,   468,   382,   473,   448,   459,   458,
       0,     0,     3,   185,   182,     0,   208,     0,     4,   499,
       1,     0,     0,   283,     0,     0,     0,   318,   324,   325,
       0,     0,     0,   326,   379,   320,     0,   322,   319,   448,
     359,   364,   384,   481,   490,   487,   492,     0,   483,   453,
     449,     0,   484,   477,     0,   354,     0,     0,   406,     0,
     460,   489,   478,     0,   494,     0,   450,   434,   435,     0,
       0,     2,     0,   481,   490,   487,   492,   485,   483,   484,
     477,   497,   486,   498,     0,     0,   380,   428,     0,   428,
       0,   181,   195,     0,     0,     0,     0,     0,   223,   207,
     209,   211,   210,     0,    10,    20,    12,    15,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   427,     0,
     420,   424,     0,   331,   296,     0,     0,     0,     0,     0,
       0,     0,     0,   291,   290,   293,   297,   301,   300,   314,
     315,     0,     0,   345,   322,   460,   295,     0,   337,   291,
     290,     0,     0,   378,     0,   338,   461,   470,   467,   472,
     463,   464,     0,     0,     0,     0,   465,   462,     0,   394,
       0,     0,   395,     0,     0,   396,   452,   451,     0,     0,
     351,     0,     0,     0,     0,   436,   399,   280,   202,     0,
       0,   349,     0,   180,   196,   198,   197,   206,   211,     0,
     358,   363,     0,   361,   366,     0,     0,   429,   431,   432,
       0,   383,     0,     0,   190,   197,     0,   186,     0,   183,
       0,   184,     0,   212,     0,     0,     0,     0,     0,   231,
       0,   211,   222,     0,   189,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   296,     0,    15,
       0,     0,     0,     0,    43,    42,    17,    73,   253,     0,
      74,     0,   257,   258,   259,     0,   301,   300,   295,     0,
       0,   375,     0,     0,     0,   373,   501,     0,   284,   500,
     289,   286,   281,   285,   282,   372,   426,   421,     0,   368,
     423,   369,     0,     0,   303,   302,   312,   313,     0,   327,
     328,     0,     0,     0,   316,     0,   329,     0,     0,   332,
     317,     0,     0,     0,     0,   330,   371,   321,     0,   339,
     341,   343,     0,   491,   488,   493,   482,   404,   400,   403,
       0,   405,     0,   407,   401,   402,   437,     0,   446,   442,
     444,   404,     0,     0,     0,   212,     0,   174,     0,   195,
       0,     0,   211,     0,     0,     0,   205,     0,   357,   362,
     360,   365,     0,     0,   389,     0,     0,   388,   187,   193,
     192,   194,   225,   191,   224,   213,     0,   214,     0,   215,
       0,   217,     0,   218,     0,     0,   219,   216,     0,   221,
     459,   471,     0,     0,    21,     0,     0,    26,     0,    27,
      28,     0,    82,     0,    80,    90,    89,     0,   234,   241,
       0,   236,     0,   238,     0,   135,     0,     0,   134,   137,
      85,     0,   182,   148,     0,   146,   157,     0,   150,   147,
     277,     0,   152,   475,     0,   474,     0,   476,     0,     0,
     290,   295,    16,    48,    14,     0,    49,    13,    87,    86,
       0,     0,     7,    43,    18,    70,     0,     0,   271,     0,
       0,     0,   254,   277,   273,   275,   269,   256,     0,     0,
     479,     0,   268,     0,   480,     6,     0,     0,     0,   408,
     412,   374,   377,     0,   288,     0,   425,   422,     0,   306,
     335,   292,     0,   310,     0,   308,   334,     0,   344,     0,
     346,   294,     0,   304,   336,   323,     0,     0,   397,   447,
       0,     0,     0,   441,     0,   178,     0,     0,     0,   175,
       0,     0,   215,     0,   217,   199,   179,   200,   201,   430,
     433,   226,   227,   225,   228,   224,   229,     0,   230,     0,
     232,    22,    31,     0,    23,    32,     9,    15,     0,     0,
       0,    88,     0,   233,   495,   496,   244,   235,   237,     0,
       0,   136,     0,     0,     0,   154,   156,     0,   277,     0,
       0,   144,     0,   262,   295,     0,     0,   328,    49,    52,
       0,     0,    44,     0,     0,     0,    40,    71,    72,   240,
       0,   239,   166,   168,     0,     0,   172,   203,   204,   245,
       0,   272,     0,   270,   274,   261,   260,   294,   264,   299,
     298,   263,   409,   416,     0,     0,   277,   414,   418,   367,
     411,   376,   287,   307,   311,   309,   333,   305,   340,   342,
     445,   443,   440,     0,   177,   188,     0,   220,    24,    25,
       0,    33,     0,    34,    37,    38,    39,     0,    90,    81,
     109,     0,     0,     0,   125,    96,    98,   106,     0,     0,
     105,     0,    75,     0,   132,   133,     0,   119,   125,   145,
       0,   162,   158,   160,     0,   143,   149,   249,   278,   151,
     265,   266,   267,     0,    47,    59,    53,     0,    54,    57,
      58,    52,    49,     0,     0,     0,    19,     0,     0,     0,
       0,     0,   255,     0,     0,   415,   413,   417,   410,   173,
     176,    29,    30,    35,     8,     0,     0,     0,   203,   204,
       0,     0,     0,    78,     0,   114,   112,     0,     0,     0,
       0,   111,     0,     0,     0,   243,     0,    83,   155,     0,
     163,   164,     0,     0,    49,    62,    51,    55,     0,    45,
       0,     0,     0,     0,     0,     0,   169,   204,   167,   170,
     171,   276,     0,    36,   125,     0,     0,   115,   128,   126,
      95,   113,     0,   104,   118,   117,   102,   110,   103,   108,
       0,   121,     0,   246,    76,    92,    94,   125,   159,   161,
     250,   252,   247,   251,   248,    46,     0,     0,    63,     0,
      64,    67,    68,    69,    56,    50,     0,     0,   139,     0,
       0,   165,   419,    79,     0,    97,   100,     0,   105,   101,
       0,   129,   131,   116,     0,   107,     0,     0,     0,    84,
      60,    61,    65,   138,     0,   141,   142,     0,   127,     0,
     120,     0,   122,   123,    91,    93,    66,   140,    99,   130,
     124
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,    58,    59,   145,   486,   293,   276,   436,   437,
     682,   683,   684,   294,   494,   295,   622,   727,   728,   729,
     839,   840,   841,   296,   297,   447,   824,   825,   694,   695,
     855,   696,   697,   813,   708,   820,   821,   763,   860,   861,
     457,   458,   466,   470,   604,   605,   608,   712,   713,   714,
     631,   632,   633,   386,   230,   554,   231,   635,   388,    53,
     133,   233,   234,   636,   235,   255,   139,   237,   266,   267,
     268,   269,   298,   450,   593,   299,   718,   782,   783,   300,
     301,   302,   303,   502,   503,   504,   505,   611,   111,    64,
     153,   154,   321,   517,   189,   190,   175,   648,   176,   177,
     335,   178,   179,   337,   180,   181,   191,   358,   359,   360,
     182,   183,   378,    32,    33,    34,    35,    36,    37,    38,
      39,   152,   315,    76,    40,    41,    96,    97,    98,   518,
     519,   520,   656,   657,   658,   159,   160,   161,   246,   247,
     248,   109,   225,   379,   380,    42,   270,    43,    56,    44,
      45,    46,    79,   594,   101,   513,   477,   121,   122,   104,
     353,   596,   124,   148,   322
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -786
static const yytype_int16 yypact[] =
{
     531,  -786,  2241,  2047,    29,    82,  -786,  2241,  2241,    16,
      39,    67,  -786,  -786,  -786,  -786,  -786,  -786,  -786,  -786,
    -786,  -786,  3608,  2850,  1614,  1109,  1773,  -786,  -786,  -786,
    -786,   135,  -786,  -786,   112,  -786,   495,  -786,   495,  -786,
    1614,    91,  -786,  -786,  -786,   144,  -786,   127,  -786,  -786,
     221,   419,  -786,  -786,  3988,   205,  -786,   183,  -786,   229,
    -786,   265,    56,  -786,   307,  2522,  2522,  -786,  -786,  -786,
    3608,  3057,  3218,  -786,  -786,  -786,  3296,  -786,   315,   294,
    -786,  -786,    91,   326,   328,   349,   368,  2617,   374,  -786,
    -786,   363,   386,   411,   157,   495,   259,   209,  -786,   421,
     323,  -786,  -786,  2666,  -786,  2666,  -786,   299,   424,   367,
      16,  -786,  1965,  -786,  -786,  -786,  -786,  -786,  -786,  -786,
    -786,  -786,  -786,  -786,  2712,  2758,    91,   592,  1614,   592,
    2476,  -786,  -786,   442,  3728,   554,   950,  1033,  -786,  -786,
    -786,  -786,  -786,   385,  -786,   420,  -786,  2909,  2909,   413,
    2241,   475,    74,  1904,    49,  2241,    16,  2522,   451,    32,
     444,  -786,    32,  -786,    43,   326,   328,   368,  1233,   374,
     386,   411,   454,   458,   461,   480,  -786,    43,    43,  3608,
    -786,   584,   322,  -786,  3608,   482,   279,  1827,  -786,  -786,
    -786,    20,  2241,  -786,  3608,   592,  -786,  -786,  -786,  -786,
    -786,  -786,   470,   477,   481,   485,  -786,  -786,  2241,  -786,
    2568,  2241,  -786,  2241,   385,  -786,  -786,  -786,  2241,   492,
    -786,   496,  2133,  2287,  2241,   515,  -786,  -786,  -786,  2361,
     530,  -786,   540,  -786,  -786,  3803,  3514,  -786,   205,  2850,
    -786,  -786,  2850,  -786,  -786,   726,   532,   556,  -786,   561,
     576,    91,   553,  2396,  -786,  3816,  1339,  -786,  1339,  -786,
    1339,  -786,   570,  -786,   598,  3659,   616,   621,   434,  -786,
     636,   589,  -786,   577,  -786,  2061,   631,   848,   152,   672,
     759,   781,   155,  1042,    71,  1253,  1383,   590,  3101,  2909,
     204,    64,  1248,   579,   603,  -786,   626,  -786,  -786,   199,
    -786,    57,  -786,  3608,  -786,    63,   590,   590,  3013,    32,
    3257,  -786,  2241,  2241,   675,  -786,  -786,    96,  -786,  -786,
    -786,  -786,  -786,  -786,  -786,  -786,   307,  -786,  2241,  -786,
    2804,  -786,   242,  3335,  -786,  -786,  3608,  -786,  3374,  -786,
    -786,  2476,  3413,  3452,  -786,  3374,  -786,  3374,   385,  -786,
    -786,  3374,   664,  3491,  3374,  -786,  -786,  -786,   625,   647,
    -786,   561,   662,  -786,  -786,  -786,  -786,  -786,  -786,  -786,
     654,  -786,   323,  -786,  -786,  -786,  -786,    16,   663,   668,
    -786,   673,  2287,   385,  2396,   694,   670,   530,   696,   698,
    3687,   659,   343,  2476,  2476,  2476,  -786,  2476,  -786,  -786,
    -786,  -786,   349,   687,  -786,   592,  2241,  -786,  -786,  -786,
    3988,  -786,  3988,  -786,  3988,  -786,  2476,  -786,  2476,  -786,
    2476,  -786,  2476,  -786,  2476,   385,  -786,  -786,  2476,  -786,
     161,   703,  1175,   707,  -786,   373,   666,  -786,   714,  -786,
    -786,    52,  -786,   719,  3762,    60,  -786,   293,  -786,  -786,
     906,  -786,   906,  -786,   906,  -786,   776,   203,  -786,   744,
    -786,   724,  3850,  -786,  2019,  -786,   682,   748,  3866,  -786,
     784,   761,  3866,  -786,   267,  -786,  3374,  -786,   756,  3530,
     760,  3145,  -786,  -786,  -786,   373,   239,  -786,  -786,  -786,
     896,   896,  -786,    79,  -786,  2970,   549,   896,  -786,  2476,
    2241,  2666,  -786,   784,   770,  -786,  -786,  -786,  3374,  3374,
    -786,  3569,  -786,  3374,  -786,  -786,  3257,    51,    32,   763,
    -786,  -786,  -786,  2241,  -786,  2241,  -786,  -786,  3608,  -786,
    -786,  -786,  3608,  -786,  3608,  -786,  -786,   762,  -786,   482,
    -786,  -786,  3608,  -786,  -786,  -786,   592,  3374,  -786,   307,
    2241,  2287,  2179,   668,   110,  -786,   690,  3700,   715,  -786,
    2476,  2433,   769,  2433,   772,  -786,  -786,  -786,  -786,  -786,
    -786,  -786,  -786,  3816,  -786,  3816,  -786,   767,  -786,   589,
    -786,  -786,  -786,  4031,  -786,  4045,  -786,  2909,   172,  1399,
    2476,  -786,   533,   777,  -786,  -786,  -786,   777,   777,  3179,
     896,  -786,   172,  1399,   771,   779,  -786,   370,   784,   371,
     766,  -786,   371,  -786,   310,  3608,  3608,  3608,   298,  1451,
     785,   373,  -786,   474,   809,  2970,  -786,  -786,  -786,  -786,
     385,  -786,  -786,  -786,   795,   797,  -786,  3889,  3592,  -786,
      63,  -786,   811,  -786,  -786,  -786,  -786,    43,  -786,  -786,
     310,  -786,  -786,  -786,  2666,  2241,   784,   805,  -786,  -786,
    3374,  -786,  -786,  -786,  -786,  -786,  -786,  -786,  -786,  -786,
    -786,  -786,  -786,  1965,  -786,  -786,   802,  -786,  -786,  -786,
     803,  -786,   808,   806,  -786,  -786,  -786,    32,  -786,   552,
    -786,   385,  3988,   866,   193,  -786,  -786,  3905,    36,  3775,
    1479,   799,   851,   906,  -786,  -786,   676,  -786,   847,  -786,
    2476,  -786,   815,  -786,   961,  -786,  3988,  -786,  -786,  3988,
    -786,  -786,  -786,   373,  -786,   818,  -786,   817,   820,  -786,
    -786,  1451,   182,   896,  1211,   896,   626,  1165,  4008,  4008,
    4008,  4008,  -786,  2241,   826,  -786,  -786,  -786,  -786,  -786,
    -786,  -786,  -786,  1751,  -786,  1399,  1514,    36,  3988,  3988,
     828,   188,  1399,  -786,  3988,  -786,  -786,   850,  3928,  3928,
    3988,  -786,  3928,   509,   896,  -786,  1399,  -786,  -786,   370,
    -786,  -786,  1328,    68,   182,  1205,  -786,  1787,   830,  -786,
     840,   896,  3179,   849,   855,  3948,  -786,  3968,  -786,  -786,
    -786,  -786,  2241,  -786,   193,  1666,  3928,   821,   371,  -786,
    -786,  -786,  3988,  -786,  -786,  -786,  -786,  -786,  -786,  -786,
     102,  -786,   206,  -786,   843,  -786,   864,   847,  -786,   385,
    -786,  -786,  -786,  -786,  -786,  -786,   852,   560,  -786,   853,
     856,  -786,  -786,  -786,  -786,  -786,  3179,   868,  -786,  3179,
    3179,  -786,  -786,  -786,  2322,  -786,  -786,   862,  3636,  -786,
     861,   869,  -786,  -786,   896,  -786,  1520,   896,  3179,  -786,
    -786,  -786,  1853,  -786,  3179,  -786,  -786,  2453,  -786,   371,
    -786,  2476,  -786,  -786,  -786,  -786,  -786,  -786,  -786,  -786,
    -786
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -786,  -786,  -786,  -786,  -786,  -419,  -139,  -786,  -786,   336,
    -786,  -786,   180,  -786,   441,   443,  -580,   208,  -786,   148,
    -786,  -786,    69,   318,   449,  -421,  -786,    80,   197,  -598,
    -786,  -785,  -786,  -577,   177,  -786,    84,  -682,  -786,  -786,
    -786,   357,  -786,  -786,  -786,  -786,  -786,  -786,   185,   189,
    -558,   173,   -74,   104,  1256,  -576,   300,     1,  -786,   -50,
     587,  -127,  -124,  -575,   921,   187,  -205,   710,   -49,  -786,
    -786,   551,  -786,   503,  -376,  -752,  -786,  -786,  -786,  -145,
    -786,   686,   692,  -299,  -786,  -786,   483,  -488,  -786,   -66,
    -786,  -786,  -786,     2,   -60,   -64,  -134,  -786,   473,  -130,
     113,  -119,   -24,    65,  1000,  -786,  -786,  -786,  -786,   435,
    -786,   638,   175,   -10,   -78,   -63,  -786,  -786,  -786,    37,
     391,  -786,  -786,  -786,  -786,    23,   962,  -786,   782,   479,
    -786,   330,  -786,  -786,   345,   -34,  -786,   678,   874,  -786,
     604,  -786,  -786,   628,   462,  1561,    24,    -3,   838,   709,
     -84,   -77,  1464,  -141,  -786,  -786,    -1,  -786,   993,  -179,
      21,   317,    33,  -786,  -123
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -471
static const yytype_int16 yytable[] =
{
      55,   132,   135,   254,    52,   707,   507,   174,   320,   309,
     273,   173,   264,   305,   305,   643,   582,   306,   306,   305,
     856,   822,   100,   306,   102,   219,   777,   221,   307,   307,
     396,   324,   162,   316,   307,   102,   329,   102,   724,   331,
     220,   704,   220,   250,   227,   250,   105,    82,    55,    99,
     316,   141,   653,   586,   737,   158,   158,   123,   498,   123,
      80,   -77,    95,   126,   498,   488,   618,   150,   185,   316,
     114,   125,   463,   172,   188,   354,   597,   114,   598,   355,
     -41,   116,    60,   304,   304,    63,   313,    74,   205,   304,
     326,    57,   888,   489,   102,    99,   767,   524,   654,   499,
     500,   655,   319,   332,   501,   264,   500,   323,    65,   238,
     501,   362,   822,   232,   151,   756,   123,   757,   -77,   319,
     715,   587,   853,   327,    80,   464,   833,   141,   210,   264,
     -77,   141,   314,   271,   141,   163,    66,   -41,   319,   525,
     274,   193,   290,    16,   336,   869,   476,   158,   110,   -41,
     482,   251,   789,   445,   112,   305,   455,   864,   306,   306,
     127,   240,   243,   336,   810,   508,   509,   689,   746,   307,
     307,   673,   865,   688,    27,    28,    29,    31,   707,   389,
     391,   706,    61,    62,   144,   333,   515,   446,    16,   128,
      54,   439,   816,   815,   815,   818,   129,   815,   342,   343,
      94,   107,   732,   408,   835,   483,   409,   446,   411,   456,
     413,   372,   208,   209,   531,   761,  -469,  -469,    48,    27,
      28,    29,    49,    48,   480,   304,   392,    49,   173,   859,
    -469,   815,   141,   141,   848,   484,   619,   863,   134,    48,
     762,   496,   808,    49,   344,   599,   620,   243,   866,   350,
     392,   143,   141,    55,   497,    55,   213,    55,   600,   357,
     264,   497,   141,   130,   214,   215,   565,   566,   567,   485,
     568,   595,   149,   595,    55,   595,   398,   202,   443,   400,
      55,   204,    55,    55,   461,   185,   467,   471,   873,   571,
     172,   875,   876,   619,   572,   576,   574,   577,   147,   236,
      16,   580,   202,   620,   784,   621,   204,   514,   333,   336,
     885,   549,    99,   114,   211,   212,   887,   116,   336,   336,
     158,   250,   155,   265,   194,   311,    16,   342,   343,   336,
     325,    27,    28,    29,   389,   558,   590,   606,   141,   332,
     530,   742,   613,   222,   114,   539,   223,   536,   116,   537,
     628,   352,   619,   540,   224,   194,   544,    27,    28,    29,
     194,   305,   620,   195,   723,   306,   218,   356,   506,   347,
     332,   711,   640,   512,   645,   646,   307,   348,   349,   651,
     555,   392,   196,   367,   197,   428,   369,   141,   370,   143,
     141,   141,   141,   373,   141,   659,    16,   376,   202,   381,
     203,   344,   204,  -163,   484,   198,    48,   141,    48,   141,
      49,   141,    49,   141,    81,   141,   390,   141,    16,   141,
    -163,   141,   579,   642,   199,   141,   226,    27,    28,    29,
     201,   304,   396,   676,  -163,  -163,  -163,   572,   220,   574,
     265,   141,   206,   410,   591,   412,   529,   414,   687,    27,
      28,    29,    16,   305,    48,   533,   535,   306,    49,   141,
      50,   141,   362,   702,   444,   141,   543,   207,   307,   141,
     462,   205,   468,   472,   275,   131,   216,   217,    81,   211,
     514,   424,   310,    27,    28,    29,   312,   521,   522,   425,
     426,   305,   766,   238,   396,   306,   141,   256,   257,   439,
     328,   685,   330,   526,   336,   733,   307,    16,   336,   338,
     336,   411,   701,   413,   339,   241,   244,   340,   336,   768,
     769,   772,   341,   304,   595,   351,   701,   113,   456,   114,
     363,   115,     1,   116,     2,     3,     4,   364,    27,    28,
      29,   365,    16,   117,   506,   366,   512,   118,   374,   669,
     629,   674,   375,   396,   141,    91,   119,   141,   238,   811,
     238,   304,   382,   456,   754,   817,    16,   120,   202,   264,
     141,   557,   141,    27,    28,    29,   744,   630,   806,   819,
     393,   570,    16,   778,    48,    16,   141,   141,    49,   205,
      50,   220,   165,   394,   166,   755,   238,    27,    28,    29,
     141,   244,   404,   229,  -468,   573,   137,   575,   403,   260,
     261,   405,   169,    27,    28,    29,    27,    28,    29,   406,
     138,   170,   113,   407,   114,    16,   415,   555,   116,    18,
     399,   428,   171,   401,   141,   141,   429,   831,   473,   345,
     346,   663,   118,   408,   441,   664,   245,   665,   305,   492,
     474,   119,   306,   416,   417,   667,    27,    28,    29,   832,
     834,   493,   475,   307,   796,   798,   799,   800,   333,   685,
     238,   420,   421,   448,   232,   641,   422,   423,   701,   772,
     720,   721,   722,   638,   495,   701,   591,   523,   555,   141,
     392,   216,   427,   541,   141,   545,   141,   141,   661,   701,
     662,   449,   546,   591,  -242,   547,  -242,   141,   843,    16,
     548,   781,   550,   141,   563,   564,   141,   552,   304,   776,
    -242,   583,   584,   551,  -242,   670,   559,   672,   701,   607,
     264,    78,  -242,  -242,   674,   141,   141,   141,   141,   883,
      27,    28,    29,   200,  -242,   256,   675,  -181,   573,   560,
     575,  -187,   141,   674,   890,   141,   141,  -458,   165,   141,
     451,   141,   402,   581,   140,   141,   141,   141,   585,   141,
     563,   421,   588,   141,   403,   601,   700,   602,   169,    78,
     186,   186,   453,   452,   454,    78,   638,   170,   449,   238,
     700,  -242,   238,  -242,   141,   843,   716,   610,   171,   719,
     701,   609,   238,   141,   389,   391,   857,  -242,   165,   141,
     449,  -242,   615,  -242,   612,  -242,   617,   501,   666,  -242,
    -242,   660,  -183,   677,   403,  -184,   781,   709,   169,  -242,
     745,  -242,   703,  -242,   710,   717,   249,   170,   249,   731,
     735,  -242,  -242,   238,   140,   738,   238,   238,   171,   442,
     739,   392,   654,  -242,   743,   141,   308,   308,   750,   751,
     236,   753,   308,   141,   752,   238,   774,   228,   773,   761,
     779,   238,   785,   786,   141,   787,   802,    78,   141,   759,
     265,    16,   846,    48,   807,   202,   845,    49,    78,    50,
    -470,   849,   142,    78,   383,   146,    78,   850,   867,    16,
     760,    48,    51,    78,   361,    49,   868,    50,   870,   871,
     874,   872,    27,    28,    29,   877,   262,   878,   801,   679,
     384,    89,   263,   137,   879,   797,   797,   797,   797,    16,
      27,    28,    29,   803,   625,   844,   626,   138,   113,   788,
     114,   886,   700,   736,   627,   140,   140,   884,   880,   700,
     456,   228,   804,   827,   473,   759,   759,   705,   118,   759,
      27,    28,    29,   700,   828,   140,   592,   119,   851,   829,
     882,   556,   142,   749,   478,   140,   578,   852,   475,   638,
     479,   668,   638,    16,   649,    48,   538,   644,   108,    49,
     748,   459,   858,   759,    16,   652,   371,   481,   308,   759,
     262,   491,   747,   252,   253,    89,   263,   137,   527,   569,
     553,   780,    78,   671,    27,    28,    29,    78,   103,   186,
     775,   138,    75,     0,     0,    27,    28,    29,     0,     0,
       0,     0,     0,   638,   228,     0,   638,   638,     0,     0,
       0,   390,    78,   460,     0,    78,     0,   186,     0,     0,
       0,    78,    78,     0,   186,   638,   186,     0,     0,     0,
     186,   638,    78,   186,   700,     0,    16,     0,    48,     0,
      75,     0,    49,   142,   142,    16,    75,    48,     0,     0,
       0,    49,     0,    50,     0,     0,     0,   253,     0,     0,
     137,     0,   272,   142,     0,     0,    51,    27,    28,    29,
     140,     0,     0,   142,   138,     0,    27,    28,    29,     0,
       6,     0,     0,   438,   249,     7,     0,     0,     0,     8,
     140,     0,   140,     9,   140,     0,     0,     0,   487,     0,
       0,     0,    10,     0,     0,    11,    12,     0,    13,    14,
      15,    83,    16,    84,    17,    85,    18,    86,    19,    20,
      21,     0,     0,     0,   140,    22,     0,    87,     0,     0,
      24,    88,     0,    25,    89,    90,    26,     0,    75,    91,
      92,     0,   140,    27,    28,    29,     0,     0,   140,    75,
      30,    93,   140,     0,    75,   614,     0,    75,    78,     0,
      78,     0,     0,     0,    75,     0,     0,     0,    16,   623,
     624,     0,     0,     0,   308,     0,   639,   165,     0,   166,
       0,   402,     0,   167,     0,     0,     0,   614,   614,     0,
     650,     0,   614,   403,     0,   186,   795,   169,   142,    27,
      28,    29,     0,     0,   334,     0,   170,    78,    16,     0,
      17,    78,   791,    78,    16,     0,     0,   171,   142,   836,
     142,    78,   142,   792,   465,   361,   186,     0,     0,   837,
     838,     0,    67,    68,    69,   456,    16,   140,    17,    27,
      28,    29,    19,   487,     0,    27,    28,    29,     0,     0,
       0,    16,   142,   140,    70,   140,    16,    71,    48,   200,
      72,     0,    49,     0,    50,     0,   308,    27,    28,    29,
     142,     0,   456,    75,    73,     0,   142,    51,    75,   459,
     142,   490,    27,    28,    29,     0,     0,    27,    28,    29,
       0,     0,     0,   487,    78,    78,    78,     0,   730,   316,
       0,     0,   734,    75,   308,     0,    75,     0,     0,     0,
       0,     0,    75,    75,   279,   280,   281,   140,   140,     0,
       0,     0,     0,    75,     0,     0,     0,   287,    68,    69,
       0,    16,     0,    17,     0,     0,     0,    19,     0,   186,
       0,     0,    16,     0,    48,     0,   187,     0,    49,    70,
      50,     0,   288,     0,   469,    72,   830,     0,     0,     0,
       0,     0,    27,    28,    29,   142,     0,     0,   319,    73,
     690,     0,     0,    27,    28,    29,     0,   140,     0,   140,
     140,   142,     0,   142,     0,     0,    16,   637,    48,     0,
       0,   438,    49,     0,    50,     0,   140,   691,     0,   140,
       0,     0,    16,     0,   430,     0,     0,    51,    49,     0,
     730,     0,   790,   793,   794,     0,     0,    27,    28,    29,
       0,   692,     0,   693,     0,     0,   137,     0,     0,   487,
       0,     0,     0,    27,    28,    29,    47,     0,   140,   140,
     138,    47,    47,     0,   140,   142,   142,     0,     0,    75,
     140,    75,   823,   826,    16,   387,   725,    47,    47,    47,
      47,   308,     0,     0,   842,     0,   730,     0,     0,     0,
     847,     0,     0,     0,    47,   456,   726,   140,     0,   387,
     699,     0,    16,   114,    48,    27,    28,    29,    49,     0,
     637,   228,     0,     0,   699,     0,     0,     0,    75,    47,
      47,   770,    75,   253,    75,   142,   137,   142,   142,   767,
       0,     0,    75,    27,    28,    29,     0,    16,   383,     0,
     138,    47,     0,    16,   142,    48,     0,   142,     0,    49,
       0,   487,     0,     0,     0,     0,     0,    47,   140,    47,
       0,     0,   881,   823,   253,   805,   826,   137,    27,    28,
      29,   842,     0,    77,    27,    28,    29,     0,    47,    47,
       0,   138,    47,     0,     0,     0,   142,   142,     0,   809,
       0,     0,   142,     0,     0,     0,     0,     0,   142,     0,
       0,     0,     0,   758,    47,    75,    75,    75,     0,    47,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,   184,   184,     0,   142,     0,    77,     0,     0,
     387,    12,     0,    13,    14,    15,   862,    16,     0,    17,
       0,    18,     0,    19,    20,    21,    47,     0,     0,   637,
     637,   637,   637,     0,     0,    24,     0,   690,    25,     0,
       0,    26,    47,     0,    47,    47,   699,    47,    27,    28,
      29,     0,    47,   699,     0,    30,    47,    47,    47,   758,
     758,     0,     0,   758,     0,     0,   142,   699,     0,    16,
       0,   430,     0,    47,     0,    49,    47,    50,   184,   184,
       0,     0,     0,   637,   184,     0,   637,   889,   692,     0,
     854,     0,     0,   137,     0,     0,   699,   758,     0,   184,
      27,    28,    29,   758,     0,     0,     0,   138,     0,   440,
      77,     0,     0,     0,     0,    77,     0,     0,   184,     0,
       0,     0,   634,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   637,     0,     0,
     637,   637,     0,     0,     6,     0,    47,    47,     0,     7,
       0,     0,     0,     8,    16,     0,    17,     9,    18,   637,
      19,     0,    47,     0,    47,   637,    10,     0,   699,    11,
      12,     0,    13,    14,    15,   432,    16,     0,    17,     0,
      18,     0,    19,    20,    21,    27,    28,    29,     0,    22,
      16,    23,   725,     0,    24,     0,     0,    25,   334,     0,
      26,     0,   106,     0,     0,     0,     0,    27,    28,    29,
       0,   456,     0,     0,    30,   698,    47,     0,     0,   184,
     184,    27,    28,    29,     0,   634,    67,    68,    69,   698,
      16,     0,    17,     0,    77,     0,    19,     0,     0,    77,
      47,   184,     0,     0,     0,     0,     0,     0,    70,     0,
       0,    71,     0,     0,    72,     0,    16,     0,    17,     0,
       0,    27,    28,    29,   184,     0,     0,    77,    73,   184,
       0,     0,     0,   184,   184,   316,   184,   837,   184,     0,
       0,     0,   184,     0,   184,   184,     0,    27,    28,    29,
     279,   280,   281,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   287,    68,    69,     0,    16,     0,    17,
       0,     0,     0,    19,     0,   317,     0,     0,     0,   387,
       0,     0,   187,   765,     0,    70,   771,     0,   288,     0,
       0,    72,   318,     0,    47,    47,   228,     0,    27,    28,
      29,     0,     0,     0,   319,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,    47,
       0,     0,     0,     0,   634,   634,   634,   634,    16,     0,
      48,     0,     0,     0,    49,     0,    50,     0,     0,     0,
       0,   698,     0,     0,    47,    47,    47,     0,   698,   229,
     228,     0,   137,     0,   814,   814,     0,     0,   814,    27,
      28,    29,   698,     0,     0,     0,   138,   184,     0,     0,
      77,     0,    77,     0,     0,     0,     0,   440,   634,   686,
       0,   634,    16,     0,    48,     0,   184,     0,    49,     0,
       0,   698,   814,     0,     0,     0,     0,     0,     0,   184,
     184,     0,   184,   253,   184,  -153,   137,   184,     0,     0,
      16,     0,    48,    27,    28,    29,    49,     0,    50,   184,
     138,     0,     0,   184,    16,   184,   430,     0,    18,     0,
     431,    51,   634,   184,     0,   634,   634,     0,   184,     0,
     387,    27,    28,    29,   771,   432,   433,   434,    47,    47,
       0,     0,   387,   435,   634,    27,    28,    29,     0,     0,
     634,     0,     0,   698,     6,     0,     0,     0,     0,     7,
       0,     0,     0,     8,     0,     0,     0,     9,   184,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,    11,
      12,     0,    13,    14,    15,     0,    16,     0,    17,     0,
      18,     0,    19,    20,    21,     0,    77,    77,    77,    22,
       6,    23,     0,     0,    24,     7,   184,    25,     0,     8,
      26,     0,  -439,     9,     0,     0,     0,    27,    28,    29,
       0,     0,    10,     0,    30,    11,    12,    47,    13,    14,
      15,     0,    16,     0,    17,     0,    18,   686,    19,    20,
      21,   184,     0,     0,     0,    22,     0,    23,     0,     0,
      24,     0,     0,    25,     0,     0,    26,     0,  -438,     0,
       0,     0,     6,    27,    28,    29,     0,     7,     0,     0,
      30,     8,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,    47,    11,    12,     0,
      13,    14,    15,     0,    16,     0,    17,     0,    18,     0,
      19,    20,    21,     0,     0,     0,     0,    22,     6,    23,
       0,     0,    24,     7,     0,    25,     0,     8,    26,     0,
       0,   377,     0,     0,     0,    27,    28,    29,     0,     0,
      10,     0,    30,    11,    12,     0,    13,    14,    15,     0,
      16,     0,    17,   228,    18,     0,    19,    20,    21,     0,
       0,     0,     0,    22,     0,    23,     0,     0,    24,     0,
       0,    25,     0,   184,    26,     0,     0,     0,     0,     0,
     383,    27,    28,    29,     0,    16,   760,    48,    30,     0,
       0,    49,   228,    50,     0,     0,     0,     0,     0,     0,
       0,     0,   262,     0,     0,     0,   384,    89,   385,   137,
       0,     0,     0,     0,     0,     0,    27,    28,    29,   383,
       0,     0,     0,   138,    16,     0,    48,   228,     0,     0,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,   262,     0,     0,     0,   384,    89,   385,   137,     0,
       0,     0,     0,     0,   383,    27,    28,    29,     0,    16,
       0,    48,   138,     0,   228,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,   262,     0,     0,     0,
     384,    89,   263,   137,   690,     0,     0,     0,     0,     0,
      27,    28,    29,     0,     0,     0,    16,   138,    48,     0,
       0,     0,    49,     0,    50,     0,     0,   228,     0,     0,
       0,     0,     0,     0,     0,     0,    16,   253,   430,     0,
     137,     0,    49,     0,     0,     0,     0,    27,    28,    29,
       0,     0,     0,     0,   138,   692,     0,   693,     0,    16,
     137,    48,     0,     0,     0,    49,     0,    27,    28,    29,
       0,     0,     0,     0,   138,     0,     0,     0,     7,     0,
     253,     0,     8,   137,     0,     0,   156,     0,     0,     0,
      27,    28,    29,     0,     0,    10,     0,   138,    11,    12,
       0,    13,    14,    15,     0,    16,     0,    17,     0,    18,
       0,    19,    20,    21,     0,     0,     0,     0,    22,     0,
      23,     0,     0,    24,     7,     0,    25,     0,     8,    26,
     157,     0,     9,     0,     0,     0,    27,    28,    29,     0,
       0,    10,     0,    30,    11,    12,     0,    13,    14,    15,
       0,    16,     0,    17,     0,    18,     0,    19,    20,    21,
       0,     0,     0,     0,    22,     0,   242,     0,     0,    24,
       0,     0,    25,     7,   368,    26,     0,     8,     0,     0,
       0,     9,    27,    28,    29,     0,     0,     0,     0,    30,
      10,     0,     0,    11,    12,     0,    13,    14,    15,     0,
      16,     0,    17,     0,    18,     0,    19,    20,    21,     0,
       0,     0,     0,    22,     0,     0,     0,     0,    24,     0,
       0,    25,     7,   200,    26,     0,     8,     0,     0,     0,
       9,    27,    28,    29,     0,     0,     0,     0,    30,    10,
       0,     0,    11,    12,     0,    13,    14,    15,     0,    16,
       0,    17,     0,    18,     0,    19,    20,    21,     0,     0,
       0,     0,    22,     0,    23,     0,     0,    24,     7,     0,
      25,     0,     8,    26,     0,     0,     9,     0,     0,     0,
      27,    28,    29,     0,     0,    10,     0,    30,    11,    12,
       0,    13,    14,    15,     0,    16,     0,    17,     0,    18,
       0,    19,    20,    21,     0,     0,     0,     0,    22,     0,
     239,     0,     0,    24,     7,     0,    25,     0,     8,    26,
       0,     0,     9,     0,     0,     0,    27,    28,    29,     0,
       0,    10,     0,    30,    11,    12,     0,    13,    14,    15,
       0,    16,     0,    17,     0,    18,     0,    19,    20,    21,
       0,     0,     0,     0,    22,     0,   242,     0,     0,    24,
       7,     0,    25,     0,     8,    26,     0,     0,   156,     0,
       0,     0,    27,    28,    29,     0,     0,    10,     0,    30,
      11,    12,     0,    13,    14,    15,     0,    16,     0,    17,
       0,    18,     0,    19,    20,    21,     0,     0,     0,     0,
      22,     0,    23,     0,     0,    24,     7,     0,    25,     0,
       8,    26,     0,     0,     9,     0,     0,     0,    27,    28,
      29,     0,     0,    10,     0,    30,    11,    12,     0,    13,
      14,    15,     0,    16,     0,    17,     0,    18,     0,    19,
      20,    21,     0,     0,     0,     0,    22,     0,     0,     0,
       0,    24,     0,     0,    25,     0,     0,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,   277,   278,     0,
       0,    30,     0,     0,     0,   279,   280,   281,   282,   283,
     284,     0,     0,   285,   286,     0,     0,     0,   287,    68,
      69,     0,    16,     0,    17,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,   187,     0,     0,
      70,     0,     0,   288,     0,     0,    72,   289,     0,     0,
       0,     0,   290,    27,    28,    29,   291,   292,   277,   278,
      73,     0,     0,     0,     0,     0,   279,   280,   281,   282,
     283,   284,     0,     0,   285,   286,     0,     0,     0,   287,
      68,    69,     0,    16,     0,    17,     0,     0,     0,    19,
       0,     0,     0,     0,     0,     0,     0,     0,   187,     0,
       0,    70,     0,     0,   288,     0,     0,    72,     0,     0,
       0,     0,     0,     0,    27,    28,    29,   291,   292,     0,
       0,    73,    67,    68,    69,   113,    16,   114,    17,     0,
       0,   116,    19,     0,     0,  -246,     0,     0,   194,     0,
       0,   510,     0,     0,    70,   118,     0,    71,  -246,     0,
      72,     0,     0,   474,   119,     0,     0,    27,    28,    29,
       0,     0,     0,     0,    73,   511,   164,    68,    69,   165,
      16,   166,    17,     0,     0,   167,    19,     0,     0,     0,
       0,     0,     0,     0,     0,   168,     0,     0,    70,   169,
       0,    71,    89,    90,    72,     0,     0,     0,   170,     0,
       0,    27,    28,    29,     0,     0,     0,     0,    73,   171,
     287,    68,    69,   165,    16,   166,    17,     0,     0,   167,
      19,     0,     0,     0,     0,     0,     0,     0,     0,   168,
       0,     0,    70,   169,     0,   288,    89,    90,    72,     0,
       0,     0,   170,     0,     0,    27,    28,    29,     0,     0,
       0,     0,    73,   171,    67,    68,    69,   113,    16,   114,
      17,     0,     0,   116,    19,     0,     0,     0,     0,     0,
     194,     0,     0,   510,     0,     0,    70,   118,     0,    71,
       0,     0,    72,     0,     0,   474,   119,   630,     0,    27,
      28,    29,    16,     0,    48,     0,    73,   511,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   229,     0,     0,   137,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,   164,    68,    69,
     138,    16,     0,    17,     0,     0,     0,    19,     0,     0,
       0,     0,     0,     0,     0,     0,   187,     0,     0,    70,
       0,     0,    71,     0,     0,    72,     0,   106,     0,     0,
       0,     0,    27,    28,    29,     0,   164,    68,    69,    73,
      16,     0,    17,     0,     0,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,   187,     0,     0,    70,     0,
       0,    71,     0,     0,    72,   516,     0,     0,     0,     0,
       0,    27,    28,    29,     0,    67,    68,    69,    73,    16,
       0,    17,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   192,    70,     0,     0,
      71,     0,     0,    72,     0,     0,     0,     0,     0,     0,
      27,    28,    29,     0,    67,    68,    69,    73,    16,     0,
      17,     0,     0,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,   528,     0,     0,    70,     0,     0,    71,
       0,     0,    72,     0,     0,     0,     0,     0,     0,    27,
      28,    29,     0,   164,    68,    69,    73,    16,     0,    17,
       0,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,   187,     0,     0,    70,     0,     0,    71,     0,
       0,    72,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     0,    67,    68,    69,    73,    16,     0,    17,     0,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,   532,     0,     0,    70,     0,     0,    71,     0,     0,
      72,     0,     0,     0,     0,     0,     0,    27,    28,    29,
       0,    67,    68,    69,    73,    16,     0,    17,     0,     0,
       0,    19,     0,     0,     0,     0,     0,     0,     0,     0,
     534,     0,     0,    70,     0,     0,    71,     0,     0,    72,
       0,     0,     0,     0,     0,     0,    27,    28,    29,     0,
      67,    68,    69,    73,    16,     0,    17,     0,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,   542,
       0,     0,    70,     0,     0,    71,     0,    16,    72,    48,
       0,     0,     0,    49,     0,    27,    28,    29,     0,    67,
      68,    69,    73,    16,   397,    17,     0,  -182,   136,    19,
       0,   137,     0,     0,     0,     0,     0,     0,    27,    28,
      29,    70,     0,     0,    71,   138,   616,    72,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     0,   647,    68,
      69,    73,    16,     0,    17,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,   187,     0,     0,
      70,     0,     0,    71,     0,    16,    72,    48,     0,     0,
       0,    49,     0,    27,    28,    29,     0,    67,    68,    69,
      73,    16,   741,    17,     0,  -182,   136,    19,     0,   137,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    70,
       0,     0,    71,   138,     0,    72,     0,     0,     0,    16,
     114,    48,    27,    28,    29,    49,     0,     0,     0,    73,
       0,     0,     0,     0,     0,     0,     0,     0,   770,  -182,
     253,     0,    16,   137,    48,     0,   767,     0,    49,     0,
      27,    28,    29,     0,     0,     0,     0,   138,     0,   397,
       0,     0,     0,   136,   418,   419,   137,     0,     0,     0,
      16,     0,    48,    27,    28,    29,    49,     0,     0,     0,
     138,     0,     0,    16,     0,    48,     0,   397,     0,    49,
       0,   136,   561,   562,   137,     0,     0,     0,     0,     0,
     397,    27,    28,    29,   136,   561,   419,   137,   138,     0,
       0,    16,     0,    48,    27,    28,    29,    49,     0,     0,
       0,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,   258,   259,   137,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    16,     0,    48,     0,   138,
       0,    49,     0,     0,     0,   589,     0,     0,    16,   114,
      48,     0,     0,     0,    49,  -182,   136,     0,     0,   137,
       0,     0,     0,     0,     0,     0,    27,    28,    29,   136,
       0,     0,   137,   138,     0,   767,    16,     0,    48,    27,
      28,    29,    49,     0,     0,     0,   138,     0,     0,    16,
       0,    48,     0,   395,     0,    49,     0,   136,     0,     0,
     137,     0,     0,     0,     0,     0,   397,    27,    28,    29,
     136,     0,     0,   137,   138,     0,     0,     0,     0,     0,
      27,    28,    29,    16,     0,    48,     0,   138,     0,    49,
       0,     0,     0,   603,     0,     0,     0,     0,     0,    16,
       0,    48,     0,     0,   136,    49,     0,   137,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     0,     0,  -182,
     136,   138,    16,   137,    48,     0,     0,     0,    49,     0,
      27,    28,    29,     0,     0,     0,     0,   138,    16,   740,
      48,     0,     0,   136,    49,     0,   137,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,   764,     0,   253,
     138,    16,   137,    48,     0,     0,     0,    49,     0,    27,
      28,    29,     0,     0,     0,     0,   138,     0,     0,     0,
     812,    16,   253,    48,     0,   137,     0,    49,     0,    50,
       0,     0,    27,    28,    29,     0,     0,     0,     0,   138,
       0,    16,   229,    48,     0,   137,     0,    49,     0,     0,
       0,     0,    27,    28,    29,     0,     0,     0,   741,   138,
       0,    16,   136,    48,     0,   137,     0,    49,     0,     0,
       0,     0,    27,    28,    29,     0,     0,     0,     0,   138,
       0,    16,   136,    48,     0,   137,     0,    49,     0,     0,
       0,     0,    27,    28,    29,     0,     0,     0,     0,   138,
       0,     0,   253,     0,    16,   137,   430,     0,    18,     0,
     431,     0,    27,    28,    29,     0,     0,     0,    16,   138,
      17,     0,    18,     0,    19,   432,     0,   678,     0,   680,
       0,     0,     0,   435,     0,    27,    28,    29,     0,   432,
     681,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,    29
};

static const yytype_int16 yycheck[] =
{
       3,    51,    51,   130,     3,   603,   305,    71,   153,   148,
     137,    71,   136,   147,   148,   503,   435,   147,   148,   153,
     805,   773,    25,   153,    25,   103,   708,   105,   147,   148,
     235,   154,    66,     1,   153,    36,   159,    38,   618,   162,
     103,   599,   105,   127,   110,   129,    25,    24,    51,    25,
       1,    54,     1,     1,   630,    65,    66,    36,     1,    38,
      23,     1,    25,    40,     1,     1,   485,    11,    71,     1,
      34,    38,     1,    71,    72,    55,   452,    34,   454,    59,
       1,    38,     0,   147,   148,    69,    12,    22,    91,   153,
     156,    62,   877,    29,    95,    71,    60,     1,    47,    42,
      43,    50,    70,    60,    47,   229,    43,    58,    69,   112,
      47,   195,   864,   112,    58,   691,    95,   692,    58,    70,
     608,    69,   804,   157,    87,    54,    58,   130,    95,   253,
      70,   134,    58,   136,   137,    70,    69,    58,    70,    43,
     143,    76,    63,    33,   168,   827,   287,   157,    13,    70,
     289,   128,   732,     1,    42,   289,     1,    55,   288,   289,
      69,   124,   125,   187,   762,   306,   307,   588,   656,   288,
     289,    61,    70,     1,    64,    65,    66,     2,   776,   229,
     229,   602,     7,     8,     1,   164,   309,    35,    33,    45,
       3,   275,   769,   768,   769,   772,    69,   772,   177,   178,
      25,    26,   621,   253,   784,     1,   256,    35,   258,    54,
     260,   214,    55,    56,   341,    22,    55,    56,    35,    64,
      65,    66,    39,    35,   288,   289,   229,    39,   288,   806,
      69,   806,   235,   236,   792,    31,    54,   812,    51,    35,
      47,    42,    54,    39,   179,    42,    64,   210,    42,   184,
     253,    46,   255,   256,    55,   258,    47,   260,    55,   194,
     384,    55,   265,    42,    55,    56,   393,   394,   395,    65,
     397,   450,     7,   452,   277,   454,   239,    35,   277,   242,
     283,    39,   285,   286,   283,   288,   285,   286,   846,   416,
     288,   849,   850,    54,   418,   422,   420,   424,    69,   112,
      33,   428,    35,    64,   723,    66,    39,   308,   287,   333,
     868,   377,   288,    34,    55,    56,   874,    38,   342,   343,
     330,   405,    15,   136,    45,   150,    33,   306,   307,   353,
     155,    64,    65,    66,   384,   384,    43,   464,   341,    60,
     338,   640,   476,    44,    34,   348,    47,   345,    38,   347,
     495,    72,    54,   351,    55,    45,   354,    64,    65,    66,
      45,   495,    64,    69,    66,   495,    43,   192,   303,    47,
      60,     1,   499,   308,   508,   509,   495,    55,    56,   513,
     383,   384,    56,   208,    56,    42,   211,   390,   213,    46,
     393,   394,   395,   218,   397,   518,    33,   222,    35,   224,
      37,   336,    39,    33,    31,    56,    35,   410,    35,   412,
      39,   414,    39,   416,    23,   418,   229,   420,    33,   422,
      50,   424,   425,   501,    56,   428,    59,    64,    65,    66,
      56,   495,   637,   560,    64,    65,    66,   561,   501,   563,
     253,   444,    56,   256,   447,   258,   333,   260,   587,    64,
      65,    66,    33,   587,    35,   342,   343,   587,    39,   462,
      41,   464,   546,   590,   277,   468,   353,    56,   587,   472,
     283,   474,   285,   286,    54,    56,    55,    56,    87,    55,
     481,    47,    69,    64,    65,    66,    11,   312,   313,    55,
      56,   625,   697,   496,   699,   625,   499,    55,    56,   583,
      49,   585,    58,   328,   528,    31,   625,    33,   532,    55,
     534,   561,   589,   563,    56,   124,   125,    56,   542,   698,
     699,   700,    42,   587,   703,    43,   603,    32,    54,    34,
      60,    36,     1,    38,     3,     4,     5,    60,    64,    65,
      66,    60,    33,    48,   479,    60,   481,    52,    56,   547,
       1,   554,    56,   758,   557,    60,    61,   560,   561,   764,
     563,   625,    47,    54,   687,   770,    33,    72,    35,   693,
     573,   384,   575,    64,    65,    66,   654,    28,   757,    70,
      50,   406,    33,   710,    35,    33,   589,   590,    39,   592,
      41,   654,    32,    53,    34,    43,   599,    64,    65,    66,
     603,   210,    70,    54,    43,   418,    57,   420,    48,    55,
      56,    55,    52,    64,    65,    66,    64,    65,    66,    43,
      71,    61,    32,    70,    34,    33,    56,   630,    38,    37,
     239,    42,    72,   242,   637,   638,    59,   782,    48,    55,
      56,   528,    52,   693,    13,   532,    54,   534,   782,    70,
      60,    61,   782,    55,    56,   542,    64,    65,    66,   782,
     783,    58,    72,   782,   738,   739,   740,   741,   647,   753,
     673,    55,    56,     1,   673,   500,    55,    56,   755,   858,
     615,   616,   617,   496,    58,   762,   689,    12,   691,   692,
     693,    55,    56,    29,   697,    70,   699,   700,   523,   776,
     525,    29,    55,   706,    32,    43,    34,   710,   785,    33,
      56,   714,    49,   716,    55,    56,   719,    44,   782,    43,
      48,    55,    56,    55,    52,   550,    56,   552,   805,    47,
     854,    22,    60,    61,   737,   738,   739,   740,   741,   866,
      64,    65,    66,    56,    72,    55,    56,    53,   561,    53,
     563,    53,   755,   756,   881,   758,   759,    54,    32,   762,
       1,   764,    36,    56,    54,   768,   769,   770,    54,   772,
      55,    56,    53,   776,    48,    31,   589,    53,    52,    70,
      71,    72,     1,   280,   281,    76,   599,    61,    29,   792,
     603,    32,   795,    34,   797,   872,   609,    13,    72,   612,
     877,    53,   805,   806,   854,   854,   805,    48,    32,   812,
      29,    52,    56,    32,    53,    34,    56,    47,    56,    60,
      61,    58,    53,    56,    48,    53,   829,    56,    52,    48,
     655,    72,    55,    52,    55,    69,   127,    61,   129,    54,
      31,    60,    61,   846,   134,    50,   849,   850,    72,     1,
      53,   854,    47,    72,    43,   858,   147,   148,    56,    56,
     673,    55,   153,   866,    56,   868,    15,     1,    69,    22,
      55,   874,    54,    56,   877,    55,    50,   168,   881,   692,
     693,    33,    42,    35,    56,    35,    56,    39,   179,    41,
      69,    42,    54,   184,    28,    57,   187,    42,    55,    33,
      34,    35,    54,   194,   195,    39,    42,    41,    56,    56,
      42,    55,    64,    65,    66,    53,    50,    56,   743,   583,
      54,    55,    56,    57,    55,   738,   739,   740,   741,    33,
      64,    65,    66,   753,   493,   787,   493,    71,    32,   731,
      34,   872,   755,   625,   495,   235,   236,   867,   864,   762,
      54,     1,   755,   776,    48,   768,   769,   600,    52,   772,
      64,    65,    66,   776,   779,   255,    60,    61,   795,   780,
     866,   384,   134,   673,   288,   265,   425,   802,    72,   792,
     288,   546,   795,    33,   511,    35,   348,   504,    26,    39,
     660,   282,   805,   806,    33,   516,   214,   288,   289,   812,
      50,   292,   657,   129,    54,    55,    56,    57,   330,   405,
     382,    50,   303,   551,    64,    65,    66,   308,    25,   310,
     703,    71,    22,    -1,    -1,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,   846,     1,    -1,   849,   850,    -1,    -1,
      -1,   854,   333,     1,    -1,   336,    -1,   338,    -1,    -1,
      -1,   342,   343,    -1,   345,   868,   347,    -1,    -1,    -1,
     351,   874,   353,   354,   877,    -1,    33,    -1,    35,    -1,
      70,    -1,    39,   235,   236,    33,    76,    35,    -1,    -1,
      -1,    39,    -1,    41,    -1,    -1,    -1,    54,    -1,    -1,
      57,    -1,    59,   255,    -1,    -1,    54,    64,    65,    66,
     390,    -1,    -1,   265,    71,    -1,    64,    65,    66,    -1,
       1,    -1,    -1,   275,   405,     6,    -1,    -1,    -1,    10,
     410,    -1,   412,    14,   414,    -1,    -1,    -1,   290,    -1,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,   444,    46,    -1,    48,    -1,    -1,
      51,    52,    -1,    54,    55,    56,    57,    -1,   168,    60,
      61,    -1,   462,    64,    65,    66,    -1,    -1,   468,   179,
      71,    72,   472,    -1,   184,   476,    -1,   187,   479,    -1,
     481,    -1,    -1,    -1,   194,    -1,    -1,    -1,    33,   490,
     491,    -1,    -1,    -1,   495,    -1,   497,    32,    -1,    34,
      -1,    36,    -1,    38,    -1,    -1,    -1,   508,   509,    -1,
     511,    -1,   513,    48,    -1,   516,    61,    52,   390,    64,
      65,    66,    -1,    -1,     1,    -1,    61,   528,    33,    -1,
      35,   532,    31,   534,    33,    -1,    -1,    72,   410,    44,
     412,   542,   414,    42,     1,   546,   547,    -1,    -1,    54,
      55,    -1,    29,    30,    31,    54,    33,   557,    35,    64,
      65,    66,    39,   435,    -1,    64,    65,    66,    -1,    -1,
      -1,    33,   444,   573,    51,   575,    33,    54,    35,    56,
      57,    -1,    39,    -1,    41,    -1,   587,    64,    65,    66,
     462,    -1,    54,   303,    71,    -1,   468,    54,   308,   600,
     472,    63,    64,    65,    66,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,   485,   615,   616,   617,    -1,   619,     1,
      -1,    -1,   623,   333,   625,    -1,   336,    -1,    -1,    -1,
      -1,    -1,   342,   343,    16,    17,    18,   637,   638,    -1,
      -1,    -1,    -1,   353,    -1,    -1,    -1,    29,    30,    31,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,   660,
      -1,    -1,    33,    -1,    35,    -1,    48,    -1,    39,    51,
      41,    -1,    54,    -1,     1,    57,    58,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,   557,    -1,    -1,    70,    71,
       1,    -1,    -1,    64,    65,    66,    -1,   697,    -1,   699,
     700,   573,    -1,   575,    -1,    -1,    33,   496,    35,    -1,
      -1,   583,    39,    -1,    41,    -1,   716,    28,    -1,   719,
      -1,    -1,    33,    -1,    35,    -1,    -1,    54,    39,    -1,
     731,    -1,   733,   734,   735,    -1,    -1,    64,    65,    66,
      -1,    52,    -1,    54,    -1,    -1,    57,    -1,    -1,   621,
      -1,    -1,    -1,    64,    65,    66,     2,    -1,   758,   759,
      71,     7,     8,    -1,   764,   637,   638,    -1,    -1,   479,
     770,   481,   773,   774,    33,   229,    35,    23,    24,    25,
      26,   782,    -1,    -1,   785,    -1,   787,    -1,    -1,    -1,
     791,    -1,    -1,    -1,    40,    54,    55,   797,    -1,   253,
     589,    -1,    33,    34,    35,    64,    65,    66,    39,    -1,
     599,     1,    -1,    -1,   603,    -1,    -1,    -1,   528,    65,
      66,    52,   532,    54,   534,   697,    57,   699,   700,    60,
      -1,    -1,   542,    64,    65,    66,    -1,    33,    28,    -1,
      71,    87,    -1,    33,   716,    35,    -1,   719,    -1,    39,
      -1,   723,    -1,    -1,    -1,    -1,    -1,   103,   858,   105,
      -1,    -1,    52,   864,    54,    61,   867,    57,    64,    65,
      66,   872,    -1,    22,    64,    65,    66,    -1,   124,   125,
      -1,    71,   128,    -1,    -1,    -1,   758,   759,    -1,   761,
      -1,    -1,   764,    -1,    -1,    -1,    -1,    -1,   770,    -1,
      -1,    -1,    -1,   692,   150,   615,   616,   617,    -1,   155,
      -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,   797,    -1,    76,    -1,    -1,
     384,    27,    -1,    29,    30,    31,   808,    33,    -1,    35,
      -1,    37,    -1,    39,    40,    41,   192,    -1,    -1,   738,
     739,   740,   741,    -1,    -1,    51,    -1,     1,    54,    -1,
      -1,    57,   208,    -1,   210,   211,   755,   213,    64,    65,
      66,    -1,   218,   762,    -1,    71,   222,   223,   224,   768,
     769,    -1,    -1,   772,    -1,    -1,   858,   776,    -1,    33,
      -1,    35,    -1,   239,    -1,    39,   242,    41,   147,   148,
      -1,    -1,    -1,   792,   153,    -1,   795,   879,    52,    -1,
      54,    -1,    -1,    57,    -1,    -1,   805,   806,    -1,   168,
      64,    65,    66,   812,    -1,    -1,    -1,    71,    -1,   275,
     179,    -1,    -1,    -1,    -1,   184,    -1,    -1,   187,    -1,
      -1,    -1,   496,    -1,    -1,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   846,    -1,    -1,
     849,   850,    -1,    -1,     1,    -1,   312,   313,    -1,     6,
      -1,    -1,    -1,    10,    33,    -1,    35,    14,    37,   868,
      39,    -1,   328,    -1,   330,   874,    23,    -1,   877,    26,
      27,    -1,    29,    30,    31,    54,    33,    -1,    35,    -1,
      37,    -1,    39,    40,    41,    64,    65,    66,    -1,    46,
      33,    48,    35,    -1,    51,    -1,    -1,    54,     1,    -1,
      57,    -1,    59,    -1,    -1,    -1,    -1,    64,    65,    66,
      -1,    54,    -1,    -1,    71,   589,   382,    -1,    -1,   288,
     289,    64,    65,    66,    -1,   599,    29,    30,    31,   603,
      33,    -1,    35,    -1,   303,    -1,    39,    -1,    -1,   308,
     406,   310,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    54,    -1,    -1,    57,    -1,    33,    -1,    35,    -1,
      -1,    64,    65,    66,   333,    -1,    -1,   336,    71,   338,
      -1,    -1,    -1,   342,   343,     1,   345,    54,   347,    -1,
      -1,    -1,   351,    -1,   353,   354,    -1,    64,    65,    66,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    -1,    41,    -1,    -1,    -1,   693,
      -1,    -1,    48,   697,    -1,    51,   700,    -1,    54,    -1,
      -1,    57,    58,    -1,   500,   501,     1,    -1,    64,    65,
      66,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   523,    -1,   525,
      -1,    -1,    -1,    -1,   738,   739,   740,   741,    33,    -1,
      35,    -1,    -1,    -1,    39,    -1,    41,    -1,    -1,    -1,
      -1,   755,    -1,    -1,   550,   551,   552,    -1,   762,    54,
       1,    -1,    57,    -1,   768,   769,    -1,    -1,   772,    64,
      65,    66,   776,    -1,    -1,    -1,    71,   476,    -1,    -1,
     479,    -1,   481,    -1,    -1,    -1,    -1,   583,   792,   585,
      -1,   795,    33,    -1,    35,    -1,   495,    -1,    39,    -1,
      -1,   805,   806,    -1,    -1,    -1,    -1,    -1,    -1,   508,
     509,    -1,   511,    54,   513,    56,    57,   516,    -1,    -1,
      33,    -1,    35,    64,    65,    66,    39,    -1,    41,   528,
      71,    -1,    -1,   532,    33,   534,    35,    -1,    37,    -1,
      39,    54,   846,   542,    -1,   849,   850,    -1,   547,    -1,
     854,    64,    65,    66,   858,    54,    55,    56,   654,   655,
      -1,    -1,   866,    62,   868,    64,    65,    66,    -1,    -1,
     874,    -1,    -1,   877,     1,    -1,    -1,    -1,    -1,     6,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    14,   587,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    29,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    -1,    39,    40,    41,    -1,   615,   616,   617,    46,
       1,    48,    -1,    -1,    51,     6,   625,    54,    -1,    10,
      57,    -1,    59,    14,    -1,    -1,    -1,    64,    65,    66,
      -1,    -1,    23,    -1,    71,    26,    27,   743,    29,    30,
      31,    -1,    33,    -1,    35,    -1,    37,   753,    39,    40,
      41,   660,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,
      51,    -1,    -1,    54,    -1,    -1,    57,    -1,    59,    -1,
      -1,    -1,     1,    64,    65,    66,    -1,     6,    -1,    -1,
      71,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,   802,    26,    27,    -1,
      29,    30,    31,    -1,    33,    -1,    35,    -1,    37,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,     1,    48,
      -1,    -1,    51,     6,    -1,    54,    -1,    10,    57,    -1,
      -1,    14,    -1,    -1,    -1,    64,    65,    66,    -1,    -1,
      23,    -1,    71,    26,    27,    -1,    29,    30,    31,    -1,
      33,    -1,    35,     1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,    -1,
      -1,    54,    -1,   782,    57,    -1,    -1,    -1,    -1,    -1,
      28,    64,    65,    66,    -1,    33,    34,    35,    71,    -1,
      -1,    39,     1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    28,
      -1,    -1,    -1,    71,    33,    -1,    35,     1,    -1,    -1,
      39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    28,    64,    65,    66,    -1,    33,
      -1,    35,    71,    -1,     1,    39,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      54,    55,    56,    57,     1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    -1,    -1,    -1,    33,    71,    35,    -1,
      -1,    -1,    39,    -1,    41,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    54,    35,    -1,
      57,    -1,    39,    -1,    -1,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    71,    52,    -1,    54,    -1,    33,
      57,    35,    -1,    -1,    -1,    39,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,     6,    -1,
      54,    -1,    10,    57,    -1,    -1,    14,    -1,    -1,    -1,
      64,    65,    66,    -1,    -1,    23,    -1,    71,    26,    27,
      -1,    29,    30,    31,    -1,    33,    -1,    35,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    -1,
      48,    -1,    -1,    51,     6,    -1,    54,    -1,    10,    57,
      58,    -1,    14,    -1,    -1,    -1,    64,    65,    66,    -1,
      -1,    23,    -1,    71,    26,    27,    -1,    29,    30,    31,
      -1,    33,    -1,    35,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
      -1,    -1,    54,     6,    56,    57,    -1,    10,    -1,    -1,
      -1,    14,    64,    65,    66,    -1,    -1,    -1,    -1,    71,
      23,    -1,    -1,    26,    27,    -1,    29,    30,    31,    -1,
      33,    -1,    35,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    54,     6,    56,    57,    -1,    10,    -1,    -1,    -1,
      14,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    23,
      -1,    -1,    26,    27,    -1,    29,    30,    31,    -1,    33,
      -1,    35,    -1,    37,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    -1,    48,    -1,    -1,    51,     6,    -1,
      54,    -1,    10,    57,    -1,    -1,    14,    -1,    -1,    -1,
      64,    65,    66,    -1,    -1,    23,    -1,    71,    26,    27,
      -1,    29,    30,    31,    -1,    33,    -1,    35,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    -1,
      48,    -1,    -1,    51,     6,    -1,    54,    -1,    10,    57,
      -1,    -1,    14,    -1,    -1,    -1,    64,    65,    66,    -1,
      -1,    23,    -1,    71,    26,    27,    -1,    29,    30,    31,
      -1,    33,    -1,    35,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
       6,    -1,    54,    -1,    10,    57,    -1,    -1,    14,    -1,
      -1,    -1,    64,    65,    66,    -1,    -1,    23,    -1,    71,
      26,    27,    -1,    29,    30,    31,    -1,    33,    -1,    35,
      -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    -1,    48,    -1,    -1,    51,     6,    -1,    54,    -1,
      10,    57,    -1,    -1,    14,    -1,    -1,    -1,    64,    65,
      66,    -1,    -1,    23,    -1,    71,    26,    27,    -1,    29,
      30,    31,    -1,    33,    -1,    35,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,     8,     9,    -1,
      -1,    71,    -1,    -1,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,    30,
      31,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,     8,     9,
      71,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
      30,    31,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    -1,
      -1,    71,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    -1,
      -1,    48,    -1,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    -1,    -1,    60,    61,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    71,    72,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      -1,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    -1,    64,    65,    66,    -1,    -1,
      -1,    -1,    71,    72,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    48,    -1,    -1,    51,    52,    -1,    54,
      -1,    -1,    57,    -1,    -1,    60,    61,    28,    -1,    64,
      65,    66,    33,    -1,    35,    -1,    71,    72,    39,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    -1,    29,    30,    31,
      71,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    54,    -1,    -1,    57,    -1,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    -1,    29,    30,    31,    71,
      33,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    -1,    29,    30,    31,    71,    33,
      -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    -1,    29,    30,    31,    71,    33,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    -1,    29,    30,    31,    71,    33,    -1,    35,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    -1,    29,    30,    31,    71,    33,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      -1,    29,    30,    31,    71,    33,    -1,    35,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,
      29,    30,    31,    71,    33,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    54,    -1,    33,    57,    35,
      -1,    -1,    -1,    39,    -1,    64,    65,    66,    -1,    29,
      30,    31,    71,    33,    50,    35,    -1,    53,    54,    39,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    51,    -1,    -1,    54,    71,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    -1,    29,    30,
      31,    71,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    54,    -1,    33,    57,    35,    -1,    -1,
      -1,    39,    -1,    64,    65,    66,    -1,    29,    30,    31,
      71,    33,    50,    35,    -1,    53,    54,    39,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    51,
      -1,    -1,    54,    71,    -1,    57,    -1,    -1,    -1,    33,
      34,    35,    64,    65,    66,    39,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    -1,    33,    57,    35,    -1,    60,    -1,    39,    -1,
      64,    65,    66,    -1,    -1,    -1,    -1,    71,    -1,    50,
      -1,    -1,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      33,    -1,    35,    64,    65,    66,    39,    -1,    -1,    -1,
      71,    -1,    -1,    33,    -1,    35,    -1,    50,    -1,    39,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      50,    64,    65,    66,    54,    55,    56,    57,    71,    -1,
      -1,    33,    -1,    35,    64,    65,    66,    39,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    33,    -1,    35,    -1,    71,
      -1,    39,    -1,    -1,    -1,    43,    -1,    -1,    33,    34,
      35,    -1,    -1,    -1,    39,    53,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    54,
      -1,    -1,    57,    71,    -1,    60,    33,    -1,    35,    64,
      65,    66,    39,    -1,    -1,    -1,    71,    -1,    -1,    33,
      -1,    35,    -1,    50,    -1,    39,    -1,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    50,    64,    65,    66,
      54,    -1,    -1,    57,    71,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    33,    -1,    35,    -1,    71,    -1,    39,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    54,    39,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    -1,    -1,    53,
      54,    71,    33,    57,    35,    -1,    -1,    -1,    39,    -1,
      64,    65,    66,    -1,    -1,    -1,    -1,    71,    33,    50,
      35,    -1,    -1,    54,    39,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    -1,    52,    -1,    54,
      71,    33,    57,    35,    -1,    -1,    -1,    39,    -1,    64,
      65,    66,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      52,    33,    54,    35,    -1,    57,    -1,    39,    -1,    41,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,    71,
      -1,    33,    54,    35,    -1,    57,    -1,    39,    -1,    -1,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    50,    71,
      -1,    33,    54,    35,    -1,    57,    -1,    39,    -1,    -1,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,    71,
      -1,    33,    54,    35,    -1,    57,    -1,    39,    -1,    -1,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    54,    -1,    33,    57,    35,    -1,    37,    -1,
      39,    -1,    64,    65,    66,    -1,    -1,    -1,    33,    71,
      35,    -1,    37,    -1,    39,    54,    -1,    56,    -1,    44,
      -1,    -1,    -1,    62,    -1,    64,    65,    66,    -1,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,    74,     1,     6,    10,    14,
      23,    26,    27,    29,    30,    31,    33,    35,    37,    39,
      40,    41,    46,    48,    51,    54,    57,    64,    65,    66,
      71,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     197,   198,   218,   220,   222,   223,   224,   225,    35,    39,
      41,    54,   130,   132,   138,   220,   221,    62,    75,    76,
       0,   185,   185,    69,   162,    69,    69,    29,    30,    31,
      51,    54,    57,    71,   176,   177,   196,   218,   222,   225,
     192,   193,   198,    32,    34,    36,    38,    48,    52,    55,
      56,    60,    61,    72,   185,   192,   199,   200,   201,   219,
     220,   227,   229,   231,   232,   233,    59,   185,   199,   214,
      13,   161,    42,    32,    34,    36,    38,    48,    52,    61,
      72,   230,   231,   233,   235,   235,   198,    69,    45,    69,
      42,    56,   132,   133,   138,   141,    54,    57,    71,   139,
     140,   220,   221,    46,     1,    77,   221,    69,   236,     7,
      11,    58,   194,   163,   164,    15,    14,    58,   186,   208,
     209,   210,   208,   176,    29,    32,    34,    38,    48,    52,
      61,    72,   166,   167,   168,   169,   171,   172,   174,   175,
     177,   178,   183,   184,   218,   220,   222,    48,   166,   167,
     168,   179,    50,   176,    45,    69,    56,    56,    56,    56,
      56,    56,    35,    37,    39,   220,    56,    56,    55,    56,
     235,    55,    56,    47,    55,    56,    55,    56,    43,   187,
     188,   187,    44,    47,    55,   215,    59,   162,     1,    54,
     127,   129,   130,   134,   135,   137,   138,   140,   220,    48,
     192,   193,    48,   192,   193,    54,   211,   212,   213,   222,
     223,   198,   211,    54,   134,   138,    55,    56,    55,    56,
      55,    56,    50,    56,   135,   138,   141,   142,   143,   144,
     219,   220,    59,   134,   220,    54,    80,     8,     9,    16,
      17,    18,    19,    20,    21,    24,    25,    29,    54,    58,
      63,    67,    68,    79,    86,    88,    96,    97,   145,   148,
     152,   153,   154,   155,   168,   169,   172,   174,   222,    79,
      69,   185,    11,    12,    58,   195,     1,    41,    58,    70,
     152,   165,   237,    58,   237,   185,   162,   208,    49,   237,
      58,   237,    60,   233,     1,   173,   175,   176,    55,    56,
      56,    42,   233,   233,   176,    55,    56,    47,    55,    56,
     176,    43,    72,   233,    55,    59,   185,   176,   180,   181,
     182,   222,   223,    60,    60,    60,    60,   185,    56,   185,
     185,   201,   220,   185,    56,    56,   185,    14,   185,   216,
     217,   185,    47,    28,    54,    56,   126,   127,   131,   132,
     138,   141,   220,    50,    53,    50,   139,    50,   192,   193,
     192,   193,    36,    48,    70,    55,    43,    70,   132,   132,
     138,   132,   138,   132,   138,    56,    55,    56,    55,    56,
      55,    56,    55,    56,    47,    55,    56,    56,    42,    59,
      35,    39,    54,    55,    56,    62,    81,    82,   221,   223,
     225,    13,     1,   130,   138,     1,    35,    98,     1,    29,
     146,     1,   146,     1,   146,     1,    54,   113,   114,   222,
       1,   130,   138,     1,    54,     1,   115,   130,   138,     1,
     116,   130,   138,    48,    60,    72,   226,   229,   154,   155,
     168,   222,    79,     1,    31,    65,    78,   221,     1,    29,
      63,   222,    70,    58,    87,    58,    42,    55,     1,    42,
      43,    47,   156,   157,   158,   159,   176,   156,   226,   226,
      48,    72,   176,   228,   229,   237,    58,   166,   202,   203,
     204,   185,   185,    12,     1,    43,   185,   210,    48,   173,
     166,   134,    48,   173,    48,   173,   166,   166,   184,   220,
     166,    29,    48,   173,   166,    70,    55,    43,    56,   162,
      49,    55,    44,   216,   128,   220,   133,   138,   141,    56,
      53,    55,    56,    55,    56,   134,   134,   134,   134,   213,
     185,   134,   135,   138,   135,   138,   134,   134,   144,   220,
     134,    56,    78,    55,    56,    54,     1,    69,    53,    43,
      43,   220,    60,   147,   226,   232,   234,   147,   147,    42,
      55,    31,    53,    43,   117,   118,   134,    47,   119,    53,
      13,   160,    53,   169,   222,    56,    56,    56,    78,    54,
      64,    66,    89,   222,   222,    87,    88,    97,   152,     1,
      28,   123,   124,   125,   127,   130,   136,   137,   138,   222,
     134,   185,   187,   160,   159,   169,   169,    29,   170,   171,
     222,   169,   202,     1,    47,    50,   205,   206,   207,   237,
      58,   185,   185,   173,   173,   173,    56,   173,   182,   166,
     185,   217,   185,    61,   220,    56,   134,    56,    56,    82,
      44,    55,    83,    84,    85,   223,   225,    79,     1,    98,
       1,    28,    52,    54,   101,   102,   104,   105,   127,   137,
     138,   224,   134,    55,   123,   114,    98,   102,   107,    56,
      55,     1,   120,   121,   122,   160,   138,    69,   149,   138,
     176,   176,   176,    66,    89,    35,    55,    90,    91,    92,
     222,    54,    78,    31,   222,    31,    96,   128,    50,    53,
      50,    50,   156,    43,   187,   185,   160,   207,   204,   129,
      56,    56,    56,    55,   237,    43,   128,   136,   137,   138,
      34,    22,    47,   110,    52,   127,   139,    60,   232,   232,
      52,   127,   232,    69,    15,   234,    43,   110,   134,    55,
      50,   220,   150,   151,    78,    54,    56,    55,    90,    89,
     222,    31,    42,   222,   222,    61,   125,   138,   125,   125,
     125,   185,    50,    85,   101,    61,   232,    56,    54,   221,
     102,   139,    52,   106,   127,   136,   106,   139,   106,    70,
     108,   109,   148,   222,    99,   100,   222,   107,   121,   122,
      58,   152,   237,    58,   237,    89,    44,    54,    55,    93,
      94,    95,   222,   224,    92,    56,    42,   222,   123,    42,
      42,   124,   185,   110,    54,   103,   104,   130,   138,   106,
     111,   112,   221,   136,    55,    70,    42,    55,    42,   110,
      56,    56,    55,   123,    42,   123,   123,    53,    56,    55,
     109,    52,   126,   134,   100,   123,    95,   123,   104,   221,
     134
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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

/* Line 1464 of yacc.c  */
#line 120 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {inputExpr = letrec((yyvsp[(3) - (3)]),(yyvsp[(2) - (3)])); sp-=2;;}
    break;

  case 3:

/* Line 1464 of yacc.c  */
#line 121 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {inputContext = (yyvsp[(2) - (2)]);	    sp-=1;;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 122 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {valDefns  = (yyvsp[(2) - (2)]);	    sp-=1;;}
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 123 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("input");;}
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 136 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {
					 setExportList(singleton(ap(MODULEENT,mkCon(module(currentModule).text))));
					 (yyval) = gc3((yyvsp[(3) - (4)]));
					;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 140 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {
					 setExportList(singleton(ap(MODULEENT,mkCon(module(currentModule).text))));
					 (yyval) = gc4((yyvsp[(3) - (4)]));
					;}
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 145 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {setExportList((yyvsp[(3) - (7)]));   (yyval) = gc7((yyvsp[(6) - (7)]));;}
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 147 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("declaration");;}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 148 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("module definition");;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 154 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {startModule(conMain); 
					 (yyval) = gc0(NIL);;}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 157 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {startModule(mkCon(mkNestedQual((yyvsp[(1) - (1)])))); (yyval) = gc1(NIL);;}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 159 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = mkCon(mkNestedQual((yyvsp[(1) - (1)])));;}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 160 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    { String modName = findPathname(textToStr(textOf((yyvsp[(1) - (1)]))));
					  if (modName) { /* fillin pathname if known */
					      (yyval) = mkStr(findText(modName));
					  } else {
					      (yyval) = (yyvsp[(1) - (1)]);
					  }
					;}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 168 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL); ;}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 169 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(2) - (2)]));;}
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 170 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1((yyvsp[(1) - (1)]));;}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 171 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(NIL);;}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 172 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4((yyvsp[(4) - (4)]));;}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 177 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(exportSelf());;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 178 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(NIL);;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 179 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(NIL);;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 180 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 181 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4((yyvsp[(2) - (4)]));;}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 183 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 184 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 189 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 190 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 191 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(pair((yyvsp[(1) - (4)]),DOTDOT));;}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 192 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(pair((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)])));;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 193 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap(MODULEENT,(yyvsp[(2) - (2)])));;}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 195 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 196 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(NIL);;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 197 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 198 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(1) - (2)]));;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 200 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 201 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 203 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 204 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 209 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {imps = cons((yyvsp[(3) - (3)]),imps); (yyval)=gc3(NIL);;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 210 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval)   = gc2(NIL); ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 211 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {imps = singleton((yyvsp[(1) - (1)])); (yyval)=gc1(NIL);;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 213 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {if (chase(imps)) {
					     clearStack();
					     onto(imps);
					     done();
					     closeAnyInput();
					     return 0;
					 }
					 (yyval) = gc0(NIL);
					;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 224 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {addUnqualImport((yyvsp[(2) - (3)]),NIL,(yyvsp[(3) - (3)]));
					 (yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 227 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {addUnqualImport((yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]),(yyvsp[(5) - (5)]));
					 (yyval) = gc5((yyvsp[(2) - (5)]));;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 230 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {addQualImport((yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]),(yyvsp[(6) - (6)]));
					 (yyval) = gc6((yyvsp[(3) - (6)]));;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 233 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {addQualImport((yyvsp[(3) - (4)]),(yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));
					 (yyval) = gc4((yyvsp[(3) - (4)]));;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 235 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("import declaration");;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 237 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(DOTDOT);;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 238 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(HIDDEN,(yyvsp[(3) - (4)])));;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 239 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 241 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 242 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(NIL);;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 243 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 244 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(1) - (2)]));;}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 246 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 247 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 249 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 250 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(pair((yyvsp[(1) - (1)]),NONE));;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 251 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(pair((yyvsp[(1) - (4)]),DOTDOT));;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 252 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(pair((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)])));;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 254 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 255 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(NIL);;}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 256 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 257 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(1) - (2)]));;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 259 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 260 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 262 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 263 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 268 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(1) - (2)]));;}
    break;

  case 71:

/* Line 1464 of yacc.c  */
#line 269 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(1) - (3)]));;}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 270 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 73:

/* Line 1464 of yacc.c  */
#line 271 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 74:

/* Line 1464 of yacc.c  */
#line 272 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(cons((yyvsp[(1) - (1)]),NIL));;}
    break;

  case 75:

/* Line 1464 of yacc.c  */
#line 277 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {defTycon(4,(yyvsp[(3) - (4)]),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]),SYNONYM);;}
    break;

  case 76:

/* Line 1464 of yacc.c  */
#line 279 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {defTycon(6,(yyvsp[(3) - (6)]),(yyvsp[(2) - (6)]),
						    ap((yyvsp[(4) - (6)]),(yyvsp[(6) - (6)])),RESTRICTSYN);;}
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 281 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("type declaration");;}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 283 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {defTycon(5,(yyvsp[(3) - (5)]),checkTyLhs((yyvsp[(2) - (5)])),
						    ap(rev((yyvsp[(4) - (5)])),(yyvsp[(5) - (5)])),DATATYPE);;}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 286 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {defTycon(7,(yyvsp[(5) - (7)]),(yyvsp[(4) - (7)]),
						  ap(qualify((yyvsp[(2) - (7)]),rev((yyvsp[(6) - (7)]))),
						     (yyvsp[(7) - (7)])),DATATYPE);;}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 289 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {defTycon(2,(yyvsp[(1) - (2)]),checkTyLhs((yyvsp[(2) - (2)])),
						    ap(NIL,NIL),DATATYPE);;}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 291 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {defTycon(4,(yyvsp[(1) - (4)]),(yyvsp[(4) - (4)]),
						  ap(qualify((yyvsp[(2) - (4)]),NIL),
						     NIL),DATATYPE);;}
    break;

  case 82:

/* Line 1464 of yacc.c  */
#line 294 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("data declaration");;}
    break;

  case 83:

/* Line 1464 of yacc.c  */
#line 296 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {defTycon(5,(yyvsp[(3) - (5)]),checkTyLhs((yyvsp[(2) - (5)])),
						    ap((yyvsp[(4) - (5)]),(yyvsp[(5) - (5)])),NEWTYPE);;}
    break;

  case 84:

/* Line 1464 of yacc.c  */
#line 299 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {defTycon(7,(yyvsp[(5) - (7)]),(yyvsp[(4) - (7)]),
						  ap(qualify((yyvsp[(2) - (7)]),(yyvsp[(6) - (7)])),
						     (yyvsp[(7) - (7)])),NEWTYPE);;}
    break;

  case 85:

/* Line 1464 of yacc.c  */
#line 302 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("newtype declaration");;}
    break;

  case 86:

/* Line 1464 of yacc.c  */
#line 303 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {if (isInt((yyvsp[(2) - (2)]))) {
					     needPrims(intOf((yyvsp[(2) - (2)])), NULL);
					 } else {
					     syntaxError("needprims decl");
					 }
					 sp-=2;;}
    break;

  case 87:

/* Line 1464 of yacc.c  */
#line 309 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("needprims decl");;}
    break;

  case 88:

/* Line 1464 of yacc.c  */
#line 311 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])));;}
    break;

  case 89:

/* Line 1464 of yacc.c  */
#line 312 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 90:

/* Line 1464 of yacc.c  */
#line 313 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("type defn lhs");;}
    break;

  case 91:

/* Line 1464 of yacc.c  */
#line 315 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 92:

/* Line 1464 of yacc.c  */
#line 316 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(cons((yyvsp[(1) - (1)]),NIL));;}
    break;

  case 93:

/* Line 1464 of yacc.c  */
#line 318 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(sigdecl((yyvsp[(2) - (3)]),singleton((yyvsp[(1) - (3)])),
									(yyvsp[(3) - (3)])));;}
    break;

  case 94:

/* Line 1464 of yacc.c  */
#line 320 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 95:

/* Line 1464 of yacc.c  */
#line 322 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 96:

/* Line 1464 of yacc.c  */
#line 323 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(cons((yyvsp[(1) - (1)]),NIL));;}
    break;

  case 97:

/* Line 1464 of yacc.c  */
#line 325 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(POLYTYPE,
						     pair(rev((yyvsp[(2) - (4)])),(yyvsp[(4) - (4)]))));;}
    break;

  case 98:

/* Line 1464 of yacc.c  */
#line 327 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 99:

/* Line 1464 of yacc.c  */
#line 329 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(qualify((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 100:

/* Line 1464 of yacc.c  */
#line 330 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 101:

/* Line 1464 of yacc.c  */
#line 332 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(ap((yyvsp[(3) - (4)]),bang((yyvsp[(2) - (4)]))),(yyvsp[(4) - (4)])));;}
    break;

  case 102:

/* Line 1464 of yacc.c  */
#line 333 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ap((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)])),(yyvsp[(3) - (3)])));;}
    break;

  case 103:

/* Line 1464 of yacc.c  */
#line 334 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ap((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)])),(yyvsp[(3) - (3)])));;}
    break;

  case 104:

/* Line 1464 of yacc.c  */
#line 335 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ap((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)])),(yyvsp[(3) - (3)])));;}
    break;

  case 105:

/* Line 1464 of yacc.c  */
#line 336 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = checkConstr((yyvsp[(1) - (1)]));;}
    break;

  case 106:

/* Line 1464 of yacc.c  */
#line 337 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = checkConstr((yyvsp[(1) - (1)]));;}
    break;

  case 107:

/* Line 1464 of yacc.c  */
#line 338 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(LABC,pair((yyvsp[(1) - (4)]),rev((yyvsp[(3) - (4)])))));;}
    break;

  case 108:

/* Line 1464 of yacc.c  */
#line 339 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(LABC,pair((yyvsp[(1) - (3)]),NIL)));;}
    break;

  case 109:

/* Line 1464 of yacc.c  */
#line 340 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("data type declaration");;}
    break;

  case 110:

/* Line 1464 of yacc.c  */
#line 342 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap((yyvsp[(1) - (3)]),bang((yyvsp[(3) - (3)]))));;}
    break;

  case 111:

/* Line 1464 of yacc.c  */
#line 343 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])));;}
    break;

  case 112:

/* Line 1464 of yacc.c  */
#line 344 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])));;}
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 345 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap((yyvsp[(1) - (3)]),bang((yyvsp[(3) - (3)]))));;}
    break;

  case 114:

/* Line 1464 of yacc.c  */
#line 346 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])));;}
    break;

  case 115:

/* Line 1464 of yacc.c  */
#line 347 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 116:

/* Line 1464 of yacc.c  */
#line 349 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(bang((yyvsp[(2) - (2)])));;}
    break;

  case 117:

/* Line 1464 of yacc.c  */
#line 350 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 351 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 353 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 120:

/* Line 1464 of yacc.c  */
#line 355 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 121:

/* Line 1464 of yacc.c  */
#line 356 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(cons((yyvsp[(1) - (1)]),NIL));;}
    break;

  case 122:

/* Line 1464 of yacc.c  */
#line 358 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(pair(rev((yyvsp[(1) - (3)])),(yyvsp[(3) - (3)])));;}
    break;

  case 123:

/* Line 1464 of yacc.c  */
#line 359 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(pair(rev((yyvsp[(1) - (3)])),(yyvsp[(3) - (3)])));;}
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 360 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(pair(rev((yyvsp[(1) - (4)])),bang((yyvsp[(4) - (4)]))));;}
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 362 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 126:

/* Line 1464 of yacc.c  */
#line 363 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(singleton((yyvsp[(2) - (2)])));;}
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 364 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4((yyvsp[(3) - (4)]));;}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 366 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 129:

/* Line 1464 of yacc.c  */
#line 367 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(rev((yyvsp[(1) - (1)])));;}
    break;

  case 130:

/* Line 1464 of yacc.c  */
#line 369 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 131:

/* Line 1464 of yacc.c  */
#line 370 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 132:

/* Line 1464 of yacc.c  */
#line 375 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {primDefn((yyvsp[(1) - (4)]),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)])); sp-=4;;}
    break;

  case 133:

/* Line 1464 of yacc.c  */
#line 377 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 134:

/* Line 1464 of yacc.c  */
#line 378 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(cons((yyvsp[(1) - (1)]),NIL));;}
    break;

  case 135:

/* Line 1464 of yacc.c  */
#line 379 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("primitive defn");;}
    break;

  case 136:

/* Line 1464 of yacc.c  */
#line 381 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(pair((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])));;}
    break;

  case 137:

/* Line 1464 of yacc.c  */
#line 382 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 138:

/* Line 1464 of yacc.c  */
#line 388 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {foreignImport((yyvsp[(1) - (7)]),(yyvsp[(3) - (7)]),NIL,(yyvsp[(4) - (7)]),(yyvsp[(5) - (7)]),(yyvsp[(7) - (7)])); sp-=7;;}
    break;

  case 139:

/* Line 1464 of yacc.c  */
#line 390 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {foreignImport((yyvsp[(1) - (6)]),(yyvsp[(3) - (6)]),NIL,(yyvsp[(4) - (6)]),(yyvsp[(4) - (6)]),(yyvsp[(6) - (6)])); sp-=6;;}
    break;

  case 140:

/* Line 1464 of yacc.c  */
#line 392 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {foreignImport((yyvsp[(1) - (8)]),(yyvsp[(3) - (8)]),(yyvsp[(4) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(6) - (8)]),(yyvsp[(8) - (8)])); sp-=8;;}
    break;

  case 141:

/* Line 1464 of yacc.c  */
#line 394 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {foreignImport((yyvsp[(1) - (7)]),(yyvsp[(3) - (7)]),(yyvsp[(4) - (7)]),(yyvsp[(5) - (7)]),(yyvsp[(5) - (7)]),(yyvsp[(7) - (7)])); sp-=7;;}
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 396 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {foreignExport((yyvsp[(1) - (7)]),(yyvsp[(2) - (7)]),(yyvsp[(3) - (7)]),(yyvsp[(4) - (7)]),(yyvsp[(5) - (7)]),(yyvsp[(7) - (7)])); sp-=7;;}
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 401 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {classDefn(intOf((yyvsp[(1) - (4)])),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]),(yyvsp[(3) - (4)])); sp-=4;;}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 402 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {instDefn(intOf((yyvsp[(1) - (3)])),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]));  sp-=3;;}
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 403 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {defaultDefn(intOf((yyvsp[(1) - (4)])),(yyvsp[(3) - (4)]));  sp-=4;;}
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 404 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("class declaration");;}
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 405 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("instance declaration");;}
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 406 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("default declaration");;}
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 408 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(pair((yyvsp[(1) - (3)]),checkPred((yyvsp[(3) - (3)]))));;}
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 409 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(pair(NIL,checkPred((yyvsp[(1) - (1)]))));;}
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 411 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(pair((yyvsp[(1) - (3)]),checkPred((yyvsp[(3) - (3)]))));;}
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 412 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(pair(NIL,checkPred((yyvsp[(1) - (1)]))));;}
    break;

  case 153:

/* Line 1464 of yacc.c  */
#line 414 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 415 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(rev((yyvsp[(1) - (1)])));;}
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 417 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 418 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(cons((yyvsp[(1) - (1)]),NIL));;}
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 420 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 158:

/* Line 1464 of yacc.c  */
#line 421 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {h98DoesntSupport(row,"dependent parameters");
					 (yyval) = gc2(rev((yyvsp[(2) - (2)])));;}
    break;

  case 159:

/* Line 1464 of yacc.c  */
#line 424 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 160:

/* Line 1464 of yacc.c  */
#line 425 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(cons((yyvsp[(1) - (1)]),NIL));;}
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 427 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(pair(rev((yyvsp[(1) - (3)])),rev((yyvsp[(3) - (3)]))));;}
    break;

  case 162:

/* Line 1464 of yacc.c  */
#line 428 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("functional dependency");;}
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 430 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 431 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(cons((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)])));;}
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 436 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(POLYTYPE,
						     pair(rev((yyvsp[(2) - (4)])),(yyvsp[(4) - (4)]))));;}
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 438 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 440 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(qualify((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 441 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 443 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(fn((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 170:

/* Line 1464 of yacc.c  */
#line 444 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(fn((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 171:

/* Line 1464 of yacc.c  */
#line 445 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(fn((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 172:

/* Line 1464 of yacc.c  */
#line 446 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 448 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(POLYTYPE,
						     pair(rev((yyvsp[(2) - (4)])),(yyvsp[(4) - (4)]))));;}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 450 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 175:

/* Line 1464 of yacc.c  */
#line 452 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 176:

/* Line 1464 of yacc.c  */
#line 453 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc5(qualify((yyvsp[(2) - (5)]),(yyvsp[(4) - (5)])));;}
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 455 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(cons((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)])));;}
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 456 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 458 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(qualify((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 459 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 461 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(NIL);;}
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 462 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton(checkPred((yyvsp[(1) - (1)]))));;}
    break;

  case 183:

/* Line 1464 of yacc.c  */
#line 463 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(singleton(checkPred((yyvsp[(2) - (3)]))));;}
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 464 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(checkCtxt(rev((yyvsp[(2) - (3)]))));;}
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 465 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 466 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(checkCtxt(rev((yyvsp[(2) - (3)]))));;}
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 468 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 469 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(checkCtxt(rev((yyvsp[(2) - (3)]))));;}
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 471 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {
#if TREX
					 (yyval) = gc3(ap(mkExt(textOf((yyvsp[(3) - (3)]))),(yyvsp[(1) - (3)])));
#else
					 noTREX("a type context");
#endif
					;}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 478 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {
#if IPARAM
					 (yyval) = gc3(pair(mkIParam((yyvsp[(1) - (3)])),(yyvsp[(3) - (3)])));
#else
					 noIP("a type context");
#endif
					;}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 486 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 487 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 193:

/* Line 1464 of yacc.c  */
#line 488 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 194:

/* Line 1464 of yacc.c  */
#line 489 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),cons((yyvsp[(1) - (3)]),NIL)));;}
    break;

  case 195:

/* Line 1464 of yacc.c  */
#line 490 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 493 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 494 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 496 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 497 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(fn((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 498 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(fn((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 499 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(fn((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 500 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("type expression");;}
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 502 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 503 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 505 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])));;}
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 506 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 207:

/* Line 1464 of yacc.c  */
#line 508 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])));;}
    break;

  case 208:

/* Line 1464 of yacc.c  */
#line 509 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 209:

/* Line 1464 of yacc.c  */
#line 511 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 210:

/* Line 1464 of yacc.c  */
#line 512 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 211:

/* Line 1464 of yacc.c  */
#line 514 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 515 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(typeUnit);;}
    break;

  case 213:

/* Line 1464 of yacc.c  */
#line 516 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(typeArrow);;}
    break;

  case 214:

/* Line 1464 of yacc.c  */
#line 517 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 215:

/* Line 1464 of yacc.c  */
#line 518 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 216:

/* Line 1464 of yacc.c  */
#line 519 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 217:

/* Line 1464 of yacc.c  */
#line 520 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(buildTuple((yyvsp[(2) - (3)])));;}
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 521 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(buildTuple((yyvsp[(2) - (3)])));;}
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 522 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {
#if TREX
					 (yyval) = gc3(revOnto((yyvsp[(2) - (3)]),typeNoRow));
#else
					 noTREX("a type");
#endif
					;}
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 529 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {
#if TREX
					 (yyval) = gc5(revOnto((yyvsp[(2) - (5)]),(yyvsp[(4) - (5)])));
#else
					 noTREX("a type");
#endif
					;}
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 536 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(typeList,(yyvsp[(2) - (3)])));;}
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 537 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(typeList);;}
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 538 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {h98DoesntSupport(row,"anonymous type variables");
					 (yyval) = gc1(inventVar());;}
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 541 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 542 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),cons((yyvsp[(1) - (3)]),NIL)));;}
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 544 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),cons((yyvsp[(1) - (3)]),NIL)));;}
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 545 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),cons((yyvsp[(1) - (3)]),NIL)));;}
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 546 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 547 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 550 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 551 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 553 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {h98DoesntSupport(row,"extensible records");
					 (yyval) = gc3(ap(mkExt(textOf((yyvsp[(1) - (3)]))),(yyvsp[(3) - (3)])));;}
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 560 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(fixdecl((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),NON_ASS,(yyvsp[(2) - (3)])));;}
    break;

  case 234:

/* Line 1464 of yacc.c  */
#line 561 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("fixity decl");;}
    break;

  case 235:

/* Line 1464 of yacc.c  */
#line 562 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(fixdecl((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),LEFT_ASS,(yyvsp[(2) - (3)])));;}
    break;

  case 236:

/* Line 1464 of yacc.c  */
#line 563 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("fixity decl");;}
    break;

  case 237:

/* Line 1464 of yacc.c  */
#line 564 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(fixdecl((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),RIGHT_ASS,(yyvsp[(2) - (3)])));;}
    break;

  case 238:

/* Line 1464 of yacc.c  */
#line 565 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("fixity decl");;}
    break;

  case 239:

/* Line 1464 of yacc.c  */
#line 566 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(sigdecl((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 240:

/* Line 1464 of yacc.c  */
#line 567 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("type signature");;}
    break;

  case 241:

/* Line 1464 of yacc.c  */
#line 569 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(checkPrec((yyvsp[(1) - (1)])));;}
    break;

  case 242:

/* Line 1464 of yacc.c  */
#line 570 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(mkInt(DEF_PREC));;}
    break;

  case 243:

/* Line 1464 of yacc.c  */
#line 572 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 244:

/* Line 1464 of yacc.c  */
#line 573 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 245:

/* Line 1464 of yacc.c  */
#line 575 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 246:

/* Line 1464 of yacc.c  */
#line 576 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 247:

/* Line 1464 of yacc.c  */
#line 578 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 248:

/* Line 1464 of yacc.c  */
#line 579 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 249:

/* Line 1464 of yacc.c  */
#line 581 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 250:

/* Line 1464 of yacc.c  */
#line 582 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(1) - (2)]));;}
    break;

  case 251:

/* Line 1464 of yacc.c  */
#line 583 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(1) - (2)]));;}
    break;

  case 252:

/* Line 1464 of yacc.c  */
#line 585 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(cons((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)])));;}
    break;

  case 253:

/* Line 1464 of yacc.c  */
#line 587 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 254:

/* Line 1464 of yacc.c  */
#line 588 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap(FUNBIND,pair((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]))));;}
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 589 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(FUNBIND,
						     pair((yyvsp[(1) - (4)]),ap(RSIGN,
								ap((yyvsp[(4) - (4)]),(yyvsp[(3) - (4)]))))));;}
    break;

  case 256:

/* Line 1464 of yacc.c  */
#line 592 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap(PATBIND,pair((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]))));;}
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 594 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 595 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 596 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 598 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap2((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 261:

/* Line 1464 of yacc.c  */
#line 599 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap2((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 262:

/* Line 1464 of yacc.c  */
#line 600 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap2((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 263:

/* Line 1464 of yacc.c  */
#line 601 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap2((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 602 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap2(varPlus,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 604 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap((yyvsp[(2) - (4)]),(yyvsp[(4) - (4)])));;}
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 605 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap((yyvsp[(2) - (4)]),(yyvsp[(4) - (4)])));;}
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 606 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap((yyvsp[(2) - (4)]),(yyvsp[(4) - (4)])));;}
    break;

  case 268:

/* Line 1464 of yacc.c  */
#line 607 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])));;}
    break;

  case 269:

/* Line 1464 of yacc.c  */
#line 608 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])));;}
    break;

  case 270:

/* Line 1464 of yacc.c  */
#line 610 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(letrec((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)])));;}
    break;

  case 271:

/* Line 1464 of yacc.c  */
#line 611 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("declaration");;}
    break;

  case 272:

/* Line 1464 of yacc.c  */
#line 613 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(pair((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])));;}
    break;

  case 273:

/* Line 1464 of yacc.c  */
#line 614 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(grded(rev((yyvsp[(1) - (1)]))));;}
    break;

  case 274:

/* Line 1464 of yacc.c  */
#line 616 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(cons((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)])));;}
    break;

  case 275:

/* Line 1464 of yacc.c  */
#line 617 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 276:

/* Line 1464 of yacc.c  */
#line 619 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(pair((yyvsp[(3) - (4)]),pair((yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]))));;}
    break;

  case 277:

/* Line 1464 of yacc.c  */
#line 621 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 278:

/* Line 1464 of yacc.c  */
#line 622 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(2) - (2)]));;}
    break;

  case 279:

/* Line 1464 of yacc.c  */
#line 627 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 280:

/* Line 1464 of yacc.c  */
#line 628 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(2) - (2)]));;}
    break;

  case 281:

/* Line 1464 of yacc.c  */
#line 631 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 282:

/* Line 1464 of yacc.c  */
#line 632 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 283:

/* Line 1464 of yacc.c  */
#line 635 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 284:

/* Line 1464 of yacc.c  */
#line 636 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(1) - (2)]));;}
    break;

  case 285:

/* Line 1464 of yacc.c  */
#line 637 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(1) - (2)]));;}
    break;

  case 286:

/* Line 1464 of yacc.c  */
#line 640 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(cons((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)])));;}
    break;

  case 287:

/* Line 1464 of yacc.c  */
#line 642 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {
#if IPARAM
				         (yyval) = gc3(pair((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));
#else
					 noIP("a binding");
#endif
					;}
    break;

  case 288:

/* Line 1464 of yacc.c  */
#line 649 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("a binding");;}
    break;

  case 289:

/* Line 1464 of yacc.c  */
#line 650 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 290:

/* Line 1464 of yacc.c  */
#line 655 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 291:

/* Line 1464 of yacc.c  */
#line 656 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 292:

/* Line 1464 of yacc.c  */
#line 658 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ESIGN,pair((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]))));;}
    break;

  case 293:

/* Line 1464 of yacc.c  */
#line 659 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 294:

/* Line 1464 of yacc.c  */
#line 661 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap2(varPlus,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 295:

/* Line 1464 of yacc.c  */
#line 663 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 296:

/* Line 1464 of yacc.c  */
#line 664 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 297:

/* Line 1464 of yacc.c  */
#line 665 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 298:

/* Line 1464 of yacc.c  */
#line 667 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 299:

/* Line 1464 of yacc.c  */
#line 668 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 300:

/* Line 1464 of yacc.c  */
#line 670 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 301:

/* Line 1464 of yacc.c  */
#line 671 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(ap(INFIX,(yyvsp[(1) - (1)])));;}
    break;

  case 302:

/* Line 1464 of yacc.c  */
#line 673 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap(NEG,only((yyvsp[(2) - (2)]))));;}
    break;

  case 303:

/* Line 1464 of yacc.c  */
#line 674 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("pattern");;}
    break;

  case 304:

/* Line 1464 of yacc.c  */
#line 675 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ap((yyvsp[(2) - (3)]),only((yyvsp[(1) - (3)]))),(yyvsp[(3) - (3)])));;}
    break;

  case 305:

/* Line 1464 of yacc.c  */
#line 676 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(NEG,ap2((yyvsp[(2) - (4)]),only((yyvsp[(1) - (4)])),(yyvsp[(4) - (4)]))));;}
    break;

  case 306:

/* Line 1464 of yacc.c  */
#line 677 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ap((yyvsp[(2) - (3)]),only((yyvsp[(1) - (3)]))),(yyvsp[(3) - (3)])));;}
    break;

  case 307:

/* Line 1464 of yacc.c  */
#line 678 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(NEG,ap2((yyvsp[(2) - (4)]),only((yyvsp[(1) - (4)])),(yyvsp[(4) - (4)]))));;}
    break;

  case 308:

/* Line 1464 of yacc.c  */
#line 679 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ap((yyvsp[(2) - (3)]),only((yyvsp[(1) - (3)]))),(yyvsp[(3) - (3)])));;}
    break;

  case 309:

/* Line 1464 of yacc.c  */
#line 680 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(NEG,ap2((yyvsp[(2) - (4)]),only((yyvsp[(1) - (4)])),(yyvsp[(4) - (4)]))));;}
    break;

  case 310:

/* Line 1464 of yacc.c  */
#line 681 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ap((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)])),(yyvsp[(3) - (3)])));;}
    break;

  case 311:

/* Line 1464 of yacc.c  */
#line 682 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(NEG,ap(ap((yyvsp[(2) - (4)]),(yyvsp[(1) - (4)])),(yyvsp[(4) - (4)]))));;}
    break;

  case 312:

/* Line 1464 of yacc.c  */
#line 684 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 313:

/* Line 1464 of yacc.c  */
#line 685 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 314:

/* Line 1464 of yacc.c  */
#line 687 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 315:

/* Line 1464 of yacc.c  */
#line 688 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 316:

/* Line 1464 of yacc.c  */
#line 690 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])));;}
    break;

  case 317:

/* Line 1464 of yacc.c  */
#line 691 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])));;}
    break;

  case 318:

/* Line 1464 of yacc.c  */
#line 693 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 319:

/* Line 1464 of yacc.c  */
#line 694 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 320:

/* Line 1464 of yacc.c  */
#line 695 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 321:

/* Line 1464 of yacc.c  */
#line 697 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ASPAT,pair((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]))));;}
    break;

  case 322:

/* Line 1464 of yacc.c  */
#line 698 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 323:

/* Line 1464 of yacc.c  */
#line 699 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(CONFLDS,pair((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]))));;}
    break;

  case 324:

/* Line 1464 of yacc.c  */
#line 700 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 325:

/* Line 1464 of yacc.c  */
#line 701 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 326:

/* Line 1464 of yacc.c  */
#line 702 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(WILDCARD);;}
    break;

  case 327:

/* Line 1464 of yacc.c  */
#line 703 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 328:

/* Line 1464 of yacc.c  */
#line 704 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 329:

/* Line 1464 of yacc.c  */
#line 705 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(buildTuple((yyvsp[(2) - (3)])));;}
    break;

  case 330:

/* Line 1464 of yacc.c  */
#line 706 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(FINLIST,rev((yyvsp[(2) - (3)]))));;}
    break;

  case 331:

/* Line 1464 of yacc.c  */
#line 707 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap(LAZYPAT,(yyvsp[(2) - (2)])));;}
    break;

  case 332:

/* Line 1464 of yacc.c  */
#line 709 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {
#if TREX
					 (yyval) = gc3(revOnto((yyvsp[(2) - (3)]),nameNoRec));
#else
					 (yyval) = gc3(NIL);
#endif
					;}
    break;

  case 333:

/* Line 1464 of yacc.c  */
#line 716 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc5(revOnto((yyvsp[(2) - (5)]),(yyvsp[(4) - (5)])));;}
    break;

  case 334:

/* Line 1464 of yacc.c  */
#line 719 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 335:

/* Line 1464 of yacc.c  */
#line 720 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),singleton((yyvsp[(1) - (3)]))));;}
    break;

  case 336:

/* Line 1464 of yacc.c  */
#line 722 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 337:

/* Line 1464 of yacc.c  */
#line 723 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 338:

/* Line 1464 of yacc.c  */
#line 725 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 339:

/* Line 1464 of yacc.c  */
#line 726 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(rev((yyvsp[(1) - (1)])));;}
    break;

  case 340:

/* Line 1464 of yacc.c  */
#line 728 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 341:

/* Line 1464 of yacc.c  */
#line 729 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 342:

/* Line 1464 of yacc.c  */
#line 731 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(pair((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 343:

/* Line 1464 of yacc.c  */
#line 732 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 344:

/* Line 1464 of yacc.c  */
#line 735 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 345:

/* Line 1464 of yacc.c  */
#line 736 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 346:

/* Line 1464 of yacc.c  */
#line 738 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {
#if TREX
					 (yyval) = gc3(ap(mkExt(textOf((yyvsp[(1) - (3)]))),(yyvsp[(3) - (3)])));
#else
					 noTREX("a pattern");
#endif
					;}
    break;

  case 347:

/* Line 1464 of yacc.c  */
#line 750 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 348:

/* Line 1464 of yacc.c  */
#line 751 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("expression");;}
    break;

  case 349:

/* Line 1464 of yacc.c  */
#line 753 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ESIGN,pair((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]))));;}
    break;

  case 350:

/* Line 1464 of yacc.c  */
#line 754 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 351:

/* Line 1464 of yacc.c  */
#line 756 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 352:

/* Line 1464 of yacc.c  */
#line 757 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 353:

/* Line 1464 of yacc.c  */
#line 759 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(ap(INFIX,(yyvsp[(1) - (1)])));;}
    break;

  case 354:

/* Line 1464 of yacc.c  */
#line 760 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 355:

/* Line 1464 of yacc.c  */
#line 762 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(ap(INFIX,(yyvsp[(1) - (1)])));;}
    break;

  case 356:

/* Line 1464 of yacc.c  */
#line 763 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 357:

/* Line 1464 of yacc.c  */
#line 765 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(NEG,ap(ap((yyvsp[(2) - (4)]),(yyvsp[(1) - (4)])),(yyvsp[(4) - (4)]))));;}
    break;

  case 358:

/* Line 1464 of yacc.c  */
#line 766 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ap((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)])),(yyvsp[(3) - (3)])));;}
    break;

  case 359:

/* Line 1464 of yacc.c  */
#line 767 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap(NEG,only((yyvsp[(2) - (2)]))));;}
    break;

  case 360:

/* Line 1464 of yacc.c  */
#line 768 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(NEG,
						     ap(ap((yyvsp[(2) - (4)]),only((yyvsp[(1) - (4)]))),(yyvsp[(4) - (4)]))));;}
    break;

  case 361:

/* Line 1464 of yacc.c  */
#line 770 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ap((yyvsp[(2) - (3)]),only((yyvsp[(1) - (3)]))),(yyvsp[(3) - (3)])));;}
    break;

  case 362:

/* Line 1464 of yacc.c  */
#line 772 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(NEG,ap(ap((yyvsp[(2) - (4)]),(yyvsp[(1) - (4)])),(yyvsp[(4) - (4)]))));;}
    break;

  case 363:

/* Line 1464 of yacc.c  */
#line 773 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ap((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)])),(yyvsp[(3) - (3)])));;}
    break;

  case 364:

/* Line 1464 of yacc.c  */
#line 774 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap(NEG,only((yyvsp[(2) - (2)]))));;}
    break;

  case 365:

/* Line 1464 of yacc.c  */
#line 775 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(NEG,
						     ap(ap((yyvsp[(2) - (4)]),only((yyvsp[(1) - (4)]))),(yyvsp[(4) - (4)]))));;}
    break;

  case 366:

/* Line 1464 of yacc.c  */
#line 777 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ap((yyvsp[(2) - (3)]),only((yyvsp[(1) - (3)]))),(yyvsp[(3) - (3)])));;}
    break;

  case 367:

/* Line 1464 of yacc.c  */
#line 779 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc6(ap(CASE,pair((yyvsp[(2) - (6)]),rev((yyvsp[(5) - (6)])))));;}
    break;

  case 368:

/* Line 1464 of yacc.c  */
#line 780 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(DOCOMP,checkDo((yyvsp[(3) - (4)]))));;}
    break;

  case 369:

/* Line 1464 of yacc.c  */
#line 781 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {
#if MUDO
					 (yyval) = gc4(ap(MDOCOMP, checkMDo((yyvsp[(3) - (4)]))));
#else
					 noMDo("an expression");
#endif
					;}
    break;

  case 370:

/* Line 1464 of yacc.c  */
#line 788 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 371:

/* Line 1464 of yacc.c  */
#line 790 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(LAMBDA,      
						     pair(rev((yyvsp[(2) - (4)])),
							  pair((yyvsp[(3) - (4)]),(yyvsp[(4) - (4)])))));;}
    break;

  case 372:

/* Line 1464 of yacc.c  */
#line 793 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(letrec((yyvsp[(2) - (4)]),(yyvsp[(4) - (4)])));;}
    break;

  case 373:

/* Line 1464 of yacc.c  */
#line 794 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(COND,triple((yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]))));;}
    break;

  case 374:

/* Line 1464 of yacc.c  */
#line 799 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(3) - (3)]));;}
    break;

  case 375:

/* Line 1464 of yacc.c  */
#line 800 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(2) - (2)]));;}
    break;

  case 376:

/* Line 1464 of yacc.c  */
#line 802 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(3) - (3)]));;}
    break;

  case 377:

/* Line 1464 of yacc.c  */
#line 803 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(2) - (2)]));;}
    break;

  case 378:

/* Line 1464 of yacc.c  */
#line 806 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(cons((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)])));;}
    break;

  case 379:

/* Line 1464 of yacc.c  */
#line 807 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(cons((yyvsp[(1) - (1)]),NIL));;}
    break;

  case 380:

/* Line 1464 of yacc.c  */
#line 809 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])));;}
    break;

  case 381:

/* Line 1464 of yacc.c  */
#line 810 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 382:

/* Line 1464 of yacc.c  */
#line 812 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 383:

/* Line 1464 of yacc.c  */
#line 813 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ASPAT,pair((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]))));;}
    break;

  case 384:

/* Line 1464 of yacc.c  */
#line 814 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap(LAZYPAT,(yyvsp[(2) - (2)])));;}
    break;

  case 385:

/* Line 1464 of yacc.c  */
#line 815 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 386:

/* Line 1464 of yacc.c  */
#line 816 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(WILDCARD);;}
    break;

  case 387:

/* Line 1464 of yacc.c  */
#line 817 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 388:

/* Line 1464 of yacc.c  */
#line 818 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(CONFLDS,pair((yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]))));;}
    break;

  case 389:

/* Line 1464 of yacc.c  */
#line 819 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(UPDFLDS,
						     triple((yyvsp[(1) - (4)]),NIL,(yyvsp[(3) - (4)]))));;}
    break;

  case 390:

/* Line 1464 of yacc.c  */
#line 821 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 391:

/* Line 1464 of yacc.c  */
#line 822 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 392:

/* Line 1464 of yacc.c  */
#line 823 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 393:

/* Line 1464 of yacc.c  */
#line 824 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 394:

/* Line 1464 of yacc.c  */
#line 825 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 395:

/* Line 1464 of yacc.c  */
#line 826 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(buildTuple((yyvsp[(2) - (3)])));;}
    break;

  case 396:

/* Line 1464 of yacc.c  */
#line 828 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {
#if TREX
					 (yyval) = gc3(revOnto((yyvsp[(2) - (3)]),nameNoRec));
#else
					 (yyval) = gc3(NIL);
#endif
					;}
    break;

  case 397:

/* Line 1464 of yacc.c  */
#line 835 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc5(revOnto((yyvsp[(2) - (5)]),(yyvsp[(4) - (5)])));;}
    break;

  case 398:

/* Line 1464 of yacc.c  */
#line 836 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 399:

/* Line 1464 of yacc.c  */
#line 838 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 400:

/* Line 1464 of yacc.c  */
#line 839 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap((yyvsp[(3) - (4)]),(yyvsp[(2) - (4)])));;}
    break;

  case 401:

/* Line 1464 of yacc.c  */
#line 840 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(ap(nameFlip,(yyvsp[(2) - (4)])),(yyvsp[(3) - (4)])));;}
    break;

  case 402:

/* Line 1464 of yacc.c  */
#line 841 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(ap(nameFlip,(yyvsp[(2) - (4)])),(yyvsp[(3) - (4)])));;}
    break;

  case 403:

/* Line 1464 of yacc.c  */
#line 843 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 404:

/* Line 1464 of yacc.c  */
#line 844 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),cons((yyvsp[(1) - (3)]),NIL)));;}
    break;

  case 405:

/* Line 1464 of yacc.c  */
#line 847 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 406:

/* Line 1464 of yacc.c  */
#line 848 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 407:

/* Line 1464 of yacc.c  */
#line 850 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {
#if TREX
					 (yyval) = gc3(ap(mkExt(textOf((yyvsp[(1) - (3)]))),(yyvsp[(3) - (3)])));
#else
					 noTREX("an expression");
#endif
					;}
    break;

  case 408:

/* Line 1464 of yacc.c  */
#line 859 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 409:

/* Line 1464 of yacc.c  */
#line 860 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(2) - (2)]));;}
    break;

  case 410:

/* Line 1464 of yacc.c  */
#line 862 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 411:

/* Line 1464 of yacc.c  */
#line 863 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(1) - (2)]));;}
    break;

  case 412:

/* Line 1464 of yacc.c  */
#line 864 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(cons((yyvsp[(1) - (1)]),NIL));;}
    break;

  case 413:

/* Line 1464 of yacc.c  */
#line 866 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(pair((yyvsp[(1) - (3)]),letrec((yyvsp[(3) - (3)]),(yyvsp[(2) - (3)]))));;}
    break;

  case 414:

/* Line 1464 of yacc.c  */
#line 868 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(grded(rev((yyvsp[(1) - (1)]))));;}
    break;

  case 415:

/* Line 1464 of yacc.c  */
#line 869 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(pair((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])));;}
    break;

  case 416:

/* Line 1464 of yacc.c  */
#line 870 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {syntaxError("case expression");;}
    break;

  case 417:

/* Line 1464 of yacc.c  */
#line 872 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(cons((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)])));;}
    break;

  case 418:

/* Line 1464 of yacc.c  */
#line 873 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(cons((yyvsp[(1) - (1)]),NIL));;}
    break;

  case 419:

/* Line 1464 of yacc.c  */
#line 875 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(pair((yyvsp[(3) - (4)]),pair((yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]))));;}
    break;

  case 420:

/* Line 1464 of yacc.c  */
#line 878 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 421:

/* Line 1464 of yacc.c  */
#line 879 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(2) - (2)]));;}
    break;

  case 422:

/* Line 1464 of yacc.c  */
#line 881 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 423:

/* Line 1464 of yacc.c  */
#line 882 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2((yyvsp[(1) - (2)]));;}
    break;

  case 424:

/* Line 1464 of yacc.c  */
#line 883 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(cons((yyvsp[(1) - (1)]),NIL));;}
    break;

  case 425:

/* Line 1464 of yacc.c  */
#line 886 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(FROMQUAL,pair((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]))));;}
    break;

  case 426:

/* Line 1464 of yacc.c  */
#line 887 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap(QWHERE,(yyvsp[(2) - (2)])));;}
    break;

  case 427:

/* Line 1464 of yacc.c  */
#line 889 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(ap(DOQUAL,(yyvsp[(1) - (1)])));;}
    break;

  case 428:

/* Line 1464 of yacc.c  */
#line 891 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc0(NIL);;}
    break;

  case 429:

/* Line 1464 of yacc.c  */
#line 892 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(rev((yyvsp[(1) - (1)])));;}
    break;

  case 430:

/* Line 1464 of yacc.c  */
#line 894 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 431:

/* Line 1464 of yacc.c  */
#line 895 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(singleton((yyvsp[(1) - (1)])));;}
    break;

  case 432:

/* Line 1464 of yacc.c  */
#line 897 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 433:

/* Line 1464 of yacc.c  */
#line 898 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(pair((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])));;}
    break;

  case 434:

/* Line 1464 of yacc.c  */
#line 903 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(ap(FINLIST,cons((yyvsp[(1) - (1)]),NIL)));;}
    break;

  case 435:

/* Line 1464 of yacc.c  */
#line 904 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(ap(FINLIST,rev((yyvsp[(1) - (1)]))));;}
    break;

  case 436:

/* Line 1464 of yacc.c  */
#line 905 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {
#if ZIP_COMP
					 if (length((yyvsp[(2) - (2)]))==1) {
					     (yyval) = gc2(ap(COMP,pair((yyvsp[(1) - (2)]),hd((yyvsp[(2) - (2)])))));
					 } else {
					     if (haskell98)
						 syntaxError("list comprehension");
					     (yyval) = gc2(ap(ZCOMP,pair((yyvsp[(1) - (2)]),rev((yyvsp[(2) - (2)])))));
					 }
#else
					 if (length((yyvsp[(2) - (2)]))!=1) {
					     syntaxError("list comprehension");
					 }
					 (yyval) = gc2(ap(COMP,pair((yyvsp[(1) - (2)]),hd((yyvsp[(2) - (2)])))));
#endif
					;}
    break;

  case 437:

/* Line 1464 of yacc.c  */
#line 921 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(ap(nameFromTo,(yyvsp[(1) - (3)])),(yyvsp[(3) - (3)])));;}
    break;

  case 438:

/* Line 1464 of yacc.c  */
#line 922 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc4(ap(ap(nameFromThen,(yyvsp[(1) - (4)])),(yyvsp[(3) - (4)])));;}
    break;

  case 439:

/* Line 1464 of yacc.c  */
#line 923 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap(nameFrom,(yyvsp[(1) - (2)])));;}
    break;

  case 440:

/* Line 1464 of yacc.c  */
#line 924 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc5(ap(ap(ap(nameFromThenTo,
								(yyvsp[(1) - (5)])),(yyvsp[(3) - (5)])),(yyvsp[(5) - (5)])));;}
    break;

  case 441:

/* Line 1464 of yacc.c  */
#line 927 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons(rev((yyvsp[(3) - (3)])),(yyvsp[(1) - (3)])));;}
    break;

  case 442:

/* Line 1464 of yacc.c  */
#line 928 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(cons(rev((yyvsp[(2) - (2)])),NIL));;}
    break;

  case 443:

/* Line 1464 of yacc.c  */
#line 930 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(cons((yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])));;}
    break;

  case 444:

/* Line 1464 of yacc.c  */
#line 931 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(cons((yyvsp[(1) - (1)]),NIL));;}
    break;

  case 445:

/* Line 1464 of yacc.c  */
#line 933 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(ap(FROMQUAL,pair((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]))));;}
    break;

  case 446:

/* Line 1464 of yacc.c  */
#line 934 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(ap(BOOLQUAL,(yyvsp[(1) - (1)])));;}
    break;

  case 447:

/* Line 1464 of yacc.c  */
#line 935 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(ap(QWHERE,(yyvsp[(2) - (2)])));;}
    break;

  case 448:

/* Line 1464 of yacc.c  */
#line 940 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 449:

/* Line 1464 of yacc.c  */
#line 941 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(nameUnit);;}
    break;

  case 450:

/* Line 1464 of yacc.c  */
#line 942 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(nameNil);;}
    break;

  case 451:

/* Line 1464 of yacc.c  */
#line 943 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 452:

/* Line 1464 of yacc.c  */
#line 945 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc2(mkTuple(tupleOf((yyvsp[(1) - (2)]))+1));;}
    break;

  case 453:

/* Line 1464 of yacc.c  */
#line 946 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(mkTuple(2));;}
    break;

  case 454:

/* Line 1464 of yacc.c  */
#line 948 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 455:

/* Line 1464 of yacc.c  */
#line 949 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(varHiding);;}
    break;

  case 456:

/* Line 1464 of yacc.c  */
#line 950 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(varQualified);;}
    break;

  case 457:

/* Line 1464 of yacc.c  */
#line 951 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(varAsMod);;}
    break;

  case 458:

/* Line 1464 of yacc.c  */
#line 953 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 459:

/* Line 1464 of yacc.c  */
#line 954 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 460:

/* Line 1464 of yacc.c  */
#line 956 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 461:

/* Line 1464 of yacc.c  */
#line 957 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 462:

/* Line 1464 of yacc.c  */
#line 958 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(varPlus);;}
    break;

  case 463:

/* Line 1464 of yacc.c  */
#line 959 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(varMinus);;}
    break;

  case 464:

/* Line 1464 of yacc.c  */
#line 960 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(varBang);;}
    break;

  case 465:

/* Line 1464 of yacc.c  */
#line 961 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3(varDot);;}
    break;

  case 466:

/* Line 1464 of yacc.c  */
#line 963 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 467:

/* Line 1464 of yacc.c  */
#line 964 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 468:

/* Line 1464 of yacc.c  */
#line 965 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 469:

/* Line 1464 of yacc.c  */
#line 967 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 470:

/* Line 1464 of yacc.c  */
#line 968 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 471:

/* Line 1464 of yacc.c  */
#line 970 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 472:

/* Line 1464 of yacc.c  */
#line 971 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 473:

/* Line 1464 of yacc.c  */
#line 972 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 474:

/* Line 1464 of yacc.c  */
#line 974 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(varPlus);;}
    break;

  case 475:

/* Line 1464 of yacc.c  */
#line 975 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(varMinus);;}
    break;

  case 476:

/* Line 1464 of yacc.c  */
#line 976 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 477:

/* Line 1464 of yacc.c  */
#line 978 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(varPlus);;}
    break;

  case 478:

/* Line 1464 of yacc.c  */
#line 979 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 479:

/* Line 1464 of yacc.c  */
#line 981 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(varMinus);;}
    break;

  case 480:

/* Line 1464 of yacc.c  */
#line 982 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 481:

/* Line 1464 of yacc.c  */
#line 984 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 482:

/* Line 1464 of yacc.c  */
#line 985 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 483:

/* Line 1464 of yacc.c  */
#line 986 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(varBang);;}
    break;

  case 484:

/* Line 1464 of yacc.c  */
#line 987 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(varDot);;}
    break;

  case 485:

/* Line 1464 of yacc.c  */
#line 989 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc1(varMinus);;}
    break;

  case 486:

/* Line 1464 of yacc.c  */
#line 990 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 487:

/* Line 1464 of yacc.c  */
#line 992 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 488:

/* Line 1464 of yacc.c  */
#line 993 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 489:

/* Line 1464 of yacc.c  */
#line 994 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 490:

/* Line 1464 of yacc.c  */
#line 997 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 491:

/* Line 1464 of yacc.c  */
#line 998 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 492:

/* Line 1464 of yacc.c  */
#line 1000 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 493:

/* Line 1464 of yacc.c  */
#line 1001 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = gc3((yyvsp[(2) - (3)]));;}
    break;

  case 494:

/* Line 1464 of yacc.c  */
#line 1002 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 495:

/* Line 1464 of yacc.c  */
#line 1004 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 496:

/* Line 1464 of yacc.c  */
#line 1005 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 497:

/* Line 1464 of yacc.c  */
#line 1007 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 498:

/* Line 1464 of yacc.c  */
#line 1008 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 499:

/* Line 1464 of yacc.c  */
#line 1013 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {goOffside(startColumn);;}
    break;

  case 500:

/* Line 1464 of yacc.c  */
#line 1016 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 501:

/* Line 1464 of yacc.c  */
#line 1017 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"
    {yyerrok; 
					 if (canUnOffside()) {
					     unOffside();
					     /* insert extra token on stack*/
					     push(NIL);
					     pushed(0) = pushed(1);
					     pushed(1) = mkInt(column);
					 }
					 else
					     syntaxError("declaration");
					;}
    break;



/* Line 1464 of yacc.c  */
#line 6596 "../parser.c"
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



/* Line 1684 of yacc.c  */
#line 1032 "D:\\MyDocs\\dev\\vs16-try\\hugs98-plus-Sep2006\\src\\parser.y"


static Cell local gcShadow(n,e)		/* keep parsed fragments on stack  */
Int  n;
Cell e; {
    /* If a look ahead token is held then the required stack transformation
     * is:
     *   pushed: n               1     0          1     0
     *           x1  |  ...  |  xn  |  la   ===>  e  |  la
     *                                top()            top()
     *
     * Othwerwise, the transformation is:
     *   pushed: n-1             0        0
     *           x1  |  ...  |  xn  ===>  e
     *                         top()     top()
     */
    if (yychar>=0) {
	pushed(n-1) = top();
	pushed(n)   = e;
    }
    else
	pushed(n-1) = e;
    sp -= (n-1);
    return e;
}

static Void local syntaxError(s)	/* report on syntax error	   */
String s; {
    ERRMSG(row) "Syntax error in %s (unexpected %s)", s, unexpected()
    EEND;
}

static String local unexpected() {     /* find name for unexpected token   */
    static char buffer[100];
    static char *fmt = "%s \"%s\"";
    static char *kwd = "keyword";

    switch (yychar) {
	case 0         : return "end of input";

#define keyword(kw) sprintf(buffer,fmt,kwd,kw); return buffer;
	case INFIXL    : keyword("infixl");
	case INFIXR    : keyword("infixr");
	case INFIXN    : keyword("infix");
	case TINSTANCE : keyword("instance");
	case TCLASS    : keyword("class");
	case PRIMITIVE : keyword("primitive");
	case CASEXP    : keyword("case");
	case OF        : keyword("of");
	case IF        : keyword("if");
	case THEN      : keyword("then");
	case ELSE      : keyword("else");
	case WHERE     : keyword("where");
	case TYPE      : keyword("type");
	case DATA      : keyword("data");
	case TNEWTYPE  : keyword("newtype");
	case LET       : keyword("let");
	case IN        : keyword("in");
	case DERIVING  : keyword("deriving");
	case DEFAULT   : keyword("default");
	case IMPORT    : keyword("import");
	case TMODULE   : keyword("module");
	case ALL       : keyword("forall");
#undef keyword

	case ARROW     : return "`->'";
	case '='       : return "`='";
	case COCO      : return "`::'";
	case '-'       : return "`-'";
	case '!'       : return "`!'";
	case ','       : return "comma";
	case '@'       : return "`@'";
	case '('       : return "`('";
	case ')'       : return "`)'";
	case '{'       : return "`{', possibly due to bad layout";
	case '}'       : return "`}', possibly due to bad layout";
	case '_'       : return "`_'";
	case '|'       : return "`|'";
	case '.'       : return "`.'";
	case ';'       : return "`;', possibly due to bad layout";
	case UPTO      : return "`..'";
	case '['       : return "`['";
	case ']'       : return "`]'";
	case FROM      : return "`<-'";
	case '\\'      : return "backslash (lambda)";
	case '~'       : return "tilde";
	case '`'       : return "backquote";
#if TREX
	case RECSELID  : sprintf(buffer,"selector \"#%s\"",
				 textToStr(extText(snd(yylval))));
			 return buffer;
#endif
#if IPARAM
	case IPVARID   : sprintf(buffer,"implicit parameter \"?%s\"",
				 textToStr(textOf(yylval)));
			 return buffer;
#endif
	case VAROP     :
	case VARID     :
	case CONOP     :
	case CONID     : sprintf(buffer,"symbol \"%s\"",
				 textToStr(textOf(yylval)));
			 return buffer;
	case QVAROP    :
	case QVARID    :
	case QCONOP    : 
	case QCONID    : sprintf(buffer,"symbol \"%s\"",
				 identToStr(yylval));
			 return buffer;
	case HIDING    : return "symbol \"hiding\"";
	case QUALIFIED : return "symbol \"qualified\"";
	case ASMOD     : return "symbol \"as\"";
	case NUMLIT    : return "numeric literal";
	case CHARLIT   : return "character literal";
	case STRINGLIT : return "string literal";
	case IMPLIES   : return "`=>'";
	default        : return "token";
    }
}

static Cell local checkPrec(p)		/* Check for valid precedence value*/
Cell p; {
    if (!isInt(p) || intOf(p)<MIN_PREC || intOf(p)>MAX_PREC) {
	ERRMSG(row) "Precedence value must be an integer in the range [%d..%d]",
		    MIN_PREC, MAX_PREC
	EEND;
    }
    return p;
}

static Cell local buildTuple(tup)	/* build tuple (x1,...,xn) from	   */
List tup; {				/* list [xn,...,x1]		   */
    Int  n = 0;
    Cell t = tup;
    Cell x;

    do {				/*    .                    .	   */
	x      = fst(t);		/*   / \                  / \	   */
	fst(t) = snd(t);		/*  xn  .                .   xn	   */
	snd(t) = x;			/*       .    ===>      .	   */
	x      = t;			/*        .            .	   */
	t      = fun(x);		/*         .          .		   */
	n++;				/*        / \        / \	   */
    } while (nonNull(t));		/*       x1  NIL   (n)  x1	   */
    fst(x) = mkTuple(n);
    return tup;
}

static List local checkCtxt(con)	/* validate context		   */
Type con; {
    mapOver(checkPred, con);
    return con;
}

static Cell local checkPred(c)		/* check that type expr is a valid */
Cell c; {				/* constraint			   */
    Cell cn = getHead(c);
#if TREX
    if (isExt(cn) && argCount==1)
	return c;
#endif
#if IPARAM
    if (isIP(cn))
	return c;
#endif
    if (!isQCon(cn) /*|| argCount==0*/)
	syntaxError("class expression");
    return c;
}

static Pair local checkDo(dqs)		/* convert reversed list of dquals */
List dqs; {				/* to an (expr,quals) pair         */
    if (isNull(dqs) || whatIs(hd(dqs))!=DOQUAL) {
	ERRMSG(row) "Last generator in do {...} must be an expression"
	EEND;
    }
    fst(dqs) = snd(fst(dqs));		/* put expression in fst of pair   */
    snd(dqs) = rev(snd(dqs));		/* & reversed list of quals in snd */
    return dqs;
}

#if MUDO
static Pair local checkMDo(dqs)		/* convert reversed list of dquals */
List dqs; {				/* to an (expr,quals) pair         */
    if (isNull(dqs) || whatIs(hd(dqs))!=DOQUAL) {
	ERRMSG(row) "Last generator in mdo {...} must be an expression"
	EEND;
    }
    fst(dqs) = snd(fst(dqs));		/* put expression in fst of pair   */
    snd(dqs) = rev(snd(dqs));		/* & reversed list of quals in snd */
    return dqs;
}
#endif

static Cell local checkTyLhs(c)		/* check that lhs is of the form   */
Cell c; {				/* T a1 ... a			   */
    Cell tlhs = c;
    while (isAp(tlhs) && whatIs(arg(tlhs))==VARIDCELL) {
	tlhs = fun(tlhs);
    }
    if (whatIs(tlhs)!=CONIDCELL) {
	ERRMSG(row) "Illegal left hand side in data type declaration"
	EEND;
    }
    return c;
}

static Cell local checkConstr(c)	/* check that data constructor has */
Cell c; {				/* an unqualified conid as head    */
    Cell chd = c;
    while (isAp(chd)) {
	chd = fun(chd);
    }
    if (whatIs(chd)==QUALIDENT) {
	ERRMSG(row) "Qualified constructor in data type declaration"
	EEND;
    }
    return c;
}

#if !TREX
static Void local noTREX(where)
String where; {
    ERRMSG(row) "Attempt to use TREX records while parsing %s.\n", where ETHEN
    ERRTEXT     "(TREX is disabled in this build of Hugs)"
    EEND;
}
#endif
#if !IPARAM
static Void local noIP(where)
String where; {
    ERRMSG(row) "Attempt to use Implicit Parameters while parsing %s.\n", where ETHEN
    ERRTEXT     "(Implicit Parameters are disabled in this build of Hugs)"
    EEND;
}
#endif

#if !MUDO
/***
   Due to the way we implement this stuff, this function will actually
   never be called. When MUDO is not defined, the lexer thinks that mdo
   is just another identifier, and hence the MDO token is never returned
   to the parser: consequently the mdo production is never reduced, making 
   this code unreachable. The alternative is to let the lexer to 
   recognize "mdo" all the time, but that's not Haskell compliant. In any 
   case we keep this function here, even if just for documentation purposes.
***/
static Void local noMDo(where)
String where; {
    ERRMSG(row) "Attempt to use MDO while parsing %s.\n", where ETHEN
    ERRTEXT     "(Recursive monadic bindings are disabled in this build of Hugs)"
    EEND;
}
#endif

/*-------------------------------------------------------------------------*/

