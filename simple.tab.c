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
#define YYLAST   781

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  241
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  427

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
      94,    95,   104,   102,    92,   103,    96,   105,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    93,    91,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    97,   106,    98,   107,     2,     2,     2,     2,     2,
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
     604,   607,   608,   611,   612,   627,   628,   629,   633,   634,
     635,   639,   640,   641,   642,   646,   647,   652,   653,   654,
     659,   660
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
  "':'", "'('", "')'", "'.'", "'['", "']'", "'{'", "'}'", "'~'", "'+'",
  "'-'", "'*'", "'/'", "'\\\\'", "'^'", "$accept", "programa",
  "definicion_programa", "codigo_programa", "libreria", "varias_librerias",
  "varios_identificadores", "nombre", "definicion_libreria",
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
  "literal", "objeto", "varias_ctc_cadena", "enumeraciones",
  "varias_expresiones", "varias_clave_valor", "varias_campo_valor",
  "expresion_condicional", "clave_valor", "campo_valor", "expresion",
  "operadorOR", "operadorAND", "operadorNEG", "operadorDES", "operadorSR",
  "operadorMDM", "operadorPOT", "operadorINCDEC", "operadorUN", YY_NULLPTR
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
     125,   126,    43,    45,    42,    47,    92,    94
};
# endif

#define YYPACT_NINF -321

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-321)))

#define YYTABLE_NINF -186

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      23,   -56,   -23,    75,  -321,  -321,    -9,    33,  -321,  -321,
    -321,   106,  -321,  -321,    89,    76,    48,    93,    71,    90,
    -321,  -321,    58,   -25,   -25,  -321,  -321,  -321,  -321,   -25,
    -321,    99,    48,   103,  -321,   118,    48,    74,   -25,   167,
     129,    35,  -321,   -25,   160,   450,   194,   181,  -321,    48,
      -5,  -321,   223,  -321,   196,   131,  -321,   170,   243,   245,
    -321,   177,  -321,   -48,  -321,  -321,     9,  -321,  -321,   550,
     454,    48,   450,   247,   550,   251,   -45,  -321,   178,   369,
    -321,  -321,  -321,  -321,   182,  -321,  -321,  -321,   124,  -321,
    -321,  -321,   682,   209,  -321,  -321,   211,  -321,   209,   170,
    -321,  -321,  -321,   221,    -4,   209,   191,  -321,  -321,  -321,
    -321,   213,   170,   170,   550,   550,  -321,  -321,  -321,  -321,
    -321,    26,  -321,    48,  -321,  -321,  -321,  -321,  -321,   241,
     241,   550,   496,   151,   604,   616,  -321,  -321,  -321,    80,
    -321,   263,  -321,   210,   212,   148,   130,   125,  -321,   185,
    -321,  -321,   198,   204,    92,   232,   251,   279,   550,  -321,
     218,  -321,   562,  -321,  -321,  -321,   550,   236,   246,   450,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,   250,
     550,   252,   550,   145,   226,   146,    11,  -321,  -321,   224,
     270,   256,    -7,  -321,   149,   -11,  -321,  -321,   550,  -321,
    -321,   254,   240,  -321,  -321,   285,  -321,   178,  -321,  -321,
    -321,   239,   550,   -20,   238,  -321,   272,   274,   -24,    42,
    -321,  -321,   148,  -321,   326,  -321,  -321,   604,   604,   604,
     604,   604,   604,   604,   604,  -321,  -321,   450,   313,   316,
     322,  -321,  -321,   258,   450,  -321,  -321,   175,   255,   260,
    -321,  -321,  -321,   262,   262,   384,  -321,    43,  -321,    60,
     266,  -321,  -321,   138,  -321,  -321,    48,   715,  -321,   298,
     550,  -321,   344,   298,   170,   318,  -321,   278,   550,  -321,
     550,  -321,  -321,   353,   550,  -321,  -321,   550,   550,   315,
    -321,   319,  -321,   508,  -321,    -1,   130,   130,   125,   125,
    -321,  -321,  -321,  -321,   398,   335,  -321,    39,  -321,  -321,
    -321,   152,   550,  -321,   562,   170,   366,   368,   387,  -321,
     325,  -321,  -321,  -321,  -321,   256,   170,    78,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
     688,    36,  -321,   337,   304,  -321,    -2,  -321,  -321,  -321,
      28,  -321,  -321,   305,  -321,   334,   550,  -321,  -321,  -321,
    -321,  -321,  -321,   333,   317,   508,   340,   404,  -321,  -321,
      48,   268,   450,   388,  -321,  -321,  -321,   550,   550,  -321,
    -321,  -321,   256,  -321,   409,  -321,  -321,  -321,    20,   403,
     550,  -321,   414,   550,   371,   450,  -321,   338,   550,  -321,
    -321,   343,   413,   380,  -321,   420,  -321,  -321,  -321,  -321,
     349,   170,   374,   550,   354,  -321,  -321,   450,  -321,  -321,
    -321,  -321,  -321,   550,  -321,   445,  -321
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
       0,     0,     0,     0,     0,     0,   188,   241,   186,   187,
     190,     0,   218,   220,   222,   224,   227,   230,   234,   236,
     239,   134,     0,     0,   160,     0,   172,     0,     0,   171,
       0,   159,   139,   109,   112,   136,     0,     0,     0,   160,
     125,   126,   127,   128,   129,   130,   131,   132,   133,     0,
       0,     0,     0,     0,     0,     0,     0,   108,    70,    73,
      38,    68,     0,    65,     0,     0,    59,    31,     0,    53,
      52,     0,     0,    43,    44,    42,    39,     0,   189,   237,
     238,     0,     0,     0,     0,   209,     0,     0,     0,     0,
     211,   213,   223,   240,     0,   219,   221,     0,     0,     0,
       0,     0,     0,     0,     0,   135,   175,   160,     0,   177,
       0,   179,   173,     0,   160,   170,   168,    13,     0,   138,
     141,   142,   163,   165,   165,   160,   199,     0,   203,     0,
       0,     8,     7,    38,   104,   101,     0,    86,    72,     0,
       0,    66,     0,     0,    38,     0,    58,     0,     0,    28,
       0,    36,   191,     0,     0,   205,   204,     0,     0,     0,
     206,     0,   207,     0,   150,     0,   225,   226,   228,   229,
     231,   232,   233,   235,   160,     0,   178,   160,   181,   180,
     169,   160,     0,   137,     0,    38,     0,     0,     0,   200,
       0,   201,   124,   107,   106,    68,    38,     0,    92,    89,
      90,    93,    94,    91,    81,    80,    79,    83,    82,    78,
      86,    86,    75,     0,    85,    88,     0,    67,    62,    64,
       0,    57,    26,     0,    41,     0,     0,   208,   216,   217,
     210,   212,   153,     0,     0,     0,   157,     0,   149,   176,
       0,   160,   160,     0,   143,   140,   164,     0,     0,   158,
     202,   102,    68,    74,     0,    77,    76,    84,     0,     0,
       0,    60,     0,     0,   214,   160,   155,   151,     0,   152,
     147,     0,   160,     0,   161,   167,   103,    69,    87,    63,
       0,    38,    49,     0,   160,   154,   156,   160,   144,   166,
     162,    61,    51,     0,   215,   160,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -321,  -321,  -321,  -321,  -321,   434,   -87,   -16,  -321,  -321,
      94,  -321,   180,   100,  -260,   -49,  -253,   393,   264,  -321,
    -321,  -321,  -321,  -321,    77,  -321,  -321,  -321,  -321,  -321,
     261,  -321,   190,   188,  -320,  -321,  -321,  -321,  -321,   132,
    -321,  -321,   123,  -321,  -321,    81,   128,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,   435,  -321,   -53,   -77,  -321,
    -321,  -321,  -321,   -44,  -321,  -321,   162,  -321,  -321,  -321,
     179,  -321,  -321,   112,  -321,  -321,  -321,  -321,  -321,   228,
    -321,  -321,  -321,   324,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,   244,   350,  -321,   -42,  -321,  -321,   306,  -321,
    -321,  -321,   199,   200,     0,  -321,  -321,  -321,   359,    21,
      22,   -13,  -321,   126
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    13,    21,    11,    22,    78,     5,    12,
      29,    24,    35,    25,    26,    63,    27,    64,    65,    66,
     205,   281,   206,   121,   354,    67,    68,   107,   108,   195,
     196,   109,   192,   193,   271,   110,   189,   267,   268,   339,
     340,   341,   342,   343,   344,   345,    28,    38,    52,   100,
      53,   186,    98,   326,   101,    30,    31,    79,    80,    81,
     182,    82,    83,   136,   248,   249,   250,    85,   373,    86,
     294,   295,   363,   364,   365,   399,    87,    88,   169,   316,
     420,    89,   159,   160,   156,    90,    91,   238,   239,   240,
     308,   309,   241,   137,   138,   139,   259,   140,   213,   218,
     219,   214,   220,   221,   215,   142,   143,   144,   145,   146,
     147,   148,   149,   150
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    84,   164,    92,    96,   381,   183,   337,   111,     6,
     190,   185,   293,   117,   338,   118,    46,   275,   194,   154,
      50,   272,   115,   328,    47,    62,   389,   367,    84,   119,
      92,   329,    18,    95,    19,    84,   330,    92,   203,   328,
      20,    62,     7,   116,   331,    57,    69,   329,   161,   332,
     187,   333,   330,    58,    20,   153,    70,   120,     1,   204,
     331,   191,   406,   199,   200,   332,     2,   333,   289,   141,
     152,    59,   284,    71,   157,     8,   290,   164,   285,   208,
     337,   337,     9,    62,    72,   273,    97,   338,   338,    60,
     273,    73,    74,    61,    75,    19,    62,    62,   390,    69,
      33,    20,   264,    15,    76,    23,   265,   207,   194,    70,
      84,    32,    92,    33,   201,   202,   255,  -182,    43,   391,
      15,    17,   237,    42,    10,    84,    71,    92,    36,    44,
      77,   211,    16,   370,   291,   284,    37,    72,    17,   103,
      45,   319,   292,    42,    73,    74,    18,    75,    19,    58,
      40,    41,   320,   104,    20,    39,    58,    76,   245,    69,
     321,   166,   251,    18,   167,    19,   252,    59,    51,    70,
      49,    20,    47,   383,    59,   168,   179,   180,   164,   181,
    -146,   105,   260,    77,   304,    60,    71,   323,    58,    61,
      55,   311,    60,    84,    56,    92,    61,    72,   277,   324,
      84,  -110,    92,    33,    73,    74,    59,    75,   372,    48,
      49,    84,   283,    92,   325,   216,   217,    76,   300,   301,
     302,   303,   227,   228,    60,   350,    93,   164,    61,   231,
     232,   233,   229,   230,   164,    33,   261,    40,    40,   263,
      99,    40,   274,    77,    47,   312,    94,    62,   296,   297,
      34,   298,   299,   102,   371,   209,   210,   112,    62,   113,
      84,   155,    92,    84,   158,    92,   376,    84,   122,    92,
     347,   114,   162,   165,    20,    69,   184,   382,   353,   123,
     355,   188,   197,   198,   357,    70,   224,   358,   359,   235,
     225,   226,   234,   366,   164,   236,  -184,   242,  -184,    62,
     244,   253,    71,   124,   125,   126,    33,   127,   128,   246,
      62,   254,   374,    72,   251,   256,   258,   262,   266,   402,
      73,    74,   278,    75,    60,   164,   270,    84,    84,    92,
      92,   279,   280,    76,   282,   131,   286,   164,   132,   293,
     133,   305,   414,   287,   135,   288,   237,   307,   164,   310,
     313,    84,   314,    92,   401,   315,   394,   322,    84,    77,
      92,    69,   422,   191,   425,   366,   348,  -148,   351,   352,
      84,    70,    92,    84,   356,    92,    69,   404,   355,   216,
     369,    84,  -148,    92,   217,   377,    70,   378,    71,   380,
     410,    69,   379,   412,    18,    62,   388,   163,   416,    72,
     392,    70,   393,    71,   395,    69,    73,    74,   398,    75,
     396,   400,   318,   424,    72,    70,   403,   407,    71,    76,
      69,    73,    74,   426,    75,   409,  -185,   413,   411,    72,
      70,   415,    71,   418,    76,   419,    73,    74,   417,    75,
     421,  -145,   423,    72,    14,    77,   327,    71,   106,    76,
      73,    74,    69,    75,   269,   405,   276,    69,    72,   346,
      77,   349,    70,    76,   386,    73,    74,    70,    75,   408,
    -183,   387,   385,    54,   368,    77,   375,   397,    76,    71,
     243,   122,   317,   306,    71,   223,   257,     0,   360,    77,
      72,   361,   123,   222,     0,    72,     0,    73,    74,     0,
      75,     0,    73,    74,    77,    75,     0,     0,     0,     0,
      76,     0,     0,     0,     0,    76,   124,   125,   126,    33,
     127,   128,     0,   122,     0,     0,   129,   130,     0,     0,
       0,     0,     0,     0,   123,   122,    77,     0,     0,     0,
       0,    77,     0,     0,     0,   151,   123,   362,   131,   212,
       0,   132,     0,   133,     0,   134,     0,   135,   124,   125,
     126,    33,   127,   128,     0,     0,     0,     0,   129,   130,
     124,   125,   126,    33,   127,   128,     0,   122,     0,     0,
     129,   130,     0,     0,     0,     0,     0,     0,   123,   122,
     131,     0,     0,   132,     0,   133,     0,   134,     0,   135,
     123,     0,   131,     0,     0,   132,     0,   133,     0,   134,
       0,   135,   124,   125,   126,    33,   127,   128,     0,     0,
       0,     0,   129,   130,   124,   125,   126,   247,   127,   128,
       0,   122,     0,     0,   129,   130,     0,     0,     0,     0,
       0,     0,   123,   122,   131,     0,     0,   132,     0,   133,
       0,   134,     0,   135,   123,     0,   131,     0,     0,   132,
       0,   133,     0,   134,     0,   135,   124,   125,   126,    33,
     127,   128,     0,     0,     0,     0,   129,   130,   124,   125,
     126,    33,   127,   128,     0,     0,     0,     0,     0,     0,
       0,   328,     0,     0,     0,     0,     0,     0,   131,   329,
       0,   132,     0,   133,   330,     0,     0,   135,     0,     0,
     131,     0,   331,   132,     0,   133,   384,   332,   328,   333,
       0,     0,     0,     0,     0,     0,   329,     0,     0,     0,
     334,   330,   335,     0,   336,     0,     0,     0,     0,   331,
       0,     0,     0,     0,   332,     0,   333,    19,     0,     0,
       0,     0,   170,    20,     0,     0,     0,   334,     0,   335,
       0,   336,     0,   171,   172,   173,   174,   175,   176,   177,
       0,     0,     0,     0,    19,   178,     0,     0,   179,   180,
      20,   181
};

static const yytype_int16 yycheck[] =
{
      16,    45,    79,    45,     9,   325,    93,   267,    57,    65,
      14,    98,    13,     4,   267,     6,    32,    28,   105,    72,
      36,    28,    70,     3,    69,    41,    28,    28,    72,    20,
      72,    11,    57,    49,    59,    79,    16,    79,    12,     3,
      65,    57,    65,    91,    24,    10,     7,    11,    93,    29,
      99,    31,    16,    18,    65,    71,    17,    48,    35,    33,
      24,    65,   382,   112,   113,    29,    43,    31,    92,    69,
      70,    36,    92,    34,    74,     0,   100,   154,    98,   123,
     340,   341,    91,    99,    45,    92,    91,   340,   341,    54,
      92,    52,    53,    58,    55,    59,   112,   113,    70,     7,
      65,    65,    91,    14,    65,    11,    95,   123,   195,    17,
     154,    35,   154,    65,   114,   115,   169,    25,    24,    91,
      14,    32,    30,    23,    91,   169,    34,   169,    35,    29,
      91,   131,    26,    94,    92,    92,    65,    45,    32,     8,
      41,    98,   100,    43,    52,    53,    57,    55,    59,    18,
      92,    93,    92,    22,    65,    65,    18,    65,   158,     7,
     100,    37,   162,    57,    40,    59,   166,    36,    94,    17,
      92,    65,    69,    95,    36,    51,    96,    97,   255,    99,
      28,    50,   182,    91,   237,    54,    34,    49,    18,    58,
      23,   244,    54,   237,    65,   237,    58,    45,   198,    61,
     244,    41,   244,    65,    52,    53,    36,    55,    56,    91,
      92,   255,   212,   255,   263,    64,    65,    65,   231,   232,
     233,   234,    74,    75,    54,   274,    32,   304,    58,   104,
     105,   106,   102,   103,   311,    65,    91,    92,    92,    93,
      17,    92,    93,    91,    69,    70,    65,   263,   227,   228,
     266,   229,   230,    57,   307,   129,   130,    14,   274,    14,
     304,    14,   304,   307,    13,   307,   315,   311,    27,   311,
     270,    94,    94,    91,    65,     7,    65,   326,   278,    38,
     280,    60,    91,    70,   284,    17,    23,   287,   288,    91,
      80,    79,   107,   293,   371,    91,    28,    65,    30,   315,
      21,    65,    34,    62,    63,    64,    65,    66,    67,    91,
     326,    65,   312,    45,   314,    65,    64,    91,    94,   372,
      52,    53,    68,    55,    54,   402,    70,   371,   372,   371,
     372,    91,    47,    65,    95,    94,    98,   414,    97,    13,
      99,    28,   395,    71,   103,    71,    30,    25,   425,    91,
      95,   395,    92,   395,   370,    93,   356,    91,   402,    91,
     402,     7,   411,    65,   417,   365,    22,    13,    50,    91,
     414,    17,   414,   417,    21,   417,     7,   377,   378,    64,
      45,   425,    28,   425,    65,    19,    17,    19,    34,    64,
     390,     7,     5,   393,    57,   411,    92,    28,   398,    45,
      95,    17,    68,    34,    71,     7,    52,    53,    68,    55,
      93,     7,    28,   413,    45,    17,    28,     8,    34,    65,
       7,    52,    53,   423,    55,    22,    28,    56,    14,    45,
      17,    93,    34,    53,    65,    15,    52,    53,    95,    55,
      91,    28,    68,    45,    10,    91,   266,    34,    55,    65,
      52,    53,     7,    55,   190,   378,   195,     7,    45,   269,
      91,   273,    17,    65,   341,    52,    53,    17,    55,   388,
      25,   343,   340,    38,   295,    91,   314,   365,    65,    34,
     156,    27,   254,   239,    34,   135,   180,    -1,   289,    91,
      45,   291,    38,   134,    -1,    45,    -1,    52,    53,    -1,
      55,    -1,    52,    53,    91,    55,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    65,    62,    63,    64,    65,
      66,    67,    -1,    27,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    27,    91,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    91,    38,    39,    94,    53,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      62,    63,    64,    65,    66,    67,    -1,    27,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    38,    27,
      94,    -1,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      38,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,   101,
      -1,   103,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    72,    73,    62,    63,    64,    65,    66,    67,
      -1,    27,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    27,    94,    -1,    -1,    97,    -1,    99,
      -1,   101,    -1,   103,    38,    -1,    94,    -1,    -1,    97,
      -1,    99,    -1,   101,    -1,   103,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    94,    11,
      -1,    97,    -1,    99,    16,    -1,    -1,   103,    -1,    -1,
      94,    -1,    24,    97,    -1,    99,    28,    29,     3,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      42,    16,    44,    -1,    46,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    31,    59,    -1,    -1,
      -1,    -1,    70,    65,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    -1,    81,    82,    83,    84,    85,    86,    87,
      -1,    -1,    -1,    -1,    59,    93,    -1,    -1,    96,    97,
      65,    99
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   109,   110,   116,    65,    65,     0,    91,
      91,   113,   117,   111,   113,    14,    26,    32,    57,    59,
      65,   112,   114,   118,   119,   121,   122,   124,   154,   118,
     163,   164,    35,    65,   115,   120,    35,    65,   155,    65,
      92,    93,   121,   118,   121,    41,   115,    69,    91,    92,
     115,    94,   156,   158,   163,    23,    65,    10,    18,    36,
      54,    58,   115,   123,   125,   126,   127,   133,   134,     7,
      17,    34,    45,    52,    53,    55,    65,    91,   115,   165,
     166,   167,   169,   170,   171,   175,   177,   184,   185,   189,
     193,   194,   203,    32,    65,   115,     9,    91,   160,    17,
     157,   162,    57,     8,    22,    50,   125,   135,   136,   139,
     143,   123,    14,    14,    94,    70,    91,     4,     6,    20,
      48,   131,    27,    38,    62,    63,    64,    66,    67,    72,
      73,    94,    97,    99,   101,   103,   171,   201,   202,   203,
     205,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    91,   212,   115,   165,    14,   192,   212,    13,   190,
     191,    93,    94,    28,   166,    91,    37,    40,    51,   186,
      70,    81,    82,    83,    84,    85,    86,    87,    93,    96,
      97,    99,   168,   114,    65,   114,   159,   123,    60,   144,
      14,    65,   140,   141,   114,   137,   138,    91,    70,   123,
     123,   212,   212,    12,    33,   128,   130,   115,   171,   221,
     221,   212,    53,   206,   209,   212,    64,    65,   207,   208,
     210,   211,   216,   201,    23,    80,    79,    74,    75,   102,
     103,   104,   105,   106,   107,    91,    91,    30,   195,   196,
     197,   200,    65,   191,    21,   212,    91,    65,   172,   173,
     174,   212,   212,    65,    65,   165,    65,   206,    64,   204,
     212,    91,    91,    93,    91,    95,    94,   145,   146,   126,
      70,   142,    28,    92,    93,    28,   138,   212,    68,    91,
      47,   129,    95,   212,    92,    98,    98,    71,    71,    92,
     100,    92,   100,    13,   178,   179,   217,   217,   218,   218,
     219,   219,   219,   219,   165,    28,   200,    25,   198,   199,
      91,   165,    70,    95,    92,    93,   187,   187,    28,    98,
      92,   100,    91,    49,    61,   123,   161,   120,     3,    11,
      16,    24,    29,    31,    42,    44,    46,   122,   124,   147,
     148,   149,   150,   151,   152,   153,   140,   212,    22,   141,
     123,    50,    91,   212,   132,   212,    21,   212,   212,   212,
     210,   211,    39,   180,   181,   182,   212,    28,   178,    45,
      94,   165,    56,   176,   212,   174,   123,    19,    19,     5,
      64,   142,   123,    95,    28,   147,   150,   154,    92,    28,
      70,    91,    95,    68,   212,    71,    93,   181,    68,   183,
       7,   115,   165,    28,   212,   132,   142,     8,   153,    22,
     212,    14,   212,    56,   165,    93,   212,    95,    53,    15,
     188,    91,   123,    68,   212,   165,   212
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   110,   111,   112,   112,   112,   113,
     113,   114,   114,   115,   115,   116,   117,   117,   118,   118,
     119,   120,   120,   121,   121,   121,   122,   122,   122,   123,
     123,   124,   124,   125,   125,   125,   126,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   131,   131,   132,
     132,   133,   133,   134,   135,   135,   135,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   142,   142,   143,
     144,   144,   145,   145,   146,   147,   147,   148,   148,   149,
     149,   149,   150,   150,   150,   151,   151,   152,   152,   153,
     153,   153,   153,   153,   153,   154,   155,   156,   156,   157,
     157,   158,   159,   159,   160,   160,   161,   161,   162,   163,
     164,   164,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   167,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   169,   169,   170,   171,   172,   172,
     173,   173,   174,   174,   175,   176,   176,   177,   178,   179,
     179,   180,   181,   181,   182,   182,   183,   183,   184,   185,
     185,   186,   186,   186,   187,   187,   188,   188,   189,   189,
     190,   191,   191,   192,   192,   193,   194,   195,   195,   195,
     196,   197,   197,   198,   199,   200,   201,   201,   201,   201,
     201,   201,   202,   202,   202,   202,   202,   202,   203,   203,
     203,   203,   204,   204,   205,   205,   205,   205,   206,   206,
     207,   207,   208,   208,   209,   209,   210,   211,   212,   213,
     213,   214,   214,   215,   215,   216,   216,   216,   217,   217,
     217,   218,   218,   218,   218,   219,   219,   220,   220,   220,
     221,   221
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
       1,     2,     1,     2,     1,     3,     3,     1,     3,     3,
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
#line 1730 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 21 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Libreria -> definicion_libreria\n"); }
#line 1736 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 25 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_programa -> programa IDENTIFICADOR ; codigo_programa\n"); }
#line 1742 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 29 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_programa -> varias_librerias cuerpo_subprograma\n"); }
#line 1748 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 35 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
#line 1754 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 36 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); }
#line 1760 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 37 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
#line 1766 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 46 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias -> varias_librerias libreria\n"); }
#line 1772 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 51 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores ->  varios_identificadores  IDENTIFICADOR\n"); }
#line 1778 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 52 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores -> IDENTIFICADOR\n"); }
#line 1784 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 56 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> IDENTIFICADOR\n"); }
#line 1790 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> IDENTIFICADOR CUATRO_PUNTOS IDENTIFICADOR\n"); }
#line 1796 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 61 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n"); }
#line 1802 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias  varias_declaraciones\n"); }
#line 1808 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 67 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias exportaciones varias_declaraciones\n"); }
#line 1814 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 1820 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 73 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones -> declaracion \n"); }
#line 1826 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 78 "simple.y" /* yacc.c:1646  */
    { printf ("  exportaciones -> EXPORTAR  varios_nombres ; \n"); }
#line 1832 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 82 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> varios_nombres ',' nombre ; \n"); }
#line 1838 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 83 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> nombre ; \n"); }
#line 1844 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 87 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_objeto \n"); }
#line 1850 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 88 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion ->  declaracion_tipo \n"); }
#line 1856 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 89 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_subprograma\n"); }
#line 1862 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 95 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores :  CONSTANTE especificacion_tipo ASIGNACION expresion ; \n"); }
#line 1868 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 96 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ;\n"); }
#line 1874 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 97 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 1880 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 101 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> nombre\n"); }
#line 1886 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 102 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
#line 1892 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 107 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
#line 1898 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 108 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
#line 1904 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 112 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_escalar\n"); }
#line 1910 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 113 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_tabla\n"); }
#line 1916 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 114 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_diccionario\n"); }
#line 1922 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 118 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar-> cero_o_uno_signo tipo_basico cero_o_uno_longitud cero_o_uno_rango\n"); }
#line 1928 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 122 "simple.y" /* yacc.c:1646  */
    { printf ("   cero_o_uno_signo -> SIGNO\n"); }
#line 1934 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 127 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_longitud -> longitud\n"); }
#line 1940 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 132 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_rango -> RANGO rango\n"); }
#line 1946 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 137 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> CORTO\n"); }
#line 1952 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 138 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> LARGO\n"); }
#line 1958 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 142 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> BOOLEANO\n"); }
#line 1964 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 143 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> CARACTER\n"); }
#line 1970 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 144 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> ENTERO\n"); }
#line 1976 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 145 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> REAL\n"); }
#line 1982 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 149 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion\n"); }
#line 1988 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 150 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion DOS_PTOS expresion\n"); }
#line 1994 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 154 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> TABLA ( expresion DOS_PTOS expresion ) DE especificacion_tipo\n"); }
#line 2000 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 155 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
#line 2006 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 159 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
#line 2012 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 163 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_registro\n"); }
#line 2018 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 164 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
#line 2024 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 165 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> clase\n"); }
#line 2030 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 169 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
#line 2036 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 173 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> varios_campos campo\n"); }
#line 2042 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 174 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> campo\n"); }
#line 2048 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 178 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ;\n"); }
#line 2054 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 179 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 2060 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 184 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION varios_campos FIN ENUMERACION\n"); }
#line 2066 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 185 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar varios_campos FIN ENUMERACION\n"); }
#line 2072 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 189 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> varios_elemento_enumeracion , elemento_enumeracion\n"); }
#line 2078 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 190 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> elemento_enumeracion\n"); }
#line 2084 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 194 "simple.y" /* yacc.c:1646  */
    { printf ("  elemento_enumeracion -> IDENTIFICADOR cero_uno_expresion\n"); }
#line 2090 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 198 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_expresion -> ASIGNACION expresion\n"); }
#line 2096 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 207 "simple.y" /* yacc.c:1646  */
    { printf ("  clase -> CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE\n"); }
#line 2102 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 211 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_ultima -> ULTIMA\n"); }
#line 2108 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 216 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_superclases -> superclases\n"); }
#line 2114 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 221 "simple.y" /* yacc.c:1646  */
    { printf ("  superclases -> ( varios_nombres ) \n"); }
#line 2120 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 226 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> componente"); }
#line 2126 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 227 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> visibilidad componente"); }
#line 2132 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 231 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> varias_declaraciones_componente declaracion_componente"); }
#line 2138 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 232 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> declaracion_componente"); }
#line 2144 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 237 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad -> PUBLICO \n"); }
#line 2150 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 238 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PROTEGIDO \n"); }
#line 2156 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 239 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PRIVADO\n"); }
#line 2162 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 243 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_tipo"); }
#line 2168 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 244 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_objeto"); }
#line 2174 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 245 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> varios_modificadores declaracion_subprograma"); }
#line 2180 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 249 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_modificadores ->  cero_modificadores varios_modificadores\n"); }
#line 2186 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 254 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores ->  varios_modificadores , modificador\n"); }
#line 2192 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 255 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores -> modificador\n"); }
#line 2198 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 260 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> CONSTRUCTOR "); }
#line 2204 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 261 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  DESTRUCTOR "); }
#line 2210 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 262 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  GENERICO "); }
#line 2216 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 263 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> ABSTRACTO "); }
#line 2222 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 264 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  ESPECIFICO "); }
#line 2228 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 265 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> FINAL"); }
#line 2234 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 273 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }
#line 2240 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 277 "simple.y" /* yacc.c:1646  */
    { printf ("  cabecera_subprograma -> IDENTIFICADOR cero_uno_parametrizacion cero_uno_tipoResultado\n"); }
#line 2246 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 281 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_parametrizacion -> parametrizacion\n"); }
#line 2252 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 286 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_tipoResultado -> tipo_resultado\n"); }
#line 2258 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 291 "simple.y" /* yacc.c:1646  */
    { printf ("parametrizacion -> ( varias_declaraciones_parametros declaracion_parametros ) \n"); }
#line 2264 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 295 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo cero_uno_expresion"); }
#line 2270 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 296 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo cero_uno_expresion"); }
#line 2276 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 300 "simple.y" /* yacc.c:1646  */
    {printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros ;\n");}
#line 2282 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 305 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> VALOR\n"); }
#line 2288 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 306 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> REFERENCIA\n"); }
#line 2294 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 310 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
#line 2300 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 315 "simple.y" /* yacc.c:1646  */
    { printf ("  cuerpo_subprograma -> cero_o_mas_declaraciones PRINCIPIO varias_instrucciones FIN"); }
#line 2306 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 319 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 2312 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 324 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> varias_instrucciones  instruccion\n"); }
#line 2318 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 325 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> instruccion\n"); }
#line 2324 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 333 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_asignacion\n"); }
#line 2330 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 334 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_devolver\n"); }
#line 2336 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 335 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_llamada\n"); }
#line 2342 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 336 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_si\n"); }
#line 2348 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 337 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_casos\n"); }
#line 2354 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 338 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_bucle\n"); }
#line 2360 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 339 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_interrupcion\n"); }
#line 2366 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 340 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_lanzamiento_excepcion\n"); }
#line 2372 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 341 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_captura_excepcion\n"); }
#line 2378 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 342 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> ;\n"); }
#line 2384 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 347 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_asignacion -> objeto op_asignacion expresion;"); }
#line 2390 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 351 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIGNACION"); }
#line 2396 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 352 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_SUMA"); }
#line 2402 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 353 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> :- "); }
#line 2408 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 354 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_MULT"); }
#line 2414 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 355 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DIV"); }
#line 2420 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 356 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_RESTO"); }
#line 2426 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 357 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_POT"); }
#line 2432 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 358 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DESPI"); }
#line 2438 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 359 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> :"); }
#line 2444 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 364 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER ;\n"); }
#line 2450 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 365 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER expresion ;\n"); }
#line 2456 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 369 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_llamada ->  llamada_subprograma ;\n"); }
#line 2462 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 373 "simple.y" /* yacc.c:1646  */
    { printf ("llamada_subprograma ->  nombre ( varias_definicion_parametro )\n"); }
#line 2468 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 377 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_definicion_parametro ->  varias_definicion_parametro\n"); }
#line 2474 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 382 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_definicion_parametro ->  varias_definicion_parametro ',' definicion_parametro\n"); }
#line 2480 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 383 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_definicion_parametro -> definicion_parametro\n"); }
#line 2486 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 387 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  expresion\n"); }
#line 2492 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 388 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  IDENTIFICADOR ASIGNACION expresion\n"); }
#line 2498 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 392 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_si ->  SI expresion ENTONCES varias_instrucciones cero_mas_instrucciones FIN SI\n"); }
#line 2504 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 396 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_instrucciones ->  SINO varias_instrucciones\n"); }
#line 2510 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 401 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_casos ->  CASOS expresion ES uno_o_mas_casos FIN CASOS\n"); }
#line 2516 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 405 "simple.y" /* yacc.c:1646  */
    { printf ("caso ->  CUANDO entradas => varias_instrucciones\n"); }
#line 2522 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 409 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  uno_o_mas_casos caso\n"); }
#line 2528 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 410 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  caso\n"); }
#line 2534 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 414 "simple.y" /* yacc.c:1646  */
    { printf ("entradas ->  varias_entradas entrada\n"); }
#line 2540 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 419 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  expresion cero_mas_expresiones1 OTRO\n"); }
#line 2546 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 420 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  OTRO\n"); }
#line 2552 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 424 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  varias_entradas entrada :\n"); }
#line 2558 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 425 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  entrada :\n"); }
#line 2564 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 429 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_expresiones1 -> DOS_PTOS expresion\n"); }
#line 2570 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 435 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_bucle -> cero_mas_identificador1 clausula_iteracion varias_instrucciones FIN BUCLE\n");}
#line 2576 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 439 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_identificador1 -> IDENTIFICADOR :\n"); }
#line 2582 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 444 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  PARA IDENTIFICADOR cero_o_uno_especificacion_tipo  EN expresion\n");}
#line 2588 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 445 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  REPETIR IDENTIFICADOR cero_o_uno_especificacion_tipo EN rango cero_o_uno_descendente\n");}
#line 2594 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 446 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  MIENTRAS expresion\n");}
#line 2600 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 450 "simple.y" /* yacc.c:1646  */
    { printf ("cero_o_uno_especificacion_tipo -> : especificacion_tipo \n"); }
#line 2606 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 455 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_descendete -> DESCENDENTE\n");}
#line 2612 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 462 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SIGUIENTE cero_o_uno_cuando ;\n");}
#line 2618 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 463 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SALIR cero_o_uno_de_identificador cero_o_uno_cuando ;\n");}
#line 2624 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 468 "simple.y" /* yacc.c:1646  */
    { printf ("cuando ->CUANDO expresion"); }
#line 2630 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 472 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_cuando -> cuando\n");}
#line 2636 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 477 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_de_identificador -> DE IDENTIFICADOR\n");}
#line 2642 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 482 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_lanzamiento_excepcion ->LANZA nombre ;"); }
#line 2648 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 486 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_captura_excepcion ->PRUEBA varias_instrucciones clausulas FIN PRUEBA"); }
#line 2654 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 490 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion\n"); }
#line 2660 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 491 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
#line 2666 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 492 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausula_finalmente\n"); }
#line 2672 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 497 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion ->varias_clausula_excepcion_especifica clausula_excepcion_general "); }
#line 2678 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 501 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausula_excepcion_especifica ->varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); }
#line 2684 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 506 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion_especifica -> EXCEPCION ( nombre ) varias_instrucciones "); }
#line 2690 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 510 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_excepcion_general ->EXCEPCION varias_instruccion"); }
#line 2696 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 514 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_finalmente ->FINALMENTE varias_instrucciones"); }
#line 2702 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 521 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> literal\n"); }
#line 2708 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 522 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> objeto\n"); }
#line 2714 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 523 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> llamada_subprograma\n"); }
#line 2720 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 524 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> OBJETO llamada_subprograma\n"); }
#line 2726 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 525 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> enumeraciones\n"); }
#line 2732 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 526 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> ( expresion )\n"); }
#line 2738 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 530 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> VERDADERO\n"); }
#line 2744 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 531 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> FALSO\n"); }
#line 2750 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 532 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_ENTERA\n"); }
#line 2756 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 533 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_REAL\n"); }
#line 2762 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 534 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CARACTER\n"); }
#line 2768 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 535 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CADENA\n"); }
#line 2774 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 539 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> nombre\n"); }
#line 2780 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 540 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto .  IDENTIFICADOR\n"); }
#line 2786 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 541 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto [ expresion ]\n"); }
#line 2792 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 542 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto { varias_ctc_cadena }\n"); }
#line 2798 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 547 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> varias_ctc_cadena , CTC_CADENA\n"); }
#line 2804 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 548 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> CTC_CADENA\n"); }
#line 2810 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 552 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion_condicional varias_clausulas_iteracion ]\n"); }
#line 2816 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 553 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion ]\n"); }
#line 2822 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 554 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> { varias_clave_valor }\n"); }
#line 2828 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 555 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> { varias_campo_valor }\n"); }
#line 2834 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 566 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones ->  varias_expresiones , expresion\n"); }
#line 2840 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 567 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones -> expresion\n"); }
#line 2846 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 571 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> varias_clave_valor , clave_valor\n"); }
#line 2852 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 572 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> clave_valor\n"); }
#line 2858 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 576 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> varias_campo_valor , campo_valor\n"); }
#line 2864 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 577 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> campo_valor\n"); }
#line 2870 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 583 "simple.y" /* yacc.c:1646  */
    { printf ("  expresion_condicional -> SI expresion ENTONCES expresion\n"); }
#line 2876 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 584 "simple.y" /* yacc.c:1646  */
    { printf ("  expresion_condicional -> SI expresion ENTONCES expresion SINO expresion\n"); }
#line 2882 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 589 "simple.y" /* yacc.c:1646  */
    { printf ("  clave_valor -> CTC_CADENA FLECHA expresion\n"); }
#line 2888 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 593 "simple.y" /* yacc.c:1646  */
    { printf ("  campo_valor -> IDENTIFICADOR FLECHA expresion\n"); }
#line 2894 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 600 "simple.y" /* yacc.c:1646  */
    { printf("  expresion ->  operadorOR\n"); }
#line 2900 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 603 "simple.y" /* yacc.c:1646  */
    { printf("  operadorOR ->  operadorOR OR operadorAND\n"); }
#line 2906 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 607 "simple.y" /* yacc.c:1646  */
    { printf("  operadorAND ->  operadorAND AND operadorNEG\n"); }
#line 2912 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 611 "simple.y" /* yacc.c:1646  */
    { printf("  operadorNEG -> operadorASIG ~\n"); }
#line 2918 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 627 "simple.y" /* yacc.c:1646  */
    { printf("  operadorDES ->  operadorDES DESPI operadorSR\n"); }
#line 2924 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 628 "simple.y" /* yacc.c:1646  */
    { printf("  operadorDES ->  operadorDES DESPD operadorSR\n"); }
#line 2930 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 633 "simple.y" /* yacc.c:1646  */
    { printf("  operadorSR ->  operadorSR '+' operadorMDM\n"); }
#line 2936 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 634 "simple.y" /* yacc.c:1646  */
    { printf("  operadorSR ->  operadorSR '-' operadorMDM\n"); }
#line 2942 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 639 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '*' operadorPOT\n"); }
#line 2948 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 640 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '/' operadorPOT\n"); }
#line 2954 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 641 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '\\' operadorPOT\n"); }
#line 2960 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 646 "simple.y" /* yacc.c:1646  */
    { printf("  operadorPOT ->  operadorINCDEC '^' operadorPOT\n"); }
#line 2966 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 652 "simple.y" /* yacc.c:1646  */
    { printf("  operadorINCDEC ->   INC operadorUN\n"); }
#line 2972 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 653 "simple.y" /* yacc.c:1646  */
    { printf("  operadorINCDEC ->  DEC operadorUN\n"); }
#line 2978 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 659 "simple.y" /* yacc.c:1646  */
    { printf("  operadorUN -> - primario \n"); }
#line 2984 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 660 "simple.y" /* yacc.c:1646  */
    { printf("  operadorUN -> primario \n"); }
#line 2990 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 2994 "simple.tab.c" /* yacc.c:1646  */
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
