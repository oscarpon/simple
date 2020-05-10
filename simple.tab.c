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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   800

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  117
/* YYNRULES -- Number of rules.  */
#define YYNRULES  254
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  433

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
       0,    31,    31,    32,    36,    40,    46,    47,    48,    54,
      55,    62,    63,    67,    68,    75,    80,    81,    86,    87,
      92,    96,    97,   101,   102,   103,   109,   110,   111,   115,
     116,   121,   122,   126,   127,   128,   132,   136,   137,   141,
     142,   146,   147,   151,   152,   156,   157,   158,   159,   163,
     164,   168,   169,   173,   177,   178,   179,   183,   187,   188,
     192,   193,   198,   199,   203,   204,   208,   212,   213,   221,
     225,   226,   230,   231,   235,   240,   241,   245,   246,   251,
     252,   253,   257,   258,   259,   263,   264,   268,   269,   274,
     275,   276,   277,   278,   279,   287,   291,   295,   296,   300,
     301,   305,   309,   310,   314,   315,   319,   320,   324,   329,
     333,   334,   338,   339,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   361,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   378,   379,   383,   387,   391,   392,
     396,   397,   401,   402,   406,   410,   411,   415,   419,   423,
     424,   428,   433,   434,   438,   439,   443,   444,   449,   453,
     454,   458,   459,   460,   464,   465,   469,   470,   476,   477,
     482,   486,   487,   491,   492,   496,   500,   504,   505,   506,
     511,   515,   516,   520,   524,   528,   537,   538,   545,   546,
     547,   548,   549,   550,   554,   555,   556,   557,   558,   559,
     563,   564,   565,   566,   571,   572,   576,   577,   581,   582,
     583,   584,   585,   590,   591,   595,   596,   600,   601,   609,
     610,   616,   620,   627,   631,   632,   635,   636,   639,   640,
     644,   645,   646,   647,   648,   649,   650,   654,   655,   656,
     660,   661,   662,   666,   667,   668,   669,   674,   675,   680,
     681,   687,   688,   693,   694
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
  "clausula_excepcion_general", "clausula_finalmente", "expresion_posfija",
  "primario", "literal", "objeto", "varias_ctc_cadena",
  "varias_clausulas_iteracion", "enumeraciones", "varias_expresiones",
  "varias_clave_valor", "varias_campo_valor", "expresion_condicional",
  "clave_valor", "campo_valor", "expresion", "operadorOR", "operadorAND",
  "operadorNEG", "operadorASIG", "operadorDES", "operadorSR",
  "operadorMDS", "expresion_potencia", "operadorINCDEC", "operadorUN", YY_NULLPTR
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

#define YYPACT_NINF -317

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-317)))

#define YYTABLE_NINF -186

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      86,   -34,    15,   116,  -317,  -317,   -81,    26,  -317,  -317,
    -317,   194,  -317,  -317,   178,    92,    96,   143,   115,   120,
    -317,  -317,    49,   132,   132,  -317,  -317,  -317,  -317,   132,
    -317,   152,    96,  -317,   137,     4,    96,    88,   132,   176,
     148,    19,  -317,   132,   189,   660,   -18,   169,  -317,    96,
      -8,  -317,   219,  -317,   181,   484,  -317,    -1,   236,   238,
    -317,   158,   137,     2,  -317,  -317,   112,  -317,  -317,   392,
       3,    96,   660,   253,   392,   258,   173,  -317,    54,   570,
    -317,  -317,  -317,  -317,   179,  -317,  -317,  -317,   174,  -317,
    -317,  -317,   692,   212,  -317,   137,   223,  -317,   212,    -1,
    -317,  -317,  -317,   230,    25,   212,   192,  -317,  -317,  -317,
    -317,   225,    -1,    -1,   392,   392,  -317,  -317,  -317,  -317,
    -317,     9,   110,  -317,    96,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,   460,   392,   220,   106,  -317,   200,  -317,  -317,
     124,  -317,   276,  -317,   221,   224,  -317,   350,   121,   130,
     145,   298,   172,  -317,   205,   -47,   336,   241,   258,   289,
     392,  -317,   213,  -317,   412,  -317,  -317,  -317,   392,   249,
     250,   660,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,   254,   392,   256,   392,   149,   222,   155,    65,  -317,
    -317,   216,   272,   259,   -26,  -317,   161,    -5,  -317,  -317,
     392,  -317,  -317,   260,   235,  -317,  -317,   291,  -317,  -317,
      54,  -317,  -317,   233,   392,   -50,     7,  -317,   269,   273,
      30,    31,  -317,  -317,   460,   332,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,    79,  -317,  -317,  -317,   660,   319,   318,   324,  -317,
    -317,   251,   660,  -317,  -317,   282,   252,   257,  -317,  -317,
    -317,   263,   263,   579,  -317,    -6,  -317,    51,   261,  -317,
    -317,   104,  -317,  -317,    96,   723,  -317,   293,   392,  -317,
     346,   293,    -1,   323,  -317,   270,   392,  -317,   392,  -317,
    -317,   353,   392,  -317,  -317,  -317,     8,   392,   392,   313,
    -317,   315,  -317,  -317,   344,  -317,    -2,  -317,   609,   340,
    -317,   102,  -317,  -317,  -317,   501,   392,  -317,   412,    -1,
     373,   374,   391,  -317,   333,  -317,  -317,  -317,  -317,   259,
      -1,    63,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,   707,   265,  -317,   341,   299,  -317,
     -22,  -317,  -317,  -317,    29,  -317,  -317,   301,  -317,   337,
     392,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,   342,
     311,   344,   352,   414,  -317,  -317,    96,   530,   660,   394,
    -317,  -317,  -317,   392,   392,  -317,  -317,  -317,   259,  -317,
     416,  -317,  -317,  -317,   480,   403,   392,  -317,   415,   392,
     375,   660,  -317,   331,   392,  -317,  -317,   -65,   631,   381,
    -317,   421,  -317,  -317,  -317,  -317,   338,    -1,   376,   392,
     556,  -317,  -317,   660,  -317,  -317,  -317,  -317,  -317,   392,
    -317,   646,  -317
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
       0,     0,   160,   174,     0,   172,    10,   123,   200,   160,
     113,   114,   115,   116,     0,   117,   118,   119,     0,   120,
     121,   122,     0,     0,     9,    21,     0,     6,     0,    38,
      96,    99,    95,    71,     0,     0,     0,    32,    54,    55,
      56,     0,    38,    38,     0,     0,    27,    45,    46,    47,
      48,    40,     0,   195,     0,   194,   198,   199,   196,   197,
     251,   252,     0,     0,     0,     0,   190,   247,   254,   188,
     189,   192,     0,   223,   225,   227,   229,   236,   239,   242,
     246,   249,   186,   134,     0,     0,   160,     0,   172,     0,
       0,   171,     0,   159,   139,   109,   112,   136,     0,     0,
       0,   160,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,     0,     0,     0,     0,     0,     0,     0,   108,
      70,    73,    38,    68,     0,    65,     0,     0,    59,    31,
       0,    53,    52,     0,     0,    43,    44,    42,    39,   253,
       0,   191,   228,     0,     0,     0,     0,   214,     0,     0,
       0,     0,   216,   218,     0,     0,   224,   226,   232,   233,
     235,   230,   231,   234,   237,   238,   240,   241,   243,   244,
     245,     0,   187,   135,   175,   160,     0,   177,     0,   179,
     173,     0,   160,   170,   168,    10,     0,   138,   141,   142,
     163,   165,   165,   160,   201,     0,   205,     0,     0,     8,
       7,    38,   104,   101,     0,    86,    72,     0,     0,    66,
       0,     0,    38,     0,    58,     0,     0,    28,     0,    36,
     193,     0,     0,   210,   208,   207,     0,     0,     0,     0,
     211,     0,   212,   248,     0,   150,     0,   250,   160,     0,
     178,   160,   181,   180,   169,   160,     0,   137,     0,    38,
       0,     0,     0,   202,     0,   203,   124,   107,   106,    68,
      38,     0,    92,    89,    90,    93,    94,    91,    81,    80,
      79,    83,    82,    78,    86,    86,    75,     0,    85,    88,
       0,    67,    62,    64,     0,    57,    26,     0,    41,     0,
       0,   213,   209,   206,   221,   222,   215,   217,   153,     0,
       0,     0,   157,     0,   149,   176,     0,   160,   160,     0,
     143,   140,   164,     0,     0,   158,   204,   102,    68,    74,
       0,    77,    76,    84,     0,     0,     0,    60,     0,     0,
     219,   160,   155,   151,     0,   152,   147,     0,   160,     0,
     161,   167,   103,    69,    87,    63,     0,    38,    49,     0,
     160,   154,   156,   160,   144,   166,   162,    61,    51,     0,
     220,   160,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -317,  -317,  -317,  -317,  -317,   -16,   434,   -84,  -317,  -317,
      23,  -317,   180,   160,  -258,   -49,  -246,   393,   275,  -317,
    -317,  -317,  -317,  -317,    62,  -317,  -317,  -317,  -317,  -317,
     264,  -317,   185,   183,  -316,  -317,  -317,  -317,  -317,   109,
    -317,  -317,   123,  -317,  -317,    75,   125,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,   432,  -317,   -46,   -68,  -317,
    -317,  -317,  -317,   -44,  -317,  -317,   153,  -317,  -317,  -317,
     167,  -317,  -317,   103,  -317,  -317,  -317,  -317,  -212,   227,
    -317,  -317,  -317,   325,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,   234,  -317,   365,  -317,   -35,  -317,  -317,  -317,
     308,  -317,  -317,  -317,   195,   190,    20,  -317,  -317,  -317,
     364,  -317,  -317,  -317,   277,   354,   267
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    13,    21,    78,    11,    22,     5,    12,
      29,    24,    35,    25,    26,    63,    27,    64,    65,    66,
     207,   289,   208,   121,   358,    67,    68,   107,   108,   197,
     198,   109,   194,   195,   279,   110,   191,   275,   276,   343,
     344,   345,   346,   347,   348,   349,    28,    38,    52,   100,
      53,   188,    98,   330,   101,    30,    31,    79,    80,    81,
     184,    82,    83,   136,   256,   257,   258,    85,   379,    86,
     305,   306,   369,   370,   371,   405,    87,    88,   171,   320,
     426,    89,   161,   162,   158,    90,    91,   246,   247,   248,
     312,   313,   249,   137,   138,   139,   140,   267,   296,   141,
     215,   220,   221,   216,   222,   223,   217,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    84,    96,   280,   295,    47,   122,   395,   111,   185,
      92,   166,   304,   387,   187,    93,    46,   341,    58,     9,
      50,   196,   205,    47,   283,    62,   156,   373,    84,   342,
      57,   123,     6,    95,    23,    84,    59,    92,    58,   423,
     192,    62,   124,   206,    92,   168,   168,    43,   169,   169,
     189,   292,    47,   244,    60,   155,    59,   293,    61,   170,
     170,    20,    47,   201,   202,    33,   125,   126,   127,    33,
     128,   129,   412,   115,    60,   281,   130,   131,    61,   281,
     211,     7,   122,    62,   363,    33,   341,   341,   166,   142,
     154,   193,    97,   132,   159,   292,    62,    62,   342,   342,
     396,   323,   116,   153,    48,    49,   133,   123,   210,   134,
      69,   135,    84,   196,   294,   362,     8,   117,   124,   118,
      70,    92,     1,    58,    47,   263,    10,    84,    32,   397,
       2,   299,   301,   119,   203,   204,    92,    71,   123,   300,
     302,    59,   125,   126,   127,    33,   128,   129,    72,   124,
      40,    41,   324,   213,   327,    73,    74,   164,    75,    60,
     325,   120,    33,    61,    49,   272,   328,   389,    76,   273,
      33,   218,   219,   125,   126,   127,    33,   128,   129,    36,
     253,    37,   133,    42,   259,   134,    39,   135,   260,    44,
      18,    51,    19,    15,    45,   166,   234,   235,    20,   308,
      55,    84,    77,    42,   268,   376,   315,    47,    84,    15,
      92,    17,   168,   133,    56,   169,   134,    92,   135,    84,
     285,    16,   329,   122,   236,   237,   170,    17,    92,   181,
     182,  -110,   183,   354,   291,    94,    18,    99,    19,   102,
     166,   238,   239,   240,    20,   130,   131,   166,   123,   269,
      40,   112,    18,   113,    19,    62,    40,   271,    34,   124,
      20,   114,    40,   282,    84,   377,    62,    84,   157,   332,
     382,    84,   160,    92,   214,   163,    92,   333,    20,   167,
      92,   388,   334,   125,   126,   127,    33,   128,   129,   186,
     335,   190,   199,   130,   131,   336,   200,   337,   351,   224,
     225,   241,   226,    62,   227,   243,   357,   250,   359,   166,
     132,   252,   361,   254,    62,   261,   262,   364,   365,   274,
     264,   266,   270,   133,   372,    19,   134,    60,   135,   286,
     278,    20,   408,    84,    84,   287,   380,   290,   259,   288,
     166,   297,    92,    92,    69,   298,   304,   122,   309,   245,
     311,   314,   166,   316,    70,   420,   317,    84,   318,   193,
     407,   326,  -182,   166,    84,   319,    92,   245,   428,   352,
     356,    71,   123,    92,   355,   360,    84,   431,   218,    84,
     400,   219,    72,   124,   368,    92,   375,    84,    92,    73,
      74,   372,    75,   383,   384,   122,    92,   385,   386,    18,
     394,    62,    76,   410,   359,   398,   399,   125,   126,   127,
      33,   128,   129,   402,   401,   122,   416,   130,   131,   418,
     123,   404,   406,   409,   422,   413,   415,   228,   229,   230,
     417,   124,   419,   421,   132,   424,    77,   425,   427,   430,
     123,   231,   232,   233,    14,   429,   411,   133,   106,   432,
     134,   124,   135,   391,   331,   125,   126,   127,    33,   128,
     129,   284,   350,   122,   353,   130,   131,   277,   392,   414,
      54,   381,   393,   374,   403,   125,   126,   127,   255,   128,
     129,   310,   132,   251,   332,   130,   131,   209,   123,   321,
     265,   367,   333,   103,   366,   133,   212,   334,   134,   124,
     135,   303,   132,    58,     0,   335,   242,   104,   307,    69,
     336,     0,   337,     0,     0,   133,     0,     0,   134,    70,
     135,    59,     0,   125,   126,   127,    33,   128,   129,     0,
    -146,     0,     0,   130,   131,   105,    71,     0,    69,    60,
       0,     0,     0,    61,     0,     0,     0,    72,    70,     0,
       0,     0,     0,     0,    73,    74,     0,    75,   378,  -184,
       0,  -184,     0,   133,    69,    71,   134,    76,   135,     0,
    -148,     0,     0,     0,    70,     0,    72,     0,    69,     0,
       0,     0,     0,    73,    74,  -148,    75,    69,    70,     0,
       0,    71,     0,     0,     0,     0,    76,    70,     0,   165,
       0,    77,    72,     0,     0,    71,     0,     0,   322,    73,
      74,     0,    75,     0,    71,     0,    72,    69,     0,     0,
       0,     0,    76,    73,    74,    72,    75,    70,     0,     0,
      77,     0,    73,    74,     0,    75,    76,     0,  -185,    69,
       0,     0,     0,     0,    71,    76,     0,     0,     0,    70,
       0,     0,     0,     0,    69,    72,    77,     0,     0,     0,
    -145,     0,    73,    74,    70,    75,    71,     0,    69,     0,
      77,     0,  -183,     0,     0,    76,     0,    72,    70,    77,
       0,    71,     0,     0,    73,    74,     0,    75,     0,     0,
       0,     0,    72,     0,     0,    71,     0,    76,     0,    73,
      74,     0,    75,     0,     0,     0,    72,     0,     0,    77,
       0,   332,    76,    73,    74,     0,    75,     0,     0,   333,
       0,     0,     0,     0,   334,     0,    76,   332,     0,     0,
       0,    77,   335,     0,     0,   333,   390,   336,     0,   337,
     334,     0,     0,     0,     0,     0,    77,     0,   335,     0,
     338,     0,   339,   336,   340,   337,     0,     0,     0,     0,
      77,     0,     0,   172,     0,     0,   338,    19,   339,     0,
     340,     0,     0,    20,   173,   174,   175,   176,   177,   178,
     179,   180,     0,    19,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,   181,   182,     0,
     183
};

static const yytype_int16 yycheck[] =
{
      16,    45,    10,    29,   216,    70,     3,    29,    57,    93,
      45,    79,    14,   329,    98,    33,    32,   275,    19,   100,
      36,   105,    13,    70,    29,    41,    72,    29,    72,   275,
      11,    28,    66,    49,    11,    79,    37,    72,    19,   104,
      15,    57,    39,    34,    79,    38,    38,    24,    41,    41,
      99,   101,    70,   100,    55,    71,    37,   107,    59,    52,
      52,    66,    70,   112,   113,    66,    63,    64,    65,    66,
      67,    68,   388,    71,    55,   101,    73,    74,    59,   101,
     124,    66,     3,    99,   296,    66,   344,   345,   156,    69,
      70,    66,   100,    90,    74,   101,   112,   113,   344,   345,
      71,   107,   100,   100,   100,   101,   103,    28,   124,   106,
       8,   108,   156,   197,   107,   107,     0,     5,    39,     7,
      18,   156,    36,    19,    70,   171,   100,   171,    36,   100,
      44,   101,   101,    21,   114,   115,   171,    35,    28,   109,
     109,    37,    63,    64,    65,    66,    67,    68,    46,    39,
     101,   102,   101,   133,    50,    53,    54,   103,    56,    55,
     109,    49,    66,    59,   101,   100,    62,   104,    66,   104,
      66,    65,    66,    63,    64,    65,    66,    67,    68,    36,
     160,    66,   103,    23,   164,   106,    66,   108,   168,    29,
      58,   103,    60,    15,    42,   263,    75,    76,    66,   245,
      24,   245,   100,    43,   184,   103,   252,    70,   252,    15,
     245,    33,    38,   103,    66,    41,   106,   252,   108,   263,
     200,    27,   271,     3,    94,    95,    52,    33,   263,   105,
     106,    42,   108,   282,   214,    66,    58,    18,    60,    58,
     308,    96,    97,    98,    66,    73,    74,   315,    28,   100,
     101,    15,    58,    15,    60,   271,   101,   102,   274,    39,
      66,   103,   101,   102,   308,   311,   282,   311,    15,     4,
     319,   315,    14,   308,    54,   102,   311,    12,    66,   100,
     315,   330,    17,    63,    64,    65,    66,    67,    68,    66,
      25,    61,   100,    73,    74,    30,    71,    32,   278,    99,
      24,     3,    81,   319,    80,   100,   286,    66,   288,   377,
      90,    22,   292,   100,   330,    66,    66,   297,   298,   103,
      66,    65,   100,   103,   304,    60,   106,    55,   108,    69,
      71,    66,   378,   377,   378,   100,   316,   104,   318,    48,
     408,    72,   377,   378,     8,    72,    14,     3,    29,    31,
      26,   100,   420,    71,    18,   401,   104,   401,   101,    66,
     376,   100,    26,   431,   408,   102,   401,    31,   417,    23,
     100,    35,    28,   408,    51,    22,   420,   423,    65,   423,
     360,    66,    46,    39,    40,   420,    46,   431,   423,    53,
      54,   371,    56,    20,    20,     3,   431,     6,    65,    58,
     101,   417,    66,   383,   384,   104,    69,    63,    64,    65,
      66,    67,    68,   102,    72,     3,   396,    73,    74,   399,
      28,    69,     8,    29,   404,     9,    23,    77,    78,    79,
      15,    39,    57,   102,    90,    54,   100,    16,   100,   419,
      28,    91,    92,    93,    10,    69,   384,   103,    55,   429,
     106,    39,   108,   344,   274,    63,    64,    65,    66,    67,
      68,   197,   277,     3,   281,    73,    74,   192,   345,   394,
      38,   318,   347,   306,   371,    63,    64,    65,    66,    67,
      68,   247,    90,   158,     4,    73,    74,   122,    28,   262,
     182,   301,    12,     9,   299,   103,   132,    17,   106,    39,
     108,   224,    90,    19,    -1,    25,   152,    23,   241,     8,
      30,    -1,    32,    -1,    -1,   103,    -1,    -1,   106,    18,
     108,    37,    -1,    63,    64,    65,    66,    67,    68,    -1,
      29,    -1,    -1,    73,    74,    51,    35,    -1,     8,    55,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    46,    18,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    56,    57,    29,
      -1,    31,    -1,   103,     8,    35,   106,    66,   108,    -1,
      14,    -1,    -1,    -1,    18,    -1,    46,    -1,     8,    -1,
      -1,    -1,    -1,    53,    54,    29,    56,     8,    18,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    66,    18,    -1,    29,
      -1,   100,    46,    -1,    -1,    35,    -1,    -1,    29,    53,
      54,    -1,    56,    -1,    35,    -1,    46,     8,    -1,    -1,
      -1,    -1,    66,    53,    54,    46,    56,    18,    -1,    -1,
     100,    -1,    53,    54,    -1,    56,    66,    -1,    29,     8,
      -1,    -1,    -1,    -1,    35,    66,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,     8,    46,   100,    -1,    -1,    -1,
      29,    -1,    53,    54,    18,    56,    35,    -1,     8,    -1,
     100,    -1,    26,    -1,    -1,    66,    -1,    46,    18,   100,
      -1,    35,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    35,    -1,    66,    -1,    53,
      54,    -1,    56,    -1,    -1,    -1,    46,    -1,    -1,   100,
      -1,     4,    66,    53,    54,    -1,    56,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    17,    -1,    66,     4,    -1,    -1,
      -1,   100,    25,    -1,    -1,    12,    29,    30,    -1,    32,
      17,    -1,    -1,    -1,    -1,    -1,   100,    -1,    25,    -1,
      43,    -1,    45,    30,    47,    32,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    71,    -1,    -1,    43,    60,    45,    -1,
      47,    -1,    -1,    66,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,    -1,
     108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    44,   111,   112,   118,    66,    66,     0,   100,
     100,   116,   119,   113,   116,    15,    27,    33,    58,    60,
      66,   114,   117,   120,   121,   123,   124,   126,   156,   120,
     165,   166,    36,    66,   115,   122,    36,    66,   157,    66,
     101,   102,   123,   120,   123,    42,   115,    70,   100,   101,
     115,   103,   158,   160,   165,    24,    66,    11,    19,    37,
      55,    59,   115,   125,   127,   128,   129,   135,   136,     8,
      18,    35,    46,    53,    54,    56,    66,   100,   115,   167,
     168,   169,   171,   172,   173,   177,   179,   186,   187,   191,
     195,   196,   206,    33,    66,   115,    10,   100,   162,    18,
     159,   164,    58,     9,    23,    51,   127,   137,   138,   141,
     145,   125,    15,    15,   103,    71,   100,     5,     7,    21,
      49,   133,     3,    28,    39,    63,    64,    65,    67,    68,
      73,    74,    90,   103,   106,   108,   173,   203,   204,   205,
     206,   209,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   100,   216,   115,   167,    15,   194,   216,
      14,   192,   193,   102,   103,    29,   168,   100,    38,    41,
      52,   188,    71,    82,    83,    84,    85,    86,    87,    88,
      89,   105,   106,   108,   170,   117,    66,   117,   161,   125,
      61,   146,    15,    66,   142,   143,   117,   139,   140,   100,
      71,   125,   125,   216,   216,    13,    34,   130,   132,   204,
     115,   173,   220,   216,    54,   210,   213,   216,    65,    66,
     211,   212,   214,   215,    99,    24,    81,    80,    77,    78,
      79,    91,    92,    93,    75,    76,    94,    95,    96,    97,
      98,     3,   225,   100,   100,    31,   197,   198,   199,   202,
      66,   193,    22,   216,   100,    66,   174,   175,   176,   216,
     216,    66,    66,   167,    66,   210,    65,   207,   216,   100,
     100,   102,   100,   104,   103,   147,   148,   128,    71,   144,
      29,   101,   102,    29,   140,   216,    69,   100,    48,   131,
     104,   216,   101,   107,   107,   188,   208,    72,    72,   101,
     109,   101,   109,   224,    14,   180,   181,   226,   167,    29,
     202,    26,   200,   201,   100,   167,    71,   104,   101,   102,
     189,   189,    29,   107,   101,   109,   100,    50,    62,   125,
     163,   122,     4,    12,    17,    25,    30,    32,    43,    45,
      47,   124,   126,   149,   150,   151,   152,   153,   154,   155,
     142,   216,    23,   143,   125,    51,   100,   216,   134,   216,
      22,   216,   107,   188,   216,   216,   214,   215,    40,   182,
     183,   184,   216,    29,   180,    46,   103,   167,    57,   178,
     216,   176,   125,    20,    20,     6,    65,   144,   125,   104,
      29,   149,   152,   156,   101,    29,    71,   100,   104,    69,
     216,    72,   102,   183,    69,   185,     8,   115,   167,    29,
     216,   134,   144,     9,   155,    23,   216,    15,   216,    57,
     167,   102,   216,   104,    54,    16,   190,   100,   125,    69,
     216,   167,   216
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   112,   113,   114,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   119,   119,   120,   120,
     121,   122,   122,   123,   123,   123,   124,   124,   124,   125,
     125,   126,   126,   127,   127,   127,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   133,   133,   134,
     134,   135,   135,   136,   137,   137,   137,   138,   139,   139,
     140,   140,   141,   141,   142,   142,   143,   144,   144,   145,
     146,   146,   147,   147,   148,   149,   149,   150,   150,   151,
     151,   151,   152,   152,   152,   153,   153,   154,   154,   155,
     155,   155,   155,   155,   155,   156,   157,   158,   158,   159,
     159,   160,   161,   161,   162,   162,   163,   163,   164,   165,
     166,   166,   167,   167,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   169,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   171,   171,   172,   173,   174,   174,
     175,   175,   176,   176,   177,   178,   178,   179,   180,   181,
     181,   182,   183,   183,   184,   184,   185,   185,   186,   187,
     187,   188,   188,   188,   189,   189,   190,   190,   191,   191,
     192,   193,   193,   194,   194,   195,   196,   197,   197,   197,
     198,   199,   199,   200,   201,   202,   203,   203,   204,   204,
     204,   204,   204,   204,   205,   205,   205,   205,   205,   205,
     206,   206,   206,   206,   207,   207,   208,   208,   209,   209,
     209,   209,   209,   210,   210,   211,   211,   212,   212,   213,
     213,   214,   215,   216,   217,   217,   218,   218,   219,   219,
     220,   220,   220,   220,   220,   220,   220,   221,   221,   221,
     222,   222,   222,   223,   223,   223,   223,   224,   224,   203,
     203,   225,   225,   226,   226
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
       2,     2,     0,     5,     2,     2,     1,     2,     1,     1,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     3,     1,     2,     1,     3,     4,
       3,     3,     3,     3,     1,     3,     1,     3,     1,     4,
       6,     3,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     2,     1,     1,     3,     1,
       3,     1,     1,     2,     1
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
#line 1739 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 32 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Libreria -> definicion_libreria\n"); }
#line 1745 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 36 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_programa -> programa IDENTIFICADOR ; codigo_programa\n"); }
#line 1751 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 40 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_programa -> varias_librerias cuerpo_subprograma\n"); }
#line 1757 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 46 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
#line 1763 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 47 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); }
#line 1769 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 48 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
#line 1775 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 54 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> nombre :: IDENTIFICADOR\n"); }
#line 1781 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 55 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> IDENTIFICADOR\n"); }
#line 1787 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 62 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias -> varias_librerias libreria\n"); }
#line 1793 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 63 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias -> EMPTY\n"); }
#line 1799 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 67 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores ->  varios_identificadores , IDENTIFICADOR\n"); }
#line 1805 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 68 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores -> IDENTIFICADOR\n"); }
#line 1811 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 75 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n"); }
#line 1817 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 80 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias  varias_declaraciones\n"); }
#line 1823 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 81 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias exportaciones varias_declaraciones\n"); }
#line 1829 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 86 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 1835 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 87 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones -> declaracion \n"); }
#line 1841 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 92 "simple.y" /* yacc.c:1646  */
    { printf ("  exportaciones -> EXPORTAR  varios_nombres ; \n"); }
#line 1847 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 96 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> varios_nombres ',' nombre ; \n"); }
#line 1853 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 97 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> nombre ; \n"); }
#line 1859 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 101 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_objeto \n"); }
#line 1865 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 102 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion ->  declaracion_tipo \n"); }
#line 1871 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 103 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_subprograma\n"); }
#line 1877 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 109 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores :  CONSTANTE especificacion_tipo ASIGNACION expresion ; \n"); }
#line 1883 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 110 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ;\n"); }
#line 1889 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 111 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 1895 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 115 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> nombre\n"); }
#line 1901 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 116 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
#line 1907 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 121 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
#line 1913 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 122 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
#line 1919 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 126 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_escalar\n"); }
#line 1925 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 127 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_tabla\n"); }
#line 1931 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 128 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_diccionario\n"); }
#line 1937 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 132 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar-> cero_o_uno_signo tipo_basico cero_o_uno_longitud cero_o_uno_rango\n"); }
#line 1943 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 136 "simple.y" /* yacc.c:1646  */
    { printf ("   cero_o_uno_signo -> SIGNO\n"); }
#line 1949 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 141 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_longitud -> longitud\n"); }
#line 1955 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 146 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_rango -> RANGO rango\n"); }
#line 1961 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 151 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> CORTO\n"); }
#line 1967 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 152 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> LARGO\n"); }
#line 1973 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 156 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> BOOLEANO\n"); }
#line 1979 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 157 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> CARACTER\n"); }
#line 1985 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 158 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> ENTERO\n"); }
#line 1991 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 159 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> REAL\n"); }
#line 1997 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 163 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion\n"); }
#line 2003 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 164 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion DOS_PTOS expresion\n"); }
#line 2009 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 168 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> TABLA ( expresion DOS_PTOS expresion ) DE especificacion_tipo\n"); }
#line 2015 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 169 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
#line 2021 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 173 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
#line 2027 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 177 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_registro\n"); }
#line 2033 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 178 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
#line 2039 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 179 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> clase\n"); }
#line 2045 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 183 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
#line 2051 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 187 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> varios_campos campo\n"); }
#line 2057 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 188 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> campo\n"); }
#line 2063 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 192 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ;\n"); }
#line 2069 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 193 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 2075 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 198 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION varios_campos FIN ENUMERACION\n"); }
#line 2081 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 199 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar varios_campos FIN ENUMERACION\n"); }
#line 2087 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 203 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> varios_elemento_enumeracion , elemento_enumeracion\n"); }
#line 2093 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 204 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> elemento_enumeracion\n"); }
#line 2099 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 208 "simple.y" /* yacc.c:1646  */
    { printf ("  elemento_enumeracion -> IDENTIFICADOR cero_uno_expresion\n"); }
#line 2105 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 212 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_expresion -> ASIGNACION expresion\n"); }
#line 2111 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 221 "simple.y" /* yacc.c:1646  */
    { printf ("  clase -> CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE\n"); }
#line 2117 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 225 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_ultima -> ULTIMA\n"); }
#line 2123 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 230 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_superclases -> superclases\n"); }
#line 2129 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 235 "simple.y" /* yacc.c:1646  */
    { printf ("  superclases -> ( varios_nombres ) \n"); }
#line 2135 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 240 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> componente"); }
#line 2141 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 241 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> visibilidad componente"); }
#line 2147 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 245 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> varias_declaraciones_componente declaracion_componente"); }
#line 2153 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 246 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> declaracion_componente"); }
#line 2159 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 251 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad -> PUBLICO \n"); }
#line 2165 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 252 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PROTEGIDO \n"); }
#line 2171 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 253 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PRIVADO\n"); }
#line 2177 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 257 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_tipo"); }
#line 2183 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 258 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_objeto"); }
#line 2189 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 259 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> varios_modificadores declaracion_subprograma"); }
#line 2195 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 263 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_modificadores ->  cero_modificadores varios_modificadores\n"); }
#line 2201 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 268 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores ->  varios_modificadores , modificador\n"); }
#line 2207 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 269 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores -> modificador\n"); }
#line 2213 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 274 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> CONSTRUCTOR "); }
#line 2219 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 275 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  DESTRUCTOR "); }
#line 2225 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 276 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  GENERICO "); }
#line 2231 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 277 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> ABSTRACTO "); }
#line 2237 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 278 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  ESPECIFICO "); }
#line 2243 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 279 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> FINAL"); }
#line 2249 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 287 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }
#line 2255 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 291 "simple.y" /* yacc.c:1646  */
    { printf ("  cabecera_subprograma -> IDENTIFICADOR cero_uno_parametrizacion cero_uno_tipoResultado\n"); }
#line 2261 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 295 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_parametrizacion -> parametrizacion\n"); }
#line 2267 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 300 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_tipoResultado -> tipo_resultado\n"); }
#line 2273 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 305 "simple.y" /* yacc.c:1646  */
    { printf ("parametrizacion -> ( varias_declaraciones_parametros declaracion_parametros ) \n"); }
#line 2279 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 309 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo cero_uno_expresion"); }
#line 2285 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 310 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo cero_uno_expresion"); }
#line 2291 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 314 "simple.y" /* yacc.c:1646  */
    {printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros ;\n");}
#line 2297 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 319 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> VALOR\n"); }
#line 2303 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 320 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> REFERENCIA\n"); }
#line 2309 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 324 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
#line 2315 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 329 "simple.y" /* yacc.c:1646  */
    { printf ("  cuerpo_subprograma -> cero_o_mas_declaraciones PRINCIPIO varias_instrucciones FIN"); }
#line 2321 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 333 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 2327 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 338 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> varias_instrucciones  instruccion\n"); }
#line 2333 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 339 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> instruccion\n"); }
#line 2339 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 347 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_asignacion\n"); }
#line 2345 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 348 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_devolver\n"); }
#line 2351 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 349 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_llamada\n"); }
#line 2357 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 350 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_si\n"); }
#line 2363 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 351 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_casos\n"); }
#line 2369 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 352 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_bucle\n"); }
#line 2375 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 353 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_interrupcion\n"); }
#line 2381 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 354 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_lanzamiento_excepcion\n"); }
#line 2387 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 355 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_captura_excepcion\n"); }
#line 2393 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 356 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> ;\n"); }
#line 2399 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 361 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_asignacion -> objeto op_asignacion expresion;"); }
#line 2405 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 365 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIGNACION"); }
#line 2411 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 366 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_SUMA"); }
#line 2417 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 367 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> :- "); }
#line 2423 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 368 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_MULT"); }
#line 2429 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 369 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DIV"); }
#line 2435 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 370 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_RESTO"); }
#line 2441 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 371 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_POT"); }
#line 2447 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 372 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DESPI"); }
#line 2453 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 373 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DESP"); }
#line 2459 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 378 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER ;\n"); }
#line 2465 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 379 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER expresion ;\n"); }
#line 2471 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 383 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_llamada ->  llamada_subprograma ;\n"); }
#line 2477 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 387 "simple.y" /* yacc.c:1646  */
    { printf ("llamada_subprograma ->  nombre ( varias_definicion_parametro )\n"); }
#line 2483 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 391 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_definicion_parametro ->  varias_definicion_parametro\n"); }
#line 2489 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 396 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_definicion_parametro ->  varias_definicion_parametro ',' definicion_parametro\n"); }
#line 2495 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 397 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_definicion_parametro -> definicion_parametro\n"); }
#line 2501 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 401 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  expresion\n"); }
#line 2507 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 402 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  IDENTIFICADOR ASIGNACION expresion\n"); }
#line 2513 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 406 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_si ->  SI expresion ENTONCES varias_instrucciones cero_mas_instrucciones FIN SI\n"); }
#line 2519 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 410 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_instrucciones ->  SINO varias_instrucciones\n"); }
#line 2525 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 415 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_casos ->  CASOS expresion ES uno_o_mas_casos FIN CASOS\n"); }
#line 2531 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 419 "simple.y" /* yacc.c:1646  */
    { printf ("caso ->  CUANDO entradas => varias_instrucciones\n"); }
#line 2537 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 423 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  uno_o_mas_casos caso\n"); }
#line 2543 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 424 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  caso\n"); }
#line 2549 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 428 "simple.y" /* yacc.c:1646  */
    { printf ("entradas ->  varias_entradas entrada\n"); }
#line 2555 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 433 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  expresion cero_mas_expresiones1 OTRO\n"); }
#line 2561 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 434 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  OTRO\n"); }
#line 2567 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 438 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  varias_entradas entrada :\n"); }
#line 2573 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 439 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  entrada :\n"); }
#line 2579 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 443 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_expresiones1 -> DOS_PTOS expresion\n"); }
#line 2585 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 449 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_bucle -> cero_mas_identificador1 clausula_iteracion varias_instrucciones FIN BUCLE\n");}
#line 2591 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 453 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_identificador1 -> IDENTIFICADOR :\n"); }
#line 2597 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 458 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  PARA IDENTIFICADOR cero_o_uno_especificacion_tipo  EN expresion\n");}
#line 2603 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 459 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  REPETIR IDENTIFICADOR cero_o_uno_especificacion_tipo EN rango cero_o_uno_descendente\n");}
#line 2609 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 460 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  MIENTRAS expresion\n");}
#line 2615 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 464 "simple.y" /* yacc.c:1646  */
    { printf ("cero_o_uno_especificacion_tipo -> : especificacion_tipo \n"); }
#line 2621 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 469 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_descendete -> DESCENDENTE\n");}
#line 2627 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 476 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SIGUIENTE cero_o_uno_cuando ;\n");}
#line 2633 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 477 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SALIR cero_o_uno_de_identificador cero_o_uno_cuando ;\n");}
#line 2639 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 482 "simple.y" /* yacc.c:1646  */
    { printf ("cuando ->CUANDO expresion"); }
#line 2645 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 486 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_cuando -> cuando\n");}
#line 2651 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 491 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_de_identificador -> DE IDENTIFICADOR\n");}
#line 2657 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 496 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_lanzamiento_excepcion ->LANZA nombre ;"); }
#line 2663 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 500 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_captura_excepcion ->PRUEBA varias_instrucciones clausulas FIN PRUEBA"); }
#line 2669 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 504 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion\n"); }
#line 2675 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 505 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
#line 2681 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 506 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausula_finalmente\n"); }
#line 2687 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 511 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion ->varias_clausula_excepcion_especifica clausula_excepcion_general "); }
#line 2693 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 515 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausula_excepcion_especifica ->varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); }
#line 2699 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 520 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion_especifica -> EXCEPCION ( nombre ) varias_instrucciones "); }
#line 2705 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 524 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_excepcion_general ->EXCEPCION varias_instruccion"); }
#line 2711 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 528 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_finalmente ->FINALMENTE varias_instrucciones"); }
#line 2717 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 537 "simple.y" /* yacc.c:1646  */
    { printf ("expresion_posfija ->operadorUN "); }
#line 2723 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 538 "simple.y" /* yacc.c:1646  */
    { printf ("expresion_posfija ->operadorUN operadorINCDEC"); }
#line 2729 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 545 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> literal\n"); }
#line 2735 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 546 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> objeto\n"); }
#line 2741 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 547 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> llamada_subprograma\n"); }
#line 2747 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 548 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> OBJETO llamada_subprograma\n"); }
#line 2753 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 549 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> enumeraciones\n"); }
#line 2759 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 550 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> ( expresion )\n"); }
#line 2765 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 554 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> VERDADERO\n"); }
#line 2771 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 555 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> FALSO\n"); }
#line 2777 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 556 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_ENTERA\n"); }
#line 2783 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 557 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_REAL\n"); }
#line 2789 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 558 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CARACTER\n"); }
#line 2795 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 559 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CADENA\n"); }
#line 2801 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 563 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> nombre\n"); }
#line 2807 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 564 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto .  IDENTIFICADOR\n"); }
#line 2813 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 565 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto [ expresion ]\n"); }
#line 2819 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 566 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto { varias_ctc_cadena }\n"); }
#line 2825 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 571 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> varias_ctc_cadena , CTC_CADENA\n"); }
#line 2831 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 572 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> CTC_CADENA\n"); }
#line 2837 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 576 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clausulas_iteracion -> varias_clausulas_iteracion  clausula_iteracion\n"); }
#line 2843 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 577 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clausulas_iteracion -> clausula_iteracion\n"); }
#line 2849 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 581 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion_condicional varias_clausulas_iteracion ]\n"); }
#line 2855 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 582 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion_condicional varias_clausulas_iteracion ]\n"); }
#line 2861 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 583 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion ]\n"); }
#line 2867 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 584 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> { varias_clave_valor }\n"); }
#line 2873 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 585 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> { varias_campo_valor }\n"); }
#line 2879 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 590 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones ->  varias_expresiones , expresion\n"); }
#line 2885 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 591 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones -> expresion\n"); }
#line 2891 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 595 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> varias_clave_valor , clave_valor\n"); }
#line 2897 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 596 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> clave_valor\n"); }
#line 2903 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 600 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> varias_campo_valor , campo_valor\n"); }
#line 2909 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 601 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> campo_valor\n"); }
#line 2915 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 609 "simple.y" /* yacc.c:1646  */
    { printf ("  expresion_condicional -> SI expresion ENTONCES expresion\n"); }
#line 2921 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 610 "simple.y" /* yacc.c:1646  */
    { printf ("  expresion_condicional -> SI expresion ENTONCES expresion SINO expresion\n"); }
#line 2927 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 616 "simple.y" /* yacc.c:1646  */
    { printf ("  clave_valor -> CTC_CADENA FLECHA expresion\n"); }
#line 2933 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 620 "simple.y" /* yacc.c:1646  */
    { printf ("  campo_valor -> IDENTIFICADOR FLECHA expresion\n"); }
#line 2939 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 627 "simple.y" /* yacc.c:1646  */
    { printf("  expresion ->  operadorOR\n"); }
#line 2945 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 631 "simple.y" /* yacc.c:1646  */
    { printf("  operadorOR ->  operadorOR OR operadorAND\n"); }
#line 2951 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 635 "simple.y" /* yacc.c:1646  */
    { printf("  operadorAND ->  operadorAND AND operadorNEG\n"); }
#line 2957 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 639 "simple.y" /* yacc.c:1646  */
    { printf("  operadorNEG -> operadorASIG ~\n"); }
#line 2963 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 644 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES '<' \n"); }
#line 2969 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 645 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES '>' \n"); }
#line 2975 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 646 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES LEQ \n"); }
#line 2981 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 647 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES CEQ \n"); }
#line 2987 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 648 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES '=' \n"); }
#line 2993 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 649 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES NEQ \n"); }
#line 2999 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 654 "simple.y" /* yacc.c:1646  */
    { printf("  operadorDES ->  operadorDES DESPI operadorSR\n"); }
#line 3005 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 655 "simple.y" /* yacc.c:1646  */
    { printf("  operadorDES ->  operadorDES DESPD operadorSR\n"); }
#line 3011 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 660 "simple.y" /* yacc.c:1646  */
    { printf("  operadorSR ->  operadorSR '+' operadorMDS\n"); }
#line 3017 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 661 "simple.y" /* yacc.c:1646  */
    { printf("  operadorSR ->  operadorSR '-' operadorMDS\n"); }
#line 3023 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 666 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDS ->  expresion_potencia '*' \n"); }
#line 3029 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 667 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDS ->  expresion_potencia '/' \n"); }
#line 3035 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 668 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDS ->  expresion_potencia '\' \n"); }
#line 3041 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 680 "simple.y" /* yacc.c:1646  */
    { printf ("expresion_posfija -> operadorINCDEC"); }
#line 3047 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 681 "simple.y" /* yacc.c:1646  */
    { printf ("expresion_posfija ->operadorINCDEC - operadorUN "); }
#line 3053 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 687 "simple.y" /* yacc.c:1646  */
    { printf("  operadorINCDEC ->   INC \n"); }
#line 3059 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 688 "simple.y" /* yacc.c:1646  */
    { printf("  operadorINCDEC ->  DEC \n"); }
#line 3065 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 693 "simple.y" /* yacc.c:1646  */
    { printf("  operadorUN -> - primario \n"); }
#line 3071 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 694 "simple.y" /* yacc.c:1646  */
    { printf("  operadorUN -> primario \n"); }
#line 3077 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 3081 "simple.tab.c" /* yacc.c:1646  */
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
#line 700 "simple.y" /* yacc.c:1906  */





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
