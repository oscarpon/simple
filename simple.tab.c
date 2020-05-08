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
#define YYLAST   744

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  115
/* YYNRULES -- Number of rules.  */
#define YYNRULES  248
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  434

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
       0,    20,    20,    21,    25,    29,    35,    36,    37,    46,
      47,    51,    52,    56,    57,    61,    66,    67,    72,    73,
      78,    82,    83,    87,    88,    89,    95,    96,    97,   101,
     102,   107,   108,   112,   113,   114,   118,   122,   123,   127,
     128,   132,   133,   137,   138,   142,   143,   144,   145,   149,
     150,   154,   155,   159,   163,   164,   165,   169,   173,   174,
     178,   179,   184,   185,   189,   190,   194,   198,   199,   207,
     211,   212,   216,   217,   221,   226,   227,   231,   232,   237,
     238,   239,   243,   244,   245,   249,   250,   254,   255,   260,
     261,   262,   263,   264,   265,   273,   277,   281,   282,   286,
     287,   291,   295,   296,   300,   301,   305,   306,   310,   315,
     319,   320,   324,   325,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   347,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   364,   365,   369,   373,   377,   378,
     382,   383,   387,   388,   392,   396,   397,   401,   405,   409,
     410,   414,   419,   420,   424,   425,   429,   430,   435,   439,
     440,   444,   445,   446,   450,   451,   455,   456,   462,   463,
     468,   472,   473,   477,   478,   482,   486,   490,   491,   492,
     497,   501,   502,   506,   510,   514,   521,   522,   523,   524,
     525,   526,   530,   531,   532,   533,   534,   535,   539,   540,
     541,   542,   547,   548,   552,   553,   554,   555,   566,   567,
     571,   572,   576,   577,   583,   584,   589,   593,   600,   603,
     604,   607,   608,   611,   612,   617,   618,   619,   620,   621,
     622,   623,   627,   628,   629,   633,   634,   635,   639,   640,
     641,   642,   646,   647,   652,   653,   654,   659,   660
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
  "programa", "definicion_programa", "codigo_programa", "libreria",
  "varias_librerias", "varios_identificadores", "nombre",
  "definicion_libreria", "codigo_libreria", "varias_declaraciones",
  "exportaciones", "varios_nombres", "declaracion", "declaracion_objeto",
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
  "literal", "objeto", "varias_ctc_cadena", "enumeraciones",
  "varias_expresiones", "varias_clave_valor", "varias_campo_valor",
  "expresion_condicional", "clave_valor", "campo_valor", "expresion",
  "operadorOR", "operadorAND", "operadorNEG", "operadorASIG",
  "operadorDES", "operadorSR", "operadorMDM", "operadorPOT",
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

#define YYPACT_NINF -324

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-324)))

#define YYTABLE_NINF -186

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      55,    -4,    44,   119,  -324,  -324,    31,    33,  -324,  -324,
    -324,   103,  -324,  -324,    -8,   102,    74,   122,    79,    90,
    -324,  -324,    82,   112,   112,  -324,  -324,  -324,  -324,   112,
    -324,   141,    74,    92,  -324,   114,    74,   100,   112,   163,
     138,   542,  -324,   112,   167,   442,   178,   151,  -324,    74,
      -5,  -324,   202,  -324,   169,     4,  -324,    67,   217,   225,
    -324,   148,  -324,   -55,  -324,  -324,    23,  -324,  -324,   539,
     426,    74,   442,   230,   539,   234,    13,  -324,   155,   361,
    -324,  -324,  -324,  -324,   161,  -324,  -324,  -324,     8,  -324,
    -324,  -324,   645,   191,  -324,  -324,   194,  -324,   191,    67,
    -324,  -324,  -324,   211,     7,   191,   187,  -324,  -324,  -324,
    -324,   210,    67,    67,   539,   539,  -324,  -324,  -324,  -324,
    -324,    11,  -324,    74,  -324,  -324,  -324,  -324,  -324,   248,
     248,   539,   475,   158,   601,   615,  -324,  -324,  -324,    99,
    -324,   267,  -324,   213,   220,  -324,    76,   123,   128,  -324,
     206,  -324,  -324,   227,   235,    93,   239,   234,   303,   539,
    -324,   238,  -324,   553,  -324,  -324,  -324,   539,   266,   268,
     442,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
     276,   539,   279,   539,   172,   255,   196,   -53,  -324,  -324,
     259,   305,   292,   -17,  -324,   205,     3,  -324,  -324,   539,
    -324,  -324,   296,   280,  -324,  -324,   328,  -324,   155,  -324,
    -324,  -324,   281,   539,     1,   283,  -324,   315,   316,    20,
      49,  -324,  -324,   233,  -324,   378,  -324,  -324,  -324,   601,
     601,  -324,  -324,  -324,  -324,  -324,   601,   601,   601,   601,
     601,   601,  -324,  -324,   442,   364,   366,   369,  -324,  -324,
     308,   442,  -324,  -324,   253,   306,   311,  -324,  -324,  -324,
     314,   314,   376,  -324,    42,  -324,    73,   318,  -324,  -324,
     197,  -324,  -324,    74,   237,  -324,   346,   539,  -324,   393,
     346,    67,   367,  -324,   327,   539,  -324,   539,  -324,  -324,
     402,   539,  -324,  -324,   539,   539,   360,  -324,   370,  -324,
     491,  -324,     6,   123,   123,   128,   128,  -324,  -324,  -324,
    -324,   391,   387,  -324,    39,  -324,  -324,  -324,   136,   539,
    -324,   553,    67,   415,   419,   435,  -324,   383,  -324,  -324,
    -324,  -324,   292,    67,    10,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,   659,    36,  -324,
     385,   356,  -324,   -15,  -324,  -324,  -324,   -38,  -324,  -324,
     368,  -324,   394,   539,  -324,  -324,  -324,  -324,  -324,  -324,
     380,   362,   491,   398,   454,  -324,  -324,    74,   275,   442,
     440,  -324,  -324,  -324,   539,   539,  -324,  -324,  -324,   292,
    -324,   461,  -324,  -324,  -324,   214,   449,   539,  -324,   460,
     539,   421,   442,  -324,   386,   539,  -324,  -324,   388,   405,
     425,  -324,   465,  -324,  -324,  -324,  -324,   390,    67,   416,
     539,   159,  -324,  -324,   442,  -324,  -324,  -324,  -324,  -324,
     539,  -324,   420,  -324
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     1,    10,
      10,     0,    15,     4,   111,     0,     0,     0,     0,     0,
      12,     9,     0,    16,     0,    19,    23,    24,    25,     0,
       5,     0,     0,    13,    22,     0,     0,    98,   111,     0,
       0,    38,    18,    17,    18,   160,     0,     0,    20,     0,
       0,   105,   100,    97,     0,    38,    11,    38,     0,     0,
      37,     0,    29,     0,    30,    33,     0,    34,    35,     0,
       0,     0,   160,   174,     0,   172,    13,   123,   198,   160,
     113,   114,   115,   116,     0,   117,   118,   119,     0,   120,
     121,   122,     0,     0,    14,    21,     0,     6,     0,    38,
      96,    99,    95,    71,     0,     0,     0,    32,    54,    55,
      56,     0,    38,    38,     0,     0,    27,    45,    46,    47,
      48,    40,   193,     0,   192,   196,   197,   194,   195,     0,
       0,     0,     0,     0,     0,     0,   188,   248,   186,   187,
     190,     0,   218,   220,   222,   224,   231,   234,   237,   241,
     243,   246,   134,     0,     0,   160,     0,   172,     0,     0,
     171,     0,   159,   139,   109,   112,   136,     0,     0,     0,
     160,   125,   126,   127,   128,   129,   130,   131,   132,   133,
       0,     0,     0,     0,     0,     0,     0,     0,   108,    70,
      73,    38,    68,     0,    65,     0,     0,    59,    31,     0,
      53,    52,     0,     0,    43,    44,    42,    39,     0,   189,
     244,   245,     0,     0,     0,     0,   209,     0,     0,     0,
       0,   211,   213,   223,   247,     0,   219,   221,   228,     0,
       0,   227,   230,   225,   226,   229,     0,     0,     0,     0,
       0,     0,   135,   175,   160,     0,   177,     0,   179,   173,
       0,   160,   170,   168,    13,     0,   138,   141,   142,   163,
     165,   165,   160,   199,     0,   203,     0,     0,     8,     7,
      38,   104,   101,     0,    86,    72,     0,     0,    66,     0,
       0,    38,     0,    58,     0,     0,    28,     0,    36,   191,
       0,     0,   205,   204,     0,     0,     0,   206,     0,   207,
       0,   150,     0,   232,   233,   235,   236,   238,   239,   240,
     242,   160,     0,   178,   160,   181,   180,   169,   160,     0,
     137,     0,    38,     0,     0,     0,   200,     0,   201,   124,
     107,   106,    68,    38,     0,    92,    89,    90,    93,    94,
      91,    81,    80,    79,    83,    82,    78,    86,    86,    75,
       0,    85,    88,     0,    67,    62,    64,     0,    57,    26,
       0,    41,     0,     0,   208,   216,   217,   210,   212,   153,
       0,     0,     0,   157,     0,   149,   176,     0,   160,   160,
       0,   143,   140,   164,     0,     0,   158,   202,   102,    68,
      74,     0,    77,    76,    84,     0,     0,     0,    60,     0,
       0,   214,   160,   155,   151,     0,   152,   147,     0,   160,
       0,   161,   167,   103,    69,    87,    63,     0,    38,    49,
       0,   160,   154,   156,   160,   144,   166,   162,    61,    51,
       0,   215,   160,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -324,  -324,  -324,  -324,  -324,   476,   -88,   -16,  -324,  -324,
      65,  -324,   228,   113,  -267,   -49,  -260,   445,   312,  -324,
    -324,  -324,  -324,  -324,   121,  -324,  -324,  -324,  -324,  -324,
     309,  -324,   232,   224,  -323,  -324,  -324,  -324,  -324,   162,
    -324,  -324,   164,  -324,  -324,   115,   165,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,   478,  -324,   -54,   -77,  -324,
    -324,  -324,  -324,   -44,  -324,  -324,   193,  -324,  -324,  -324,
     219,  -324,  -324,   147,  -324,  -324,  -324,  -324,  -324,   261,
    -324,  -324,  -324,   374,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,   278,   399,  -324,   -42,  -324,  -324,   345,  -324,
    -324,  -324,   240,   245,     0,  -324,  -324,  -324,  -324,   401,
     109,   120,   111,  -324,   244
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    13,    21,    11,    22,    78,     5,    12,
      29,    24,    35,    25,    26,    63,    27,    64,    65,    66,
     206,   288,   207,   121,   361,    67,    68,   107,   108,   196,
     197,   109,   193,   194,   278,   110,   190,   274,   275,   346,
     347,   348,   349,   350,   351,   352,    28,    38,    52,   100,
      53,   187,    98,   333,   101,    30,    31,    79,    80,    81,
     183,    82,    83,   136,   255,   256,   257,    85,   380,    86,
     301,   302,   370,   371,   372,   406,    87,    88,   170,   323,
     427,    89,   160,   161,   157,    90,    91,   245,   246,   247,
     315,   316,   248,   137,   138,   139,   266,   140,   214,   219,
     220,   215,   221,   222,   216,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    84,   165,    92,    96,   184,    15,   344,   111,   388,
     186,   279,   103,   396,   345,   115,    46,   195,   155,   300,
      50,   191,    58,   204,    17,    62,   104,   117,    84,   118,
      92,   282,   397,    95,   374,    84,   116,    92,   271,   335,
      59,    62,   272,   119,   205,   167,    69,   336,   168,    18,
     188,    19,   337,   398,   105,   154,    70,    20,    60,   169,
     338,     6,    61,   200,   201,   339,   413,   340,    20,   141,
     153,   120,   192,    71,   158,   280,    23,   280,   165,   209,
     344,   344,    47,    62,    72,    58,    97,   345,   345,    43,
       1,    73,    74,   291,    75,    19,    62,    62,     2,   292,
      69,    20,    49,    59,    76,   390,   162,   208,   195,     7,
      70,    84,   296,    92,   202,   203,   262,    15,  -182,     8,
     297,    60,     9,   244,    10,    61,    84,    71,    92,    16,
      77,   212,    33,   377,   291,    17,    42,    32,    72,    33,
     326,   298,    44,    69,    37,    73,    74,   228,    75,   299,
     229,   230,   231,    70,   232,    39,    42,    36,    76,   252,
      18,    47,    19,   258,  -146,   327,    69,   259,    20,    18,
      71,    19,  -148,   328,    40,    41,    70,    20,   233,   234,
     235,    72,    45,   267,    77,   165,    55,  -148,    73,    74,
     311,    75,   379,    71,    51,   180,   181,   318,   182,   284,
      84,    76,    92,    56,    72,    48,    49,    84,  -110,    92,
      93,    73,    74,   290,    75,    58,    94,   335,    84,    99,
      92,   332,   217,   218,    76,   336,   102,    77,   236,   237,
     337,   112,   357,    59,   165,   238,   239,   240,   338,   113,
     335,   165,   114,   339,   156,   340,   330,   159,   336,   163,
      77,    60,   166,   337,    62,    61,    20,    34,   331,   185,
     378,   338,    33,   268,    40,    62,   339,    84,   340,    92,
      84,   189,    92,   383,    84,   122,    92,   354,   198,   341,
     199,   342,    69,   343,   389,   360,   123,   362,    40,   270,
     225,   364,    70,   226,   365,   366,    19,    40,   281,   227,
     373,   165,    20,  -184,   249,  -184,    62,   229,   230,    71,
     124,   125,   126,    33,   127,   128,   241,    62,   242,   381,
      72,   258,    47,   319,   251,   409,   243,    73,    74,   253,
      75,   260,   165,   261,    84,    84,    92,    92,   303,   304,
      76,   263,   131,   265,   165,   132,   269,   133,   421,   307,
     308,   309,   310,   273,   135,   165,   305,   306,    84,    60,
      92,   408,   277,   401,   285,    84,    77,    92,    69,   429,
     432,   286,   373,   210,   211,   287,   289,    84,    70,    92,
      84,   293,    92,    69,   411,   362,   294,   295,    84,   164,
      92,   300,   312,    70,   314,    71,   244,   417,    69,   317,
     419,   320,    62,   321,   325,   423,    72,   322,    70,   329,
      71,   192,    69,    73,    74,   355,    75,   358,   359,  -185,
     431,    72,    70,   363,   217,    71,    76,    69,    73,    74,
     433,    75,   376,  -145,   384,   218,    72,    70,   385,    71,
     386,    76,    18,    73,    74,  -183,    75,   387,   395,    69,
      72,   402,    77,   122,    71,   403,    76,    73,    74,    70,
      75,   407,   400,   399,   123,    72,   405,    77,   410,   414,
      76,   416,    73,    74,   418,    75,    71,   420,   425,   422,
     426,   428,    77,   424,   430,    76,    14,    72,   124,   125,
     126,    33,   127,   128,    73,    74,    77,    75,   129,   130,
     106,   334,   122,   276,   356,   283,   412,    76,   353,   392,
     415,    77,   393,   123,   382,   394,    54,   152,   122,   404,
     131,   375,   324,   132,   313,   133,   264,   134,   213,   123,
     369,   250,   135,    77,   224,   223,   367,   124,   125,   126,
      33,   127,   128,   368,     0,     0,     0,   129,   130,     0,
       0,     0,    57,   124,   125,   126,    33,   127,   128,     0,
      58,     0,     0,   129,   130,     0,   122,     0,     0,   131,
       0,     0,   132,     0,   133,     0,   134,   123,    59,     0,
     122,   135,     0,     0,     0,   131,     0,     0,   132,     0,
     133,   123,   134,     0,     0,     0,    60,   135,     0,     0,
      61,   124,   125,   126,    33,   127,   128,    33,     0,     0,
       0,   129,   130,     0,     0,   124,   125,   126,   254,   127,
     128,     0,     0,     0,     0,   129,   130,     0,   122,     0,
       0,     0,     0,   131,     0,     0,   132,     0,   133,   123,
     134,     0,   122,     0,     0,   135,     0,   131,     0,     0,
     132,     0,   133,   123,   134,     0,     0,     0,     0,   135,
       0,     0,   335,   124,   125,   126,    33,   127,   128,     0,
     336,     0,     0,   129,   130,   337,     0,   124,   125,   126,
      33,   127,   128,   338,     0,     0,     0,   391,   339,     0,
     340,     0,     0,     0,     0,   131,     0,     0,   132,     0,
     133,   341,     0,   342,     0,   343,     0,   135,     0,   131,
       0,     0,   132,     0,   133,   171,     0,     0,    19,     0,
       0,     0,     0,     0,    20,     0,   172,   173,   174,   175,
     176,   177,   178,     0,     0,     0,     0,     0,   179,     0,
       0,   180,   181,     0,   182
};

static const yytype_int16 yycheck[] =
{
      16,    45,    79,    45,     9,    93,    14,   274,    57,   332,
      98,    28,     8,    28,   274,    70,    32,   105,    72,    13,
      36,    14,    18,    12,    32,    41,    22,     4,    72,     6,
      72,    28,    70,    49,    28,    79,    91,    79,    91,     3,
      36,    57,    95,    20,    33,    37,     7,    11,    40,    57,
      99,    59,    16,    91,    50,    71,    17,    65,    54,    51,
      24,    65,    58,   112,   113,    29,   389,    31,    65,    69,
      70,    48,    65,    34,    74,    92,    11,    92,   155,   123,
     347,   348,    69,    99,    45,    18,    91,   347,   348,    24,
      35,    52,    53,    92,    55,    59,   112,   113,    43,    98,
       7,    65,    92,    36,    65,    95,    93,   123,   196,    65,
      17,   155,    92,   155,   114,   115,   170,    14,    25,     0,
     100,    54,    91,    30,    91,    58,   170,    34,   170,    26,
      91,   131,    65,    94,    92,    32,    23,    35,    45,    65,
      98,    92,    29,     7,    65,    52,    53,    71,    55,   100,
      74,    75,    76,    17,    78,    65,    43,    35,    65,   159,
      57,    69,    59,   163,    28,    92,     7,   167,    65,    57,
      34,    59,    13,   100,    92,    93,    17,    65,   102,   103,
     104,    45,    41,   183,    91,   262,    23,    28,    52,    53,
     244,    55,    56,    34,    94,    96,    97,   251,    99,   199,
     244,    65,   244,    65,    45,    91,    92,   251,    41,   251,
      32,    52,    53,   213,    55,    18,    65,     3,   262,    17,
     262,   270,    64,    65,    65,    11,    57,    91,   105,   106,
      16,    14,   281,    36,   311,   107,   108,   109,    24,    14,
       3,   318,    94,    29,    14,    31,    49,    13,    11,    94,
      91,    54,    91,    16,   270,    58,    65,   273,    61,    65,
     314,    24,    65,    91,    92,   281,    29,   311,    31,   311,
     314,    60,   314,   322,   318,    27,   318,   277,    91,    42,
      70,    44,     7,    46,   333,   285,    38,   287,    92,    93,
      23,   291,    17,    80,   294,   295,    59,    92,    93,    79,
     300,   378,    65,    28,    65,    30,   322,    74,    75,    34,
      62,    63,    64,    65,    66,    67,   110,   333,    91,   319,
      45,   321,    69,    70,    21,   379,    91,    52,    53,    91,
      55,    65,   409,    65,   378,   379,   378,   379,   229,   230,
      65,    65,    94,    64,   421,    97,    91,    99,   402,   238,
     239,   240,   241,    94,   106,   432,   236,   237,   402,    54,
     402,   377,    70,   363,    68,   409,    91,   409,     7,   418,
     424,    91,   372,   129,   130,    47,    95,   421,    17,   421,
     424,    98,   424,     7,   384,   385,    71,    71,   432,    28,
     432,    13,    28,    17,    25,    34,    30,   397,     7,    91,
     400,    95,   418,    92,    28,   405,    45,    93,    17,    91,
      34,    65,     7,    52,    53,    22,    55,    50,    91,    28,
     420,    45,    17,    21,    64,    34,    65,     7,    52,    53,
     430,    55,    45,    28,    19,    65,    45,    17,    19,    34,
       5,    65,    57,    52,    53,    25,    55,    64,    92,     7,
      45,    71,    91,    27,    34,    93,    65,    52,    53,    17,
      55,     7,    68,    95,    38,    45,    68,    91,    28,     8,
      65,    22,    52,    53,    14,    55,    34,    56,    53,    93,
      15,    91,    91,    95,    68,    65,    10,    45,    62,    63,
      64,    65,    66,    67,    52,    53,    91,    55,    72,    73,
      55,   273,    27,   191,   280,   196,   385,    65,   276,   347,
     395,    91,   348,    38,   321,   350,    38,    91,    27,   372,
      94,   302,   261,    97,   246,    99,   181,   101,    53,    38,
      39,   157,   106,    91,   135,   134,   296,    62,    63,    64,
      65,    66,    67,   298,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    10,    62,    63,    64,    65,    66,    67,    -1,
      18,    -1,    -1,    72,    73,    -1,    27,    -1,    -1,    94,
      -1,    -1,    97,    -1,    99,    -1,   101,    38,    36,    -1,
      27,   106,    -1,    -1,    -1,    94,    -1,    -1,    97,    -1,
      99,    38,   101,    -1,    -1,    -1,    54,   106,    -1,    -1,
      58,    62,    63,    64,    65,    66,    67,    65,    -1,    -1,
      -1,    72,    73,    -1,    -1,    62,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    72,    73,    -1,    27,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,    38,
     101,    -1,    27,    -1,    -1,   106,    -1,    94,    -1,    -1,
      97,    -1,    99,    38,   101,    -1,    -1,    -1,    -1,   106,
      -1,    -1,     3,    62,    63,    64,    65,    66,    67,    -1,
      11,    -1,    -1,    72,    73,    16,    -1,    62,    63,    64,
      65,    66,    67,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    -1,    -1,    -1,    94,    -1,    -1,    97,    -1,
      99,    42,    -1,    44,    -1,    46,    -1,   106,    -1,    94,
      -1,    -1,    97,    -1,    99,    70,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    81,    82,    83,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    96,    97,    -1,    99
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   112,   113,   119,    65,    65,     0,    91,
      91,   116,   120,   114,   116,    14,    26,    32,    57,    59,
      65,   115,   117,   121,   122,   124,   125,   127,   157,   121,
     166,   167,    35,    65,   118,   123,    35,    65,   158,    65,
      92,    93,   124,   121,   124,    41,   118,    69,    91,    92,
     118,    94,   159,   161,   166,    23,    65,    10,    18,    36,
      54,    58,   118,   126,   128,   129,   130,   136,   137,     7,
      17,    34,    45,    52,    53,    55,    65,    91,   118,   168,
     169,   170,   172,   173,   174,   178,   180,   187,   188,   192,
     196,   197,   206,    32,    65,   118,     9,    91,   163,    17,
     160,   165,    57,     8,    22,    50,   128,   138,   139,   142,
     146,   126,    14,    14,    94,    70,    91,     4,     6,    20,
      48,   134,    27,    38,    62,    63,    64,    66,    67,    72,
      73,    94,    97,    99,   101,   106,   174,   204,   205,   206,
     208,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,    91,   215,   118,   168,    14,   195,   215,    13,
     193,   194,    93,    94,    28,   169,    91,    37,    40,    51,
     189,    70,    81,    82,    83,    84,    85,    86,    87,    93,
      96,    97,    99,   171,   117,    65,   117,   162,   126,    60,
     147,    14,    65,   143,   144,   117,   140,   141,    91,    70,
     126,   126,   215,   215,    12,    33,   131,   133,   118,   174,
     225,   225,   215,    53,   209,   212,   215,    64,    65,   210,
     211,   213,   214,   220,   204,    23,    80,    79,    71,    74,
      75,    76,    78,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    91,    91,    30,   198,   199,   200,   203,    65,
     194,    21,   215,    91,    65,   175,   176,   177,   215,   215,
      65,    65,   168,    65,   209,    64,   207,   215,    91,    91,
      93,    91,    95,    94,   148,   149,   129,    70,   145,    28,
      92,    93,    28,   141,   215,    68,    91,    47,   132,    95,
     215,    92,    98,    98,    71,    71,    92,   100,    92,   100,
      13,   181,   182,   221,   221,   222,   222,   223,   223,   223,
     223,   168,    28,   203,    25,   201,   202,    91,   168,    70,
      95,    92,    93,   190,   190,    28,    98,    92,   100,    91,
      49,    61,   126,   164,   123,     3,    11,    16,    24,    29,
      31,    42,    44,    46,   125,   127,   150,   151,   152,   153,
     154,   155,   156,   143,   215,    22,   144,   126,    50,    91,
     215,   135,   215,    21,   215,   215,   215,   213,   214,    39,
     183,   184,   185,   215,    28,   181,    45,    94,   168,    56,
     179,   215,   177,   126,    19,    19,     5,    64,   145,   126,
      95,    28,   150,   153,   157,    92,    28,    70,    91,    95,
      68,   215,    71,    93,   184,    68,   186,     7,   118,   168,
      28,   215,   135,   145,     8,   156,    22,   215,    14,   215,
      56,   168,    93,   215,    95,    53,    15,   191,    91,   126,
      68,   215,   168,   215
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   113,   114,   115,   115,   115,   116,
     116,   117,   117,   118,   118,   119,   120,   120,   121,   121,
     122,   123,   123,   124,   124,   124,   125,   125,   125,   126,
     126,   127,   127,   128,   128,   128,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   134,   134,   135,
     135,   136,   136,   137,   138,   138,   138,   139,   140,   140,
     141,   141,   142,   142,   143,   143,   144,   145,   145,   146,
     147,   147,   148,   148,   149,   150,   150,   151,   151,   152,
     152,   152,   153,   153,   153,   154,   154,   155,   155,   156,
     156,   156,   156,   156,   156,   157,   158,   159,   159,   160,
     160,   161,   162,   162,   163,   163,   164,   164,   165,   166,
     167,   167,   168,   168,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   170,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   172,   172,   173,   174,   175,   175,
     176,   176,   177,   177,   178,   179,   179,   180,   181,   182,
     182,   183,   184,   184,   185,   185,   186,   186,   187,   188,
     188,   189,   189,   189,   190,   190,   191,   191,   192,   192,
     193,   194,   194,   195,   195,   196,   197,   198,   198,   198,
     199,   200,   200,   201,   202,   203,   204,   204,   204,   204,
     204,   204,   205,   205,   205,   205,   205,   205,   206,   206,
     206,   206,   207,   207,   208,   208,   208,   208,   209,   209,
     210,   210,   211,   211,   212,   212,   213,   214,   215,   216,
     216,   217,   217,   218,   218,   219,   219,   219,   219,   219,
     219,   219,   220,   220,   220,   221,   221,   221,   222,   222,
     222,   222,   223,   223,   224,   224,   224,   225,   225
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     4,     6,     6,     2,
       0,     3,     1,     1,     3,     4,     2,     3,     2,     1,
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
       4,     4,     3,     1,     3,     3,     3,     3,     3,     1,
       3,     1,     3,     1,     4,     6,     3,     3,     1,     2,
       1,     2,     1,     2,     1,     2,     2,     2,     2,     2,
       2,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     2,     2,     1,     2,     1
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
#line 1727 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 21 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Libreria -> definicion_libreria\n"); }
#line 1733 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 25 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_programa -> programa IDENTIFICADOR ; codigo_programa\n"); }
#line 1739 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 29 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_programa -> varias_librerias cuerpo_subprograma\n"); }
#line 1745 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 35 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
#line 1751 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 36 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); }
#line 1757 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 37 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
#line 1763 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 46 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias -> varias_librerias libreria\n"); }
#line 1769 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 51 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores ->  varios_identificadores  IDENTIFICADOR\n"); }
#line 1775 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 52 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores -> IDENTIFICADOR\n"); }
#line 1781 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 56 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> IDENTIFICADOR\n"); }
#line 1787 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> IDENTIFICADOR CUATRO_PUNTOS IDENTIFICADOR\n"); }
#line 1793 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 61 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n"); }
#line 1799 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias  varias_declaraciones\n"); }
#line 1805 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 67 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias exportaciones varias_declaraciones\n"); }
#line 1811 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 1817 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 73 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones -> declaracion \n"); }
#line 1823 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 78 "simple.y" /* yacc.c:1646  */
    { printf ("  exportaciones -> EXPORTAR  varios_nombres ; \n"); }
#line 1829 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 82 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> varios_nombres ',' nombre ; \n"); }
#line 1835 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 83 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> nombre ; \n"); }
#line 1841 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 87 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_objeto \n"); }
#line 1847 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 88 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion ->  declaracion_tipo \n"); }
#line 1853 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 89 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_subprograma\n"); }
#line 1859 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 95 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores :  CONSTANTE especificacion_tipo ASIGNACION expresion ; \n"); }
#line 1865 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 96 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ;\n"); }
#line 1871 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 97 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 1877 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 101 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> nombre\n"); }
#line 1883 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 102 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
#line 1889 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 107 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
#line 1895 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 108 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
#line 1901 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 112 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_escalar\n"); }
#line 1907 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 113 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_tabla\n"); }
#line 1913 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 114 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_diccionario\n"); }
#line 1919 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 118 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar-> cero_o_uno_signo tipo_basico cero_o_uno_longitud cero_o_uno_rango\n"); }
#line 1925 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 122 "simple.y" /* yacc.c:1646  */
    { printf ("   cero_o_uno_signo -> SIGNO\n"); }
#line 1931 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 127 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_longitud -> longitud\n"); }
#line 1937 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 132 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_rango -> RANGO rango\n"); }
#line 1943 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 137 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> CORTO\n"); }
#line 1949 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 138 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> LARGO\n"); }
#line 1955 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 142 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> BOOLEANO\n"); }
#line 1961 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 143 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> CARACTER\n"); }
#line 1967 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 144 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> ENTERO\n"); }
#line 1973 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 145 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> REAL\n"); }
#line 1979 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 149 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion\n"); }
#line 1985 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 150 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion DOS_PTOS expresion\n"); }
#line 1991 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 154 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> TABLA ( expresion DOS_PTOS expresion ) DE especificacion_tipo\n"); }
#line 1997 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 155 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
#line 2003 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 159 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
#line 2009 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 163 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_registro\n"); }
#line 2015 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 164 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
#line 2021 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 165 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> clase\n"); }
#line 2027 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 169 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
#line 2033 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 173 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> varios_campos campo\n"); }
#line 2039 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 174 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> campo\n"); }
#line 2045 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 178 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ;\n"); }
#line 2051 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 179 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 2057 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 184 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION varios_campos FIN ENUMERACION\n"); }
#line 2063 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 185 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar varios_campos FIN ENUMERACION\n"); }
#line 2069 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 189 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> varios_elemento_enumeracion , elemento_enumeracion\n"); }
#line 2075 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 190 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> elemento_enumeracion\n"); }
#line 2081 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 194 "simple.y" /* yacc.c:1646  */
    { printf ("  elemento_enumeracion -> IDENTIFICADOR cero_uno_expresion\n"); }
#line 2087 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 198 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_expresion -> ASIGNACION expresion\n"); }
#line 2093 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 207 "simple.y" /* yacc.c:1646  */
    { printf ("  clase -> CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE\n"); }
#line 2099 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 211 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_ultima -> ULTIMA\n"); }
#line 2105 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 216 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_superclases -> superclases\n"); }
#line 2111 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 221 "simple.y" /* yacc.c:1646  */
    { printf ("  superclases -> ( varios_nombres ) \n"); }
#line 2117 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 226 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> componente"); }
#line 2123 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 227 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> visibilidad componente"); }
#line 2129 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 231 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> varias_declaraciones_componente declaracion_componente"); }
#line 2135 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 232 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> declaracion_componente"); }
#line 2141 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 237 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad -> PUBLICO \n"); }
#line 2147 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 238 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PROTEGIDO \n"); }
#line 2153 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 239 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PRIVADO\n"); }
#line 2159 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 243 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_tipo"); }
#line 2165 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 244 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_objeto"); }
#line 2171 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 245 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> varios_modificadores declaracion_subprograma"); }
#line 2177 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 249 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_modificadores ->  cero_modificadores varios_modificadores\n"); }
#line 2183 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 254 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores ->  varios_modificadores , modificador\n"); }
#line 2189 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 255 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores -> modificador\n"); }
#line 2195 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 260 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> CONSTRUCTOR "); }
#line 2201 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 261 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  DESTRUCTOR "); }
#line 2207 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 262 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  GENERICO "); }
#line 2213 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 263 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> ABSTRACTO "); }
#line 2219 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 264 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  ESPECIFICO "); }
#line 2225 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 265 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> FINAL"); }
#line 2231 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 273 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }
#line 2237 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 277 "simple.y" /* yacc.c:1646  */
    { printf ("  cabecera_subprograma -> IDENTIFICADOR cero_uno_parametrizacion cero_uno_tipoResultado\n"); }
#line 2243 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 281 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_parametrizacion -> parametrizacion\n"); }
#line 2249 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 286 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_tipoResultado -> tipo_resultado\n"); }
#line 2255 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 291 "simple.y" /* yacc.c:1646  */
    { printf ("parametrizacion -> ( varias_declaraciones_parametros declaracion_parametros ) \n"); }
#line 2261 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 295 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo cero_uno_expresion"); }
#line 2267 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 296 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo cero_uno_expresion"); }
#line 2273 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 300 "simple.y" /* yacc.c:1646  */
    {printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros ;\n");}
#line 2279 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 305 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> VALOR\n"); }
#line 2285 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 306 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> REFERENCIA\n"); }
#line 2291 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 310 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
#line 2297 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 315 "simple.y" /* yacc.c:1646  */
    { printf ("  cuerpo_subprograma -> cero_o_mas_declaraciones PRINCIPIO varias_instrucciones FIN"); }
#line 2303 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 319 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 2309 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 324 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> varias_instrucciones  instruccion\n"); }
#line 2315 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 325 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> instruccion\n"); }
#line 2321 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 333 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_asignacion\n"); }
#line 2327 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 334 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_devolver\n"); }
#line 2333 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 335 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_llamada\n"); }
#line 2339 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 336 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_si\n"); }
#line 2345 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 337 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_casos\n"); }
#line 2351 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 338 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_bucle\n"); }
#line 2357 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 339 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_interrupcion\n"); }
#line 2363 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 340 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_lanzamiento_excepcion\n"); }
#line 2369 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 341 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_captura_excepcion\n"); }
#line 2375 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 342 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> ;\n"); }
#line 2381 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 347 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_asignacion -> objeto op_asignacion expresion;"); }
#line 2387 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 351 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIGNACION"); }
#line 2393 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 352 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_SUMA"); }
#line 2399 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 353 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> :- "); }
#line 2405 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 354 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_MULT"); }
#line 2411 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 355 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DIV"); }
#line 2417 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 356 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_RESTO"); }
#line 2423 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 357 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_POT"); }
#line 2429 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 358 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DESPI"); }
#line 2435 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 359 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> :"); }
#line 2441 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 364 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER ;\n"); }
#line 2447 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 365 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER expresion ;\n"); }
#line 2453 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 369 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_llamada ->  llamada_subprograma ;\n"); }
#line 2459 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 373 "simple.y" /* yacc.c:1646  */
    { printf ("llamada_subprograma ->  nombre ( varias_definicion_parametro )\n"); }
#line 2465 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 377 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_definicion_parametro ->  varias_definicion_parametro\n"); }
#line 2471 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 382 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_definicion_parametro ->  varias_definicion_parametro ',' definicion_parametro\n"); }
#line 2477 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 383 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_definicion_parametro -> definicion_parametro\n"); }
#line 2483 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 387 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  expresion\n"); }
#line 2489 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 388 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  IDENTIFICADOR ASIGNACION expresion\n"); }
#line 2495 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 392 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_si ->  SI expresion ENTONCES varias_instrucciones cero_mas_instrucciones FIN SI\n"); }
#line 2501 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 396 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_instrucciones ->  SINO varias_instrucciones\n"); }
#line 2507 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 401 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_casos ->  CASOS expresion ES uno_o_mas_casos FIN CASOS\n"); }
#line 2513 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 405 "simple.y" /* yacc.c:1646  */
    { printf ("caso ->  CUANDO entradas => varias_instrucciones\n"); }
#line 2519 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 409 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  uno_o_mas_casos caso\n"); }
#line 2525 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 410 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  caso\n"); }
#line 2531 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 414 "simple.y" /* yacc.c:1646  */
    { printf ("entradas ->  varias_entradas entrada\n"); }
#line 2537 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 419 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  expresion cero_mas_expresiones1 OTRO\n"); }
#line 2543 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 420 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  OTRO\n"); }
#line 2549 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 424 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  varias_entradas entrada :\n"); }
#line 2555 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 425 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  entrada :\n"); }
#line 2561 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 429 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_expresiones1 -> .. expresion\n"); }
#line 2567 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 435 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_bucle -> cero_mas_identificador1 clausula_iteracion varias_instrucciones FIN BUCLE\n");}
#line 2573 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 439 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_identificador1 -> IDENTIFICADOR :\n"); }
#line 2579 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 444 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  PARA IDENTIFICADOR cero_o_uno_especificacion_tipo  EN expresion\n");}
#line 2585 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 445 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  REPETIR IDENTIFICADOR cero_o_uno_especificacion_tipo EN rango cero_o_uno_descendente\n");}
#line 2591 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 446 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  MIENTRAS expresion\n");}
#line 2597 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 450 "simple.y" /* yacc.c:1646  */
    { printf ("cero_o_uno_especificacion_tipo -> : especificacion_tipo \n"); }
#line 2603 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 455 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_descendete -> DESCENDENTE\n");}
#line 2609 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 462 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SIGUIENTE cero_o_uno_cuando ;\n");}
#line 2615 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 463 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SALIR cero_o_uno_de_identificador cero_o_uno_cuando ;\n");}
#line 2621 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 468 "simple.y" /* yacc.c:1646  */
    { printf ("cuando ->CUANDO expresion"); }
#line 2627 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 472 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_cuando -> cuando\n");}
#line 2633 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 477 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_de_identificador -> DE IDENTIFICADOR\n");}
#line 2639 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 482 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_lanzamiento_excepcion ->LANZA nombre ;"); }
#line 2645 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 486 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_captura_excepcion ->PRUEBA varias_instrucciones clausulas FIN PRUEBA"); }
#line 2651 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 490 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion\n"); }
#line 2657 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 491 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
#line 2663 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 492 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausula_finalmente\n"); }
#line 2669 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 497 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion ->varias_clausula_excepcion_especifica clausula_excepcion_general "); }
#line 2675 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 501 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausula_excepcion_especifica ->varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); }
#line 2681 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 506 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion_especifica -> EXCEPCION ( nombre ) varias_instrucciones "); }
#line 2687 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 510 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_excepcion_general ->EXCEPCION varias_instruccion"); }
#line 2693 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 514 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_finalmente ->FINALMENTE varias_instrucciones"); }
#line 2699 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 521 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> literal\n"); }
#line 2705 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 522 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> objeto\n"); }
#line 2711 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 523 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> llamada_subprograma\n"); }
#line 2717 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 524 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> OBJETO llamada_subprograma\n"); }
#line 2723 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 525 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> enumeraciones\n"); }
#line 2729 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 526 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> ( expresion )\n"); }
#line 2735 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 530 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> VERDADERO\n"); }
#line 2741 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 531 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> FALSO\n"); }
#line 2747 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 532 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_ENTERA\n"); }
#line 2753 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 533 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_REAL\n"); }
#line 2759 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 534 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CARACTER\n"); }
#line 2765 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 535 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CADENA\n"); }
#line 2771 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 539 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> nombre\n"); }
#line 2777 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 540 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto .  IDENTIFICADOR\n"); }
#line 2783 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 541 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto [ expresion ]\n"); }
#line 2789 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 542 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto { varias_ctc_cadena }\n"); }
#line 2795 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 547 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> varias_ctc_cadena , CTC_CADENA\n"); }
#line 2801 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 548 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> CTC_CADENA\n"); }
#line 2807 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 552 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion_condicional varias_clausulas_iteracion ]\n"); }
#line 2813 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 553 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion ]\n"); }
#line 2819 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 554 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> { varias_clave_valor }\n"); }
#line 2825 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 555 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> { varias_campo_valor }\n"); }
#line 2831 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 566 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones ->  varias_expresiones , expresion\n"); }
#line 2837 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 567 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones -> expresion\n"); }
#line 2843 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 571 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> varias_clave_valor , clave_valor\n"); }
#line 2849 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 572 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> clave_valor\n"); }
#line 2855 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 576 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> varias_campo_valor , campo_valor\n"); }
#line 2861 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 577 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> campo_valor\n"); }
#line 2867 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 583 "simple.y" /* yacc.c:1646  */
    { printf ("  expresion_condicional -> SI expresion ENTONCES expresion\n"); }
#line 2873 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 584 "simple.y" /* yacc.c:1646  */
    { printf ("  expresion_condicional -> SI expresion ENTONCES expresion SINO expresion\n"); }
#line 2879 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 589 "simple.y" /* yacc.c:1646  */
    { printf ("  clave_valor -> CTC_CADENA FLECHA expresion\n"); }
#line 2885 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 593 "simple.y" /* yacc.c:1646  */
    { printf ("  campo_valor -> IDENTIFICADOR FLECHA expresion\n"); }
#line 2891 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 600 "simple.y" /* yacc.c:1646  */
    { printf("  expresion ->  operadorOR\n"); }
#line 2897 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 603 "simple.y" /* yacc.c:1646  */
    { printf("  operadorOR ->  operadorOR OR operadorAND\n"); }
#line 2903 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 607 "simple.y" /* yacc.c:1646  */
    { printf("  operadorAND ->  operadorAND AND operadorNEG\n"); }
#line 2909 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 611 "simple.y" /* yacc.c:1646  */
    { printf("  operadorNEG -> operadorASIG ~\n"); }
#line 2915 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 617 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES '<' \n"); }
#line 2921 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 618 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES '>' \n"); }
#line 2927 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 619 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES LEQ \n"); }
#line 2933 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 620 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES FLECHA \n"); }
#line 2939 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 621 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES'=' \n"); }
#line 2945 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 622 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES NEQ \n"); }
#line 2951 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 627 "simple.y" /* yacc.c:1646  */
    { printf("  operadorDES ->  operadorDES DESPI operadorSR\n"); }
#line 2957 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 628 "simple.y" /* yacc.c:1646  */
    { printf("  operadorDES ->  operadorDES DESPD operadorSR\n"); }
#line 2963 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 633 "simple.y" /* yacc.c:1646  */
    { printf("  operadorSR ->  operadorSR '+' operadorMDM\n"); }
#line 2969 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 634 "simple.y" /* yacc.c:1646  */
    { printf("  operadorSR ->  operadorSR '-' operadorMDM\n"); }
#line 2975 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 639 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '*' operadorPOT\n"); }
#line 2981 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 640 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '/' operadorPOT\n"); }
#line 2987 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 641 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '\\' operadorPOT\n"); }
#line 2993 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 646 "simple.y" /* yacc.c:1646  */
    { printf("  operadorPOT ->  operadorINCDEC '^' operadorPOT\n"); }
#line 2999 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 652 "simple.y" /* yacc.c:1646  */
    { printf("  operadorINCDEC ->   INC operadorUN\n"); }
#line 3005 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 653 "simple.y" /* yacc.c:1646  */
    { printf("  operadorINCDEC ->  DEC operadorUN\n"); }
#line 3011 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 659 "simple.y" /* yacc.c:1646  */
    { printf("  operadorUN -> - primario \n"); }
#line 3017 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 660 "simple.y" /* yacc.c:1646  */
    { printf("  operadorUN -> primario \n"); }
#line 3023 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 3027 "simple.tab.c" /* yacc.c:1646  */
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
#line 665 "simple.y" /* yacc.c:1906  */





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
