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
    ASIG_DESP = 343
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

#line 217 "simple.tab.c" /* yacc.c:358  */

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
#define YYLAST   772

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  116
/* YYNRULES -- Number of rules.  */
#define YYNRULES  251
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  438

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

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
      92,    93,   105,   103,    90,   104,    94,   106,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    91,    89,
     100,   102,   101,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    95,   107,    96,   108,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    97,     2,    98,    99,     2,     2,     2,
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
      85,    86,    87,    88
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    20,    20,    21,    25,    29,    35,    36,    37,    43,
      44,    51,    52,    56,    57,    64,    69,    70,    75,    76,
      81,    85,    86,    90,    91,    92,    98,    99,   100,   104,
     105,   110,   111,   115,   116,   117,   121,   125,   126,   130,
     131,   135,   136,   140,   141,   145,   146,   147,   148,   152,
     153,   157,   158,   162,   166,   167,   168,   172,   176,   177,
     181,   182,   187,   188,   192,   193,   197,   201,   202,   210,
     214,   215,   219,   220,   224,   229,   230,   234,   235,   240,
     241,   242,   246,   247,   248,   252,   253,   257,   258,   263,
     264,   265,   266,   267,   268,   276,   280,   284,   285,   289,
     290,   294,   298,   299,   303,   304,   308,   309,   313,   318,
     322,   323,   327,   328,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   350,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   367,   368,   372,   376,   380,   381,
     385,   386,   390,   391,   395,   399,   400,   404,   408,   412,
     413,   417,   422,   423,   427,   428,   432,   433,   438,   442,
     443,   447,   448,   449,   453,   454,   458,   459,   465,   466,
     471,   475,   476,   480,   481,   485,   489,   493,   494,   495,
     500,   504,   505,   509,   513,   517,   524,   525,   526,   527,
     528,   529,   533,   534,   535,   536,   537,   538,   542,   543,
     544,   545,   550,   551,   555,   556,   560,   561,   562,   563,
     564,   569,   570,   574,   575,   579,   580,   591,   592,   598,
     602,   609,   612,   613,   616,   617,   620,   621,   625,   626,
     627,   628,   629,   630,   631,   635,   636,   637,   641,   642,
     643,   647,   648,   649,   650,   654,   655,   660,   661,   662,
     667,   668
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
  "ASIG_DESPI", "ASIG_DESP", "';'", "','", "':'", "'('", "')'", "'.'",
  "'['", "']'", "'{'", "'}'", "'~'", "'<'", "'>'", "'='", "'+'", "'-'",
  "'*'", "'/'", "'\\\\'", "'^'", "$accept", "programa",
  "definicion_programa", "codigo_programa", "libreria", "nombre",
  "varias_librerias", "varios_identificadores", "definicion_libreria",
  "codigo_libreria", "varias_declaraciones", "exportaciones",
  "varios_nombres", "declaracion", "declaracion_objeto",
  "especificacion_tipo", "declaracion_tipo", "tipo_no_estructurado",
  "tipo_escalar", "cero_o_uno_signo", "cero_o_uno_longitud",
  "cero_o_uno_rango", "longitud", "tipo_basico", "rango", "tipo_tabla",
  "tipo_diccionario", "tipo_estructurado", "tipo_registro",
  "varios_campos", "campo", "tipo_enumerado",
  "varios_elemento_enumeracion", "elemento_enumeracion",
  "cero_uno_expresion", "clase", "cero_uno_ultima", "cero_uno_superclases",
  "superclases", "declaracion_componente",
  "varias_declaraciones_componente", "visibilidad", "componente",
  "cero_modificadores", "varios_modificadores", "modificador",
  "declaracion_subprograma", "cabecera_subprograma",
  "cero_uno_parametrizacion", "cero_uno_tipoResultado", "parametrizacion",
  "declaracion_parametros", "varias_declaraciones_parametros", "modo",
  "tipo_resultado", "cuerpo_subprograma", "cero_o_mas_declaraciones",
  "varias_instrucciones", "instruccion", "instruccion_asignacion",
  "op_asignacion", "instruccion_devolver", "instruccion_llamada",
  "llamada_subprograma", "cero_definicion_parametro",
  "varias_definicion_parametro", "definicion_parametro", "instruccion_si",
  "cero_mas_instrucciones", "instruccion_casos", "caso", "uno_o_mas_casos",
  "entradas", "entrada", "varias_entradas", "cero_mas_expresiones1",
  "instruccion_bucle", "cero_mas_identificador1", "clausula_iteracion",
  "cero_o_uno_especificacion_tipo", "cero_o_uno_descendente",
  "instruccion_interrupcion", "cuando", "cero_o_uno_cuando",
  "cero_o_uno_de_identificador", "instruccion_lanzamiento_excepcion",
  "instruccion_captura_excepcion", "clausulas", "clausulas_excepcion",
  "varias_clausula_excepcion_especifica", "clausula_excepcion_especifica",
  "clausula_excepcion_general", "clausula_finalmente", "primario",
  "literal", "objeto", "varias_ctc_cadena", "varias_clausulas_iteracion",
  "enumeraciones", "varias_expresiones", "varias_clave_valor",
  "varias_campo_valor", "expresion_condicional", "clave_valor",
  "campo_valor", "expresion", "operadorOR", "operadorAND", "operadorNEG",
  "operadorASIG", "operadorDES", "operadorSR", "operadorMDM",
  "operadorPOT", "operadorINCDEC", "operadorUN", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,    59,
      44,    58,    40,    41,    46,    91,    93,   123,   125,   126,
      60,    62,    61,    43,    45,    42,    47,    92,    94
};
# endif

#define YYPACT_NINF -318

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-318)))

#define YYTABLE_NINF -186

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      24,   -52,   -36,    31,  -318,  -318,   -33,   -28,  -318,  -318,
    -318,    98,  -318,  -318,   171,    66,    38,    80,    57,    89,
    -318,  -318,   143,   114,   114,  -318,  -318,  -318,  -318,   114,
    -318,   100,    38,  -318,   106,   177,    38,   104,   114,   176,
     145,   111,  -318,   114,   186,   433,   -21,   147,  -318,    38,
      -4,  -318,   200,  -318,   172,   629,  -318,   399,   235,   238,
    -318,   164,   106,     4,  -318,  -318,    32,  -318,  -318,   506,
     428,    38,   433,   244,   506,   266,   194,  -318,   -43,   236,
    -318,  -318,  -318,  -318,   198,  -318,  -318,  -318,   130,  -318,
    -318,  -318,   673,   225,  -318,   106,   246,  -318,   225,   399,
    -318,  -318,  -318,   240,     8,   225,   207,  -318,  -318,  -318,
    -318,   239,   399,   399,   506,   506,  -318,  -318,  -318,  -318,
    -318,    11,  -318,    38,  -318,  -318,  -318,  -318,  -318,   605,
     605,   506,   443,   218,   562,   611,  -318,  -318,  -318,   166,
    -318,   294,  -318,   243,   241,  -318,    59,   189,   135,  -318,
     220,  -318,  -318,   237,    75,    93,   269,   266,   315,   506,
    -318,   248,  -318,   549,  -318,  -318,  -318,   506,   282,   284,
     433,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
     285,   506,   289,   506,   205,   265,   208,   112,  -318,  -318,
     267,   303,   288,   -22,  -318,   213,    -7,  -318,  -318,   506,
    -318,  -318,   292,   274,  -318,  -318,   319,  -318,   -43,  -318,
    -318,  -318,   275,   506,   -30,     2,  -318,   299,   304,    53,
     121,  -318,  -318,   231,  -318,   363,  -318,  -318,   562,   562,
    -318,  -318,  -318,  -318,  -318,  -318,   562,   562,   562,   562,
     562,   562,  -318,  -318,   433,   349,   350,   357,  -318,  -318,
     296,   433,  -318,  -318,   317,   295,   301,  -318,  -318,  -318,
     309,   309,   290,  -318,    76,  -318,   141,   306,  -318,  -318,
     219,  -318,  -318,    38,   707,  -318,   337,   506,  -318,   382,
     337,   399,   355,  -318,   318,   506,  -318,   506,  -318,  -318,
     389,   506,  -318,  -318,  -318,     6,   506,   506,   348,  -318,
     351,  -318,   491,  -318,    64,   189,   189,   135,   135,  -318,
    -318,  -318,  -318,   344,   370,  -318,    17,  -318,  -318,  -318,
      97,   506,  -318,   549,   399,   402,   403,   413,  -318,   359,
    -318,  -318,  -318,  -318,   288,   399,    27,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,   683,
      16,  -318,   367,   338,  -318,   -19,  -318,  -318,  -318,    19,
    -318,  -318,   334,  -318,   362,   506,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,   361,   346,   491,   374,   438,  -318,
    -318,    38,   161,   433,   419,  -318,  -318,  -318,   506,   506,
    -318,  -318,  -318,   288,  -318,   440,  -318,  -318,  -318,   458,
     430,   506,  -318,   444,   506,   398,   433,  -318,   369,   506,
    -318,  -318,   -15,   391,   409,  -318,   448,  -318,  -318,  -318,
    -318,   376,   399,   400,   506,   170,  -318,  -318,   433,  -318,
    -318,  -318,  -318,  -318,   506,  -318,   386,  -318
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     1,    12,
      12,     0,    15,     4,   111,     0,     0,     0,     0,     0,
      14,    11,     0,    16,     0,    19,    23,    24,    25,     0,
       5,     0,     0,    10,    22,     0,     0,    98,   111,     0,
       0,    38,    18,    17,    18,   160,     0,     0,    20,     0,
       0,   105,   100,    97,     0,    38,    13,    38,     0,     0,
      37,     0,    29,     0,    30,    33,     0,    34,    35,     0,
       0,     0,   160,   174,     0,   172,    10,   123,   198,   160,
     113,   114,   115,   116,     0,   117,   118,   119,     0,   120,
     121,   122,     0,     0,     9,    21,     0,     6,     0,    38,
      96,    99,    95,    71,     0,     0,     0,    32,    54,    55,
      56,     0,    38,    38,     0,     0,    27,    45,    46,    47,
      48,    40,   193,     0,   192,   196,   197,   194,   195,     0,
       0,     0,     0,     0,     0,     0,   188,   251,   186,   187,
     190,     0,   221,   223,   225,   227,   234,   237,   240,   244,
     246,   249,   134,     0,     0,   160,     0,   172,     0,     0,
     171,     0,   159,   139,   109,   112,   136,     0,     0,     0,
     160,   125,   126,   127,   128,   129,   130,   131,   132,   133,
       0,     0,     0,     0,     0,     0,     0,     0,   108,    70,
      73,    38,    68,     0,    65,     0,     0,    59,    31,     0,
      53,    52,     0,     0,    43,    44,    42,    39,     0,   189,
     247,   248,     0,     0,     0,     0,   212,     0,     0,     0,
       0,   214,   216,   226,   250,     0,   222,   224,     0,     0,
     230,   231,   233,   228,   229,   232,     0,     0,     0,     0,
       0,     0,   135,   175,   160,     0,   177,     0,   179,   173,
       0,   160,   170,   168,    10,     0,   138,   141,   142,   163,
     165,   165,   160,   199,     0,   203,     0,     0,     8,     7,
      38,   104,   101,     0,    86,    72,     0,     0,    66,     0,
       0,    38,     0,    58,     0,     0,    28,     0,    36,   191,
       0,     0,   208,   206,   205,     0,     0,     0,     0,   209,
       0,   210,     0,   150,     0,   235,   236,   238,   239,   241,
     242,   243,   245,   160,     0,   178,   160,   181,   180,   169,
     160,     0,   137,     0,    38,     0,     0,     0,   200,     0,
     201,   124,   107,   106,    68,    38,     0,    92,    89,    90,
      93,    94,    91,    81,    80,    79,    83,    82,    78,    86,
      86,    75,     0,    85,    88,     0,    67,    62,    64,     0,
      57,    26,     0,    41,     0,     0,   211,   207,   204,   219,
     220,   213,   215,   153,     0,     0,     0,   157,     0,   149,
     176,     0,   160,   160,     0,   143,   140,   164,     0,     0,
     158,   202,   102,    68,    74,     0,    77,    76,    84,     0,
       0,     0,    60,     0,     0,   217,   160,   155,   151,     0,
     152,   147,     0,   160,     0,   161,   167,   103,    69,    87,
      63,     0,    38,    49,     0,   160,   154,   156,   160,   144,
     166,   162,    61,    51,     0,   218,   160,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -318,  -318,  -318,  -318,  -318,   -16,   461,   -91,  -318,  -318,
     108,  -318,   199,   151,  -262,   -49,  -259,   418,   286,  -318,
    -318,  -318,  -318,  -318,    87,  -318,  -318,  -318,  -318,  -318,
     283,  -318,   221,   204,  -317,  -318,  -318,  -318,  -318,   134,
    -318,  -318,   149,  -318,  -318,   103,   152,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,   465,  -318,   -54,   -69,  -318,
    -318,  -318,  -318,   -44,  -318,  -318,   188,  -318,  -318,  -318,
     209,  -318,  -318,   136,  -318,  -318,  -318,  -318,  -211,   253,
    -318,  -318,  -318,   364,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,   273,   393,  -318,   -42,  -318,  -318,  -318,   343,
    -318,  -318,  -318,   228,   234,    25,  -318,  -318,  -318,  -318,
     397,    86,    94,     7,  -318,   203
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    13,    21,    78,    11,    22,     5,    12,
      29,    24,    35,    25,    26,    63,    27,    64,    65,    66,
     206,   288,   207,   121,   363,    67,    68,   107,   108,   196,
     197,   109,   193,   194,   278,   110,   190,   274,   275,   348,
     349,   350,   351,   352,   353,   354,    28,    38,    52,   100,
      53,   187,    98,   335,   101,    30,    31,    79,    80,    81,
     183,    82,    83,   136,   255,   256,   257,    85,   384,    86,
     303,   304,   374,   375,   376,   410,    87,    88,   170,   325,
     431,    89,   160,   161,   157,    90,    91,   245,   246,   247,
     317,   318,   248,   137,   138,   139,   266,   295,   140,   214,
     219,   220,   215,   221,   222,   216,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    84,   184,    92,   294,    96,   279,   186,   111,   400,
     165,    93,   346,     6,   195,   347,    46,   392,   155,   337,
      50,   282,   191,   204,    69,    62,    47,   338,    84,     7,
      92,     8,   339,    95,    70,    84,   117,    92,   118,   167,
     340,    62,   168,   167,   205,   341,   168,   342,    47,   163,
     188,    71,   119,   169,    47,   154,     9,   169,    20,     1,
     291,    10,    72,   200,   201,    47,   292,     2,   280,    73,
      74,   280,    75,   192,   115,    19,   417,   302,   428,   209,
     120,    20,    76,    62,   368,    97,   165,   346,   346,   401,
     347,   347,   378,   116,   141,   153,    62,    62,   293,   158,
      69,    32,   367,    33,    69,   195,    77,   208,   402,   381,
      70,    84,    15,    92,    70,    36,   262,    49,  -182,    23,
     394,    57,    37,   244,    16,  -146,    84,    71,    92,    58,
      17,    71,    43,   228,   229,   230,   231,   232,    72,   202,
     203,    45,    72,   298,    47,    73,    74,    59,    75,    73,
      74,   299,    75,   383,    39,    18,   212,    19,    76,   233,
     234,   235,    76,    20,   243,    60,   291,   167,    69,    61,
     168,    18,   328,    19,    42,    47,    33,    69,    70,    20,
      44,   169,    77,  -148,   252,    15,    77,    70,   258,  -184,
     313,  -184,   259,   165,    42,    71,    51,   320,  -148,    55,
      84,   271,    92,    17,    71,   272,    72,    84,   267,    92,
      56,   300,    94,    73,    74,    72,    75,    99,    84,   301,
      92,   334,    73,    74,   284,    75,    76,  -110,    18,   102,
      19,   329,   359,    40,    41,    76,    20,    58,   290,   330,
     238,   239,   240,    69,   165,   309,   310,   311,   312,   112,
      77,   165,   113,    70,    62,    59,   114,    34,   156,    77,
     180,   181,   382,   182,   164,    62,    48,    49,   332,    84,
      71,    92,    84,    60,    92,   387,    84,    61,    92,   159,
     333,    72,   217,   218,    33,   162,   393,   166,    73,    74,
      20,    75,   236,   237,   268,    40,   198,    69,    40,   270,
     189,    76,   356,    40,   281,   228,   229,    70,    62,   199,
     362,   185,   364,   165,   305,   306,   366,   225,   327,    62,
     227,   369,   370,   226,    71,    77,   242,   377,   241,   413,
     307,   308,   210,   211,   249,    72,   251,   253,    84,    84,
      92,    92,    73,    74,   165,    75,   385,   260,   258,   261,
     263,    69,   425,   265,   269,    76,   165,    60,   277,   273,
     285,    70,    84,   286,    92,   412,   287,   165,   289,    84,
     296,    92,  -185,   433,   436,   297,   302,   314,    71,    77,
     244,    84,   316,    92,    84,   319,    92,   321,   322,    72,
     405,   323,    84,    69,    92,   331,    73,    74,    69,    75,
     324,   377,   192,    70,   357,   360,    62,   361,    70,    76,
     365,  -183,   217,   415,   364,   380,   218,    58,   390,  -145,
      71,   388,   389,   391,    18,    71,   421,   403,   399,   423,
     404,    72,   406,    77,   427,    59,    72,   407,    73,    74,
      69,    75,   409,    73,    74,   411,    75,   414,   418,   435,
      70,    76,   420,    60,   424,   122,    76,    61,   422,   437,
     426,   337,   429,   430,    33,   432,   123,    71,   434,   338,
     122,    14,   336,   106,   339,    77,   416,   276,    72,   283,
      77,   123,   340,   396,   358,    73,    74,   341,    75,   342,
     124,   125,   126,    33,   127,   128,   213,   355,    76,   397,
     129,   130,   419,    54,   398,   124,   125,   126,    33,   127,
     128,   386,   408,   379,   326,   129,   130,   152,   122,   315,
     131,   250,    77,   132,   264,   133,   371,   134,   224,   123,
     373,   223,   135,   122,   372,   131,     0,     0,   132,     0,
     133,     0,   134,     0,   123,     0,     0,   135,     0,     0,
       0,     0,     0,   124,   125,   126,    33,   127,   128,     0,
       0,     0,     0,   129,   130,     0,     0,     0,   124,   125,
     126,    33,   127,   128,     0,     0,   122,     0,   129,   130,
       0,     0,     0,   131,     0,     0,   132,   123,   133,   122,
     134,     0,     0,     0,     0,   135,     0,     0,   131,     0,
     123,   132,     0,   133,     0,   134,     0,     0,     0,     0,
     135,   124,   125,   126,   254,   127,   128,     0,     0,     0,
       0,   129,   130,     0,   124,   125,   126,    33,   127,   128,
       0,     0,   122,     0,   129,   130,     0,   103,   122,     0,
       0,   131,     0,   123,   132,     0,   133,    58,   134,   123,
       0,   104,     0,   135,   131,     0,     0,   132,     0,   133,
       0,     0,     0,     0,     0,    59,   135,   124,   125,   126,
      33,   127,   128,   124,   125,   126,    33,   127,   128,   105,
       0,     0,     0,    60,     0,     0,   337,    61,     0,     0,
       0,     0,     0,     0,   338,     0,     0,   131,     0,   339,
     132,     0,   133,   131,     0,     0,   132,   340,   133,   135,
     337,   395,   341,     0,   342,     0,     0,     0,   338,     0,
       0,     0,     0,   339,     0,   343,     0,   344,     0,   345,
       0,   340,     0,     0,     0,     0,   341,     0,   342,     0,
       0,     0,    19,   171,     0,     0,     0,     0,    20,   343,
       0,   344,     0,   345,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,     0,     0,    19,   180,   181,     0,
     182,     0,    20
};

static const yytype_int16 yycheck[] =
{
      16,    45,    93,    45,   215,     9,    28,    98,    57,    28,
      79,    32,   274,    65,   105,   274,    32,   334,    72,     3,
      36,    28,    14,    12,     7,    41,    69,    11,    72,    65,
      72,     0,    16,    49,    17,    79,     4,    79,     6,    37,
      24,    57,    40,    37,    33,    29,    40,    31,    69,    92,
      99,    34,    20,    51,    69,    71,    89,    51,    65,    35,
      90,    89,    45,   112,   113,    69,    96,    43,    90,    52,
      53,    90,    55,    65,    70,    59,   393,    13,    93,   123,
      48,    65,    65,    99,   295,    89,   155,   349,   350,    70,
     349,   350,    28,    89,    69,    70,   112,   113,    96,    74,
       7,    35,    96,    65,     7,   196,    89,   123,    89,    92,
      17,   155,    14,   155,    17,    35,   170,    90,    25,    11,
      93,    10,    65,    30,    26,    28,   170,    34,   170,    18,
      32,    34,    24,    74,    75,    76,    77,    78,    45,   114,
     115,    41,    45,    90,    69,    52,    53,    36,    55,    52,
      53,    98,    55,    56,    65,    57,   131,    59,    65,   100,
     101,   102,    65,    65,    89,    54,    90,    37,     7,    58,
      40,    57,    96,    59,    23,    69,    65,     7,    17,    65,
      29,    51,    89,    13,   159,    14,    89,    17,   163,    28,
     244,    30,   167,   262,    43,    34,    92,   251,    28,    23,
     244,    89,   244,    32,    34,    93,    45,   251,   183,   251,
      65,    90,    65,    52,    53,    45,    55,    17,   262,    98,
     262,   270,    52,    53,   199,    55,    65,    41,    57,    57,
      59,    90,   281,    90,    91,    65,    65,    18,   213,    98,
     105,   106,   107,     7,   313,   238,   239,   240,   241,    14,
      89,   320,    14,    17,   270,    36,    92,   273,    14,    89,
      94,    95,   316,    97,    28,   281,    89,    90,    49,   313,
      34,   313,   316,    54,   316,   324,   320,    58,   320,    13,
      61,    45,    64,    65,    65,    91,   335,    89,    52,    53,
      65,    55,   103,   104,    89,    90,    89,     7,    90,    91,
      60,    65,   277,    90,    91,    74,    75,    17,   324,    70,
     285,    65,   287,   382,   228,   229,   291,    23,    28,   335,
      79,   296,   297,    80,    34,    89,    89,   302,   108,   383,
     236,   237,   129,   130,    65,    45,    21,    89,   382,   383,
     382,   383,    52,    53,   413,    55,   321,    65,   323,    65,
      65,     7,   406,    64,    89,    65,   425,    54,    70,    92,
      68,    17,   406,    89,   406,   381,    47,   436,    93,   413,
      71,   413,    28,   422,   428,    71,    13,    28,    34,    89,
      30,   425,    25,   425,   428,    89,   428,    70,    93,    45,
     365,    90,   436,     7,   436,    89,    52,    53,     7,    55,
      91,   376,    65,    17,    22,    50,   422,    89,    17,    65,
      21,    25,    64,   388,   389,    45,    65,    18,     5,    28,
      34,    19,    19,    64,    57,    34,   401,    93,    90,   404,
      68,    45,    71,    89,   409,    36,    45,    91,    52,    53,
       7,    55,    68,    52,    53,     7,    55,    28,     8,   424,
      17,    65,    22,    54,    56,    27,    65,    58,    14,   434,
      91,     3,    53,    15,    65,    89,    38,    34,    68,    11,
      27,    10,   273,    55,    16,    89,   389,   191,    45,   196,
      89,    38,    24,   349,   280,    52,    53,    29,    55,    31,
      62,    63,    64,    65,    66,    67,    53,   276,    65,   350,
      72,    73,   399,    38,   352,    62,    63,    64,    65,    66,
      67,   323,   376,   304,   261,    72,    73,    89,    27,   246,
      92,   157,    89,    95,   181,    97,   298,    99,   135,    38,
      39,   134,   104,    27,   300,    92,    -1,    -1,    95,    -1,
      97,    -1,    99,    -1,    38,    -1,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    27,    -1,    72,    73,
      -1,    -1,    -1,    92,    -1,    -1,    95,    38,    97,    27,
      99,    -1,    -1,    -1,    -1,   104,    -1,    -1,    92,    -1,
      38,    95,    -1,    97,    -1,    99,    -1,    -1,    -1,    -1,
     104,    62,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    -1,    62,    63,    64,    65,    66,    67,
      -1,    -1,    27,    -1,    72,    73,    -1,     8,    27,    -1,
      -1,    92,    -1,    38,    95,    -1,    97,    18,    99,    38,
      -1,    22,    -1,   104,    92,    -1,    -1,    95,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    36,   104,    62,    63,    64,
      65,    66,    67,    62,    63,    64,    65,    66,    67,    50,
      -1,    -1,    -1,    54,    -1,    -1,     3,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    92,    -1,    16,
      95,    -1,    97,    92,    -1,    -1,    95,    24,    97,   104,
       3,    28,    29,    -1,    31,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    16,    -1,    42,    -1,    44,    -1,    46,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,    -1,
      -1,    -1,    59,    70,    -1,    -1,    -1,    -1,    65,    42,
      -1,    44,    -1,    46,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    59,    94,    95,    -1,
      97,    -1,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   110,   111,   117,    65,    65,     0,    89,
      89,   115,   118,   112,   115,    14,    26,    32,    57,    59,
      65,   113,   116,   119,   120,   122,   123,   125,   155,   119,
     164,   165,    35,    65,   114,   121,    35,    65,   156,    65,
      90,    91,   122,   119,   122,    41,   114,    69,    89,    90,
     114,    92,   157,   159,   164,    23,    65,    10,    18,    36,
      54,    58,   114,   124,   126,   127,   128,   134,   135,     7,
      17,    34,    45,    52,    53,    55,    65,    89,   114,   166,
     167,   168,   170,   171,   172,   176,   178,   185,   186,   190,
     194,   195,   204,    32,    65,   114,     9,    89,   161,    17,
     158,   163,    57,     8,    22,    50,   126,   136,   137,   140,
     144,   124,    14,    14,    92,    70,    89,     4,     6,    20,
      48,   132,    27,    38,    62,    63,    64,    66,    67,    72,
      73,    92,    95,    97,    99,   104,   172,   202,   203,   204,
     207,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,    89,   214,   114,   166,    14,   193,   214,    13,
     191,   192,    91,    92,    28,   167,    89,    37,    40,    51,
     187,    70,    81,    82,    83,    84,    85,    86,    87,    88,
      94,    95,    97,   169,   116,    65,   116,   160,   124,    60,
     145,    14,    65,   141,   142,   116,   138,   139,    89,    70,
     124,   124,   214,   214,    12,    33,   129,   131,   114,   172,
     224,   224,   214,    53,   208,   211,   214,    64,    65,   209,
     210,   212,   213,   219,   202,    23,    80,    79,    74,    75,
      76,    77,    78,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    89,    89,    30,   196,   197,   198,   201,    65,
     192,    21,   214,    89,    65,   173,   174,   175,   214,   214,
      65,    65,   166,    65,   208,    64,   205,   214,    89,    89,
      91,    89,    93,    92,   146,   147,   127,    70,   143,    28,
      90,    91,    28,   139,   214,    68,    89,    47,   130,    93,
     214,    90,    96,    96,   187,   206,    71,    71,    90,    98,
      90,    98,    13,   179,   180,   220,   220,   221,   221,   222,
     222,   222,   222,   166,    28,   201,    25,   199,   200,    89,
     166,    70,    93,    90,    91,   188,   188,    28,    96,    90,
      98,    89,    49,    61,   124,   162,   121,     3,    11,    16,
      24,    29,    31,    42,    44,    46,   123,   125,   148,   149,
     150,   151,   152,   153,   154,   141,   214,    22,   142,   124,
      50,    89,   214,   133,   214,    21,   214,    96,   187,   214,
     214,   212,   213,    39,   181,   182,   183,   214,    28,   179,
      45,    92,   166,    56,   177,   214,   175,   124,    19,    19,
       5,    64,   143,   124,    93,    28,   148,   151,   155,    90,
      28,    70,    89,    93,    68,   214,    71,    91,   182,    68,
     184,     7,   114,   166,    28,   214,   133,   143,     8,   154,
      22,   214,    14,   214,    56,   166,    91,   214,    93,    53,
      15,   189,    89,   124,    68,   214,   166,   214
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   110,   111,   112,   113,   113,   113,   114,
     114,   115,   115,   116,   116,   117,   118,   118,   119,   119,
     120,   121,   121,   122,   122,   122,   123,   123,   123,   124,
     124,   125,   125,   126,   126,   126,   127,   128,   128,   129,
     129,   130,   130,   131,   131,   132,   132,   132,   132,   133,
     133,   134,   134,   135,   136,   136,   136,   137,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   143,   143,   144,
     145,   145,   146,   146,   147,   148,   148,   149,   149,   150,
     150,   150,   151,   151,   151,   152,   152,   153,   153,   154,
     154,   154,   154,   154,   154,   155,   156,   157,   157,   158,
     158,   159,   160,   160,   161,   161,   162,   162,   163,   164,
     165,   165,   166,   166,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   168,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   170,   170,   171,   172,   173,   173,
     174,   174,   175,   175,   176,   177,   177,   178,   179,   180,
     180,   181,   182,   182,   183,   183,   184,   184,   185,   186,
     186,   187,   187,   187,   188,   188,   189,   189,   190,   190,
     191,   192,   192,   193,   193,   194,   195,   196,   196,   196,
     197,   198,   198,   199,   200,   201,   202,   202,   202,   202,
     202,   202,   203,   203,   203,   203,   203,   203,   204,   204,
     204,   204,   205,   205,   206,   206,   207,   207,   207,   207,
     207,   208,   208,   209,   209,   210,   210,   211,   211,   212,
     213,   214,   215,   215,   216,   216,   217,   217,   218,   218,
     218,   218,   218,   218,   218,   219,   219,   219,   220,   220,
     220,   221,   221,   221,   221,   222,   222,   223,   223,   223,
     224,   224
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     4,     6,     6,     3,
       1,     2,     0,     3,     1,     4,     2,     3,     2,     1,
       3,     3,     1,     1,     1,     1,     7,     4,     6,     1,
       1,     5,     4,     1,     1,     1,     4,     1,     0,     1,
       0,     2,     0,     1,     1,     1,     1,     1,     1,     3,
       5,     8,     3,     3,     1,     1,     1,     4,     2,     1,
       4,     6,     4,     6,     3,     1,     2,     2,     0,     6,
       1,     0,     1,     0,     3,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     1,     0,     1,
       0,     4,     4,     5,     3,     0,     1,     1,     2,     4,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     2,     4,     1,     0,
       3,     1,     1,     3,     7,     2,     0,     6,     4,     2,
       1,     2,     2,     1,     3,     2,     2,     0,     5,     2,
       0,     5,     6,     2,     2,     0,     1,     0,     3,     4,
       2,     1,     0,     2,     0,     3,     5,     1,     2,     1,
       2,     2,     0,     5,     2,     2,     1,     1,     1,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     4,     3,     1,     2,     1,     3,     4,     3,     3,
       3,     3,     1,     3,     1,     3,     1,     4,     6,     3,
       3,     1,     2,     1,     2,     1,     2,     1,     2,     2,
       2,     2,     2,     2,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     3,     1,     2,     2,     1,
       2,     1
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
#line 1733 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 21 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Libreria -> definicion_libreria\n"); }
#line 1739 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 25 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_programa -> programa IDENTIFICADOR ; codigo_programa\n"); }
#line 1745 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 29 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_programa -> varias_librerias cuerpo_subprograma\n"); }
#line 1751 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 35 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
#line 1757 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 36 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); }
#line 1763 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 37 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
#line 1769 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 43 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> nombre :: IDENTIFICADOR\n"); }
#line 1775 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 44 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> IDENTIFICADOR\n"); }
#line 1781 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 51 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias -> varias_librerias libreria\n"); }
#line 1787 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 52 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias -> epsilon\n"); }
#line 1793 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 56 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores ->  varios_identificadores , IDENTIFICADOR\n"); }
#line 1799 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores -> IDENTIFICADOR\n"); }
#line 1805 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 64 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n"); }
#line 1811 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 69 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias  varias_declaraciones\n"); }
#line 1817 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 70 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias exportaciones varias_declaraciones\n"); }
#line 1823 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 75 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 1829 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 76 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones -> declaracion \n"); }
#line 1835 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 81 "simple.y" /* yacc.c:1646  */
    { printf ("  exportaciones -> EXPORTAR  varios_nombres ; \n"); }
#line 1841 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 85 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> varios_nombres ',' nombre ; \n"); }
#line 1847 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 86 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> nombre ; \n"); }
#line 1853 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 90 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_objeto \n"); }
#line 1859 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 91 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion ->  declaracion_tipo \n"); }
#line 1865 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 92 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_subprograma\n"); }
#line 1871 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 98 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores :  CONSTANTE especificacion_tipo ASIGNACION expresion ; \n"); }
#line 1877 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 99 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ;\n"); }
#line 1883 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 100 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 1889 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 104 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> nombre\n"); }
#line 1895 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 105 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
#line 1901 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 110 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
#line 1907 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 111 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
#line 1913 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 115 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_escalar\n"); }
#line 1919 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 116 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_tabla\n"); }
#line 1925 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 117 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_diccionario\n"); }
#line 1931 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 121 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar-> cero_o_uno_signo tipo_basico cero_o_uno_longitud cero_o_uno_rango\n"); }
#line 1937 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 125 "simple.y" /* yacc.c:1646  */
    { printf ("   cero_o_uno_signo -> SIGNO\n"); }
#line 1943 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 130 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_longitud -> longitud\n"); }
#line 1949 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 135 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_rango -> RANGO rango\n"); }
#line 1955 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 140 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> CORTO\n"); }
#line 1961 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 141 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> LARGO\n"); }
#line 1967 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 145 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> BOOLEANO\n"); }
#line 1973 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 146 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> CARACTER\n"); }
#line 1979 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 147 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> ENTERO\n"); }
#line 1985 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 148 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> REAL\n"); }
#line 1991 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 152 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion\n"); }
#line 1997 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 153 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion DOS_PTOS expresion\n"); }
#line 2003 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 157 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> TABLA ( expresion DOS_PTOS expresion ) DE especificacion_tipo\n"); }
#line 2009 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 158 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
#line 2015 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 162 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
#line 2021 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 166 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_registro\n"); }
#line 2027 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 167 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
#line 2033 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 168 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> clase\n"); }
#line 2039 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 172 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
#line 2045 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 176 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> varios_campos campo\n"); }
#line 2051 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 177 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> campo\n"); }
#line 2057 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 181 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ;\n"); }
#line 2063 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 182 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 2069 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 187 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION varios_campos FIN ENUMERACION\n"); }
#line 2075 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 188 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar varios_campos FIN ENUMERACION\n"); }
#line 2081 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 192 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> varios_elemento_enumeracion , elemento_enumeracion\n"); }
#line 2087 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 193 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> elemento_enumeracion\n"); }
#line 2093 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 197 "simple.y" /* yacc.c:1646  */
    { printf ("  elemento_enumeracion -> IDENTIFICADOR cero_uno_expresion\n"); }
#line 2099 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 201 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_expresion -> ASIGNACION expresion\n"); }
#line 2105 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 210 "simple.y" /* yacc.c:1646  */
    { printf ("  clase -> CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE\n"); }
#line 2111 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 214 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_ultima -> ULTIMA\n"); }
#line 2117 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 219 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_superclases -> superclases\n"); }
#line 2123 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 224 "simple.y" /* yacc.c:1646  */
    { printf ("  superclases -> ( varios_nombres ) \n"); }
#line 2129 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 229 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> componente"); }
#line 2135 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 230 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> visibilidad componente"); }
#line 2141 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 234 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> varias_declaraciones_componente declaracion_componente"); }
#line 2147 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 235 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> declaracion_componente"); }
#line 2153 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 240 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad -> PUBLICO \n"); }
#line 2159 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 241 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PROTEGIDO \n"); }
#line 2165 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 242 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PRIVADO\n"); }
#line 2171 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 246 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_tipo"); }
#line 2177 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 247 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_objeto"); }
#line 2183 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 248 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> varios_modificadores declaracion_subprograma"); }
#line 2189 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 252 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_modificadores ->  cero_modificadores varios_modificadores\n"); }
#line 2195 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 257 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores ->  varios_modificadores , modificador\n"); }
#line 2201 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 258 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores -> modificador\n"); }
#line 2207 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 263 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> CONSTRUCTOR "); }
#line 2213 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 264 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  DESTRUCTOR "); }
#line 2219 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 265 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  GENERICO "); }
#line 2225 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 266 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> ABSTRACTO "); }
#line 2231 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 267 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  ESPECIFICO "); }
#line 2237 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 268 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> FINAL"); }
#line 2243 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 276 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }
#line 2249 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 280 "simple.y" /* yacc.c:1646  */
    { printf ("  cabecera_subprograma -> IDENTIFICADOR cero_uno_parametrizacion cero_uno_tipoResultado\n"); }
#line 2255 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 284 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_parametrizacion -> parametrizacion\n"); }
#line 2261 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 289 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_tipoResultado -> tipo_resultado\n"); }
#line 2267 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 294 "simple.y" /* yacc.c:1646  */
    { printf ("parametrizacion -> ( varias_declaraciones_parametros declaracion_parametros ) \n"); }
#line 2273 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 298 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo cero_uno_expresion"); }
#line 2279 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 299 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo cero_uno_expresion"); }
#line 2285 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 303 "simple.y" /* yacc.c:1646  */
    {printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros ;\n");}
#line 2291 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 308 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> VALOR\n"); }
#line 2297 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 309 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> REFERENCIA\n"); }
#line 2303 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 313 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
#line 2309 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 318 "simple.y" /* yacc.c:1646  */
    { printf ("  cuerpo_subprograma -> cero_o_mas_declaraciones PRINCIPIO varias_instrucciones FIN"); }
#line 2315 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 322 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 2321 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 327 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> varias_instrucciones  instruccion\n"); }
#line 2327 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 328 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> instruccion\n"); }
#line 2333 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 336 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_asignacion\n"); }
#line 2339 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 337 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_devolver\n"); }
#line 2345 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 338 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_llamada\n"); }
#line 2351 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 339 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_si\n"); }
#line 2357 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 340 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_casos\n"); }
#line 2363 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 341 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_bucle\n"); }
#line 2369 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 342 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_interrupcion\n"); }
#line 2375 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 343 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_lanzamiento_excepcion\n"); }
#line 2381 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 344 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_captura_excepcion\n"); }
#line 2387 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 345 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> ;\n"); }
#line 2393 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 350 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_asignacion -> objeto op_asignacion expresion;"); }
#line 2399 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 354 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIGNACION"); }
#line 2405 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 355 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_SUMA"); }
#line 2411 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 356 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> :- "); }
#line 2417 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 357 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_MULT"); }
#line 2423 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 358 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DIV"); }
#line 2429 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 359 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_RESTO"); }
#line 2435 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 360 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_POT"); }
#line 2441 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 361 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DESPI"); }
#line 2447 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 362 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DESP"); }
#line 2453 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 367 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER ;\n"); }
#line 2459 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 368 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER expresion ;\n"); }
#line 2465 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 372 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_llamada ->  llamada_subprograma ;\n"); }
#line 2471 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 376 "simple.y" /* yacc.c:1646  */
    { printf ("llamada_subprograma ->  nombre ( varias_definicion_parametro )\n"); }
#line 2477 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 380 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_definicion_parametro ->  varias_definicion_parametro\n"); }
#line 2483 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 385 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_definicion_parametro ->  varias_definicion_parametro ',' definicion_parametro\n"); }
#line 2489 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 386 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_definicion_parametro -> definicion_parametro\n"); }
#line 2495 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 390 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  expresion\n"); }
#line 2501 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 391 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  IDENTIFICADOR ASIGNACION expresion\n"); }
#line 2507 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 395 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_si ->  SI expresion ENTONCES varias_instrucciones cero_mas_instrucciones FIN SI\n"); }
#line 2513 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 399 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_instrucciones ->  SINO varias_instrucciones\n"); }
#line 2519 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 404 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_casos ->  CASOS expresion ES uno_o_mas_casos FIN CASOS\n"); }
#line 2525 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 408 "simple.y" /* yacc.c:1646  */
    { printf ("caso ->  CUANDO entradas => varias_instrucciones\n"); }
#line 2531 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 412 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  uno_o_mas_casos caso\n"); }
#line 2537 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 413 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  caso\n"); }
#line 2543 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 417 "simple.y" /* yacc.c:1646  */
    { printf ("entradas ->  varias_entradas entrada\n"); }
#line 2549 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 422 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  expresion cero_mas_expresiones1 OTRO\n"); }
#line 2555 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 423 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  OTRO\n"); }
#line 2561 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 427 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  varias_entradas entrada :\n"); }
#line 2567 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 428 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  entrada :\n"); }
#line 2573 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 432 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_expresiones1 -> DOS_PTOS expresion\n"); }
#line 2579 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 438 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_bucle -> cero_mas_identificador1 clausula_iteracion varias_instrucciones FIN BUCLE\n");}
#line 2585 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 442 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_identificador1 -> IDENTIFICADOR :\n"); }
#line 2591 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 447 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  PARA IDENTIFICADOR cero_o_uno_especificacion_tipo  EN expresion\n");}
#line 2597 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 448 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  REPETIR IDENTIFICADOR cero_o_uno_especificacion_tipo EN rango cero_o_uno_descendente\n");}
#line 2603 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 449 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  MIENTRAS expresion\n");}
#line 2609 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 453 "simple.y" /* yacc.c:1646  */
    { printf ("cero_o_uno_especificacion_tipo -> : especificacion_tipo \n"); }
#line 2615 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 458 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_descendete -> DESCENDENTE\n");}
#line 2621 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 465 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SIGUIENTE cero_o_uno_cuando ;\n");}
#line 2627 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 466 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SALIR cero_o_uno_de_identificador cero_o_uno_cuando ;\n");}
#line 2633 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 471 "simple.y" /* yacc.c:1646  */
    { printf ("cuando ->CUANDO expresion"); }
#line 2639 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 475 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_cuando -> cuando\n");}
#line 2645 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 480 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_de_identificador -> DE IDENTIFICADOR\n");}
#line 2651 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 485 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_lanzamiento_excepcion ->LANZA nombre ;"); }
#line 2657 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 489 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_captura_excepcion ->PRUEBA varias_instrucciones clausulas FIN PRUEBA"); }
#line 2663 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 493 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion\n"); }
#line 2669 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 494 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
#line 2675 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 495 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausula_finalmente\n"); }
#line 2681 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 500 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion ->varias_clausula_excepcion_especifica clausula_excepcion_general "); }
#line 2687 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 504 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausula_excepcion_especifica ->varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); }
#line 2693 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 509 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion_especifica -> EXCEPCION ( nombre ) varias_instrucciones "); }
#line 2699 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 513 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_excepcion_general ->EXCEPCION varias_instruccion"); }
#line 2705 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 517 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_finalmente ->FINALMENTE varias_instrucciones"); }
#line 2711 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 524 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> literal\n"); }
#line 2717 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 525 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> objeto\n"); }
#line 2723 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 526 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> llamada_subprograma\n"); }
#line 2729 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 527 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> OBJETO llamada_subprograma\n"); }
#line 2735 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 528 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> enumeraciones\n"); }
#line 2741 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 529 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> ( expresion )\n"); }
#line 2747 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 533 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> VERDADERO\n"); }
#line 2753 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 534 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> FALSO\n"); }
#line 2759 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 535 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_ENTERA\n"); }
#line 2765 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 536 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_REAL\n"); }
#line 2771 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 537 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CARACTER\n"); }
#line 2777 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 538 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CADENA\n"); }
#line 2783 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 542 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> nombre\n"); }
#line 2789 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 543 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto .  IDENTIFICADOR\n"); }
#line 2795 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 544 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto [ expresion ]\n"); }
#line 2801 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 545 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto { varias_ctc_cadena }\n"); }
#line 2807 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 550 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> varias_ctc_cadena , CTC_CADENA\n"); }
#line 2813 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 551 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> CTC_CADENA\n"); }
#line 2819 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 555 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clausulas_iteracion -> varias_clausulas_iteracion  clausula_iteracion\n"); }
#line 2825 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 556 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clausulas_iteracion -> clausula_iteracion\n"); }
#line 2831 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 560 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion_condicional varias_clausulas_iteracion ]\n"); }
#line 2837 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 561 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion_condicional varias_clausulas_iteracion ]\n"); }
#line 2843 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 562 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion ]\n"); }
#line 2849 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 563 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> { varias_clave_valor }\n"); }
#line 2855 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 564 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> { varias_campo_valor }\n"); }
#line 2861 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 569 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones ->  varias_expresiones , expresion\n"); }
#line 2867 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 570 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones -> expresion\n"); }
#line 2873 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 574 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> varias_clave_valor , clave_valor\n"); }
#line 2879 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 575 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> clave_valor\n"); }
#line 2885 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 579 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> varias_campo_valor , campo_valor\n"); }
#line 2891 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 580 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> campo_valor\n"); }
#line 2897 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 591 "simple.y" /* yacc.c:1646  */
    { printf ("  expresion_condicional -> SI expresion ENTONCES expresion\n"); }
#line 2903 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 592 "simple.y" /* yacc.c:1646  */
    { printf ("  expresion_condicional -> SI expresion ENTONCES expresion SINO expresion\n"); }
#line 2909 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 598 "simple.y" /* yacc.c:1646  */
    { printf ("  clave_valor -> CTC_CADENA FLECHA expresion\n"); }
#line 2915 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 602 "simple.y" /* yacc.c:1646  */
    { printf ("  campo_valor -> IDENTIFICADOR FLECHA expresion\n"); }
#line 2921 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 609 "simple.y" /* yacc.c:1646  */
    { printf("  expresion ->  operadorOR\n"); }
#line 2927 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 612 "simple.y" /* yacc.c:1646  */
    { printf("  operadorOR ->  operadorOR OR operadorAND\n"); }
#line 2933 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 616 "simple.y" /* yacc.c:1646  */
    { printf("  operadorAND ->  operadorAND AND operadorNEG\n"); }
#line 2939 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 620 "simple.y" /* yacc.c:1646  */
    { printf("  operadorNEG -> operadorASIG ~\n"); }
#line 2945 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 625 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES '<' \n"); }
#line 2951 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 626 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES '>' \n"); }
#line 2957 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 627 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES LEQ \n"); }
#line 2963 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 628 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES CEQ \n"); }
#line 2969 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 629 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES'=' \n"); }
#line 2975 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 630 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES NEQ \n"); }
#line 2981 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 635 "simple.y" /* yacc.c:1646  */
    { printf("  operadorDES ->  operadorDES DESPI operadorSR\n"); }
#line 2987 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 636 "simple.y" /* yacc.c:1646  */
    { printf("  operadorDES ->  operadorDES DESPD operadorSR\n"); }
#line 2993 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 641 "simple.y" /* yacc.c:1646  */
    { printf("  operadorSR ->  operadorSR '+' operadorMDM\n"); }
#line 2999 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 642 "simple.y" /* yacc.c:1646  */
    { printf("  operadorSR ->  operadorSR '-' operadorMDM\n"); }
#line 3005 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 647 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '*' operadorPOT\n"); }
#line 3011 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 648 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '/' operadorPOT\n"); }
#line 3017 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 649 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '\\' operadorPOT\n"); }
#line 3023 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 654 "simple.y" /* yacc.c:1646  */
    { printf("  operadorPOT ->  operadorINCDEC '^' operadorPOT\n"); }
#line 3029 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 660 "simple.y" /* yacc.c:1646  */
    { printf("  operadorINCDEC ->   INC operadorUN\n"); }
#line 3035 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 661 "simple.y" /* yacc.c:1646  */
    { printf("  operadorINCDEC ->  DEC operadorUN\n"); }
#line 3041 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 667 "simple.y" /* yacc.c:1646  */
    { printf("  operadorUN -> - primario \n"); }
#line 3047 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 668 "simple.y" /* yacc.c:1646  */
    { printf("  operadorUN -> primario \n"); }
#line 3053 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 3057 "simple.tab.c" /* yacc.c:1646  */
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
#line 674 "simple.y" /* yacc.c:1906  */





int yyerror(char *s) {
  fflush(stdout);
  printf("***************** %s\n",s);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./simple NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
