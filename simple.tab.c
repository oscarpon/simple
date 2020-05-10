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
#define YYLAST   768

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  117
/* YYNRULES -- Number of rules.  */
#define YYNRULES  252
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  431

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
     511,   515,   516,   520,   524,   528,   540,   541,   542,   543,
     544,   545,   549,   550,   551,   552,   553,   554,   558,   559,
     560,   561,   566,   567,   571,   572,   576,   577,   578,   579,
     580,   585,   586,   590,   591,   595,   596,   604,   605,   611,
     615,   619,   623,   624,   627,   628,   631,   632,   636,   637,
     638,   639,   640,   641,   642,   646,   647,   648,   652,   653,
     654,   658,   659,   660,   661,   666,   667,   672,   673,   679,
     680,   685,   686
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
  "clausula_excepcion_general", "clausula_finalmente", "primario",
  "literal", "objeto", "varias_ctc_cadena", "varias_clausulas_iteracion",
  "enumeraciones", "varias_expresiones", "varias_clave_valor",
  "varias_campo_valor", "expresion_condicional", "clave_valor",
  "campo_valor", "expresion", "operadorOR", "operadorAND", "operadorNEG",
  "operadorASIG", "operadorDES", "operadorSR", "operadorMDS",
  "expresion_potencia", "expresion_posfija", "operador_posfijo",
  "expresion_unaria", YY_NULLPTR
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

#define YYPACT_NINF -319

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-319)))

#define YYTABLE_NINF -186

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     106,   -53,   -42,    84,  -319,  -319,    -9,     0,  -319,  -319,
    -319,   184,  -319,  -319,   112,    30,    63,    97,    69,    86,
    -319,  -319,    66,   111,   111,  -319,  -319,  -319,  -319,   111,
    -319,   148,    63,  -319,   113,   126,    63,    51,   111,   168,
     130,   298,  -319,   111,   162,   618,    -5,   150,  -319,    63,
      -6,  -319,   200,  -319,   163,   682,  -319,   196,   215,   217,
    -319,   131,   113,    17,  -319,  -319,    25,  -319,  -319,   399,
      73,    63,   618,   238,   399,   247,   166,  -319,   -32,   548,
    -319,  -319,  -319,  -319,   164,  -319,  -319,  -319,    80,  -319,
    -319,  -319,   660,   205,  -319,   113,   211,  -319,   205,   196,
    -319,  -319,  -319,   218,     3,   205,   182,  -319,  -319,  -319,
    -319,   212,   196,   196,   399,   399,  -319,  -319,  -319,  -319,
    -319,    41,   412,  -319,    63,  -319,  -319,  -319,  -319,  -319,
    -319,  -319,    92,   399,   221,   181,  -319,  -319,  -319,    43,
    -319,   272,  -319,   219,   222,  -319,   661,   183,   179,   141,
     199,   432,  -319,  -319,   203,   -47,   493,   233,   247,   282,
     399,  -319,   208,  -319,   419,  -319,  -319,  -319,   399,   239,
     244,   618,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,
    -319,   249,   399,   248,   399,   180,   223,   189,   -73,  -319,
    -319,   216,   263,   250,   -15,  -319,   191,   -10,  -319,  -319,
     399,  -319,  -319,   253,   234,  -319,  -319,   288,  -319,  -319,
     -32,  -319,  -319,   237,   399,   -34,    -1,  -319,   265,   270,
      52,    79,  -319,  -319,   330,  -319,  -319,  -319,  -319,  -319,
    -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,
      92,  -319,  -319,  -319,   618,   317,   316,   322,  -319,  -319,
     255,   618,  -319,  -319,   278,   246,   258,  -319,  -319,  -319,
     259,   259,   563,  -319,    23,  -319,    85,   260,  -319,  -319,
     186,  -319,  -319,    63,   664,  -319,   300,   399,  -319,   344,
     300,   196,   319,  -319,   268,   399,  -319,   399,  -319,  -319,
     349,   399,  -319,  -319,  -319,     7,   399,   399,   307,  -319,
     308,  -319,   351,  -319,    -3,  -319,   577,   327,  -319,     4,
    -319,  -319,  -319,   508,   399,  -319,   419,   196,   356,   357,
     377,  -319,   320,  -319,  -319,  -319,  -319,   250,   196,   102,
    -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,
    -319,  -319,   650,   376,  -319,   324,   293,  -319,   -14,  -319,
    -319,  -319,    22,  -319,  -319,   285,  -319,   326,   399,  -319,
    -319,  -319,  -319,  -319,  -319,  -319,  -319,   325,   294,   351,
     331,   395,  -319,  -319,    63,   156,   618,   375,  -319,  -319,
    -319,   399,   399,  -319,  -319,  -319,   250,  -319,   396,  -319,
    -319,  -319,   696,   384,   399,  -319,   394,   399,   355,   618,
    -319,   311,   399,  -319,  -319,   -27,   603,   366,  -319,   405,
    -319,  -319,  -319,  -319,   328,   196,   360,   399,   534,  -319,
    -319,   618,  -319,  -319,  -319,  -319,  -319,   399,  -319,    26,
    -319
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
      48,    40,     0,   193,     0,   192,   196,   197,   194,   195,
     249,   250,     0,     0,     0,     0,   188,   252,   186,   187,
     190,     0,   221,   223,   225,   227,   234,   237,   240,   244,
     245,     0,   247,   134,     0,     0,   160,     0,   172,     0,
       0,   171,     0,   159,   139,   109,   112,   136,     0,     0,
       0,   160,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,     0,     0,     0,     0,     0,     0,     0,   108,
      70,    73,    38,    68,     0,    65,     0,     0,    59,    31,
       0,    53,    52,     0,     0,    43,    44,    42,    39,   251,
       0,   189,   226,     0,     0,     0,     0,   212,     0,     0,
       0,     0,   214,   216,     0,   222,   224,   230,   231,   233,
     228,   229,   232,   235,   236,   238,   239,   241,   242,   243,
       0,   248,   135,   175,   160,     0,   177,     0,   179,   173,
       0,   160,   170,   168,    10,     0,   138,   141,   142,   163,
     165,   165,   160,   199,     0,   203,     0,     0,     8,     7,
      38,   104,   101,     0,    86,    72,     0,     0,    66,     0,
       0,    38,     0,    58,     0,     0,    28,     0,    36,   191,
       0,     0,   208,   206,   205,     0,     0,     0,     0,   209,
       0,   210,     0,   150,     0,   246,   160,     0,   178,   160,
     181,   180,   169,   160,     0,   137,     0,    38,     0,     0,
       0,   200,     0,   201,   124,   107,   106,    68,    38,     0,
      92,    89,    90,    93,    94,    91,    81,    80,    79,    83,
      82,    78,    86,    86,    75,     0,    85,    88,     0,    67,
      62,    64,     0,    57,    26,     0,    41,     0,     0,   211,
     207,   204,   219,   220,   213,   215,   153,     0,     0,     0,
     157,     0,   149,   176,     0,   160,   160,     0,   143,   140,
     164,     0,     0,   158,   202,   102,    68,    74,     0,    77,
      76,    84,     0,     0,     0,    60,     0,     0,   217,   160,
     155,   151,     0,   152,   147,     0,   160,     0,   161,   167,
     103,    69,    87,    63,     0,    38,    49,     0,   160,   154,
     156,   160,   144,   166,   162,    61,    51,     0,   218,   160,
      50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -319,  -319,  -319,  -319,  -319,   -16,   420,   -88,  -319,  -319,
      99,  -319,   159,    82,  -253,   -50,  -227,   378,   242,  -319,
    -319,  -319,  -319,  -319,    55,  -319,  -319,  -319,  -319,  -319,
     251,  -319,   167,   165,  -318,  -319,  -319,  -319,  -319,   107,
    -319,  -319,    96,  -319,  -319,    58,   108,  -319,  -319,  -319,
    -319,  -319,  -319,  -319,  -319,   406,  -319,   -69,   -78,  -319,
    -319,  -319,  -319,   -43,  -319,  -319,   136,  -319,  -319,  -319,
     151,  -319,  -319,   100,  -319,  -319,  -319,  -319,  -210,   207,
    -319,  -319,  -319,   303,  -319,  -319,  -319,  -319,  -319,  -319,
    -319,  -319,   224,   352,  -319,   -37,  -319,  -319,  -319,   299,
    -319,  -319,  -319,   190,   194,    29,  -319,  -319,  -319,   358,
    -319,  -319,  -319,   264,  -319,  -319,   340
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    13,    21,    78,    11,    22,     5,    12,
      29,    24,    35,    25,    26,    63,    27,    64,    65,    66,
     207,   288,   208,   121,   356,    67,    68,   107,   108,   197,
     198,   109,   194,   195,   278,   110,   191,   274,   275,   341,
     342,   343,   344,   345,   346,   347,    28,    38,    52,   100,
      53,   188,    98,   328,   101,    30,    31,    79,    80,    81,
     184,    82,    83,   136,   255,   256,   257,    85,   377,    86,
     303,   304,   367,   368,   369,   403,    87,    88,   171,   318,
     424,    89,   161,   162,   158,    90,    91,   245,   246,   247,
     310,   311,   248,   137,   138,   139,   266,   295,   140,   215,
     220,   221,   216,   222,   223,   217,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,   166,    84,   156,    96,   185,   294,   111,    92,   385,
     187,   302,    69,     6,   279,   393,    46,   196,   192,   282,
      50,   339,    70,    47,     7,    62,   371,   271,    93,    84,
     117,   272,   118,    95,    69,    92,    84,   168,    47,    71,
     169,    62,    92,    47,    70,   168,   119,   340,   169,   189,
      72,   170,  -183,   243,   205,   155,    20,    73,    74,   170,
      75,    71,   201,   202,    47,    47,    32,   291,   410,   193,
      76,   164,    72,   292,   120,   206,   122,   421,   166,    73,
      74,   211,    75,    62,     8,   361,   280,   280,   115,   339,
     339,     9,    76,   394,    97,   122,    62,    62,   141,   154,
      10,   123,   262,   159,    77,    42,   293,   374,   210,   196,
      23,    44,   124,    84,   360,   340,   340,   116,   168,    92,
     123,   169,   395,    43,   291,    42,    77,    15,    84,    33,
     321,   124,   170,    36,    92,    37,   125,   126,   127,    33,
     128,   129,     1,   203,   204,    17,   130,   131,   181,   182,
       2,   183,    39,   298,    51,   125,   126,   127,    33,   128,
     129,   299,   213,   132,    69,   130,   131,    40,    41,    18,
      18,    19,    19,   153,    70,   306,   133,    20,    20,   134,
     300,   135,   313,    47,   166,  -184,   322,  -184,   301,   252,
      45,    71,    55,   258,   323,   133,    56,   259,   134,    15,
     135,    84,    72,    49,  -110,    58,   387,    92,    84,    73,
      74,    16,    75,   267,    92,    58,    94,    17,    99,    84,
     327,   102,    76,    59,   122,    92,    48,    49,   166,   284,
     112,   352,   113,    59,   114,   166,   325,   237,   238,   239,
     375,    60,    18,   290,    19,    61,   218,   219,   326,   123,
      20,    60,    33,   157,    62,    61,    77,    34,   233,   234,
     124,   160,    33,    84,   167,    62,    84,   380,   163,    92,
      84,    20,    92,   235,   236,   214,    92,   186,   386,   190,
     268,    40,   199,   200,   125,   126,   127,    33,   128,   129,
      40,   270,    40,   281,   130,   131,   224,   166,   240,   249,
     225,    62,   226,   242,   251,   260,   349,   406,   253,    57,
     261,   132,    62,   265,   355,   263,   357,    58,    60,   273,
     359,   277,   285,   269,   133,   362,   363,   134,   166,   135,
     418,   370,    84,    84,   286,    59,   287,   296,    92,    92,
     166,   289,   297,   378,   302,   258,   307,   244,   309,   314,
     315,   166,   429,    60,   122,   312,    84,    61,   405,   316,
     324,   317,    92,    84,    33,   426,   193,   350,   354,    92,
     353,   358,   218,   373,   219,    84,   381,   382,    84,   123,
     330,    92,    18,   383,    92,   384,    84,   398,   331,   396,
     124,   366,    92,   332,   392,   397,   400,   399,   370,    62,
     402,   333,   122,   404,   407,   411,   334,   413,   335,   415,
     408,   357,   417,   419,   125,   126,   127,    33,   128,   129,
     422,   423,   122,   414,   130,   131,   416,   123,   425,   427,
      14,   420,   329,   106,   276,   122,    19,   409,   124,   390,
     123,   132,    20,   348,    54,   351,   428,   123,   283,   389,
     412,   124,   379,   391,   133,   372,   430,   134,   124,   135,
     123,   250,   125,   126,   127,    33,   128,   129,   319,   401,
     308,   124,   130,   131,   209,   125,   126,   127,    33,   128,
     129,   264,   125,   126,   127,   254,   128,   129,   364,   132,
     212,   241,   130,   131,   365,   125,   126,   127,    33,   128,
     129,    69,   133,     0,   305,   134,     0,   135,     0,   132,
       0,    70,     0,     0,     0,   133,    69,     0,   134,  -182,
     135,     0,   133,     0,   244,   134,    70,   135,    71,     0,
       0,     0,     0,     0,     0,   133,     0,  -146,   134,    72,
     135,     0,    69,    71,     0,     0,    73,    74,  -148,    75,
       0,     0,    70,     0,    72,     0,    69,     0,     0,    76,
       0,    73,    74,  -148,    75,   376,    70,     0,     0,    71,
       0,    69,     0,     0,    76,     0,     0,   165,     0,     0,
      72,    70,     0,    71,     0,    69,     0,    73,    74,     0,
      75,     0,   320,    77,    72,    70,     0,     0,    71,     0,
      76,    73,    74,     0,    75,     0,  -185,     0,    77,    72,
       0,    69,    71,     0,    76,     0,    73,    74,     0,    75,
       0,    70,     0,    72,     0,     0,    69,     0,     0,    76,
      73,    74,  -145,    75,    77,     0,    70,     0,    71,     0,
       0,     0,     0,    76,     0,     0,     0,     0,    77,    72,
       0,     0,     0,    71,   330,     0,    73,    74,     0,    75,
       0,     0,   331,    77,    72,     0,     0,   332,   330,    76,
       0,    73,    74,     0,    75,   333,   331,    77,     0,   388,
     334,   332,   335,     0,    76,     0,     0,     0,     0,   333,
       0,   103,     0,   336,   334,   337,   335,   338,     0,     0,
     330,    58,     0,    77,     0,   104,     0,   336,   331,   337,
      19,   338,     0,   332,     0,     0,    20,     0,    77,    59,
       0,   333,     0,     0,    19,     0,   334,     0,   335,     0,
      20,   172,     0,   105,     0,     0,     0,    60,   227,   228,
     229,    61,   173,   174,   175,   176,   177,   178,   179,   180,
       0,     0,   230,   231,   232,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   182,     0,   183
};

static const yytype_int16 yycheck[] =
{
      16,    79,    45,    72,    10,    93,   216,    57,    45,   327,
      98,    14,     8,    66,    29,    29,    32,   105,    15,    29,
      36,   274,    18,    70,    66,    41,    29,   100,    33,    72,
       5,   104,     7,    49,     8,    72,    79,    38,    70,    35,
      41,    57,    79,    70,    18,    38,    21,   274,    41,    99,
      46,    52,    26,   100,    13,    71,    66,    53,    54,    52,
      56,    35,   112,   113,    70,    70,    36,   101,   386,    66,
      66,   103,    46,   107,    49,    34,     3,   104,   156,    53,
      54,   124,    56,    99,     0,   295,   101,   101,    71,   342,
     343,   100,    66,    71,   100,     3,   112,   113,    69,    70,
     100,    28,   171,    74,   100,    23,   107,   103,   124,   197,
      11,    29,    39,   156,   107,   342,   343,   100,    38,   156,
      28,    41,   100,    24,   101,    43,   100,    15,   171,    66,
     107,    39,    52,    36,   171,    66,    63,    64,    65,    66,
      67,    68,    36,   114,   115,    33,    73,    74,   105,   106,
      44,   108,    66,   101,   103,    63,    64,    65,    66,    67,
      68,   109,   133,    90,     8,    73,    74,   101,   102,    58,
      58,    60,    60,   100,    18,   244,   103,    66,    66,   106,
     101,   108,   251,    70,   262,    29,   101,    31,   109,   160,
      42,    35,    24,   164,   109,   103,    66,   168,   106,    15,
     108,   244,    46,   101,    42,    19,   104,   244,   251,    53,
      54,    27,    56,   184,   251,    19,    66,    33,    18,   262,
     270,    58,    66,    37,     3,   262,   100,   101,   306,   200,
      15,   281,    15,    37,   103,   313,    50,    96,    97,    98,
     309,    55,    58,   214,    60,    59,    65,    66,    62,    28,
      66,    55,    66,    15,   270,    59,   100,   273,    75,    76,
      39,    14,    66,   306,   100,   281,   309,   317,   102,   306,
     313,    66,   309,    94,    95,    54,   313,    66,   328,    61,
     100,   101,   100,    71,    63,    64,    65,    66,    67,    68,
     101,   102,   101,   102,    73,    74,    24,   375,    99,    66,
      81,   317,    80,   100,    22,    66,   277,   376,   100,    11,
      66,    90,   328,    65,   285,    66,   287,    19,    55,   103,
     291,    71,    69,   100,   103,   296,   297,   106,   406,   108,
     399,   302,   375,   376,   100,    37,    48,    72,   375,   376,
     418,   104,    72,   314,    14,   316,    29,    31,    26,    71,
     104,   429,   421,    55,     3,   100,   399,    59,   374,   101,
     100,   102,   399,   406,    66,   415,    66,    23,   100,   406,
      51,    22,    65,    46,    66,   418,    20,    20,   421,    28,
       4,   418,    58,     6,   421,    65,   429,   358,    12,   104,
      39,    40,   429,    17,   101,    69,   102,    72,   369,   415,
      69,    25,     3,     8,    29,     9,    30,    23,    32,    15,
     381,   382,    57,   102,    63,    64,    65,    66,    67,    68,
      54,    16,     3,   394,    73,    74,   397,    28,   100,    69,
      10,   402,   273,    55,   192,     3,    60,   382,    39,   343,
      28,    90,    66,   276,    38,   280,   417,    28,   197,   342,
     392,    39,   316,   345,   103,   304,   427,   106,    39,   108,
      28,   158,    63,    64,    65,    66,    67,    68,   261,   369,
     246,    39,    73,    74,   122,    63,    64,    65,    66,    67,
      68,   182,    63,    64,    65,    66,    67,    68,   298,    90,
     132,   151,    73,    74,   300,    63,    64,    65,    66,    67,
      68,     8,   103,    -1,   240,   106,    -1,   108,    -1,    90,
      -1,    18,    -1,    -1,    -1,   103,     8,    -1,   106,    26,
     108,    -1,   103,    -1,    31,   106,    18,   108,    35,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    29,   106,    46,
     108,    -1,     8,    35,    -1,    -1,    53,    54,    14,    56,
      -1,    -1,    18,    -1,    46,    -1,     8,    -1,    -1,    66,
      -1,    53,    54,    29,    56,    57,    18,    -1,    -1,    35,
      -1,     8,    -1,    -1,    66,    -1,    -1,    29,    -1,    -1,
      46,    18,    -1,    35,    -1,     8,    -1,    53,    54,    -1,
      56,    -1,    29,   100,    46,    18,    -1,    -1,    35,    -1,
      66,    53,    54,    -1,    56,    -1,    29,    -1,   100,    46,
      -1,     8,    35,    -1,    66,    -1,    53,    54,    -1,    56,
      -1,    18,    -1,    46,    -1,    -1,     8,    -1,    -1,    66,
      53,    54,    29,    56,   100,    -1,    18,    -1,    35,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,   100,    46,
      -1,    -1,    -1,    35,     4,    -1,    53,    54,    -1,    56,
      -1,    -1,    12,   100,    46,    -1,    -1,    17,     4,    66,
      -1,    53,    54,    -1,    56,    25,    12,   100,    -1,    29,
      30,    17,    32,    -1,    66,    -1,    -1,    -1,    -1,    25,
      -1,     9,    -1,    43,    30,    45,    32,    47,    -1,    -1,
       4,    19,    -1,   100,    -1,    23,    -1,    43,    12,    45,
      60,    47,    -1,    17,    -1,    -1,    66,    -1,   100,    37,
      -1,    25,    -1,    -1,    60,    -1,    30,    -1,    32,    -1,
      66,    71,    -1,    51,    -1,    -1,    -1,    55,    77,    78,
      79,    59,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    -1,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,    -1,   108
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
     195,   196,   205,    33,    66,   115,    10,   100,   162,    18,
     159,   164,    58,     9,    23,    51,   127,   137,   138,   141,
     145,   125,    15,    15,   103,    71,   100,     5,     7,    21,
      49,   133,     3,    28,    39,    63,    64,    65,    67,    68,
      73,    74,    90,   103,   106,   108,   173,   203,   204,   205,
     208,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   100,   215,   115,   167,    15,   194,   215,
      14,   192,   193,   102,   103,    29,   168,   100,    38,    41,
      52,   188,    71,    82,    83,    84,    85,    86,    87,    88,
      89,   105,   106,   108,   170,   117,    66,   117,   161,   125,
      61,   146,    15,    66,   142,   143,   117,   139,   140,   100,
      71,   125,   125,   215,   215,    13,    34,   130,   132,   203,
     115,   173,   219,   215,    54,   209,   212,   215,    65,    66,
     210,   211,   213,   214,    24,    81,    80,    77,    78,    79,
      91,    92,    93,    75,    76,    94,    95,    96,    97,    98,
      99,   226,   100,   100,    31,   197,   198,   199,   202,    66,
     193,    22,   215,   100,    66,   174,   175,   176,   215,   215,
      66,    66,   167,    66,   209,    65,   206,   215,   100,   100,
     102,   100,   104,   103,   147,   148,   128,    71,   144,    29,
     101,   102,    29,   140,   215,    69,   100,    48,   131,   104,
     215,   101,   107,   107,   188,   207,    72,    72,   101,   109,
     101,   109,    14,   180,   181,   223,   167,    29,   202,    26,
     200,   201,   100,   167,    71,   104,   101,   102,   189,   189,
      29,   107,   101,   109,   100,    50,    62,   125,   163,   122,
       4,    12,    17,    25,    30,    32,    43,    45,    47,   124,
     126,   149,   150,   151,   152,   153,   154,   155,   142,   215,
      23,   143,   125,    51,   100,   215,   134,   215,    22,   215,
     107,   188,   215,   215,   213,   214,    40,   182,   183,   184,
     215,    29,   180,    46,   103,   167,    57,   178,   215,   176,
     125,    20,    20,     6,    65,   144,   125,   104,    29,   149,
     152,   156,   101,    29,    71,   100,   104,    69,   215,    72,
     102,   183,    69,   185,     8,   115,   167,    29,   215,   134,
     144,     9,   155,    23,   215,    15,   215,    57,   167,   102,
     215,   104,    54,    16,   190,   100,   125,    69,   215,   167,
     215
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
     198,   199,   199,   200,   201,   202,   203,   203,   203,   203,
     203,   203,   204,   204,   204,   204,   204,   204,   205,   205,
     205,   205,   206,   206,   207,   207,   208,   208,   208,   208,
     208,   209,   209,   210,   210,   211,   211,   212,   212,   213,
     214,   215,   216,   216,   217,   217,   218,   218,   219,   219,
     219,   219,   219,   219,   219,   220,   220,   220,   221,   221,
     221,   222,   222,   222,   222,   223,   223,   224,   224,   225,
     225,   226,   226
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
       2,     2,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     2,     1,     1,     3,     1,     2,     1,
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
#line 31 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Programa -> definicion_programa\n"); }
#line 1732 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 32 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Libreria -> definicion_libreria\n"); }
#line 1738 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 36 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_programa -> programa IDENTIFICADOR ; codigo_programa\n"); }
#line 1744 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 40 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_programa -> varias_librerias cuerpo_subprograma\n"); }
#line 1750 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 46 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
#line 1756 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 47 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); }
#line 1762 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 48 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
#line 1768 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 54 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> nombre :: IDENTIFICADOR\n"); }
#line 1774 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 55 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> IDENTIFICADOR\n"); }
#line 1780 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 62 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias -> varias_librerias libreria\n"); }
#line 1786 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 63 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias -> EMPTY\n"); }
#line 1792 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 67 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores ->  varios_identificadores , IDENTIFICADOR\n"); }
#line 1798 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 68 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores -> IDENTIFICADOR\n"); }
#line 1804 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 75 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n"); }
#line 1810 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 80 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias  varias_declaraciones\n"); }
#line 1816 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 81 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias exportaciones varias_declaraciones\n"); }
#line 1822 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 86 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 1828 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 87 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones -> declaracion \n"); }
#line 1834 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 92 "simple.y" /* yacc.c:1646  */
    { printf ("  exportaciones -> EXPORTAR  varios_nombres ; \n"); }
#line 1840 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 96 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> varios_nombres ',' nombre ; \n"); }
#line 1846 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 97 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> nombre ; \n"); }
#line 1852 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 101 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_objeto \n"); }
#line 1858 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 102 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion ->  declaracion_tipo \n"); }
#line 1864 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 103 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_subprograma\n"); }
#line 1870 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 109 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores :  CONSTANTE especificacion_tipo ASIGNACION expresion ; \n"); }
#line 1876 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 110 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ;\n"); }
#line 1882 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 111 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 1888 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 115 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> nombre\n"); }
#line 1894 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 116 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
#line 1900 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 121 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
#line 1906 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 122 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
#line 1912 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 126 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_escalar\n"); }
#line 1918 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 127 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_tabla\n"); }
#line 1924 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 128 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_diccionario\n"); }
#line 1930 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 132 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar-> cero_o_uno_signo tipo_basico cero_o_uno_longitud cero_o_uno_rango\n"); }
#line 1936 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 136 "simple.y" /* yacc.c:1646  */
    { printf ("   cero_o_uno_signo -> SIGNO\n"); }
#line 1942 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 141 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_longitud -> longitud\n"); }
#line 1948 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 146 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_rango -> RANGO rango\n"); }
#line 1954 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 151 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> CORTO\n"); }
#line 1960 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 152 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> LARGO\n"); }
#line 1966 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 156 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> BOOLEANO\n"); }
#line 1972 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 157 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> CARACTER\n"); }
#line 1978 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 158 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> ENTERO\n"); }
#line 1984 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 159 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> REAL\n"); }
#line 1990 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 163 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion\n"); }
#line 1996 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 164 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion DOS_PTOS expresion\n"); }
#line 2002 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 168 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> TABLA ( expresion DOS_PTOS expresion ) DE especificacion_tipo\n"); }
#line 2008 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 169 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
#line 2014 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 173 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
#line 2020 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 177 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_registro\n"); }
#line 2026 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 178 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
#line 2032 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 179 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> clase\n"); }
#line 2038 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 183 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
#line 2044 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 187 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> varios_campos campo\n"); }
#line 2050 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 188 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> campo\n"); }
#line 2056 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 192 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ;\n"); }
#line 2062 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 193 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 2068 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 198 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION varios_campos FIN ENUMERACION\n"); }
#line 2074 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 199 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar varios_campos FIN ENUMERACION\n"); }
#line 2080 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 203 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> varios_elemento_enumeracion , elemento_enumeracion\n"); }
#line 2086 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 204 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> elemento_enumeracion\n"); }
#line 2092 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 208 "simple.y" /* yacc.c:1646  */
    { printf ("  elemento_enumeracion -> IDENTIFICADOR cero_uno_expresion\n"); }
#line 2098 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 212 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_expresion -> ASIGNACION expresion\n"); }
#line 2104 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 221 "simple.y" /* yacc.c:1646  */
    { printf ("  clase -> CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE\n"); }
#line 2110 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 225 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_ultima -> ULTIMA\n"); }
#line 2116 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 230 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_superclases -> superclases\n"); }
#line 2122 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 235 "simple.y" /* yacc.c:1646  */
    { printf ("  superclases -> ( varios_nombres ) \n"); }
#line 2128 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 240 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> componente"); }
#line 2134 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 241 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> visibilidad componente"); }
#line 2140 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 245 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> varias_declaraciones_componente declaracion_componente"); }
#line 2146 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 246 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> declaracion_componente"); }
#line 2152 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 251 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad -> PUBLICO \n"); }
#line 2158 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 252 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PROTEGIDO \n"); }
#line 2164 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 253 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PRIVADO\n"); }
#line 2170 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 257 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_tipo"); }
#line 2176 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 258 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_objeto"); }
#line 2182 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 259 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> varios_modificadores declaracion_subprograma"); }
#line 2188 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 263 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_modificadores ->  cero_modificadores varios_modificadores\n"); }
#line 2194 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 268 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores ->  varios_modificadores , modificador\n"); }
#line 2200 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 269 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores -> modificador\n"); }
#line 2206 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 274 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> CONSTRUCTOR "); }
#line 2212 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 275 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  DESTRUCTOR "); }
#line 2218 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 276 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  GENERICO "); }
#line 2224 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 277 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> ABSTRACTO "); }
#line 2230 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 278 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  ESPECIFICO "); }
#line 2236 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 279 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> FINAL"); }
#line 2242 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 287 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }
#line 2248 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 291 "simple.y" /* yacc.c:1646  */
    { printf ("  cabecera_subprograma -> IDENTIFICADOR cero_uno_parametrizacion cero_uno_tipoResultado\n"); }
#line 2254 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 295 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_parametrizacion -> parametrizacion\n"); }
#line 2260 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 300 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_tipoResultado -> tipo_resultado\n"); }
#line 2266 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 305 "simple.y" /* yacc.c:1646  */
    { printf ("parametrizacion -> ( varias_declaraciones_parametros declaracion_parametros ) \n"); }
#line 2272 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 309 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo cero_uno_expresion"); }
#line 2278 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 310 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo cero_uno_expresion"); }
#line 2284 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 314 "simple.y" /* yacc.c:1646  */
    {printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros ;\n");}
#line 2290 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 319 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> VALOR\n"); }
#line 2296 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 320 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> REFERENCIA\n"); }
#line 2302 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 324 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
#line 2308 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 329 "simple.y" /* yacc.c:1646  */
    { printf ("  cuerpo_subprograma -> cero_o_mas_declaraciones PRINCIPIO varias_instrucciones FIN"); }
#line 2314 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 333 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 2320 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 338 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> varias_instrucciones  instruccion\n"); }
#line 2326 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 339 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> instruccion\n"); }
#line 2332 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 347 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_asignacion\n"); }
#line 2338 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 348 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_devolver\n"); }
#line 2344 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 349 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_llamada\n"); }
#line 2350 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 350 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_si\n"); }
#line 2356 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 351 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_casos\n"); }
#line 2362 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 352 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_bucle\n"); }
#line 2368 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 353 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_interrupcion\n"); }
#line 2374 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 354 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_lanzamiento_excepcion\n"); }
#line 2380 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 355 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_captura_excepcion\n"); }
#line 2386 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 356 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> ;\n"); }
#line 2392 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 361 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_asignacion -> objeto op_asignacion expresion;"); }
#line 2398 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 365 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIGNACION"); }
#line 2404 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 366 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_SUMA"); }
#line 2410 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 367 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> :- "); }
#line 2416 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 368 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_MULT"); }
#line 2422 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 369 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DIV"); }
#line 2428 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 370 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_RESTO"); }
#line 2434 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 371 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_POT"); }
#line 2440 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 372 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DESPI"); }
#line 2446 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 373 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DESP"); }
#line 2452 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 378 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER ;\n"); }
#line 2458 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 379 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER expresion ;\n"); }
#line 2464 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 383 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_llamada ->  llamada_subprograma ;\n"); }
#line 2470 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 387 "simple.y" /* yacc.c:1646  */
    { printf ("llamada_subprograma ->  nombre ( varias_definicion_parametro )\n"); }
#line 2476 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 391 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_definicion_parametro ->  varias_definicion_parametro\n"); }
#line 2482 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 396 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_definicion_parametro ->  varias_definicion_parametro ',' definicion_parametro\n"); }
#line 2488 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 397 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_definicion_parametro -> definicion_parametro\n"); }
#line 2494 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 401 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  expresion\n"); }
#line 2500 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 402 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  IDENTIFICADOR ASIGNACION expresion\n"); }
#line 2506 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 406 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_si ->  SI expresion ENTONCES varias_instrucciones cero_mas_instrucciones FIN SI\n"); }
#line 2512 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 410 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_instrucciones ->  SINO varias_instrucciones\n"); }
#line 2518 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 415 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_casos ->  CASOS expresion ES uno_o_mas_casos FIN CASOS\n"); }
#line 2524 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 419 "simple.y" /* yacc.c:1646  */
    { printf ("caso ->  CUANDO entradas => varias_instrucciones\n"); }
#line 2530 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 423 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  uno_o_mas_casos caso\n"); }
#line 2536 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 424 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  caso\n"); }
#line 2542 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 428 "simple.y" /* yacc.c:1646  */
    { printf ("entradas ->  varias_entradas entrada\n"); }
#line 2548 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 433 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  expresion cero_mas_expresiones1 OTRO\n"); }
#line 2554 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 434 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  OTRO\n"); }
#line 2560 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 438 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  varias_entradas entrada :\n"); }
#line 2566 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 439 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  entrada :\n"); }
#line 2572 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 443 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_expresiones1 -> DOS_PTOS expresion\n"); }
#line 2578 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 449 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_bucle -> cero_mas_identificador1 clausula_iteracion varias_instrucciones FIN BUCLE\n");}
#line 2584 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 453 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_identificador1 -> IDENTIFICADOR :\n"); }
#line 2590 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 458 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  PARA IDENTIFICADOR cero_o_uno_especificacion_tipo  EN expresion\n");}
#line 2596 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 459 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  REPETIR IDENTIFICADOR cero_o_uno_especificacion_tipo EN rango cero_o_uno_descendente\n");}
#line 2602 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 460 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  MIENTRAS expresion\n");}
#line 2608 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 464 "simple.y" /* yacc.c:1646  */
    { printf ("cero_o_uno_especificacion_tipo -> : especificacion_tipo \n"); }
#line 2614 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 469 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_descendete -> DESCENDENTE\n");}
#line 2620 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 476 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SIGUIENTE cero_o_uno_cuando ;\n");}
#line 2626 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 477 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SALIR cero_o_uno_de_identificador cero_o_uno_cuando ;\n");}
#line 2632 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 482 "simple.y" /* yacc.c:1646  */
    { printf ("cuando ->CUANDO expresion"); }
#line 2638 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 486 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_cuando -> cuando\n");}
#line 2644 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 491 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_de_identificador -> DE IDENTIFICADOR\n");}
#line 2650 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 496 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_lanzamiento_excepcion ->LANZA nombre ;"); }
#line 2656 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 500 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_captura_excepcion ->PRUEBA varias_instrucciones clausulas FIN PRUEBA"); }
#line 2662 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 504 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion\n"); }
#line 2668 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 505 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
#line 2674 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 506 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausula_finalmente\n"); }
#line 2680 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 511 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion ->varias_clausula_excepcion_especifica clausula_excepcion_general "); }
#line 2686 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 515 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausula_excepcion_especifica ->varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); }
#line 2692 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 520 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion_especifica -> EXCEPCION ( nombre ) varias_instrucciones "); }
#line 2698 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 524 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_excepcion_general ->EXCEPCION varias_instruccion"); }
#line 2704 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 528 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_finalmente ->FINALMENTE varias_instrucciones"); }
#line 2710 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 540 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> literal\n"); }
#line 2716 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 541 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> objeto\n"); }
#line 2722 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 542 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> llamada_subprograma\n"); }
#line 2728 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 543 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> OBJETO llamada_subprograma\n"); }
#line 2734 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 544 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> enumeraciones\n"); }
#line 2740 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 545 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> ( expresion )\n"); }
#line 2746 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 549 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> VERDADERO\n"); }
#line 2752 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 550 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> FALSO\n"); }
#line 2758 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 551 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_ENTERA\n"); }
#line 2764 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 552 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_REAL\n"); }
#line 2770 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 553 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CARACTER\n"); }
#line 2776 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 554 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CADENA\n"); }
#line 2782 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 558 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> nombre\n"); }
#line 2788 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 559 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto .  IDENTIFICADOR\n"); }
#line 2794 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 560 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto [ expresion ]\n"); }
#line 2800 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 561 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto { varias_ctc_cadena }\n"); }
#line 2806 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 566 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> varias_ctc_cadena , CTC_CADENA\n"); }
#line 2812 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 567 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> CTC_CADENA\n"); }
#line 2818 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 571 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clausulas_iteracion -> varias_clausulas_iteracion  clausula_iteracion\n"); }
#line 2824 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 572 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clausulas_iteracion -> clausula_iteracion\n"); }
#line 2830 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 576 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion_condicional varias_clausulas_iteracion ]\n"); }
#line 2836 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 577 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion_condicional varias_clausulas_iteracion ]\n"); }
#line 2842 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 578 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion ]\n"); }
#line 2848 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 579 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> { varias_clave_valor }\n"); }
#line 2854 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 580 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> { varias_campo_valor }\n"); }
#line 2860 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 585 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones ->  varias_expresiones , expresion\n"); }
#line 2866 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 586 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones -> expresion\n"); }
#line 2872 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 590 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> varias_clave_valor , clave_valor\n"); }
#line 2878 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 591 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> clave_valor\n"); }
#line 2884 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 595 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> varias_campo_valor , campo_valor\n"); }
#line 2890 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 596 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> campo_valor\n"); }
#line 2896 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 604 "simple.y" /* yacc.c:1646  */
    { printf ("  expresion_condicional -> SI expresion ENTONCES expresion\n"); }
#line 2902 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 605 "simple.y" /* yacc.c:1646  */
    { printf ("  expresion_condicional -> SI expresion ENTONCES expresion SINO expresion\n"); }
#line 2908 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 611 "simple.y" /* yacc.c:1646  */
    { printf ("  clave_valor -> CTC_CADENA => expresion\n"); }
#line 2914 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 615 "simple.y" /* yacc.c:1646  */
    { printf ("  campo_valor -> IDENTIFICADOR => expresion\n"); }
#line 2920 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 619 "simple.y" /* yacc.c:1646  */
    { printf("  expresion ->  operadorOR\n"); }
#line 2926 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 623 "simple.y" /* yacc.c:1646  */
    { printf("  operadorOR ->  operadorOR OR operadorAND\n"); }
#line 2932 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 627 "simple.y" /* yacc.c:1646  */
    { printf("  operadorAND ->  operadorAND AND operadorNEG\n"); }
#line 2938 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 631 "simple.y" /* yacc.c:1646  */
    { printf("  operadorNEG -> operadorASIG ~\n"); }
#line 2944 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 636 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES < \n"); }
#line 2950 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 637 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES > \n"); }
#line 2956 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 638 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES LEQ \n"); }
#line 2962 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 639 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES CEQ \n"); }
#line 2968 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 640 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES = \n"); }
#line 2974 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 641 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES NEQ \n"); }
#line 2980 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 646 "simple.y" /* yacc.c:1646  */
    { printf("  operadorDES ->  operadorDES DESPI operadorSR\n"); }
#line 2986 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 647 "simple.y" /* yacc.c:1646  */
    { printf("  operadorDES ->  operadorDES DESPD operadorSR\n"); }
#line 2992 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 652 "simple.y" /* yacc.c:1646  */
    { printf("  operadorSR ->  operadorSR + operadorMDS\n"); }
#line 2998 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 653 "simple.y" /* yacc.c:1646  */
    { printf("  operadorSR ->  operadorSR - operadorMDS\n"); }
#line 3004 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 658 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDS ->  expresion_potencia * \n"); }
#line 3010 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 659 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDS ->  expresion_potencia / \n"); }
#line 3016 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 660 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDS ->  expresion_potencia \\ \n"); }
#line 3022 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 672 "simple.y" /* yacc.c:1646  */
    { printf ("expresion_posfija -> expresion_unaria"); }
#line 3028 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 673 "simple.y" /* yacc.c:1646  */
    { printf ("expresion_posfija ->operadorINCDEC - expresion_unaria "); }
#line 3034 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 679 "simple.y" /* yacc.c:1646  */
    { printf("  operadorINCDEC ->   ++ \n"); }
#line 3040 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 680 "simple.y" /* yacc.c:1646  */
    { printf("  operadorINCDEC ->  -- \n"); }
#line 3046 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 685 "simple.y" /* yacc.c:1646  */
    { printf("  expresion_unaria -> - primario \n"); }
#line 3052 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 686 "simple.y" /* yacc.c:1646  */
    { printf("  expresion_unaria -> primario \n"); }
#line 3058 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 3062 "simple.tab.c" /* yacc.c:1646  */
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
#line 692 "simple.y" /* yacc.c:1906  */





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
