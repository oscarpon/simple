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
  #define YYDEBUG 1
  extern FILE *yyin;
  extern int yylex();
  int yyerror(char *s);
  


#line 77 "simple.tab.c" /* yacc.c:339  */

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

#line 219 "simple.tab.c" /* yacc.c:358  */

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
#define YYLAST   472

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  335

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
      94,    95,   107,   105,    92,   106,    96,   108,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    93,    91,
     102,   104,   103,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    97,   109,    98,   110,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    99,     2,   100,   101,     2,     2,     2,
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
       0,    20,    20,    21,    25,    29,    34,    44,    45,    62,
      67,    73,    74,    88,    89,    90,    96,    97,    98,   103,
     108,   109,   113,   114,   115,   119,   123,   124,   128,   129,
     133,   134,   138,   139,   143,   144,   145,   146,   150,   151,
     155,   156,   160,   164,   165,   166,   170,   174,   175,   180,
     181,   186,   187,   191,   192,   196,   200,   201,   209,   213,
     214,   219,   228,   229,   233,   234,   239,   240,   241,   245,
     246,   247,   251,   252,   256,   257,   262,   263,   264,   265,
     266,   267,   275,   279,   283,   284,   288,   289,   293,   297,
     298,   302,   303,   307,   308,   312,   317,   321,   322,   326,
     327,   336,   338,   339,   340,   341,   343,   344,   367,   368,
     399,   403,   404,   408,   412,   416,   417,   421,   426,   427,
     431,   432,   436,   437,   442,   446,   447,   451,   452,   453,
     457,   458,   462,   463,   469,   470,   475,   479,   480,   484,
     485,   493,   497,   498,   499,   504,   509,   517,   521,   528,
     532,   533,   537,   538,   539,   540,   541,   542,   560,   561,
     562,   566,   567,   576,   577,   581,   582,   593,   597,   603,
     606,   607,   610,   611,   614,   615,   630,   631,   632,   636,
     637,   638,   642,   643,   644,   645,   649,   650,   655,   656,
     657,   662,   663
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
  "':'", "'('", "')'", "'.'", "'['", "']'", "'{'", "'}'", "'~'", "'<'",
  "'>'", "'='", "'+'", "'-'", "'*'", "'/'", "'\\\\'", "'^'", "$accept",
  "programa", "definicion_programa", "codigo_programa", "varias_librerias",
  "varios_identificadores", "definicion_libreria", "codigo_libreria",
  "varias_declaraciones", "declaracion", "declaracion_objeto",
  "especificacion_tipo", "declaracion_tipo", "tipo_no_estructurado",
  "tipo_escalar", "cero_o_uno_signo", "cero_o_uno_longitud",
  "cero_o_uno_rango", "longitud", "tipo_basico", "rango", "tipo_tabla",
  "tipo_diccionario", "tipo_estructurado", "tipo_registro",
  "varios_campos", "campo", "tipo_enumerado",
  "varios_elemento_enumeracion", "elemento_enumeracion",
  "cero_uno_expresion", "clase", "cero_uno_ultima", "cero_uno_superclases",
  "declaracion_componente", "varias_declaraciones_componente",
  "visibilidad", "componente", "cero_modificadores",
  "varios_modificadores", "modificador", "declaracion_subprograma",
  "cabecera_subprograma", "cero_uno_parametrizacion",
  "cero_uno_tipoResultado", "parametrizacion", "declaracion_parametros",
  "varias_declaraciones_parametros", "modo", "tipo_resultado",
  "cuerpo_subprograma", "cero_o_mas_declaraciones", "varias_instrucciones",
  "instruccion", "instruccion_devolver", "instruccion_si",
  "cero_mas_instrucciones", "instruccion_casos", "caso", "uno_o_mas_casos",
  "entradas", "entrada", "varias_entradas", "cero_mas_expresiones1",
  "instruccion_bucle", "cero_mas_identificador1", "clausula_iteracion",
  "cero_o_uno_especificacion_tipo", "cero_o_uno_descendente",
  "instruccion_interrupcion", "cuando", "cero_o_uno_cuando",
  "cero_o_uno_de_identificador", "instruccion_captura_excepcion",
  "clausulas", "clausulas_excepcion",
  "varias_clausula_excepcion_especifica", "clausula_excepcion_general",
  "clausula_finalmente", "primario", "literal", "enumeraciones",
  "varias_expresiones", "varias_clave_valor", "varias_campo_valor",
  "clave_valor", "campo_valor", "expresion", "operadorOR", "operadorAND",
  "operadorNEG", "operadorDES", "operadorSR", "operadorMDM", "operadorPOT",
  "operadorINCDEC", "operadorUN", YY_NULLPTR
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
     345,    59,    44,    58,    40,    41,    46,    91,    93,   123,
     125,   126,    60,    62,    61,    43,    45,    42,    47,    92,
      94
};
# endif

#define YYPACT_NINF -233

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-233)))

#define YYTABLE_NINF -149

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      74,   -37,   -27,    54,  -233,  -233,   -50,   -16,  -233,  -233,
    -233,    59,  -233,  -233,    59,    22,    29,  -233,   -12,    59,
    -233,  -233,  -233,  -233,    59,  -233,    56,     6,    59,    81,
      45,   104,  -233,    80,   188,  -233,   113,  -233,    76,   403,
    -233,    53,   121,   133,  -233,    51,   -47,  -233,  -233,    14,
    -233,  -233,   262,   202,   188,   140,   262,   126,    64,  -233,
      91,  -233,  -233,  -233,  -233,  -233,    55,  -233,  -233,    96,
      53,  -233,  -233,  -233,   103,    -1,    96,    78,  -233,  -233,
    -233,  -233,   115,    53,    53,   262,   262,  -233,  -233,  -233,
    -233,  -233,    -3,  -233,  -233,  -233,  -233,  -233,  -233,   184,
     184,   262,   262,    62,   303,   243,  -233,  -233,  -233,   143,
    -233,    94,   108,    75,    66,    84,  -233,    99,  -233,  -233,
     110,    -6,   129,   126,   193,   262,  -233,   135,  -233,  -233,
    -233,   262,   167,   169,   188,   105,   -70,  -233,  -233,  -233,
     182,   175,   -23,  -233,   111,     7,  -233,  -233,   262,  -233,
    -233,   181,   161,  -233,  -233,   207,  -233,  -233,  -233,   162,
     -66,  -233,   190,   200,    28,    31,  -233,  -233,    75,  -233,
     246,  -233,  -233,   303,   303,   303,   303,   303,   303,   303,
     303,  -233,   188,   244,   247,   248,  -233,  -233,   189,   188,
    -233,  -233,  -233,   192,   192,   125,   388,  -233,  -233,   370,
     221,   262,  -233,   265,   221,    53,   241,  -233,   201,   262,
    -233,   262,  -233,  -233,   262,  -233,   262,   262,   230,  -233,
     232,  -233,   249,  -233,     3,    66,    66,    84,    84,  -233,
    -233,  -233,  -233,   131,   250,  -233,   188,  -233,  -233,     5,
      53,   279,   281,   297,  -233,  -233,   175,    53,  -233,  -233,
    -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,
     361,   407,  -233,   257,   212,  -233,   -18,  -233,  -233,  -233,
     -43,  -233,  -233,   222,  -233,   251,  -233,  -233,  -233,  -233,
    -233,  -233,   252,   225,   249,   259,   313,  -233,  -233,    38,
     188,   304,  -233,   262,   262,  -233,  -233,   175,   323,  -233,
    -233,  -233,   199,   311,   262,  -233,   322,   262,   188,  -233,
     245,   262,  -233,  -233,   172,   286,  -233,   326,  -233,  -233,
    -233,  -233,   253,    53,   277,    60,  -233,  -233,  -233,  -233,
    -233,  -233,  -233,   262,  -233
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     1,     6,
       6,     0,     9,     4,    98,     0,     0,     8,     0,    10,
      12,    13,    14,    15,     0,     5,     0,    85,    98,     0,
       0,    27,    11,    11,   126,    92,    87,    84,     0,    27,
       7,    27,     0,     0,    26,     0,     0,    19,    22,     0,
      23,    24,     0,     0,   126,   140,     0,   138,     0,   107,
     126,   100,   101,   102,   103,   104,     0,   105,   106,     0,
      27,    83,    86,    82,    60,     0,     0,     0,    21,    43,
      44,    45,     0,    27,    27,     0,     0,    17,    34,    35,
      36,    37,    29,   153,   152,   156,   157,   154,   155,     0,
       0,     0,     0,     0,     0,     0,   192,   149,   150,     0,
     169,   171,   173,   175,   178,   181,   185,   187,   190,   108,
       0,   126,     0,   138,     0,     0,   137,     0,   125,    96,
      99,     0,     0,     0,   126,     0,     0,    95,    59,    61,
      27,    57,     0,    54,     0,     0,    48,    20,     0,    42,
      41,     0,     0,    32,    33,    31,    28,   188,   189,     0,
       0,   162,     0,     0,     0,     0,   164,   166,   174,   191,
       0,   170,   172,     0,     0,     0,     0,     0,     0,     0,
       0,   109,   126,     0,   142,     0,   144,   139,     0,   126,
     136,   134,   129,   131,   131,   126,    27,    91,    88,    73,
       0,     0,    55,     0,     0,    27,     0,    47,     0,     0,
      18,     0,    25,   151,     0,   158,     0,     0,     0,   159,
       0,   160,     0,   116,     0,   176,   177,   179,   180,   182,
     183,   184,   186,   126,     0,   143,   126,   145,   135,   126,
      27,     0,     0,     0,    94,    93,    57,    27,    79,    76,
      77,    80,    81,    78,    68,    67,    66,    70,    69,    65,
      73,    73,    62,     0,    72,    75,     0,    56,    51,    53,
       0,    46,    16,     0,    30,     0,   161,   167,   168,   163,
     165,   119,     0,     0,     0,   123,     0,   115,   141,   126,
     126,     0,   130,     0,     0,   124,    89,    57,     0,    64,
      63,    71,     0,     0,     0,    49,     0,     0,   126,   121,
     117,     0,   118,   113,   126,     0,   127,   133,    90,    58,
      74,    52,     0,    27,    38,   126,   120,   122,   110,   132,
     128,    50,    40,     0,    39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -233,  -233,  -233,  -233,   337,   -61,  -233,  -233,   338,    32,
    -182,   -41,  -159,   312,   213,  -233,  -233,  -233,  -233,  -233,
      58,  -233,  -233,  -233,  -233,  -233,   209,  -233,   157,   154,
    -232,  -233,  -233,  -233,   100,  -233,  -233,   101,  -233,  -233,
      69,   116,  -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,
     346,  -233,   -48,   -58,  -233,  -233,  -233,  -233,   156,  -233,
    -233,    98,  -233,  -233,  -233,  -233,  -233,   194,  -233,  -233,
    -233,   255,  -233,  -233,  -233,  -233,  -233,  -233,   203,   278,
    -233,  -233,  -233,  -233,  -233,   166,   171,   -49,  -233,  -233,
    -233,   289,    34,    37,    41,  -233,   139
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    13,    11,    18,     5,    12,    24,    20,
      21,    46,    22,    47,    48,    49,   155,   212,   156,    92,
     274,    50,    51,    78,    79,   145,   146,    80,   142,   143,
     202,    81,   139,   199,   259,   260,   261,   262,   263,   264,
     265,    23,    28,    36,    71,    37,   136,    69,   247,    72,
      25,    26,    60,    61,    62,    63,   291,    64,   223,   224,
     282,   283,   284,   312,    65,    66,   134,   241,   330,    67,
     126,   127,   123,    68,   183,   184,   185,   237,   186,   106,
     107,   108,   160,   164,   165,   166,   167,   275,   110,   111,
     112,   113,   114,   115,   116,   117,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,    52,   130,   109,   120,   203,   121,   124,   135,   153,
     303,    53,    52,   140,   296,   144,   222,   257,    88,  -146,
      89,   197,    53,    86,   182,   198,   214,   304,     6,   137,
     154,   286,   215,  -112,    90,   206,   151,   152,     7,    54,
     258,     9,   149,   150,    87,    52,    55,    56,   305,    57,
      54,    32,   159,   161,     8,    53,    33,    55,    56,    58,
      57,   290,    91,   130,   141,   318,  -147,    52,  -147,   204,
      58,    42,    17,  -114,   204,    10,   190,    53,   257,   257,
      30,    31,   192,    54,   144,    59,   195,    27,  -114,    43,
      55,    56,   131,    57,    29,   132,    59,    34,    52,   208,
      35,   258,   258,    58,    39,    54,   133,    44,    53,     1,
      40,    45,    55,    56,    41,    57,    15,     2,    16,   129,
     218,   -97,    42,   220,    17,    58,   162,   163,   219,    59,
      70,   221,    52,    73,   233,    83,    54,   130,    52,   125,
      43,   239,    53,    55,    56,    85,    57,    84,    53,   173,
     174,    59,   267,   243,   122,   246,    58,   128,    44,  -148,
     273,    17,    45,   138,   270,   276,   170,   277,   278,   147,
      54,   175,   176,   285,   171,   130,    54,    55,    56,    52,
      57,   130,    59,    55,    56,   148,    57,   172,   289,    53,
      58,   177,   178,   179,   187,    52,    58,    30,   196,   292,
    -111,   181,   248,    30,   205,    53,   297,   225,   226,   180,
     249,    93,   227,   228,   189,   250,    59,    54,   229,   230,
     231,   232,    59,   251,    55,    56,   191,    57,   252,    93,
     253,   130,   193,    54,   194,   285,    44,    58,   157,   158,
      55,    56,   314,    57,   316,   201,    94,    95,    96,   209,
      97,    98,   210,    58,   211,   322,   130,   213,   324,   222,
     325,   216,   327,    59,    94,    95,    96,   130,    97,    98,
      93,   217,   234,   236,    99,   100,    93,   182,   101,    59,
     238,   102,   332,   103,   334,   240,   141,   268,   281,    93,
     105,   271,   272,   119,   162,   288,   101,   163,   293,   102,
     294,   103,   295,   104,   302,    94,    95,    96,   105,    97,
      98,    94,    95,    96,    15,    97,    98,   306,   309,   307,
     313,    99,   100,   308,    94,    95,    96,   311,    97,    98,
      93,   319,   315,   321,    99,   100,   323,   101,   326,   328,
     102,   329,   103,   101,   331,   333,   102,    14,   103,    19,
     104,    77,   317,   200,   207,   105,   101,   266,   269,   102,
     299,   103,   300,   104,   248,    94,    95,    96,   105,    97,
      98,   320,   249,   248,    38,    99,   100,   250,   188,   301,
     287,   249,   310,   169,   279,   251,   250,   235,   242,   298,
     252,   280,   253,   168,   251,     0,     0,   101,     0,   252,
     102,   253,   103,   254,     0,   255,    42,   256,     0,   105,
     248,    74,   254,     0,   255,     0,   256,     0,   249,     0,
      16,    42,     0,   250,    43,    75,    17,     0,     0,    16,
       0,   251,     0,     0,     0,    17,   252,   244,   253,    43,
       0,     0,    44,     0,     0,     0,    45,     0,     0,   245,
       0,     0,     0,    76,     0,     0,     0,    44,     0,     0,
       0,    45,     0,     0,     0,     0,    16,     0,     0,     0,
       0,     0,    17
};

static const yytype_int16 yycheck[] =
{
      41,     7,    60,    52,    53,    28,    54,    56,    69,    12,
      28,    17,     7,    14,   246,    76,    13,   199,     4,    25,
       6,    91,    17,    70,    30,    95,    92,    70,    65,    70,
      33,    28,    98,    28,    20,    28,    85,    86,    65,    45,
     199,    91,    83,    84,    91,     7,    52,    53,    91,    55,
      45,    19,   101,   102,     0,    17,    24,    52,    53,    65,
      55,    56,    48,   121,    65,   297,    28,     7,    30,    92,
      65,    18,    65,    13,    92,    91,   125,    17,   260,   261,
      92,    93,   131,    45,   145,    91,   134,    65,    28,    36,
      52,    53,    37,    55,    65,    40,    91,    41,     7,   148,
      94,   260,   261,    65,    23,    45,    51,    54,    17,    35,
      65,    58,    52,    53,    10,    55,    57,    43,    59,    28,
      92,    41,    18,    92,    65,    65,    64,    65,   100,    91,
      17,   100,     7,    57,   182,    14,    45,   195,     7,    13,
      36,   189,    17,    52,    53,    94,    55,    14,    17,    74,
      75,    91,   201,    28,    14,   196,    65,    93,    54,    28,
     209,    65,    58,    60,   205,   214,    23,   216,   217,    91,
      45,   105,   106,   222,    80,   233,    45,    52,    53,     7,
      55,   239,    91,    52,    53,    70,    55,    79,   236,    17,
      65,   107,   108,   109,    65,     7,    65,    92,    93,   240,
      28,    91,     3,    92,    93,    17,   247,   173,   174,   110,
      11,    27,   175,   176,    21,    16,    91,    45,   177,   178,
     179,   180,    91,    24,    52,    53,    91,    55,    29,    27,
      31,   289,    65,    45,    65,   284,    54,    65,    99,   100,
      52,    53,   290,    55,   293,    70,    62,    63,    64,    68,
      66,    67,    91,    65,    47,   304,   314,    95,   307,    13,
     308,    71,   311,    91,    62,    63,    64,   325,    66,    67,
      27,    71,    28,    25,    72,    73,    27,    30,    94,    91,
      91,    97,   323,    99,   333,    93,    65,    22,    39,    27,
     106,    50,    91,    91,    64,    45,    94,    65,    19,    97,
      19,    99,     5,   101,    92,    62,    63,    64,   106,    66,
      67,    62,    63,    64,    57,    66,    67,    95,    93,    68,
       7,    72,    73,    71,    62,    63,    64,    68,    66,    67,
      27,     8,    28,    22,    72,    73,    14,    94,    93,    53,
      97,    15,    99,    94,    91,    68,    97,    10,    99,    11,
     101,    39,   294,   140,   145,   106,    94,   200,   204,    97,
     260,    99,   261,   101,     3,    62,    63,    64,   106,    66,
      67,   302,    11,     3,    28,    72,    73,    16,   123,   263,
     224,    11,   284,   105,   218,    24,    16,   184,   194,    28,
      29,   220,    31,   104,    24,    -1,    -1,    94,    -1,    29,
      97,    31,    99,    42,    -1,    44,    18,    46,    -1,   106,
       3,     8,    42,    -1,    44,    -1,    46,    -1,    11,    -1,
      59,    18,    -1,    16,    36,    22,    65,    -1,    -1,    59,
      -1,    24,    -1,    -1,    -1,    65,    29,    49,    31,    36,
      -1,    -1,    54,    -1,    -1,    -1,    58,    -1,    -1,    61,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   112,   113,   117,    65,    65,     0,    91,
      91,   115,   118,   114,   115,    57,    59,    65,   116,   119,
     120,   121,   123,   152,   119,   161,   162,    65,   153,    65,
      92,    93,   120,   120,    41,    94,   154,   156,   161,    23,
      65,    10,    18,    36,    54,    58,   122,   124,   125,   126,
     132,   133,     7,    17,    45,    52,    53,    55,    65,    91,
     163,   164,   165,   166,   168,   175,   176,   180,   184,   158,
      17,   155,   160,    57,     8,    22,    50,   124,   134,   135,
     138,   142,   122,    14,    14,    94,    70,    91,     4,     6,
      20,    48,   130,    27,    62,    63,    64,    66,    67,    72,
      73,    94,    97,    99,   101,   106,   190,   191,   192,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,    91,
     198,   163,    14,   183,   198,    13,   181,   182,    93,    28,
     164,    37,    40,    51,   177,   116,   157,   122,    60,   143,
      14,    65,   139,   140,   116,   136,   137,    91,    70,   122,
     122,   198,   198,    12,    33,   127,   129,   207,   207,   198,
     193,   198,    64,    65,   194,   195,   196,   197,   202,   190,
      23,    80,    79,    74,    75,   105,   106,   107,   108,   109,
     110,    91,    30,   185,   186,   187,   189,    65,   182,    21,
     198,    91,   198,    65,    65,   163,    93,    91,    95,   144,
     125,    70,   141,    28,    92,    93,    28,   137,   198,    68,
      91,    47,   128,    95,    92,    98,    71,    71,    92,   100,
      92,   100,    13,   169,   170,   203,   203,   204,   204,   205,
     205,   205,   205,   163,    28,   189,    25,   188,    91,   163,
      93,   178,   178,    28,    49,    61,   122,   159,     3,    11,
      16,    24,    29,    31,    42,    44,    46,   121,   123,   145,
     146,   147,   148,   149,   150,   151,   139,   198,    22,   140,
     122,    50,    91,   198,   131,   198,   198,   198,   198,   196,
     197,    39,   171,   172,   173,   198,    28,   169,    45,   163,
      56,   167,   122,    19,    19,     5,   141,   122,    28,   145,
     148,   152,    92,    28,    70,    91,    95,    68,    71,    93,
     172,    68,   174,     7,   163,    28,   198,   131,   141,     8,
     151,    22,   198,    14,   198,   163,    93,   198,    53,    15,
     179,    91,   122,    68,   198
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   113,   114,   115,   116,   116,   117,
     118,   119,   119,   120,   120,   120,   121,   121,   121,   122,
     123,   123,   124,   124,   124,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   130,   130,   131,   131,
     132,   132,   133,   134,   134,   134,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   141,   141,   142,   143,
     143,   144,   145,   145,   146,   146,   147,   147,   147,   148,
     148,   148,   149,   149,   150,   150,   151,   151,   151,   151,
     151,   151,   152,   153,   154,   154,   155,   155,   156,   157,
     157,   158,   158,   159,   159,   160,   161,   162,   162,   163,
     163,   164,   164,   164,   164,   164,   164,   164,   165,   165,
     166,   167,   167,   168,   169,   170,   170,   171,   172,   172,
     173,   173,   174,   174,   175,   176,   176,   177,   177,   177,
     178,   178,   179,   179,   180,   180,   181,   182,   182,   183,
     183,   184,   185,   185,   185,   186,   187,   188,   189,   190,
     190,   190,   191,   191,   191,   191,   191,   191,   192,   192,
     192,   193,   193,   194,   194,   195,   195,   196,   197,   198,
     199,   199,   200,   200,   201,   201,   202,   202,   202,   203,
     203,   203,   204,   204,   204,   204,   205,   205,   206,   206,
     206,   207,   207
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     0,     3,     1,     4,
       2,     2,     1,     1,     1,     1,     7,     4,     6,     1,
       5,     4,     1,     1,     1,     4,     1,     0,     1,     0,
       2,     0,     1,     1,     1,     1,     1,     1,     3,     5,
       8,     3,     3,     1,     1,     1,     4,     2,     1,     4,
       6,     4,     6,     3,     1,     2,     2,     0,     6,     1,
       0,     0,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     1,     0,     1,     0,     4,     4,
       5,     3,     0,     1,     1,     2,     4,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       7,     2,     0,     6,     4,     2,     1,     2,     2,     1,
       3,     2,     2,     0,     5,     2,     0,     5,     6,     2,
       2,     0,     1,     0,     3,     4,     2,     1,     0,     2,
       0,     5,     1,     2,     1,     2,     0,     2,     2,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       2,     1,     2,     1,     2,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     3,     1,     2,     2,
       1,     2,     1
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
#line 20 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Programa -> definicion_programa\n"); }
#line 1618 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 21 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Libreria -> definicion_libreria\n"); }
#line 1624 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 25 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_programa -> programa IDENTIFICADOR ; codigo_programa\n"); }
#line 1630 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 29 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_programa -> varias_librerias cuerpo_subprograma\n"); }
#line 1636 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 44 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores ->  varios_identificadores  IDENTIFICADOR\n"); }
#line 1642 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 45 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores -> IDENTIFICADOR\n"); }
#line 1648 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 62 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n"); }
#line 1654 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 67 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias  varias_declaraciones\n"); }
#line 1660 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 73 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 1666 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 74 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones -> declaracion \n"); }
#line 1672 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 88 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_objeto \n"); }
#line 1678 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 89 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion ->  declaracion_tipo \n"); }
#line 1684 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 90 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_subprograma\n"); }
#line 1690 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 96 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores :  CONSTANTE especificacion_tipo ASIGNACION expresion ; \n"); }
#line 1696 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 97 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ;\n"); }
#line 1702 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 98 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 1708 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 103 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
#line 1714 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 108 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
#line 1720 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 109 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
#line 1726 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 113 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_escalar\n"); }
#line 1732 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 114 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_tabla\n"); }
#line 1738 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 115 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_diccionario\n"); }
#line 1744 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 119 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar-> cero_o_uno_signo tipo_basico cero_o_uno_longitud cero_o_uno_rango\n"); }
#line 1750 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 123 "simple.y" /* yacc.c:1646  */
    { printf ("   cero_o_uno_signo -> SIGNO\n"); }
#line 1756 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 128 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_longitud -> longitud\n"); }
#line 1762 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 133 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_rango -> RANGO rango\n"); }
#line 1768 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 138 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> CORTO\n"); }
#line 1774 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 139 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> LARGO\n"); }
#line 1780 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 143 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> BOOLEANO\n"); }
#line 1786 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 144 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> CARACTER\n"); }
#line 1792 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 145 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> ENTERO\n"); }
#line 1798 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 146 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> REAL\n"); }
#line 1804 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 150 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion\n"); }
#line 1810 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 151 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion DOS_PTOS expresion\n"); }
#line 1816 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 155 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> TABLA ( expresion DOS_PTOS expresion ) DE especificacion_tipo\n"); }
#line 1822 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 156 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
#line 1828 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 160 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
#line 1834 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 164 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_registro\n"); }
#line 1840 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 165 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
#line 1846 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 166 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> clase\n"); }
#line 1852 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 170 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
#line 1858 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 174 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> varios_campos campo\n"); }
#line 1864 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 175 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> campo\n"); }
#line 1870 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 180 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ;\n"); }
#line 1876 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 181 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 1882 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 186 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION varios_campos FIN ENUMERACION\n"); }
#line 1888 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 187 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar varios_campos FIN ENUMERACION\n"); }
#line 1894 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 191 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> varios_elemento_enumeracion , elemento_enumeracion\n"); }
#line 1900 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 192 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> elemento_enumeracion\n"); }
#line 1906 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 196 "simple.y" /* yacc.c:1646  */
    { printf ("  elemento_enumeracion -> IDENTIFICADOR cero_uno_expresion\n"); }
#line 1912 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 200 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_expresion -> ASIGNACION expresion\n"); }
#line 1918 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 209 "simple.y" /* yacc.c:1646  */
    { printf ("  clase -> CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE\n"); }
#line 1924 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 213 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_ultima -> ULTIMA\n"); }
#line 1930 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 228 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> componente"); }
#line 1936 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 229 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> visibilidad componente"); }
#line 1942 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 233 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> varias_declaraciones_componente declaracion_componente"); }
#line 1948 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 234 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> declaracion_componente"); }
#line 1954 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 239 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad -> PUBLICO \n"); }
#line 1960 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 240 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PROTEGIDO \n"); }
#line 1966 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 241 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PRIVADO\n"); }
#line 1972 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 245 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_tipo"); }
#line 1978 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 246 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_objeto"); }
#line 1984 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 247 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> varios_modificadores declaracion_subprograma"); }
#line 1990 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 256 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores ->  varios_modificadores , modificador\n"); }
#line 1996 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 257 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores -> modificador\n"); }
#line 2002 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 262 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> CONSTRUCTOR "); }
#line 2008 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 263 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  DESTRUCTOR "); }
#line 2014 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 264 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  GENERICO "); }
#line 2020 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 265 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> ABSTRACTO "); }
#line 2026 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 266 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  ESPECIFICO "); }
#line 2032 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 267 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> FINAL"); }
#line 2038 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 275 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }
#line 2044 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 279 "simple.y" /* yacc.c:1646  */
    { printf ("  cabecera_subprograma -> IDENTIFICADOR cero_uno_parametrizacion cero_uno_tipoResultado\n"); }
#line 2050 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 283 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_parametrizacion -> parametrizacion\n"); }
#line 2056 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 288 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_tipoResultado -> tipo_resultado\n"); }
#line 2062 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 293 "simple.y" /* yacc.c:1646  */
    { printf ("parametrizacion -> ( varias_declaraciones_parametros declaracion_parametros ) \n"); }
#line 2068 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 297 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo cero_uno_expresion"); }
#line 2074 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 298 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo cero_uno_expresion"); }
#line 2080 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 302 "simple.y" /* yacc.c:1646  */
    {printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros ;\n");}
#line 2086 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 307 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> VALOR\n"); }
#line 2092 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 308 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> REFERENCIA\n"); }
#line 2098 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 312 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
#line 2104 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 317 "simple.y" /* yacc.c:1646  */
    { printf ("  cuerpo_subprograma -> cero_o_mas_declaraciones PRINCIPIO varias_instrucciones FIN"); }
#line 2110 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 321 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 2116 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 326 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> varias_instrucciones  instruccion\n"); }
#line 2122 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 327 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> instruccion\n"); }
#line 2128 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 336 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_devolver\n"); }
#line 2134 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 338 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_si\n"); }
#line 2140 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 339 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_casos\n"); }
#line 2146 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 340 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_bucle\n"); }
#line 2152 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 341 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_interrupcion\n"); }
#line 2158 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 343 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_captura_excepcion\n"); }
#line 2164 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 344 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> ;\n"); }
#line 2170 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 367 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER ;\n"); }
#line 2176 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 368 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER expresion ;\n"); }
#line 2182 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 399 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_si ->  SI expresion ENTONCES varias_instrucciones cero_mas_instrucciones FIN SI\n"); }
#line 2188 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 403 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_instrucciones ->  SINO varias_instrucciones\n"); }
#line 2194 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 408 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_casos ->  CASOS expresion ES uno_o_mas_casos FIN CASOS\n"); }
#line 2200 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 412 "simple.y" /* yacc.c:1646  */
    { printf ("caso ->  CUANDO entradas => varias_instrucciones\n"); }
#line 2206 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 416 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  uno_o_mas_casos caso\n"); }
#line 2212 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 417 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  caso\n"); }
#line 2218 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 421 "simple.y" /* yacc.c:1646  */
    { printf ("entradas ->  varias_entradas entrada\n"); }
#line 2224 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 426 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  expresion cero_mas_expresiones1 OTRO\n"); }
#line 2230 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 427 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  OTRO\n"); }
#line 2236 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 431 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  varias_entradas entrada :\n"); }
#line 2242 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 432 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  entrada :\n"); }
#line 2248 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 436 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_expresiones1 -> .. expresion\n"); }
#line 2254 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 442 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_bucle -> cero_mas_identificador1 clausula_iteracion varias_instrucciones FIN BUCLE\n");}
#line 2260 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 446 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_identificador1 -> IDENTIFICADOR :\n"); }
#line 2266 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 451 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  PARA IDENTIFICADOR cero_o_uno_especificacion_tipo  EN expresion\n");}
#line 2272 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 452 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  REPETIR IDENTIFICADOR cero_o_uno_especificacion_tipo EN rango cero_o_uno_descendente\n");}
#line 2278 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 453 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  MIENTRAS expresion\n");}
#line 2284 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 457 "simple.y" /* yacc.c:1646  */
    { printf ("cero_o_uno_especificacion_tipo -> : especificacion_tipo \n"); }
#line 2290 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 462 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_descendete -> DESCENDENTE\n");}
#line 2296 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 469 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SIGUIENTE cero_o_uno_cuando ;\n");}
#line 2302 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 470 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SALIR cero_o_uno_de_identificador cero_o_uno_cuando ;\n");}
#line 2308 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 475 "simple.y" /* yacc.c:1646  */
    { printf ("cuando ->CUANDO expresion"); }
#line 2314 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 479 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_cuando -> cuando\n");}
#line 2320 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 484 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_de_identificador -> DE IDENTIFICADOR\n");}
#line 2326 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 493 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_captura_excepcion ->PRUEBA varias_instrucciones clausulas FIN PRUEBA"); }
#line 2332 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 497 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion\n"); }
#line 2338 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 498 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
#line 2344 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 499 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausula_finalmente\n"); }
#line 2350 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 504 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion ->varias_clausula_excepcion_especifica clausula_excepcion_general "); }
#line 2356 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 517 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_excepcion_general ->EXCEPCION varias_instruccion"); }
#line 2362 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 521 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_finalmente ->FINALMENTE varias_instrucciones"); }
#line 2368 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 528 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> literal\n"); }
#line 2374 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 532 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> enumeraciones\n"); }
#line 2380 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 533 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> ( expresion )\n"); }
#line 2386 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 537 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> VERDADERO\n"); }
#line 2392 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 538 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> FALSO\n"); }
#line 2398 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 539 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_ENTERA\n"); }
#line 2404 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 540 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_REAL\n"); }
#line 2410 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 541 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CARACTER\n"); }
#line 2416 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 542 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CADENA\n"); }
#line 2422 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 560 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion ]\n"); }
#line 2428 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 561 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> { varias_clave_valor }\n"); }
#line 2434 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 562 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> { varias_campo_valor }\n"); }
#line 2440 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 566 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones ->  varias_expresiones , expresion\n"); }
#line 2446 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 567 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones -> expresion\n"); }
#line 2452 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 576 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> varias_clave_valor , clave_valor\n"); }
#line 2458 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 577 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> clave_valor\n"); }
#line 2464 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 581 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> varias_campo_valor , campo_valor\n"); }
#line 2470 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 582 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> campo_valor\n"); }
#line 2476 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 593 "simple.y" /* yacc.c:1646  */
    { printf ("  clave_valor -> CTC_CADENA FLECHA expresion\n"); }
#line 2482 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 597 "simple.y" /* yacc.c:1646  */
    { printf ("  campo_valor -> IDENTIFICADOR FLECHA expresion\n"); }
#line 2488 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 603 "simple.y" /* yacc.c:1646  */
    { printf("  expresion ->  operadorOR\n"); }
#line 2494 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 606 "simple.y" /* yacc.c:1646  */
    { printf("  operadorOR ->  operadorOR OR operadorAND\n"); }
#line 2500 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 610 "simple.y" /* yacc.c:1646  */
    { printf("  operadorAND ->  operadorAND AND operadorNEG\n"); }
#line 2506 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 614 "simple.y" /* yacc.c:1646  */
    { printf("  operadorNEG -> operadorASIG ~\n"); }
#line 2512 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 630 "simple.y" /* yacc.c:1646  */
    { printf("  operadorDES ->  operadorDES DESPI operadorSR\n"); }
#line 2518 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 631 "simple.y" /* yacc.c:1646  */
    { printf("  operadorDES ->  operadorDES DESPD operadorSR\n"); }
#line 2524 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 636 "simple.y" /* yacc.c:1646  */
    { printf("  operadorSR ->  operadorSR '+' operadorMDM\n"); }
#line 2530 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 637 "simple.y" /* yacc.c:1646  */
    { printf("  operadorSR ->  operadorSR '-' operadorMDM\n"); }
#line 2536 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 642 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '*' operadorPOT\n"); }
#line 2542 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 643 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '/' operadorPOT\n"); }
#line 2548 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 644 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '\\' operadorPOT\n"); }
#line 2554 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 649 "simple.y" /* yacc.c:1646  */
    { printf("  operadorPOT ->  operadorINCDEC '^' operadorPOT\n"); }
#line 2560 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 655 "simple.y" /* yacc.c:1646  */
    { printf("  operadorINCDEC ->   INC operadorUN\n"); }
#line 2566 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 656 "simple.y" /* yacc.c:1646  */
    { printf("  operadorINCDEC ->  DEC operadorUN\n"); }
#line 2572 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 662 "simple.y" /* yacc.c:1646  */
    { printf("  operadorUN -> - primario \n"); }
#line 2578 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 663 "simple.y" /* yacc.c:1646  */
    { printf("  operadorUN -> primario \n"); }
#line 2584 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 2588 "simple.tab.c" /* yacc.c:1646  */
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
#line 667 "simple.y" /* yacc.c:1906  */





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
