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
    UNI = 258,
    ABSTRACTO = 259,
    BOOLEANO = 260,
    BUCLE = 261,
    CARACTER = 262,
    CASOS = 263,
    CLASE = 264,
    COMO = 265,
    CONSTANTE = 266,
    CONSTRUCTOR = 267,
    CORTO = 268,
    CUANDO = 269,
    DE = 270,
    DESCENDENTE = 271,
    DESTRUCTOR = 272,
    DEVOLVER = 273,
    DICCIONARIO = 274,
    EN = 275,
    ENTERO = 276,
    ENTONCES = 277,
    ENUMERACION = 278,
    ES = 279,
    ESPECIFICO = 280,
    EXCEPCION = 281,
    EXPORTAR = 282,
    FALSO = 283,
    FIN = 284,
    FINAL = 285,
    FINALMENTE = 286,
    GENERICO = 287,
    IMPORTAR = 288,
    LARGO = 289,
    LANZA = 290,
    LIBRERIA = 291,
    LISTA = 292,
    MIENTRAS = 293,
    OBJETO = 294,
    OTRO = 295,
    PARA = 296,
    PRINCIPIO = 297,
    PRIVADO = 298,
    PROGRAMA = 299,
    PROTEGIDO = 300,
    PRUEBA = 301,
    PUBLICO = 302,
    RANGO = 303,
    REAL = 304,
    REFERENCIA = 305,
    REGISTRO = 306,
    REPETIR = 307,
    SALIR = 308,
    SI = 309,
    SIGNO = 310,
    SIGUIENTE = 311,
    SINO = 312,
    SUBPROGRAMA = 313,
    TABLA = 314,
    TIPO = 315,
    ULTIMA = 316,
    VALOR = 317,
    VERDADERO = 318,
    CTC_CARACTER = 319,
    CTC_CADENA = 320,
    IDENTIFICADOR = 321,
    CTC_ENTERA = 322,
    CTC_REAL = 323,
    DOS_PTOS = 324,
    CUATRO_PUNTOS = 325,
    ASIGNACION = 326,
    FLECHA = 327,
    INC = 328,
    DEC = 329,
    DESPI = 330,
    DESPD = 331,
    LEQ = 332,
    CEQ = 333,
    NEQ = 334,
    AND = 335,
    OR = 336,
    ASIG_SUMA = 337,
    ASIG_RESTA = 338,
    ASIG_MULT = 339,
    ASIG_DIV = 340,
    ASIG_RESTO = 341,
    ASIG_POT = 342,
    ASIG_DESPI = 343,
    ASIG_DESP = 344
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  244
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  441

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

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
     103,   104,    96,    94,   101,    95,   105,    97,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   102,   100,
      91,    93,    92,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   106,    98,   107,    99,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   108,     2,   109,    90,     2,     2,     2,
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
      85,    86,    87,    88,    89
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    32,    36,    37,    41,    47,    48,    49,
      50,    56,    57,    64,    65,    69,    70,    77,    82,    83,
      88,    89,    94,    98,    99,   103,   104,   105,   111,   112,
     113,   117,   118,   123,   124,   128,   129,   130,   134,   138,
     139,   143,   144,   148,   149,   153,   154,   158,   159,   160,
     161,   165,   166,   170,   171,   175,   179,   180,   181,   185,
     189,   190,   194,   195,   200,   201,   205,   206,   210,   214,
     215,   223,   227,   228,   232,   233,   237,   242,   243,   247,
     248,   253,   254,   255,   259,   260,   261,   265,   266,   270,
     271,   276,   277,   278,   279,   280,   281,   289,   293,   297,
     298,   302,   303,   307,   311,   312,   316,   317,   321,   322,
     326,   331,   335,   336,   340,   341,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   363,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   380,   381,   385,   389,
     393,   394,   398,   399,   403,   404,   408,   412,   413,   417,
     421,   425,   426,   430,   435,   436,   440,   441,   445,   446,
     451,   455,   456,   460,   461,   462,   466,   467,   471,   472,
     478,   479,   484,   488,   489,   493,   494,   498,   502,   506,
     507,   508,   513,   517,   518,   522,   526,   530,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   565,
     566,   567,   568,   569,   570,   574,   575,   576,   577,   578,
     579,   583,   584,   585,   586,   591,   592,   596,   597,   601,
     602,   607,   608,   609,   610,   611,   616,   617,   621,   622,
     629,   630,   631,   637,   641
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "UNI", "ABSTRACTO", "BOOLEANO", "BUCLE",
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
  "ASIG_DESPI", "ASIG_DESP", "'~'", "'<'", "'>'", "'='", "'+'", "'-'",
  "'*'", "'/'", "'\\\\'", "'^'", "';'", "','", "':'", "'('", "')'", "'.'",
  "'['", "']'", "'{'", "'}'", "$accept", "programa", "definicion_programa",
  "codigo_programa", "libreria", "nombre", "varias_librerias",
  "varios_identificadores", "definicion_libreria", "codigo_libreria",
  "varias_declaraciones", "exportaciones", "varios_nombres", "declaracion",
  "declaracion_objeto", "especificacion_tipo", "declaracion_tipo",
  "tipo_no_estructurado", "tipo_escalar", "cero_o_uno_signo",
  "cero_o_uno_longitud", "cero_o_uno_rango", "longitud", "tipo_basico",
  "rango", "tipo_tabla", "tipo_diccionario", "tipo_estructurado",
  "tipo_registro", "varios_campos", "campo", "tipo_enumerado",
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
  "clausula_excepcion_general", "clausula_finalmente", "expresion",
  "primario", "literal", "objeto", "varias_ctc_cadena",
  "varias_clausulas_iteracion", "varias_expresiones", "enumeraciones",
  "varias_clave_valor", "varias_campo_valor", "expresion_condicional",
  "clave_valor", "campo_valor", YY_NULLPTR
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
     126,    60,    62,    61,    43,    45,    42,    47,    92,    94,
      59,    44,    58,    40,    41,    46,    91,    93,   123,   125
};
# endif

#define YYPACT_NINF -328

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-328)))

#define YYTABLE_NINF -231

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-231)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,   -56,    10,    40,    66,  -328,  -328,  -328,    36,    51,
    -328,  -328,  -328,   192,  -328,  -328,   264,    70,   136,   116,
     166,   130,   138,  -328,  -328,    79,    44,    44,  -328,  -328,
    -328,  -328,    44,  -328,   167,  -328,   116,  -328,   141,    88,
     116,   112,    44,   194,   154,   100,  -328,    44,   180,   580,
     -15,   158,  -328,   116,    -5,  -328,   209,  -328,   201,   292,
    -328,   139,   254,   257,  -328,   173,   141,   -32,  -328,  -328,
      24,  -328,  -328,   405,    57,   116,   580,   263,   405,   267,
     181,  -328,   -55,   363,  -328,  -328,  -328,  -328,   184,  -328,
    -328,  -328,    76,  -328,  -328,  -328,   678,   216,  -328,   141,
     220,  -328,   216,   139,  -328,  -328,  -328,   226,     9,   216,
     189,  -328,  -328,  -328,  -328,   221,   139,   139,   405,   405,
    -328,  -328,  -328,  -328,  -328,    33,   405,  -328,   116,  -328,
    -328,  -328,  -328,  -328,   405,   405,   405,   405,   374,   182,
    -328,   615,  -328,  -328,     7,  -328,  -328,   917,   -38,   160,
     225,   267,   578,   405,  -328,   193,  -328,   458,  -328,  -328,
    -328,   405,   229,   230,   580,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,   232,   405,   237,   405,   161,   203,
     162,   -21,  -328,  -328,   204,   255,   238,   -23,  -328,   165,
       4,  -328,  -328,   405,  -328,  -328,   755,   943,  -328,  -328,
     268,  -328,  -328,   -55,  -328,  -328,  -328,  1081,   857,   405,
     722,   -54,   -16,   245,   246,    32,    39,  -328,  -328,   307,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,  -328,  -328,   580,   294,
     295,   301,  -328,  -328,   234,   580,  1047,  -328,   265,   241,
     253,  -328,  1047,  1047,   256,   256,   527,  -328,  1047,    72,
    -328,    53,   969,  -328,  -328,   448,  -328,  -328,   116,   712,
    -328,   289,   405,  -328,   336,   289,   139,   309,  -328,   995,
     405,  -328,   405,  -328,  -328,   606,   405,  -328,  -328,  -328,
       0,   405,   405,   299,  -328,   300,  -328,   386,  -328,    60,
     443,   443,  1090,  1090,  1090,  1081,  1056,  1090,  1090,  1090,
     157,   157,   270,   270,   270,   270,   541,   327,  -328,     5,
    -328,  -328,  -328,   296,   405,  -328,   458,   139,   354,   355,
     372,  -328,   314,  -328,  -328,  -328,  -328,   238,   139,    99,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,   711,   721,  -328,   326,   285,  -328,    -2,  1047,
    -328,  -328,   -28,  -328,  -328,   887,  -328,   786,   405,  1047,
    -328,  -328,  1047,  1047,  -328,  -328,  -328,   318,   286,   386,
     817,   387,  -328,  -328,   116,   121,   580,   365,  1047,  -328,
    -328,   405,   405,  -328,  -328,  -328,   238,  -328,   388,  -328,
    -328,  -328,   316,   378,   405,  -328,   389,   405,   713,   580,
    -328,   303,   405,  -328,  -328,   -50,   550,   349,  1047,   391,
    -328,  -328,  -328,  -328,  1021,   139,   848,   405,   501,  -328,
    1047,   580,  -328,  -328,  -328,  -328,  -328,   405,  1047,   564,
    1047
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     3,     5,     0,     0,
       1,    14,    14,     0,    17,     4,     0,     0,     0,     0,
       0,     0,     0,    16,    13,     0,    18,     0,    21,    25,
      26,    27,     0,     6,     0,    10,     0,    12,    24,     0,
       0,   100,   113,     0,     0,    40,    20,    19,    20,   162,
       0,     0,    22,     0,     0,   107,   102,    99,     0,    40,
      15,    40,     0,     0,    39,     0,    31,     0,    32,    35,
       0,    36,    37,     0,     0,     0,   162,   176,     0,   174,
      12,   125,   221,   162,   115,   116,   117,   118,     0,   119,
     120,   121,     0,   122,   123,   124,     0,     0,    11,    23,
       0,     7,     0,    40,    98,   101,    97,    73,     0,     0,
       0,    34,    56,    57,    58,     0,    40,    40,     0,     0,
      29,    47,    48,    49,    50,    42,     0,   216,     0,   215,
     219,   220,   217,   218,     0,     0,     0,     0,     0,     0,
     211,     0,   188,   209,   210,   213,   136,     0,     0,   162,
       0,   174,     0,     0,   173,     0,   161,   141,   111,   114,
     138,     0,     0,     0,   162,   127,   128,   129,   130,   131,
     132,   133,   134,   135,     0,     0,     0,     0,     0,     0,
       0,     0,   110,    72,    75,    40,    70,     0,    67,     0,
       0,    61,    33,     0,    55,    54,     0,     0,    45,    46,
      44,    41,   208,     0,   212,   206,   207,   197,     0,     0,
     240,     0,     0,     0,     0,     0,     0,   237,   239,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,   177,   162,     0,
     179,     0,   181,   175,     0,   162,   172,   170,    12,     0,
     140,   143,   144,   165,   167,   167,   162,   222,   230,     0,
     226,     0,     0,     9,     8,    40,   106,   103,     0,    88,
      74,     0,     0,    68,     0,     0,    40,     0,    60,     0,
       0,    30,     0,    38,   214,     0,     0,   233,   232,   228,
       0,     0,     0,     0,   234,     0,   235,     0,   152,     0,
     204,   205,   200,   201,   203,   195,   196,   198,   199,   202,
     189,   190,   191,   192,   193,   194,   162,     0,   180,   162,
     183,   182,   171,   162,     0,   139,     0,    40,     0,     0,
       0,   223,     0,   224,   126,   109,   108,    70,    40,     0,
      94,    91,    92,    95,    96,    93,    83,    82,    81,    85,
      84,    80,    88,    88,    77,     0,    87,    90,     0,    69,
      64,    66,     0,    59,    28,     0,    43,     0,     0,   229,
     231,   227,   243,   244,   236,   238,   155,     0,     0,     0,
     159,     0,   151,   178,     0,   162,   162,     0,   145,   142,
     166,     0,     0,   160,   225,   104,    70,    76,     0,    79,
      78,    86,     0,     0,     0,    62,     0,     0,   241,   162,
     157,   153,     0,   154,   149,     0,   162,     0,   163,   169,
     105,    71,    89,    65,     0,    40,    51,     0,   162,   156,
     158,   162,   146,   168,   164,    63,    53,     0,   242,   162,
      52
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -328,  -328,  -328,  -328,  -328,   -19,   398,   -90,  -328,  -328,
     122,  -328,   143,   106,  -265,   -53,  -260,   359,   236,  -328,
    -328,  -328,  -328,  -328,    30,  -328,  -328,  -328,  -328,  -328,
     233,  -328,   153,   152,  -327,  -328,  -328,  -328,  -328,    78,
    -328,  -328,    81,  -328,  -328,    29,    77,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,   394,  -328,   -74,   -72,  -328,
    -328,  -328,  -328,   -48,  -328,  -328,   117,  -328,  -328,  -328,
     147,  -328,  -328,    83,  -328,  -328,  -328,  -328,  -196,   200,
    -328,  -328,  -328,   305,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,   217,     8,  -328,  -328,   -46,  -328,  -328,   283,
    -328,  -328,  -328,  -328,   172,   171
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    15,    24,    82,    13,    25,     6,    14,
      32,    27,    39,    28,    29,    67,    30,    68,    69,    70,
     200,   283,   201,   125,   366,    71,    72,   111,   112,   190,
     191,   113,   187,   188,   273,   114,   184,   269,   270,   351,
     352,   353,   354,   355,   356,   357,    31,    42,    56,   104,
      57,   181,   102,   338,   105,    33,    34,    83,    84,    85,
     177,    86,    87,   140,   249,   250,   251,    89,   387,    90,
     298,   299,   377,   378,   379,   413,    91,    92,   164,   328,
     434,    93,   154,   155,   151,    94,    95,   239,   240,   241,
     320,   321,   242,   252,   142,   143,   144,   261,   290,   211,
     145,   215,   216,   212,   217,   218
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    88,   149,    96,   349,   100,   274,   178,   115,   350,
     395,   159,   180,    73,     1,    51,   289,    50,    97,   189,
      51,    54,   161,    74,   185,   162,    66,   403,    88,   121,
      96,   122,    51,   277,    99,    88,   163,    96,   161,   119,
      75,   162,    66,   404,     7,   123,   198,   286,   157,     2,
     182,    76,   163,   287,   431,    51,   148,     3,    77,    78,
     126,    79,   237,   194,   195,    51,    10,   199,   120,   420,
      23,    80,   405,   124,   297,   186,     8,   159,   275,   266,
     204,   141,   147,   267,    66,   127,   152,   349,   349,   381,
     256,   288,   350,   350,   371,   101,   128,    66,    66,   275,
     189,    88,    21,    96,    22,    81,     9,   370,   384,   203,
      23,    61,   174,   175,   161,   176,    88,   162,    96,    62,
     129,   130,   131,    37,   132,   133,   196,   197,   163,    73,
     134,   135,    46,   293,   202,    26,    11,    63,    48,    74,
     295,   294,   205,   206,   207,   208,   210,   136,   296,    47,
    -186,    12,  -186,    46,   332,    64,    75,   146,    62,    65,
     137,   246,   333,   138,   316,   139,    37,    76,    73,   253,
      35,   323,    36,   286,    77,    78,    63,    79,    74,   331,
      44,    45,    37,   258,   159,   262,  -184,    80,    52,    53,
      88,   238,    96,    17,    64,    75,    41,    88,    65,    96,
      53,   279,    40,   397,    43,    37,    76,    18,    88,    49,
      96,    51,   337,    77,    78,    55,    79,   285,    59,    19,
      60,    81,  -112,   362,    98,    20,    80,   103,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   159,   385,    66,   213,   214,    38,
      21,   159,    22,   232,   233,   234,   235,    66,    23,   106,
      81,   263,    44,    44,   265,    17,    44,   276,    88,   116,
      96,    88,   117,    96,   390,    88,   118,    96,   150,    18,
     359,   153,    23,   156,   160,   396,   179,   183,   365,   192,
     367,   243,   193,   247,   369,   254,   255,    20,   257,   372,
     373,   107,   260,   264,    73,   380,  -113,   268,    66,   272,
      64,    62,   416,   159,    74,   108,   282,   291,   292,    66,
     340,   297,    21,   317,    22,  -148,   238,   319,   341,    63,
      23,    75,   388,   342,   322,   428,   324,    88,    88,    96,
      96,   343,    76,   109,   159,   325,   344,    64,   345,    77,
      78,    65,    79,   386,   326,   186,   159,   439,   327,   360,
     363,    88,    80,    96,   213,   415,   214,   159,    88,   235,
      96,    73,   436,   383,   391,   392,   408,   126,   393,   394,
      88,    74,    96,    88,    21,    96,   402,   380,   410,   126,
     409,    88,   158,    96,   417,   414,    81,   421,    75,   418,
     367,   423,   127,   432,   425,   429,    66,   433,   126,    76,
      16,   339,   424,   128,   127,   426,    77,    78,   110,    79,
     430,   271,   419,   278,   358,   128,   376,   361,   209,    80,
     399,   422,   401,   127,   400,   438,    58,   129,   130,   131,
      37,   132,   133,   389,   128,   440,   382,   134,   135,   129,
     130,   131,    37,   132,   133,   329,   244,   318,   259,   134,
     135,   126,   411,    81,   136,   374,   375,    62,   129,   130,
     131,    37,   132,   133,     0,     0,   136,   137,   134,   135,
     138,     0,   139,     0,     0,    63,   127,     0,     0,   137,
       0,     0,   138,     0,   139,   136,     0,   128,   335,     0,
       0,     0,     0,    64,     0,     0,     0,    65,   137,    73,
     336,   138,     0,   139,    37,  -150,     0,     0,     0,    74,
       0,   129,   130,   131,   248,   132,   133,     0,     0,     0,
    -150,   134,   135,     0,     0,    73,    75,   230,   231,   232,
     233,   234,   235,     0,     0,    74,     0,    76,   136,    73,
       0,     0,     0,     0,    77,    78,   330,    79,    73,    74,
       0,   137,    75,     0,   138,     0,   139,    80,    74,     0,
    -187,     0,    73,    76,     0,     0,    75,     0,     0,  -147,
      77,    78,    74,    79,     0,    75,     0,    76,    73,     0,
    -185,     0,     0,    80,    77,    78,    76,    79,    74,    75,
     245,    81,     0,    77,    78,     0,    79,    80,     0,     0,
      76,     0,     0,     0,     0,    75,    80,    77,    78,     0,
      79,     0,     0,     0,     0,     0,    76,    81,   368,     0,
      80,     0,     0,    77,    78,     0,    79,     0,     0,   219,
       0,    81,     0,     0,     0,     0,    80,     0,     0,     0,
      81,     0,     0,   220,   221,   222,   223,   224,   225,   226,
       0,     0,     0,     0,    81,     0,     0,     0,     0,   227,
     228,   229,   230,   231,   232,   233,   234,   235,     0,     0,
      81,   220,   221,   222,   223,   224,   225,   226,     0,     0,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   340,   340,     0,     0,     0,
       0,     0,     0,   341,   341,   340,     0,     0,   342,   342,
       0,     0,     0,   341,     0,     0,   343,   343,   342,     0,
     398,   344,   344,   345,   345,     0,   343,     0,     0,   165,
       0,   344,     0,   345,   346,   346,   347,   347,   348,   348,
     166,   167,   168,   169,   170,   171,   172,   173,     0,     0,
     427,    22,    22,     0,     0,     0,     0,    23,    23,     0,
       0,    22,     0,   174,   175,     0,   176,    23,   220,   221,
     222,   223,   224,   225,   226,     0,     0,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   227,   228,   229,   230,   231,   232,   233,
     234,   235,     0,  -230,   280,     0,     0,     0,     0,  -230,
     220,   221,   222,   223,   224,   225,   226,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   407,     0,     0,     0,     0,
       0,   220,   221,   222,   223,   224,   225,   226,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   412,     0,     0,     0,
       0,     0,   220,   221,   222,   223,   224,   225,   226,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   437,     0,     0,
       0,     0,     0,   220,   221,   222,   223,   224,   225,   226,
       0,     0,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   227,   228,
     229,   230,   231,   232,   233,   234,   235,     0,     0,     0,
       0,   284,   220,   221,   222,   223,   224,   225,   226,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   227,   228,
     229,   230,   231,   232,   233,   234,   235,     0,     0,     0,
       0,   406,   220,   221,   222,   223,   224,   225,   226,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   220,   221,
     222,   223,   224,   225,   226,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   281,   220,   221,   222,   223,   224,   225,
     226,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   334,
     220,   221,   222,   223,   224,   225,   226,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   364,   220,   221,   222,   223,
     224,   225,   226,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   435,   220,   221,   222,   223,   224,   225,   226,     0,
       0,   220,   221,   222,   223,   224,   225,     0,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   220,   221,   222,   223,
     224,     0,     0,     0,     0,   220,   221,  -231,  -231,  -231,
       0,     0,   227,   228,   229,   230,   231,   232,   233,   234,
     235,  -231,  -231,  -231,   230,   231,   232,   233,   234,   235
};

static const yytype_int16 yycheck[] =
{
      19,    49,    76,    49,   269,    10,    29,    97,    61,   269,
     337,    83,   102,     8,     1,    70,   212,    36,    33,   109,
      70,    40,    38,    18,    15,    41,    45,    29,    76,     5,
      76,     7,    70,    29,    53,    83,    52,    83,    38,    71,
      35,    41,    61,    71,   100,    21,    13,   101,   103,    36,
     103,    46,    52,   107,   104,    70,    75,    44,    53,    54,
       3,    56,   100,   116,   117,    70,     0,    34,   100,   396,
      66,    66,   100,    49,    14,    66,    66,   149,   101,   100,
     128,    73,    74,   104,   103,    28,    78,   352,   353,    29,
     164,   107,   352,   353,   290,   100,    39,   116,   117,   101,
     190,   149,    58,   149,    60,   100,    66,   107,   103,   128,
      66,    11,   105,   106,    38,   108,   164,    41,   164,    19,
      63,    64,    65,    66,    67,    68,   118,   119,    52,     8,
      73,    74,    26,   101,   126,    13,   100,    37,    32,    18,
     101,   109,   134,   135,   136,   137,   138,    90,   109,    27,
      29,   100,    31,    47,   101,    55,    35,   100,    19,    59,
     103,   153,   109,   106,   238,   108,    66,    46,     8,   161,
     100,   245,    36,   101,    53,    54,    37,    56,    18,   107,
     101,   102,    66,   175,   256,   177,    26,    66,   100,   101,
     238,    31,   238,     1,    55,    35,    66,   245,    59,   245,
     101,   193,    36,   104,    66,    66,    46,    15,   256,    42,
     256,    70,   265,    53,    54,   103,    56,   209,    24,    27,
      66,   100,    42,   276,    66,    33,    66,    18,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   316,   319,   265,    65,    66,   268,
      58,   323,    60,    96,    97,    98,    99,   276,    66,    58,
     100,   100,   101,   101,   102,     1,   101,   102,   316,    15,
     316,   319,    15,   319,   327,   323,   103,   323,    15,    15,
     272,    14,    66,   102,   100,   338,    66,    61,   280,   100,
     282,    66,    71,   100,   286,    66,    66,    33,    66,   291,
     292,     9,    65,   100,     8,   297,    42,   103,   327,    71,
      55,    19,   386,   385,    18,    23,    48,    72,    72,   338,
       4,    14,    58,    29,    60,    29,    31,    26,    12,    37,
      66,    35,   324,    17,   100,   409,    71,   385,   386,   385,
     386,    25,    46,    51,   416,   104,    30,    55,    32,    53,
      54,    59,    56,    57,   101,    66,   428,   431,   102,    23,
      51,   409,    66,   409,    65,   384,    66,   439,   416,    99,
     416,     8,   425,    46,    20,    20,   368,     3,     6,    65,
     428,    18,   428,   431,    58,   431,   101,   379,   102,     3,
      72,   439,    29,   439,    29,     8,   100,     9,    35,   391,
     392,    23,    28,    54,    15,   102,   425,    16,     3,    46,
      12,   268,   404,    39,    28,   407,    53,    54,    59,    56,
     412,   185,   392,   190,   271,    39,    40,   275,    54,    66,
     352,   402,   355,    28,   353,   427,    42,    63,    64,    65,
      66,    67,    68,   326,    39,   437,   299,    73,    74,    63,
      64,    65,    66,    67,    68,   255,   151,   240,   175,    73,
      74,     3,   379,   100,    90,   293,   295,    19,    63,    64,
      65,    66,    67,    68,    -1,    -1,    90,   103,    73,    74,
     106,    -1,   108,    -1,    -1,    37,    28,    -1,    -1,   103,
      -1,    -1,   106,    -1,   108,    90,    -1,    39,    50,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    59,   103,     8,
      62,   106,    -1,   108,    66,    14,    -1,    -1,    -1,    18,
      -1,    63,    64,    65,    66,    67,    68,    -1,    -1,    -1,
      29,    73,    74,    -1,    -1,     8,    35,    94,    95,    96,
      97,    98,    99,    -1,    -1,    18,    -1,    46,    90,     8,
      -1,    -1,    -1,    -1,    53,    54,    29,    56,     8,    18,
      -1,   103,    35,    -1,   106,    -1,   108,    66,    18,    -1,
      29,    -1,     8,    46,    -1,    -1,    35,    -1,    -1,    29,
      53,    54,    18,    56,    -1,    35,    -1,    46,     8,    -1,
      26,    -1,    -1,    66,    53,    54,    46,    56,    18,    35,
      22,   100,    -1,    53,    54,    -1,    56,    66,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    35,    66,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    46,   100,    22,    -1,
      66,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,    24,
      -1,   100,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
     100,    -1,    -1,    75,    76,    77,    78,    79,    80,    81,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,    -1,
     100,    75,    76,    77,    78,    79,    80,    81,    -1,    -1,
      75,    76,    77,    78,    79,    80,    81,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     4,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    12,     4,    -1,    -1,    17,    17,
      -1,    -1,    -1,    12,    -1,    -1,    25,    25,    17,    -1,
      29,    30,    30,    32,    32,    -1,    25,    -1,    -1,    71,
      -1,    30,    -1,    32,    43,    43,    45,    45,    47,    47,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      57,    60,    60,    -1,    -1,    -1,    -1,    66,    66,    -1,
      -1,    60,    -1,   105,   106,    -1,   108,    66,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    75,    76,    77,
      78,    79,    80,    81,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    -1,   101,    69,    -1,    -1,    -1,    -1,   107,
      75,    76,    77,    78,    79,    80,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    69,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    69,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    69,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    81,
      -1,    -1,    75,    76,    77,    78,    79,    80,    81,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,    -1,    -1,
      -1,   104,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,    -1,    -1,
      -1,   104,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    75,    76,    77,    78,    79,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      75,    76,    77,    78,    79,    80,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    75,    76,    77,    78,
      79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    75,    76,    77,    78,    79,    80,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    91,    92,    93,    94,    95,    96,    97,    98,    99
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    36,    44,   111,   112,   118,   100,    66,    66,
       0,   100,   100,   116,   119,   113,   116,     1,    15,    27,
      33,    58,    60,    66,   114,   117,   120,   121,   123,   124,
     126,   156,   120,   165,   166,   100,    36,    66,   115,   122,
      36,    66,   157,    66,   101,   102,   123,   120,   123,    42,
     115,    70,   100,   101,   115,   103,   158,   160,   165,    24,
      66,    11,    19,    37,    55,    59,   115,   125,   127,   128,
     129,   135,   136,     8,    18,    35,    46,    53,    54,    56,
      66,   100,   115,   167,   168,   169,   171,   172,   173,   177,
     179,   186,   187,   191,   195,   196,   206,    33,    66,   115,
      10,   100,   162,    18,   159,   164,    58,     9,    23,    51,
     127,   137,   138,   141,   145,   125,    15,    15,   103,    71,
     100,     5,     7,    21,    49,   133,     3,    28,    39,    63,
      64,    65,    67,    68,    73,    74,    90,   103,   106,   108,
     173,   203,   204,   205,   206,   210,   100,   203,   115,   167,
      15,   194,   203,    14,   192,   193,   102,   103,    29,   168,
     100,    38,    41,    52,   188,    71,    82,    83,    84,    85,
      86,    87,    88,    89,   105,   106,   108,   170,   117,    66,
     117,   161,   125,    61,   146,    15,    66,   142,   143,   117,
     139,   140,   100,    71,   125,   125,   203,   203,    13,    34,
     130,   132,   203,   115,   173,   203,   203,   203,   203,    54,
     203,   209,   213,    65,    66,   211,   212,   214,   215,    24,
      75,    76,    77,    78,    79,    80,    81,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   100,    31,   197,
     198,   199,   202,    66,   193,    22,   203,   100,    66,   174,
     175,   176,   203,   203,    66,    66,   167,    66,   203,   209,
      65,   207,   203,   100,   100,   102,   100,   104,   103,   147,
     148,   128,    71,   144,    29,   101,   102,    29,   140,   203,
      69,   100,    48,   131,   104,   203,   101,   107,   107,   188,
     208,    72,    72,   101,   109,   101,   109,    14,   180,   181,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   167,    29,   202,    26,
     200,   201,   100,   167,    71,   104,   101,   102,   189,   189,
      29,   107,   101,   109,   100,    50,    62,   125,   163,   122,
       4,    12,    17,    25,    30,    32,    43,    45,    47,   124,
     126,   149,   150,   151,   152,   153,   154,   155,   142,   203,
      23,   143,   125,    51,   100,   203,   134,   203,    22,   203,
     107,   188,   203,   203,   214,   215,    40,   182,   183,   184,
     203,    29,   180,    46,   103,   167,    57,   178,   203,   176,
     125,    20,    20,     6,    65,   144,   125,   104,    29,   149,
     152,   156,   101,    29,    71,   100,   104,    69,   203,    72,
     102,   183,    69,   185,     8,   115,   167,    29,   203,   134,
     144,     9,   155,    23,   203,    15,   203,    57,   167,   102,
     203,   104,    54,    16,   190,   100,   125,    69,   203,   167,
     203
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   112,   112,   113,   114,   114,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   119,   119,
     120,   120,   121,   122,   122,   123,   123,   123,   124,   124,
     124,   125,   125,   126,   126,   127,   127,   127,   128,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     133,   134,   134,   135,   135,   136,   137,   137,   137,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   144,
     144,   145,   146,   146,   147,   147,   148,   149,   149,   150,
     150,   151,   151,   151,   152,   152,   152,   153,   153,   154,
     154,   155,   155,   155,   155,   155,   155,   156,   157,   158,
     158,   159,   159,   160,   161,   161,   162,   162,   163,   163,
     164,   165,   166,   166,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   169,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   171,   171,   172,   173,
     174,   174,   175,   175,   176,   176,   177,   178,   178,   179,
     180,   181,   181,   182,   183,   183,   184,   184,   185,   185,
     186,   187,   187,   188,   188,   188,   189,   189,   190,   190,
     191,   191,   192,   193,   193,   194,   194,   195,   196,   197,
     197,   197,   198,   199,   199,   200,   201,   202,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   204,
     204,   204,   204,   204,   204,   205,   205,   205,   205,   205,
     205,   206,   206,   206,   206,   207,   207,   208,   208,   209,
     209,   210,   210,   210,   210,   210,   211,   211,   212,   212,
     213,   213,   213,   214,   215
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     2,     4,     6,     6,
       2,     3,     1,     2,     0,     3,     1,     4,     2,     3,
       2,     1,     3,     3,     1,     1,     1,     1,     7,     4,
       6,     1,     1,     5,     4,     1,     1,     1,     4,     1,
       0,     1,     0,     2,     0,     1,     1,     1,     1,     1,
       1,     3,     5,     8,     3,     3,     1,     1,     1,     4,
       2,     1,     4,     6,     4,     6,     3,     1,     2,     2,
       0,     6,     1,     0,     1,     0,     3,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     1,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     1,
       0,     1,     0,     4,     4,     5,     3,     0,     1,     1,
       2,     4,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     2,     4,
       1,     0,     3,     1,     1,     3,     7,     2,     0,     6,
       4,     2,     1,     2,     2,     1,     3,     2,     2,     0,
       5,     2,     0,     5,     6,     2,     2,     0,     1,     0,
       3,     4,     2,     1,     0,     2,     0,     3,     5,     1,
       2,     1,     2,     2,     0,     5,     2,     2,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     1,
       1,     1,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     4,     3,     1,     2,     1,     3,
       1,     4,     3,     3,     3,     3,     3,     1,     3,     1,
       1,     4,     6,     3,     3
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
#line 31 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Programa -> definicion_programa\n"); }
#line 1811 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 32 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Libreria -> definicion_libreria\n"); }
#line 1817 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 36 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_programa -> programa IDENTIFICADOR ; codigo_programa\n"); }
#line 1823 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 37 "simple.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1829 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 41 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_programa -> varias_librerias cuerpo_subprograma\n"); }
#line 1835 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 47 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
#line 1841 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 48 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); }
#line 1847 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 49 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
#line 1853 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 50 "simple.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1859 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 56 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> nombre :: IDENTIFICADOR\n"); }
#line 1865 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 57 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> IDENTIFICADOR\n"); }
#line 1871 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 64 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias -> varias_librerias libreria\n"); }
#line 1877 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 65 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias -> EMPTY\n"); }
#line 1883 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 69 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores ->  varios_identificadores , IDENTIFICADOR\n"); }
#line 1889 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 70 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores -> IDENTIFICADOR\n"); }
#line 1895 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 77 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n"); }
#line 1901 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 82 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias  varias_declaraciones\n"); }
#line 1907 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 83 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias exportaciones varias_declaraciones\n"); }
#line 1913 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 88 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 1919 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 89 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones -> declaracion \n"); }
#line 1925 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 94 "simple.y" /* yacc.c:1646  */
    { printf ("  exportaciones -> EXPORTAR  varios_nombres ; \n"); }
#line 1931 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 98 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> varios_nombres ',' nombre ; \n"); }
#line 1937 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 99 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> nombre ; \n"); }
#line 1943 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 103 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_objeto \n"); }
#line 1949 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 104 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion ->  declaracion_tipo \n"); }
#line 1955 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 105 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_subprograma\n"); }
#line 1961 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 111 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores :  CONSTANTE especificacion_tipo ASIGNACION expresion ; \n"); }
#line 1967 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 112 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ;\n"); }
#line 1973 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 113 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 1979 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 117 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> nombre\n"); }
#line 1985 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 118 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
#line 1991 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 123 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
#line 1997 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 124 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
#line 2003 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 128 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_escalar\n"); }
#line 2009 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 129 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_tabla\n"); }
#line 2015 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 130 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_diccionario\n"); }
#line 2021 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 134 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar-> cero_o_uno_signo tipo_basico cero_o_uno_longitud cero_o_uno_rango\n"); }
#line 2027 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 138 "simple.y" /* yacc.c:1646  */
    { printf ("   cero_o_uno_signo -> SIGNO\n"); }
#line 2033 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 139 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_signo -> EMPTY\n"); }
#line 2039 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 143 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_longitud -> longitud\n"); }
#line 2045 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 144 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_longitud -> EMPTY\n"); }
#line 2051 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 148 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_rango -> RANGO rango\n"); }
#line 2057 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 149 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_rango -> EMPTY\n"); }
#line 2063 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 153 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> CORTO\n"); }
#line 2069 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 154 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> LARGO\n"); }
#line 2075 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 158 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> BOOLEANO\n"); }
#line 2081 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 159 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> CARACTER\n"); }
#line 2087 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 160 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> ENTERO\n"); }
#line 2093 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 161 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> REAL\n"); }
#line 2099 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 165 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion\n"); }
#line 2105 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 166 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion DOS_PTOS expresion\n"); }
#line 2111 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 170 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> TABLA ( expresion DOS_PTOS expresion ) DE especificacion_tipo\n"); }
#line 2117 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 171 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
#line 2123 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 175 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
#line 2129 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 179 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_registro\n"); }
#line 2135 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 180 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
#line 2141 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 181 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> clase\n"); }
#line 2147 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 185 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
#line 2153 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 189 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> varios_campos campo\n"); }
#line 2159 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 190 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> campo\n"); }
#line 2165 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 194 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ;\n"); }
#line 2171 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 195 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 2177 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 200 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION varios_campos FIN ENUMERACION\n"); }
#line 2183 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 201 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar varios_campos FIN ENUMERACION\n"); }
#line 2189 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 205 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> varios_elemento_enumeracion , elemento_enumeracion\n"); }
#line 2195 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 206 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> elemento_enumeracion\n"); }
#line 2201 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 210 "simple.y" /* yacc.c:1646  */
    { printf ("  elemento_enumeracion -> IDENTIFICADOR cero_uno_expresion\n"); }
#line 2207 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 214 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_expresion -> ASIGNACION expresion\n"); }
#line 2213 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 215 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_expresion -> EMPTY\n"); }
#line 2219 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 223 "simple.y" /* yacc.c:1646  */
    { printf ("  clase -> CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE\n"); }
#line 2225 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 227 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_ultima -> ULTIMA\n"); }
#line 2231 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 228 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_ultima -> EMPTY\n"); }
#line 2237 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 232 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_superclases -> superclases\n"); }
#line 2243 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 233 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_superclases -> EMPTY\n"); }
#line 2249 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 237 "simple.y" /* yacc.c:1646  */
    { printf ("  superclases -> ( varios_nombres ) \n"); }
#line 2255 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 242 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> componente"); }
#line 2261 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 243 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> visibilidad componente"); }
#line 2267 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 247 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> varias_declaraciones_componente declaracion_componente"); }
#line 2273 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 248 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> declaracion_componente"); }
#line 2279 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 253 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad -> PUBLICO \n"); }
#line 2285 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 254 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PROTEGIDO \n"); }
#line 2291 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 255 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PRIVADO\n"); }
#line 2297 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 259 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_tipo"); }
#line 2303 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 260 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_objeto"); }
#line 2309 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 261 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> varios_modificadores declaracion_subprograma"); }
#line 2315 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 265 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_modificadores ->  cero_modificadores varios_modificadores\n"); }
#line 2321 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 266 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_modificadores -> EMPTY\n"); }
#line 2327 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 270 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores ->  varios_modificadores , modificador\n"); }
#line 2333 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 271 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores -> modificador\n"); }
#line 2339 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 276 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> CONSTRUCTOR "); }
#line 2345 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 277 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  DESTRUCTOR "); }
#line 2351 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 278 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  GENERICO "); }
#line 2357 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 279 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> ABSTRACTO "); }
#line 2363 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 280 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  ESPECIFICO "); }
#line 2369 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 281 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> FINAL"); }
#line 2375 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 289 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }
#line 2381 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 293 "simple.y" /* yacc.c:1646  */
    { printf ("  cabecera_subprograma -> IDENTIFICADOR cero_uno_parametrizacion cero_uno_tipoResultado\n"); }
#line 2387 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 297 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_parametrizacion -> parametrizacion\n"); }
#line 2393 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 298 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_parametrizacion -> EMPTY\n"); }
#line 2399 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 302 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_tipoResultado -> tipo_resultado\n"); }
#line 2405 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 303 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_tipoResultado -> EMPTY\n"); }
#line 2411 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 307 "simple.y" /* yacc.c:1646  */
    { printf ("parametrizacion -> ( varias_declaraciones_parametros declaracion_parametros ) \n"); }
#line 2417 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 311 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo cero_uno_expresion"); }
#line 2423 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 312 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo cero_uno_expresion"); }
#line 2429 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 316 "simple.y" /* yacc.c:1646  */
    {printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros ;\n");}
#line 2435 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 317 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_parametros -> EMPTY\n"); }
#line 2441 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 321 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> VALOR\n"); }
#line 2447 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 322 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> REFERENCIA\n"); }
#line 2453 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 326 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
#line 2459 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 331 "simple.y" /* yacc.c:1646  */
    { printf ("  cuerpo_subprograma -> cero_o_mas_declaraciones PRINCIPIO varias_instrucciones FIN"); }
#line 2465 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 335 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 2471 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 336 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones -> EMPTY\n"); }
#line 2477 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 340 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> varias_instrucciones  instruccion\n"); }
#line 2483 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 341 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> instruccion\n"); }
#line 2489 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 349 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_asignacion\n"); }
#line 2495 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 350 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_devolver\n"); }
#line 2501 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 351 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_llamada\n"); }
#line 2507 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 352 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_si\n"); }
#line 2513 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 353 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_casos\n"); }
#line 2519 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 354 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_bucle\n"); }
#line 2525 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 355 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_interrupcion\n"); }
#line 2531 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 356 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_lanzamiento_excepcion\n"); }
#line 2537 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 357 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_captura_excepcion\n"); }
#line 2543 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 358 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> ;\n"); }
#line 2549 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 363 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_asignacion -> objeto op_asignacion expresion;"); }
#line 2555 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 367 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIGNACION"); }
#line 2561 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 368 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_SUMA"); }
#line 2567 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 369 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> :- "); }
#line 2573 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 370 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_MULT"); }
#line 2579 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 371 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DIV"); }
#line 2585 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 372 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_RESTO"); }
#line 2591 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 373 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_POT"); }
#line 2597 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 374 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DESPI"); }
#line 2603 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 375 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DESP"); }
#line 2609 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 380 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER ;\n"); }
#line 2615 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 381 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER expresion ;\n"); }
#line 2621 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 385 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_llamada ->  llamada_subprograma ;\n"); }
#line 2627 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 389 "simple.y" /* yacc.c:1646  */
    { printf ("llamada_subprograma ->  nombre ( varias_definicion_parametro )\n"); }
#line 2633 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 393 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_definicion_parametro ->  varias_definicion_parametro\n"); }
#line 2639 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 394 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_definicion_parametro -> EMPTY\n"); }
#line 2645 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 398 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_definicion_parametro ->  varias_definicion_parametro ',' definicion_parametro\n"); }
#line 2651 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 399 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_definicion_parametro -> definicion_parametro\n"); }
#line 2657 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 403 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  expresion\n"); }
#line 2663 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 404 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  IDENTIFICADOR ASIGNACION expresion\n"); }
#line 2669 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 408 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_si ->  SI expresion ENTONCES varias_instrucciones cero_mas_instrucciones FIN SI\n"); }
#line 2675 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 412 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_instrucciones ->  SINO varias_instrucciones\n"); }
#line 2681 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 413 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_mas_instrucciones -> EMPTY\n"); }
#line 2687 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 417 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_casos ->  CASOS expresion ES uno_o_mas_casos FIN CASOS\n"); }
#line 2693 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 421 "simple.y" /* yacc.c:1646  */
    { printf ("caso ->  CUANDO entradas => varias_instrucciones\n"); }
#line 2699 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 425 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  uno_o_mas_casos caso\n"); }
#line 2705 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 426 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  caso\n"); }
#line 2711 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 430 "simple.y" /* yacc.c:1646  */
    { printf ("entradas ->  varias_entradas entrada\n"); }
#line 2717 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 435 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  expresion cero_mas_expresiones1 OTRO\n"); }
#line 2723 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 436 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  OTRO\n"); }
#line 2729 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 440 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  varias_entradas entrada :\n"); }
#line 2735 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 441 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  entrada :\n"); }
#line 2741 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 445 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_expresiones1 -> DOS_PTOS expresion\n"); }
#line 2747 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 446 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_mas_expresiones1 -> EMPTY\n"); }
#line 2753 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 451 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_bucle -> cero_mas_identificador1 clausula_iteracion varias_instrucciones FIN BUCLE\n");}
#line 2759 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 455 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_identificador1 -> IDENTIFICADOR :\n"); }
#line 2765 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 456 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_mas_identificador1 -> EMPTY\n"); }
#line 2771 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 460 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  PARA IDENTIFICADOR cero_o_uno_especificacion_tipo  EN expresion\n");}
#line 2777 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 461 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  REPETIR IDENTIFICADOR cero_o_uno_especificacion_tipo EN rango cero_o_uno_descendente\n");}
#line 2783 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 462 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  MIENTRAS expresion\n");}
#line 2789 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 466 "simple.y" /* yacc.c:1646  */
    { printf ("cero_o_uno_especificacion_tipo -> : especificacion_tipo \n"); }
#line 2795 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 467 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_especificacion_tipo -> EMPTY\n"); }
#line 2801 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 471 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_descendente -> DESCENDENTE\n");}
#line 2807 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 472 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_descendente -> EMPTY\n"); }
#line 2813 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 478 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SIGUIENTE cero_o_uno_cuando ;\n");}
#line 2819 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 479 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SALIR cero_o_uno_de_identificador cero_o_uno_cuando ;\n");}
#line 2825 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 484 "simple.y" /* yacc.c:1646  */
    { printf ("cuando ->CUANDO expresion"); }
#line 2831 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 488 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_cuando -> cuando\n");}
#line 2837 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 489 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_cuando -> EMPTY\n"); }
#line 2843 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 493 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_de_identificador -> DE IDENTIFICADOR\n");}
#line 2849 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 494 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_de_identificador -> EMPTY\n"); }
#line 2855 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 498 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_lanzamiento_excepcion ->LANZA nombre ;"); }
#line 2861 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 502 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_captura_excepcion ->PRUEBA varias_instrucciones clausulas FIN PRUEBA"); }
#line 2867 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 506 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion\n"); }
#line 2873 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 507 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
#line 2879 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 508 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausula_finalmente\n"); }
#line 2885 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 513 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion ->varias_clausula_excepcion_especifica clausula_excepcion_general "); }
#line 2891 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 517 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausula_excepcion_especifica ->varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); }
#line 2897 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 518 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clausula_excepcion_especifica -> EMPTY\n"); }
#line 2903 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 522 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion_especifica -> EXCEPCION ( nombre ) varias_instrucciones "); }
#line 2909 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 526 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_excepcion_general ->EXCEPCION varias_instruccion"); }
#line 2915 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 530 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_finalmente ->FINALMENTE varias_instrucciones"); }
#line 2921 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 537 "simple.y" /* yacc.c:1646  */
    { printf("  expresion ->  primario\n"); }
#line 2927 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 538 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> + expresion\n"); }
#line 2933 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 539 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> - expresion\n"); }
#line 2939 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 540 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> * expresion\n"); }
#line 2945 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 541 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> / expresion\n"); }
#line 2951 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 542 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> \\ expresion\n"); }
#line 2957 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 543 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> ^ expresion\n"); }
#line 2963 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 544 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> && expresion\n"); }
#line 2969 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 545 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> | expresion\n"); }
#line 2975 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 546 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> ~ expresion\n"); }
#line 2981 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 547 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> < expresion\n"); }
#line 2987 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 548 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> > expresion\n"); }
#line 2993 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 549 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> <= expresion\n"); }
#line 2999 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 550 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> =< expresion\n"); }
#line 3005 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 551 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> = expresion\n"); }
#line 3011 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 552 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> ~ expresion\n"); }
#line 3017 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 553 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> <- expresion\n"); }
#line 3023 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 554 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> -> expresion\n"); }
#line 3029 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 555 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> ++ expresion\n"); }
#line 3035 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 556 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> -- expresion\n"); }
#line 3041 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 557 "simple.y" /* yacc.c:1646  */
    { printf("  expresion -> - expresion\n"); }
#line 3047 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 565 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> literal\n"); }
#line 3053 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 566 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> objeto\n"); }
#line 3059 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 567 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> llamada_subprograma\n"); }
#line 3065 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 568 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> OBJETO llamada_subprograma\n"); }
#line 3071 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 569 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> enumeraciones\n"); }
#line 3077 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 570 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> ( expresion )\n"); }
#line 3083 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 574 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> VERDADERO\n"); }
#line 3089 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 575 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> FALSO\n"); }
#line 3095 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 576 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_ENTERA\n"); }
#line 3101 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 577 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_REAL\n"); }
#line 3107 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 578 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CARACTER\n"); }
#line 3113 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 579 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CADENA\n"); }
#line 3119 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 583 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> nombre\n"); }
#line 3125 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 584 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto .  IDENTIFICADOR\n"); }
#line 3131 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 585 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto [ expresion ]\n"); }
#line 3137 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 586 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto { varias_ctc_cadena }\n"); }
#line 3143 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 591 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> varias_ctc_cadena , CTC_CADENA\n"); }
#line 3149 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 592 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> CTC_CADENA\n"); }
#line 3155 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 596 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clausulas_iteracion -> varias_clausulas_iteracion  clausula_iteracion\n"); }
#line 3161 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 597 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clausulas_iteracion -> clausula_iteracion\n"); }
#line 3167 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 601 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones ->  varias_expresiones , expresion\n"); }
#line 3173 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 602 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones -> expresion\n"); }
#line 3179 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 607 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones ->  expresion_condicional varias_clausulas_iteracion \n"); }
#line 3185 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 608 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones ->  expresion_condicional \n"); }
#line 3191 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 609 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones ->  varias_expresiones \n"); }
#line 3197 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 610 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones ->  varias_clave_valor \n"); }
#line 3203 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 611 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones ->  varias_campo_valor \n"); }
#line 3209 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 616 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> varias_clave_valor , clave_valor\n"); }
#line 3215 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 617 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> clave_valor\n"); }
#line 3221 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 621 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> varias_campo_valor , campo_valor\n"); }
#line 3227 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 622 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> campo_valor\n"); }
#line 3233 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 629 "simple.y" /* yacc.c:1646  */
    { printf ("  expresion_condicional -> expresion\n"); }
#line 3239 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 630 "simple.y" /* yacc.c:1646  */
    { printf ("  expresion_condicional -> SI expresion ENTONCES expresion\n"); }
#line 3245 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 631 "simple.y" /* yacc.c:1646  */
    { printf ("  expresion_condicional -> SI expresion ENTONCES expresion SINO expresion\n"); }
#line 3251 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 637 "simple.y" /* yacc.c:1646  */
    { printf ("  clave_valor -> CTC_CADENA => expresion\n"); }
#line 3257 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 641 "simple.y" /* yacc.c:1646  */
    { printf ("  campo_valor -> IDENTIFICADOR => expresion\n"); }
#line 3263 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 3267 "simple.tab.c" /* yacc.c:1646  */
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
#line 646 "simple.y" /* yacc.c:1906  */





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
