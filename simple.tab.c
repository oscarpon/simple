/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "simple.y" /* yacc.c:339  */


  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();
  int yyer(char *s);
  #define YYDEBUG 1


#line 76 "simple.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "simple.tab.h".  */
#ifndef YY_YY_SIMPLE_TAB_H_INCLUDED
# define YY_YY_SIMPLE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABSTRACTO = 258,
    BOOLEANO = 259,
    BUCLE = 260,
    CARACTER = 261,
    CASOS = 262,
    CLASE = 263,
    COMO = 264,
    CONSTANTE = 265,
    CONSTRUCTOR = 266,
    CORTO = 267,
    CUANDO = 268,
    DE = 269,
    DESCENDENTE = 270,
    DESTRUCTOR = 271,
    DEVOLVER = 272,
    DICCIONARIO = 273,
    EN = 274,
    ENTERO = 275,
    ENTONCES = 276,
    ENUMERACION = 277,
    ES = 278,
    ESPECIFICO = 279,
    EXCEPCION = 280,
    EXPORTAR = 281,
    FALSO = 282,
    FIN = 283,
    FINAL = 284,
    FINALMENTE = 285,
    GENERICO = 286,
    IMPORTAR = 287,
    LARGO = 288,
    LANZA = 289,
    LIBRERIA = 290,
    LISTA = 291,
    MIENTRAS = 292,
    OBJETO = 293,
    OTRO = 294,
    PARA = 295,
    PRINCIPIO = 296,
    PRIVADO = 297,
    PROGRAMA = 298,
    PROTEGIDO = 299,
    PRUEBA = 300,
    PUBLICO = 301,
    RANGO = 302,
    REAL = 303,
    REFERENCIA = 304,
    REGISTRO = 305,
    REPETIR = 306,
    SALIR = 307,
    SI = 308,
    SIGNO = 309,
    SIGUIENTE = 310,
    SINO = 311,
    SUBPROGRAMA = 312,
    TABLA = 313,
    TIPO = 314,
    ULTIMA = 315,
    VALOR = 316,
    VERDADERO = 317,
    CTC_CARACTER = 318,
    CTC_CADENA = 319,
    IDENTIFICADOR = 320,
    CTC_ENTERA = 321,
    CTC_REAL = 322,
    DOS_PTOS = 323,
    CUATRO_PUNTOS = 324,
    ASIGNACION = 325,
    FLECHA = 326,
    INC = 327,
    DEC = 328,
    DESPI = 329,
    DESPD = 330,
    LEQ = 331,
    CEQ = 332,
    NEQ = 333,
    AND = 334,
    OR = 335,
    ASIG_SUMA = 336,
    ASIG_RESTA = 337,
    ASIG_MULT = 338,
    ASIG_DIV = 339,
    ASIG_RESTO = 340,
    ASIG_POT = 341,
    ASIG_DESPI = 342,
    ASIG_DESP = 343,
    LONGITUD = 344,
    TIPO_BASICO = 345
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SIMPLE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 218 "simple.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   259

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      94,    95,   108,   107,    92,    97,    98,   109,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    93,    91,
     104,   106,   105,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    99,   110,   100,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   101,     2,   102,   103,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    28,    32,    36,    39,    41,    42,    46,
      47,    48,    52,    53,    57,    58,    62,    64,    68,    73,
      74,    79,    80,    85,    89,    90,    94,    95,    96,   102,
     107,   108,   113,   114,   118,   119,   120,   124,   127,   129,
     132,   134,   137,   143,   144,   148,   149,   150,   151,   161,
     165,   169,   170,   171,   175,   179,   180,   184,   190,   191,
     195,   196,   200,   203,   211,   214,   216,   219,   221,   225,
     230,   231,   235,   236,   241,   242,   243,   247,   248,   249,
     253,   255,   256,   260,   261,   262,   263,   264,   265,   273,
     277,   280,   282,   285,   287,   291,   295,   296,   299,   301,
     302,   306,   307,   311,   316,   319,   321,   322,   326,   327,
     336,   337,   341,   342,   343,   344,   367,   372,   376,   379,
     468,   469,   477,   482,   484,   488,   492,   496,   497,   498,
     503,   506,   508,   509,   513,   517,   521
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACTO", "BOOLEANO", "BUCLE",
  "CARACTER", "CASOS", "CLASE", "COMO", "CONSTANTE", "CONSTRUCTOR",
  "CORTO", "CUANDO", "DE", "DESCENDENTE", "DESTRUCTOR", "DEVOLVER",
  "DICCIONARIO", "EN", "ENTERO", "ENTONCES", "ENUMERACION", "ES",
  "ESPECIFICO", "EXCEPCION", "EXPORTAR", "FALSO", "FIN", "FINAL",
  "FINALMENTE", "GENERICO", "IMPORTAR", "LARGO", "LANZA", "LIBRERIA",
  "LISTA", "MIENTRAS", "OBJETO", "OTRO", "PARA", "PRINCIPIO", "PRIVADO",
  "PROGRAMA", "PROTEGIDO", "PRUEBA", "PUBLICO", "RANGO", "REAL",
  "REFERENCIA", "REGISTRO", "REPETIR", "SALIR", "SI", "SIGNO", "SIGUIENTE",
  "SINO", "SUBPROGRAMA", "TABLA", "TIPO", "ULTIMA", "VALOR", "VERDADERO",
  "CTC_CARACTER", "CTC_CADENA", "IDENTIFICADOR", "CTC_ENTERA", "CTC_REAL",
  "DOS_PTOS", "CUATRO_PUNTOS", "ASIGNACION", "FLECHA", "INC", "DEC",
  "DESPI", "DESPD", "LEQ", "CEQ", "NEQ", "AND", "OR", "ASIG_SUMA",
  "ASIG_RESTA", "ASIG_MULT", "ASIG_DIV", "ASIG_RESTO", "ASIG_POT",
  "ASIG_DESPI", "ASIG_DESP", "LONGITUD", "TIPO_BASICO", "';'", "','",
  "':'", "'('", "')'", "'^'", "'-'", "'.'", "'['", "']'", "'{'", "'}'",
  "'~'", "'<'", "'>'", "'='", "'+'", "'*'", "'/'", "'\\\\'", "$accept",
  "programa", "definicion_programa", "codigo_programa", "varias_librerias",
  "libreria", "varios_identificadores", "nombre",
  "varios_identificadores2", "definicion_libreria", "codigo_libreria",
  "varias_declaraciones", "exportaciones", "varios_nombres", "declaracion",
  "declaracion_objeto", "especificacion_tipo", "declaracion_tipo",
  "tipo_no_estructurado", "tipo_escalar", "cero_o_uno_signo",
  "cero_o_uno_longitud", "cero_o_uno_rango", "longitud", "tipo_basico",
  "tipo_tabla", "tipo_diccionario", "tipo_estructurado", "tipo_registro",
  "varios_campos", "campo", "tipo_enumerado",
  "varios_elemento_enumeracion", "elemento_enumeracion",
  "cero_uno_expresion", "clase", "cero_uno_ultima", "cero_uno_superclases",
  "superclases", "declaracion_componente",
  "varias_declaraciones_componente", "visibilidad", "componente",
  "varios_modificadores", "modificador", "declaracion_subprograma",
  "cabecera_subprograma", "cero_uno_parametrizacion",
  "cero_uno_tipoResultado", "parametrizacion", "declaracion_parametros",
  "varias_declaraciones_parametros", "modo", "tipo_resultado",
  "cuerpo_subprograma", "cero_o_mas_declaraciones", "varias_instrucciones",
  "instruccion", "instruccion_devolver", "instruccion_llamada",
  "llamada_subprograma", "varias_definicion_parametro",
  "instruccion_interrupcion", "cero_o_uno_cuando",
  "cero_o_uno_de_identificador", "instruccion_lanzamiento_excepcion",
  "instruccion_captura_excepcion", "clausulas", "clausulas_excepcion",
  "varias_clausula_excepcion_especifica", "clausula_excepcion_especifica",
  "clausula_excepcion_general", "clausula_finalmente", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,    59,    44,    58,    40,    41,    94,    45,    46,    91,
      93,   123,   125,   126,    60,    62,    61,    43,    42,    47,
      92
};
# endif

#define YYPACT_NINF -144

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-144)))

#define YYTABLE_NINF -108

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      68,   -46,   -33,    46,  -144,  -144,   -39,   -30,  -144,    12,
      12,    38,    45,     1,  -144,  -144,  -144,    39,     3,     3,
       3,    41,    58,  -144,  -144,   -62,    57,    57,  -144,  -144,
    -144,  -144,    57,    93,  -144,   100,  -144,    94,    78,    -3,
    -144,     2,    51,    57,   125,    88,   103,  -144,    57,   126,
      17,   107,   105,   115,  -144,  -144,     3,   107,   152,  -144,
     127,    79,  -144,   172,   181,  -144,  -144,   111,  -144,  -144,
      19,  -144,  -144,   117,     3,    17,   184,  -144,  -144,   116,
      85,  -144,  -144,  -144,   118,  -144,  -144,  -144,   101,  -144,
     120,  -144,   104,   122,   107,   103,  -144,  -144,  -144,   154,
      -6,   107,   129,  -144,  -144,  -144,  -144,   103,   103,  -144,
    -144,  -144,  -144,  -144,     4,  -144,   130,    40,   150,  -144,
     131,  -144,  -144,  -144,  -144,  -144,  -144,   124,  -144,    33,
    -144,  -144,   132,   162,  -144,   -17,  -144,   114,   -16,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,   133,    17,
     195,   198,   200,  -144,  -144,  -144,   138,  -144,   136,  -144,
    -144,  -144,   103,  -144,  -144,     3,   159,  -144,   165,  -144,
     210,   165,   103,   183,  -144,  -144,     3,    17,   189,  -144,
     -10,  -144,  -144,  -144,  -144,  -144,  -144,   -75,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
     135,    96,  -144,   -44,  -144,   -14,  -144,  -144,   144,  -144,
     141,  -144,    17,  -144,  -144,   229,  -144,  -144,   188,  -144,
     216,  -144,    17,  -144,  -144,  -144,    17
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     1,     6,
       6,     0,     0,     0,     7,    18,     4,   105,     0,     0,
       0,     0,     0,    12,     8,     0,    19,     0,    21,    26,
      27,    28,     0,    21,     5,     0,    14,     0,     0,     0,
      24,     0,    91,   105,     0,     0,    38,    22,    20,    22,
       0,     0,    15,     0,     9,    23,     0,     0,    93,    92,
       0,    38,    13,     0,     0,    39,    30,     0,    31,    34,
       0,    35,    36,     0,     0,     0,   123,   122,   115,     0,
       0,   108,   110,   111,     0,   112,   113,   114,     0,    17,
       0,    25,     0,     0,     0,    38,    90,    94,    89,    65,
       0,     0,     0,    33,    51,    52,    53,    38,    38,    29,
      45,    46,    47,    48,    40,   116,     0,     0,     0,   122,
       0,   119,   104,   109,   117,    10,    11,    38,    99,     0,
     103,    66,    67,    38,    63,     0,    60,     0,     0,    55,
      32,    50,    49,    43,    44,    42,    41,   125,     0,     0,
       0,   127,     0,   132,   129,   124,     0,   120,     0,   102,
     101,    63,    38,   100,    95,     0,    80,    68,     0,    62,
       0,     0,    38,     0,    56,    37,     0,   136,     0,   128,
       0,   133,   130,   121,   118,    96,    63,     0,    86,    83,
      84,    87,    88,    85,    76,    75,    74,    78,    77,    72,
      80,    80,    70,     0,    81,     0,    58,    61,     0,    54,
       0,   126,   135,    97,    69,     0,    73,    71,     0,    79,
       0,    57,     0,    64,    82,    59,   134
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,  -144,   230,   119,   -47,   -18,  -144,  -144,
    -144,    23,  -144,    74,   139,  -137,   -86,   -83,   180,   109,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
     106,  -144,    75,    76,  -143,  -144,  -144,  -144,  -144,    48,
    -144,  -144,    44,  -144,    28,    47,  -144,  -144,  -144,  -144,
     155,  -144,  -144,  -144,   208,  -144,   -70,   -77,  -144,  -144,
    -144,  -144,  -144,   134,  -144,  -144,  -144,  -144,  -144,  -144,
     102,  -144,   108
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    16,    13,    14,    25,    79,    38,     5,
      15,    32,    27,    41,    28,    29,    67,    30,    68,    69,
      70,   145,   175,   146,   114,    71,    72,   103,   104,   138,
     139,   105,   135,   136,   169,   106,   132,   166,   167,   199,
     200,   201,   202,   203,   204,    31,    43,    58,    96,    59,
      93,    94,   162,    97,    34,    35,    80,    81,    82,    83,
      84,   158,    85,   120,   119,    86,    87,   150,   151,   152,
     153,   182,   154
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    39,    40,   123,    88,   117,    53,    73,   133,   130,
      92,   170,   173,    21,   220,    11,   143,    56,   185,     6,
     214,   141,   142,   110,    74,   111,    11,    20,    66,   197,
      45,    46,     7,    12,    73,    75,    26,   144,    91,   112,
     123,   161,    76,   213,    12,    77,     8,    92,   218,    23,
      48,    74,     9,    11,   137,    36,   116,    73,    21,   134,
      22,    10,    75,   197,   197,   148,    23,   113,    36,    76,
     149,    12,    77,    18,    74,   171,   186,    66,   171,   177,
      19,    78,    36,   198,   176,    75,   208,    99,    54,    66,
      66,   137,    76,    55,    56,    77,    21,    63,    22,   188,
     123,   100,    73,     1,    23,    36,    42,   189,    78,    66,
     212,     2,   190,   122,    21,    64,    22,   198,   198,    74,
     191,    63,    23,    44,   163,   192,    51,   193,   164,   101,
      75,    78,    24,    65,  -106,   123,    24,    76,   188,    64,
      77,    50,    63,    52,    66,    57,   189,    40,    61,   123,
      36,   190,   226,    62,    66,    22,    33,    65,   210,   191,
      64,    23,   188,   215,   192,    47,   193,  -107,    36,    95,
     189,    49,    23,   159,    89,   190,    78,   194,    65,   195,
      90,   196,    33,   191,    98,   160,   107,    47,   192,    36,
     193,   188,   125,    45,    22,   108,    45,   127,   118,   189,
      23,   194,   109,   195,   190,   196,    45,   172,   115,   124,
     121,   126,   191,   128,   131,   155,    65,   192,    22,   193,
     140,   147,   157,   178,    23,   180,   165,   176,   149,   183,
     134,   184,   206,   209,   211,   221,   222,   223,   225,   187,
      17,   102,   168,   205,   174,   217,   224,   207,   216,   129,
     219,    60,     0,   156,   181,     0,     0,     0,     0,   179
};

static const yytype_int16 yycheck[] =
{
      18,    19,    20,    80,    51,    75,     9,    17,    14,    95,
      57,    28,    28,    57,    28,    14,    12,    92,   161,    65,
      95,   107,   108,     4,    34,     6,    14,    26,    46,   166,
      92,    93,    65,    32,    17,    45,    13,    33,    56,    20,
     117,   127,    52,   186,    32,    55,     0,    94,    92,    65,
      27,    34,    91,    14,   101,    65,    74,    17,    57,    65,
      59,    91,    45,   200,   201,    25,    65,    48,    65,    52,
      30,    32,    55,    35,    34,    92,   162,    95,    92,   149,
      35,    91,    65,   166,    94,    45,   172,     8,    91,   107,
     108,   138,    52,    91,    92,    55,    57,    18,    59,     3,
     177,    22,    17,    35,    65,    65,    65,    11,    91,   127,
     180,    43,    16,    28,    57,    36,    59,   200,   201,    34,
      24,    18,    65,    65,    91,    29,    32,    31,    95,    50,
      45,    91,    13,    54,    41,   212,    17,    52,     3,    36,
      55,    41,    18,    65,   162,    94,    11,   165,    23,   226,
      65,    16,   222,    65,   172,    59,    17,    54,   176,    24,
      36,    65,     3,    28,    29,    26,    31,    41,    65,    17,
      11,    32,    65,    49,    69,    16,    91,    42,    54,    44,
      65,    46,    43,    24,    57,    61,    14,    48,    29,    65,
      31,     3,    91,    92,    59,    14,    92,    93,    14,    11,
      65,    42,    91,    44,    16,    46,    92,    93,    91,    91,
      94,    91,    24,    91,    60,    65,    54,    29,    59,    31,
      91,    91,    91,    28,    65,    25,    94,    94,    30,    91,
      65,    95,    22,    50,    45,    91,    95,     8,    22,   165,
      10,    61,   133,   168,   138,   201,   218,   171,   200,    94,
     203,    43,    -1,   119,   152,    -1,    -1,    -1,    -1,   151
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   112,   113,   120,    65,    65,     0,    91,
      91,    14,    32,   115,   116,   121,   114,   115,    35,    35,
      26,    57,    59,    65,   116,   117,   122,   123,   125,   126,
     128,   156,   122,   125,   165,   166,    65,   118,   119,   118,
     118,   124,    65,   157,    65,    92,    93,   125,   122,   125,
      41,    32,    65,     9,    91,    91,    92,    94,   158,   160,
     165,    23,    65,    18,    36,    54,   118,   127,   129,   130,
     131,   136,   137,    17,    34,    45,    52,    55,    91,   118,
     167,   168,   169,   170,   171,   173,   176,   177,   117,    69,
      65,   118,   117,   161,   162,    17,   159,   164,    57,     8,
      22,    50,   129,   138,   139,   142,   146,    14,    14,    91,
       4,     6,    20,    48,   135,    91,   118,   167,    14,   175,
     174,    94,    28,   168,    91,    91,    91,    93,    91,   161,
     127,    60,   147,    14,    65,   143,   144,   117,   140,   141,
      91,   127,   127,    12,    33,   132,   134,    91,    25,    30,
     178,   179,   180,   181,   183,    65,   174,    91,   172,    49,
      61,   127,   163,    91,    95,    94,   148,   149,   130,   145,
      28,    92,    93,    28,   141,   133,    94,   167,    28,   183,
      25,   181,   182,    91,    95,   145,   127,   124,     3,    11,
      16,    24,    29,    31,    42,    44,    46,   126,   128,   150,
     151,   152,   153,   154,   155,   143,    22,   144,   127,    50,
     118,    45,   167,   145,    95,    28,   150,   153,    92,   156,
      28,    91,    95,     8,   155,    22,   167
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   113,   114,   115,   115,   115,   116,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   121,
     121,   122,   122,   123,   124,   124,   125,   125,   125,   126,
     127,   127,   128,   128,   129,   129,   129,   130,   131,   131,
     132,   132,   133,   134,   134,   135,   135,   135,   135,   136,
     137,   138,   138,   138,   139,   140,   140,   141,   142,   142,
     143,   143,   144,   145,   146,   147,   147,   148,   148,   149,
     150,   150,   151,   151,   152,   152,   152,   153,   153,   153,
     154,   154,   154,   155,   155,   155,   155,   155,   155,   156,
     157,   158,   158,   159,   159,   160,   161,   161,   162,   162,
     162,   163,   163,   164,   165,   166,   166,   166,   167,   167,
     168,   168,   168,   168,   168,   168,   169,   170,   171,   172,
     173,   173,   174,   175,   175,   176,   177,   178,   178,   178,
     179,   180,   180,   180,   181,   182,   183
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     0,     1,     2,     4,
       6,     6,     1,     3,     1,     2,     0,     3,     4,     2,
       3,     1,     2,     3,     1,     3,     1,     1,     1,     4,
       1,     1,     5,     4,     1,     1,     1,     4,     0,     1,
       0,     1,     0,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     4,     1,     2,     4,     4,     6,
       1,     3,     2,     0,     6,     0,     1,     0,     1,     3,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       0,     1,     3,     1,     1,     1,     1,     1,     1,     4,
       3,     0,     1,     0,     1,     4,     4,     5,     0,     2,
       3,     1,     1,     2,     4,     0,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     4,     0,
       3,     4,     0,     0,     2,     3,     5,     1,     2,     1,
       2,     0,     1,     2,     5,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 27 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Programa -> definicion_programa\n"); }
#line 1512 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 28 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Libreria -> definicion_libreria\n"); }
#line 1518 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 32 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_programa -> programa IDENTIFICADOR ; codigo_programa\n"); }
#line 1524 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 36 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_programa -> varias_librerias cuerpo_subprograma\n"); }
#line 1530 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 41 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias -> libreria\n"); }
#line 1536 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 42 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias ->  varias_libreria  libreria\n"); }
#line 1542 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 46 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
#line 1548 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 47 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
#line 1554 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 48 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); }
#line 1560 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 52 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores -> IDENTIFICADOR\n"); }
#line 1566 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 53 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores ->  varios_identificadores  IDENTIFICADOR\n"); }
#line 1572 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> IDENTIFICADOR\n"); }
#line 1578 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 58 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> varios_identificadores2 IDENTIFICADOR\n"); }
#line 1584 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 64 "simple.y" /* yacc.c:1646  */
    { printf ("varios_identificadores2 ->  IDENTIFICADOR CUATRO_PUNTOS \n"); }
#line 1590 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 68 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_libreria -> libreria IDENTIFICADOR ; codigo_libreria\n"); }
#line 1596 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 73 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias  varias_declaraciones\n"); }
#line 1602 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 74 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias exportaciones varias_declaraciones\n"); }
#line 1608 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 79 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones -> declaracion \n"); }
#line 1614 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 80 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 1620 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 85 "simple.y" /* yacc.c:1646  */
    { printf ("  exportaciones -> EXPORTAR  varios_nombres ; \n"); }
#line 1626 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 89 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> nombre ; \n"); }
#line 1632 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 90 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> varios_nombres ',' nombre ; \n"); }
#line 1638 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 94 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_objeto \n"); }
#line 1644 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 95 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion ->  declaracion_tipo \n"); }
#line 1650 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 96 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_subprograma\n"); }
#line 1656 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 102 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ;\n"); }
#line 1662 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 107 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> nombre\n"); }
#line 1668 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 108 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
#line 1674 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 113 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
#line 1680 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 114 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
#line 1686 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 118 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_escalar\n"); }
#line 1692 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 119 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_tabla\n"); }
#line 1698 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 120 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_diccionario\n"); }
#line 1704 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 124 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar-> cero_o_uno_signo tipo_basico cero_o_uno_longitud cero_o_uno_rango\n"); }
#line 1710 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 129 "simple.y" /* yacc.c:1646  */
    { printf ("   cero_o_uno_signo -> SIGNO\n"); }
#line 1716 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 134 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_longitud -> longitud\n"); }
#line 1722 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 143 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> CORTO\n"); }
#line 1728 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 144 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> LARGO\n"); }
#line 1734 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 148 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> BOOLEANO\n"); }
#line 1740 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 149 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> CARACTER\n"); }
#line 1746 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 150 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> ENTERO\n"); }
#line 1752 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 151 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> REAL\n"); }
#line 1758 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 161 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
#line 1764 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 165 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
#line 1770 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 169 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_registro\n"); }
#line 1776 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 170 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
#line 1782 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 171 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> clase\n"); }
#line 1788 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 175 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
#line 1794 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 179 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> campo\n"); }
#line 1800 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 180 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> varios_campos campo\n"); }
#line 1806 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 184 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ;\n"); }
#line 1812 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 190 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION varios_campos FIN ENUMERACION\n"); }
#line 1818 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 191 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar varios_campos FIN ENUMERACION\n"); }
#line 1824 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 195 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> elemento_enumeracion\n"); }
#line 1830 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 196 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> varios_elemento_enumeracion , elemento_enumeracion\n"); }
#line 1836 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 200 "simple.y" /* yacc.c:1646  */
    { printf ("  elemento_enumeracion -> IDENTIFICADOR cero_uno_expresion\n"); }
#line 1842 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 211 "simple.y" /* yacc.c:1646  */
    { printf ("  clase -> CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE\n"); }
#line 1848 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 216 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_ultima -> ULTIMA\n"); }
#line 1854 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 221 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_superclases -> superclases\n"); }
#line 1860 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 225 "simple.y" /* yacc.c:1646  */
    { printf ("  superclases -> ( varios_nombres ) \n"); }
#line 1866 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 230 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> componente"); }
#line 1872 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 231 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> visibilidad componente"); }
#line 1878 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 235 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> declaracion_componente"); }
#line 1884 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 236 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> varias_declaraciones_componente declaracion_componente"); }
#line 1890 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 241 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad -> PUBLICO \n"); }
#line 1896 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 242 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PROTEGIDO \n"); }
#line 1902 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 243 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PRIVADO\n"); }
#line 1908 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 247 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_tipo"); }
#line 1914 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 248 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_objeto"); }
#line 1920 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 249 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> varios_modificadores declaracion_subprograma"); }
#line 1926 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 255 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores -> modificador\n"); }
#line 1932 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 256 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores ->  varios_modificadores , modificador\n"); }
#line 1938 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 260 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> CONSTRUCTOR "); }
#line 1944 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 261 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  DESTRUCTOR "); }
#line 1950 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 262 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  GENERICO "); }
#line 1956 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 263 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> ABSTRACTO "); }
#line 1962 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 264 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  ESPECIFICO "); }
#line 1968 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 265 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> FINAL"); }
#line 1974 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 273 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }
#line 1980 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 277 "simple.y" /* yacc.c:1646  */
    { printf ("  cabecera_subprograma -> IDENTIFICADOR cero_uno_parametrizacion cero_uno_tipoResultado\n"); }
#line 1986 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 282 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_parametrizacion -> parametrizacion\n"); }
#line 1992 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 287 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_tipoResultado -> tipo_resultado\n"); }
#line 1998 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 291 "simple.y" /* yacc.c:1646  */
    { printf ("parametrizacion -> ( varias_declaraciones_parametros declaracion_parametros ) \n"); }
#line 2004 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 295 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo cero_uno_expresion"); }
#line 2010 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 296 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo cero_uno_expresion"); }
#line 2016 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 301 "simple.y" /* yacc.c:1646  */
    {printf ("varias_declaraciones_parametros -> declaracion_parametros ;\n");}
#line 2022 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 302 "simple.y" /* yacc.c:1646  */
    {printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros ;\n");}
#line 2028 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 306 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> VALOR\n"); }
#line 2034 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 307 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> REFERENCIA\n"); }
#line 2040 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 311 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
#line 2046 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 316 "simple.y" /* yacc.c:1646  */
    { printf ("  cuerpo_subprograma -> cero_o_mas_declaraciones PRINCIPIO varias_instrucciones FIN"); }
#line 2052 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 321 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones -> declaracion \n"); }
#line 2058 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 322 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 2064 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 326 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> instruccion\n"); }
#line 2070 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 327 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> varias_instrucciones  instruccion\n"); }
#line 2076 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 336 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_devolver\n"); }
#line 2082 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 337 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_llamada\n"); }
#line 2088 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 341 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_interrupcion\n"); }
#line 2094 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 342 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_lanzamiento_excepcion\n"); }
#line 2100 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 343 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_captura_excepcion\n"); }
#line 2106 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 344 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> ;\n"); }
#line 2112 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 367 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER ;\n"); }
#line 2118 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 372 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_llamada ->  llamada_subprograma ;\n"); }
#line 2124 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 376 "simple.y" /* yacc.c:1646  */
    { printf ("llamada_subprograma ->  nombre ( varias_definicion_parametro )\n"); }
#line 2130 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 468 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SIGUIENTE cero_o_uno_cuando ;\n");}
#line 2136 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 469 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SALIR cero_o_uno_de_identificador cero_o_uno_cuando ;\n");}
#line 2142 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 484 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_de_identificador -> DE IDENTIFICADOR\n");}
#line 2148 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 488 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_lanzamiento_excepcion ->LANZA nombre ;"); }
#line 2154 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 492 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_captura_excepcion ->PRUEBA varias_instrucciones clausulas FIN PRUEBA"); }
#line 2160 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 496 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion\n"); }
#line 2166 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 497 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
#line 2172 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 498 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausula_finalmente\n"); }
#line 2178 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 503 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion ->varias_clausula_excepcion_especifica clausula_excepcion_general "); }
#line 2184 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 508 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausula_excepcion_especifica ->clausula_excepcion_especifica\n"); }
#line 2190 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 509 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausula_excepcion_especifica ->varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); }
#line 2196 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 513 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion_especifica -> EXCEPCION ( nombre ) varias_instrucciones "); }
#line 2202 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 517 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_excepcion_general ->EXCEPCION varias_instruccion"); }
#line 2208 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 521 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_finalmente ->FINALMENTE varias_instrucciones"); }
#line 2214 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 2218 "simple.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
      yyerror (YY_("syntax error"));
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 685 "simple.y" /* yacc.c:1906  */





int yyerror(char *s) {
  fflush(stdout);
  printf("***************** %s\n",s);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 1;

  if (argc < 2) {
    printf("Uso: ./simple NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
