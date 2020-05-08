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
#define YYLAST   721

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  246
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
     178,   179,   184,   185,   189,   190,   194,   195,   199,   200,
     208,   212,   213,   217,   218,   222,   227,   228,   232,   233,
     238,   239,   240,   244,   245,   246,   250,   251,   255,   256,
     261,   262,   263,   264,   265,   266,   274,   278,   282,   283,
     287,   288,   292,   296,   297,   301,   302,   306,   307,   311,
     316,   320,   321,   325,   326,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   348,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   365,   366,   370,   374,   378,
     379,   383,   384,   388,   389,   393,   397,   398,   402,   406,
     410,   411,   415,   420,   421,   425,   426,   430,   431,   436,
     440,   441,   445,   446,   447,   451,   452,   456,   457,   463,
     464,   469,   473,   474,   478,   479,   483,   487,   491,   492,
     493,   498,   502,   503,   507,   511,   515,   522,   523,   524,
     525,   526,   527,   531,   532,   533,   534,   535,   536,   540,
     541,   542,   543,   548,   549,   554,   555,   556,   560,   561,
     570,   571,   575,   576,   588,   592,   599,   602,   603,   606,
     607,   610,   611,   616,   617,   618,   619,   620,   621,   622,
     626,   627,   628,   632,   633,   634,   638,   639,   640,   641,
     645,   646,   651,   652,   653,   658,   659
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
  "clave_valor", "campo_valor", "expresion", "operadorOR", "operadorAND",
  "operadorNEG", "operadorASIG", "operadorDES", "operadorSR",
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
     125,   126,    60,    62,    61,    43,    45,    42,    47,    92,
      94
};
# endif

#define YYPACT_NINF -223

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-223)))

#define YYTABLE_NINF -187

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      97,   -31,   -13,    86,  -223,  -223,    15,    17,  -223,  -223,
    -223,   111,  -223,  -223,   131,    57,    34,    75,    61,    89,
    -223,  -223,   -81,   -12,   -12,  -223,  -223,  -223,  -223,   -12,
    -223,    74,    34,    88,  -223,    81,    34,    71,   -12,   146,
     115,   128,  -223,   -12,   137,   417,   153,   124,  -223,    34,
      -4,  -223,   175,  -223,   138,   601,  -223,   250,   183,   186,
    -223,   119,  -223,   -52,  -223,  -223,   229,  -223,  -223,    -6,
     401,    34,   417,   201,    -6,   219,   -55,  -223,   140,   191,
    -223,  -223,  -223,  -223,   154,  -223,  -223,  -223,    91,  -223,
    -223,  -223,   622,   177,  -223,  -223,   195,  -223,   177,   250,
    -223,  -223,  -223,   204,     3,   177,   184,  -223,  -223,  -223,
    -223,   217,   250,   250,    -6,    -6,  -223,  -223,  -223,  -223,
    -223,     7,  -223,    34,  -223,  -223,  -223,  -223,  -223,   521,
     521,    -6,    -6,   145,   508,   566,  -223,  -223,  -223,    63,
    -223,   266,  -223,   211,   214,  -223,   596,   121,   113,  -223,
     190,  -223,  -223,   203,   220,    64,   237,   219,   289,    -6,
    -223,   223,  -223,   461,  -223,  -223,  -223,    -6,   248,   251,
     417,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
     252,    -6,   256,    -6,   147,   227,   155,    10,  -223,  -223,
     231,   267,   253,   -18,  -223,   158,   -19,  -223,  -223,    -6,
    -223,  -223,   258,   241,  -223,  -223,   286,  -223,   140,  -223,
    -223,  -223,   239,   -22,  -223,   269,   271,   -69,    44,  -223,
    -223,   179,  -223,   325,  -223,  -223,  -223,   508,   508,  -223,
    -223,  -223,  -223,  -223,   508,   508,   508,   508,   508,   508,
    -223,  -223,   417,   315,   314,   322,  -223,  -223,   257,   417,
    -223,  -223,   188,   259,   265,  -223,  -223,  -223,   268,   268,
     339,  -223,    55,  -223,    58,   260,  -223,  -223,   628,  -223,
    -223,    34,   637,  -223,   297,    -6,   342,   297,   250,   318,
    -223,   274,    -6,  -223,    -6,  -223,  -223,    -6,  -223,    -6,
      -6,   306,  -223,   331,  -223,   448,  -223,    56,   121,   121,
     113,   113,  -223,  -223,  -223,  -223,   388,   326,  -223,    20,
    -223,  -223,  -223,    96,    -6,  -223,   461,   250,   361,   364,
     396,  -223,   338,  -223,  -223,  -223,  -223,   340,   250,   -44,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,   610,   200,  -223,   351,   320,  -223,    -2,  -223,
    -223,  -223,   -48,  -223,  -223,   319,  -223,   349,  -223,  -223,
    -223,  -223,  -223,  -223,   347,   328,   448,   355,   412,  -223,
    -223,    34,   149,   417,   397,  -223,  -223,  -223,    -6,    -6,
    -223,  -223,    -6,  -223,   340,  -223,   419,  -223,  -223,  -223,
     382,   407,    -6,  -223,   421,    -6,   417,  -223,   343,    -6,
    -223,  -223,   336,   392,   385,  -223,   427,  -223,  -223,  -223,
    -223,  -223,   357,   250,   378,   324,  -223,  -223,   417,  -223,
    -223,  -223,  -223,  -223,    -6,   254,  -223
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     1,    10,
      10,     0,    15,     4,   112,     0,     0,     0,     0,     0,
      12,     9,     0,    16,     0,    19,    23,    24,    25,     0,
       5,     0,     0,    13,    22,     0,     0,    99,   112,     0,
       0,    38,    18,    17,    18,   161,     0,     0,    20,     0,
       0,   106,   101,    98,     0,    38,    11,    38,     0,     0,
      37,     0,    29,     0,    30,    33,     0,    34,    35,     0,
       0,     0,   161,   175,     0,   173,    13,   124,   199,   161,
     114,   115,   116,   117,     0,   118,   119,   120,     0,   121,
     122,   123,     0,     0,    14,    21,     0,     6,     0,    38,
      97,   100,    96,    72,     0,     0,     0,    32,    54,    55,
      56,     0,    38,    38,     0,     0,    27,    45,    46,    47,
      48,    40,   194,     0,   193,   197,   198,   195,   196,     0,
       0,     0,     0,     0,     0,     0,   189,   246,   187,   188,
     191,     0,   216,   218,   220,   222,   229,   232,   235,   239,
     241,   244,   135,     0,     0,   161,     0,   173,     0,     0,
     172,     0,   160,   140,   110,   113,   137,     0,     0,     0,
     161,   126,   127,   128,   129,   130,   131,   132,   133,   134,
       0,     0,     0,     0,     0,     0,     0,     0,   109,    71,
      74,    38,    66,     0,    65,     0,     0,    59,    31,     0,
      53,    52,     0,     0,    43,    44,    42,    39,     0,   190,
     242,   243,     0,     0,   209,     0,     0,     0,     0,   211,
     213,   221,   245,     0,   217,   219,   226,     0,     0,   225,
     228,   223,   224,   227,     0,     0,     0,     0,     0,     0,
     136,   176,   161,     0,   178,     0,   180,   174,     0,   161,
     171,   169,    13,     0,   139,   142,   143,   164,   166,   166,
     161,   200,     0,   204,     0,     0,     8,     7,    38,   105,
     102,     0,    87,    73,     0,     0,     0,     0,    38,     0,
      58,     0,     0,    28,     0,    36,   192,     0,   205,     0,
       0,     0,   206,     0,   207,     0,   151,     0,   230,   231,
     233,   234,   236,   237,   238,   240,   161,     0,   179,   161,
     182,   181,   170,   161,     0,   138,     0,    38,     0,     0,
       0,   201,     0,   202,   125,   108,   107,    69,    38,     0,
      93,    90,    91,    94,    95,    92,    82,    81,    80,    84,
      83,    79,    87,    87,    76,     0,    86,    89,     0,    67,
      62,    64,     0,    57,    26,     0,    41,     0,   208,   214,
     215,   210,   212,   154,     0,     0,     0,   158,     0,   150,
     177,     0,   161,   161,     0,   144,   141,   165,     0,     0,
     159,   203,     0,   103,    69,    75,     0,    78,    77,    85,
       0,     0,     0,    60,     0,     0,   161,   156,   152,     0,
     153,   148,     0,   161,     0,   162,   168,    68,   104,    70,
      88,    63,     0,    38,    49,   161,   155,   157,   161,   145,
     167,   163,    61,    51,     0,   161,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,  -223,  -223,  -223,   439,   -92,   -16,  -223,  -223,
       4,  -223,   181,     1,  -222,   -50,  -208,   395,   263,  -223,
    -223,  -223,  -223,  -223,    76,  -223,  -223,  -223,  -223,  -223,
     275,  -223,   182,   199,    93,  -223,  -223,  -223,  -223,   136,
    -223,  -223,   141,  -223,  -223,    90,   144,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,   443,  -223,   -68,   -76,  -223,
    -223,  -223,  -223,   -43,  -223,  -223,   169,  -223,  -223,  -223,
     193,  -223,  -223,   125,  -223,  -223,  -223,  -223,  -223,   234,
    -223,  -223,  -223,   337,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,   261,   362,  -223,   -37,  -223,  -223,   323,  -223,
    -223,   205,   208,     8,  -223,  -223,  -223,  -223,   369,    46,
      50,   222,  -223,   151
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    13,    21,    11,    22,    78,     5,    12,
      29,    24,    35,    25,    26,    63,    27,    64,    65,    66,
     206,   285,   207,   121,   356,    67,    68,   107,   108,   196,
     197,   109,   193,   194,   383,   110,   190,   272,   273,   341,
     342,   343,   344,   345,   346,   347,    28,    38,    52,   100,
      53,   187,    98,   328,   101,    30,    31,    79,    80,    81,
     183,    82,    83,   136,   253,   254,   255,    85,   374,    86,
     296,   297,   364,   365,   366,   400,    87,    88,   170,   318,
     421,    89,   160,   161,   157,    90,    91,   243,   244,   245,
     310,   311,   246,   137,   138,   139,   264,   140,   213,   217,
     218,   219,   220,   214,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,   184,    84,   165,   155,    96,   186,   111,    92,   279,
     276,    40,    41,   195,    47,    23,    46,   191,   115,   204,
      50,   122,   392,   291,    42,    62,   391,    69,    43,    84,
      44,   292,   123,    95,     6,    92,    84,    70,   162,   116,
     205,    62,    92,   393,    42,    18,    20,    19,    49,   188,
     339,   385,     7,    20,    71,   154,   124,   125,   126,    33,
     127,   128,   200,   201,   340,    72,   129,   130,   192,   295,
     287,    69,    73,    74,   277,    75,   288,   141,   153,   165,
     209,    70,   158,    62,   368,    76,     8,    97,   131,  -183,
     277,   132,    32,   133,   242,   134,    62,    62,    71,    33,
     135,   269,   260,    69,   195,   270,     9,   208,    10,    72,
      36,    77,    84,    70,   371,    45,    73,    74,    92,    75,
     339,   339,   202,   203,  -147,    15,    37,    84,   167,    76,
      71,   168,     1,    92,   340,   340,   293,    16,    57,   212,
       2,    72,   169,    17,   294,    15,    58,   287,    73,    74,
     322,    75,   373,   321,    39,    77,    69,    47,   323,   180,
     181,    76,   182,    17,    59,    51,    70,   250,    18,    55,
      19,   256,    48,    49,   306,   257,    20,  -185,  -111,  -185,
      56,   313,    60,    71,   165,    93,    61,    77,    18,    94,
      19,   265,    99,    33,    72,   102,    20,   112,    69,    84,
     113,    73,    74,   330,    75,    92,    84,   281,    70,   215,
     216,   331,    92,   114,    76,   156,   332,    84,   327,   164,
     236,   237,   238,    92,   333,    71,   234,   235,   352,   334,
     165,   335,   159,   117,   163,   118,    72,   165,   266,    40,
      77,   372,    20,    73,    74,   166,    75,    40,   268,   119,
      40,   278,    62,   227,   228,    34,    76,    47,   314,    19,
     185,    69,    62,    84,   189,    20,    84,   377,    58,    92,
      84,    70,    92,   298,   299,   198,    92,   120,   384,  -184,
     210,   211,    77,   349,   300,   301,    59,   199,    71,   223,
     355,   224,   357,   225,   240,   358,   165,   359,   360,    72,
     239,    62,   247,   367,    60,   403,    73,    74,    61,    75,
     249,   241,    62,   258,   251,    33,   259,   261,   267,    76,
     263,    60,   375,   275,   256,   271,   282,   165,   415,    84,
      84,    69,   283,   284,   286,    92,    92,  -149,   295,   165,
     289,    70,   290,   307,   242,    77,    69,   309,   312,   165,
     425,   324,  -149,    84,   315,   402,    70,   316,    71,    92,
      84,   317,   192,   423,   350,   354,    92,   320,   353,    72,
     215,   370,    84,    71,   367,    84,    73,    74,    92,    75,
     378,    92,    84,   379,    72,   330,   405,   357,    92,    76,
     407,    73,    74,   331,    75,    69,   216,    62,   332,    69,
     412,   380,   381,   414,    76,    70,   333,   417,    18,    70,
     382,   334,   390,   335,   394,    77,  -186,   395,   396,   401,
    -146,   397,    71,   399,    69,   404,    71,   409,   122,   411,
      77,   418,   426,    72,    70,   413,   416,    72,   419,   123,
      73,    74,   420,    75,    73,    74,   424,    75,   422,    14,
     106,    71,   329,    76,   274,   406,   348,    76,   302,   303,
     304,   305,    72,   124,   125,   126,    33,   127,   128,    73,
      74,   280,    75,   129,   130,   122,   351,   408,   387,    77,
     410,    54,    76,    77,   388,   376,   123,   363,   122,   389,
     369,   398,   152,   319,   248,   131,   361,   222,   132,   123,
     133,   362,   134,   221,   262,   308,     0,   135,    77,     0,
     124,   125,   126,    33,   127,   128,     0,     0,     0,     0,
     129,   130,     0,   124,   125,   126,   252,   127,   128,     0,
       0,     0,     0,   129,   130,   122,     0,     0,     0,     0,
       0,     0,   131,     0,     0,   132,   123,   133,   122,   134,
       0,     0,     0,     0,   135,   131,     0,     0,   132,   123,
     133,     0,   134,     0,     0,     0,     0,   135,     0,     0,
     124,   125,   126,    33,   127,   128,     0,     0,     0,     0,
     129,   130,     0,   124,   125,   126,    33,   127,   128,     0,
       0,     0,     0,   122,     0,     0,     0,     0,     0,     0,
       0,     0,   131,     0,   123,   132,     0,   133,     0,   103,
       0,     0,     0,   330,   135,   131,     0,     0,   132,    58,
     133,   331,     0,   104,     0,     0,   332,   135,   124,   125,
     126,    33,   127,   128,   333,     0,     0,    59,   386,   334,
     330,   335,     0,     0,     0,     0,    58,     0,   331,     0,
       0,   105,   336,   332,   337,    60,   338,     0,     0,    61,
     131,   333,     0,   132,    59,   133,   334,   226,   335,    19,
     227,   228,   229,     0,   230,    20,     0,   325,     0,   336,
       0,   337,    60,   338,     0,     0,    61,     0,     0,   326,
       0,     0,   171,    33,     0,     0,    19,     0,   231,   232,
     233,     0,    20,   172,   173,   174,   175,   176,   177,   178,
       0,     0,     0,     0,     0,   179,     0,     0,   180,   181,
       0,   182
};

static const yytype_int16 yycheck[] =
{
      16,    93,    45,    79,    72,     9,    98,    57,    45,    28,
      28,    92,    93,   105,    69,    11,    32,    14,    70,    12,
      36,    27,    70,    92,    23,    41,    28,     7,    24,    72,
      29,   100,    38,    49,    65,    72,    79,    17,    93,    91,
      33,    57,    79,    91,    43,    57,    65,    59,    92,    99,
     272,    95,    65,    65,    34,    71,    62,    63,    64,    65,
      66,    67,   112,   113,   272,    45,    72,    73,    65,    13,
      92,     7,    52,    53,    92,    55,    98,    69,    70,   155,
     123,    17,    74,    99,    28,    65,     0,    91,    94,    25,
      92,    97,    35,    99,    30,   101,   112,   113,    34,    65,
     106,    91,   170,     7,   196,    95,    91,   123,    91,    45,
      35,    91,   155,    17,    94,    41,    52,    53,   155,    55,
     342,   343,   114,   115,    28,    14,    65,   170,    37,    65,
      34,    40,    35,   170,   342,   343,    92,    26,    10,   131,
      43,    45,    51,    32,   100,    14,    18,    92,    52,    53,
      92,    55,    56,    98,    65,    91,     7,    69,   100,    96,
      97,    65,    99,    32,    36,    94,    17,   159,    57,    23,
      59,   163,    91,    92,   242,   167,    65,    28,    41,    30,
      65,   249,    54,    34,   260,    32,    58,    91,    57,    65,
      59,   183,    17,    65,    45,    57,    65,    14,     7,   242,
      14,    52,    53,     3,    55,   242,   249,   199,    17,    64,
      65,    11,   249,    94,    65,    14,    16,   260,   268,    28,
     107,   108,   109,   260,    24,    34,   105,   106,   278,    29,
     306,    31,    13,     4,    94,     6,    45,   313,    91,    92,
      91,   309,    65,    52,    53,    91,    55,    92,    93,    20,
      92,    93,   268,    74,    75,   271,    65,    69,    70,    59,
      65,     7,   278,   306,    60,    65,   309,   317,    18,   306,
     313,    17,   309,   227,   228,    91,   313,    48,   328,    25,
     129,   130,    91,   275,   234,   235,    36,    70,    34,    23,
     282,    80,   284,    79,    91,   287,   372,   289,   290,    45,
     110,   317,    65,   295,    54,   373,    52,    53,    58,    55,
      21,    91,   328,    65,    91,    65,    65,    65,    91,    65,
      64,    54,   314,    70,   316,    94,    68,   403,   396,   372,
     373,     7,    91,    47,    95,   372,   373,    13,    13,   415,
      71,    17,    71,    28,    30,    91,     7,    25,    91,   425,
     418,    91,    28,   396,    95,   371,    17,    92,    34,   396,
     403,    93,    65,   413,    22,    91,   403,    28,    50,    45,
      64,    45,   415,    34,   366,   418,    52,    53,   415,    55,
      19,   418,   425,    19,    45,     3,   378,   379,   425,    65,
     382,    52,    53,    11,    55,     7,    65,   413,    16,     7,
     392,     5,    64,   395,    65,    17,    24,   399,    57,    17,
      70,    29,    92,    31,    95,    91,    28,    68,    71,     7,
      28,    93,    34,    68,     7,    28,    34,     8,    27,    22,
      91,    95,   424,    45,    17,    14,    93,    45,    53,    38,
      52,    53,    15,    55,    52,    53,    68,    55,    91,    10,
      55,    34,   271,    65,   191,   379,   274,    65,   236,   237,
     238,   239,    45,    62,    63,    64,    65,    66,    67,    52,
      53,   196,    55,    72,    73,    27,   277,   384,   342,    91,
     390,    38,    65,    91,   343,   316,    38,    39,    27,   345,
     297,   366,    91,   259,   157,    94,   291,   135,    97,    38,
      99,   293,   101,   134,   181,   244,    -1,   106,    91,    -1,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      72,    73,    -1,    62,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    72,    73,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    97,    38,    99,    27,   101,
      -1,    -1,    -1,    -1,   106,    94,    -1,    -1,    97,    38,
      99,    -1,   101,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      72,    73,    -1,    62,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    38,    97,    -1,    99,    -1,     8,
      -1,    -1,    -1,     3,   106,    94,    -1,    -1,    97,    18,
      99,    11,    -1,    22,    -1,    -1,    16,   106,    62,    63,
      64,    65,    66,    67,    24,    -1,    -1,    36,    28,    29,
       3,    31,    -1,    -1,    -1,    -1,    18,    -1,    11,    -1,
      -1,    50,    42,    16,    44,    54,    46,    -1,    -1,    58,
      94,    24,    -1,    97,    36,    99,    29,    71,    31,    59,
      74,    75,    76,    -1,    78,    65,    -1,    49,    -1,    42,
      -1,    44,    54,    46,    -1,    -1,    58,    -1,    -1,    61,
      -1,    -1,    70,    65,    -1,    -1,    59,    -1,   102,   103,
     104,    -1,    65,    81,    82,    83,    84,    85,    86,    87,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    96,    97,
      -1,    99
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
     208,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,    91,   214,   118,   168,    14,   195,   214,    13,
     193,   194,    93,    94,    28,   169,    91,    37,    40,    51,
     189,    70,    81,    82,    83,    84,    85,    86,    87,    93,
      96,    97,    99,   171,   117,    65,   117,   162,   126,    60,
     147,    14,    65,   143,   144,   117,   140,   141,    91,    70,
     126,   126,   214,   214,    12,    33,   131,   133,   118,   174,
     224,   224,   214,   209,   214,    64,    65,   210,   211,   212,
     213,   219,   204,    23,    80,    79,    71,    74,    75,    76,
      78,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      91,    91,    30,   198,   199,   200,   203,    65,   194,    21,
     214,    91,    65,   175,   176,   177,   214,   214,    65,    65,
     168,    65,   209,    64,   207,   214,    91,    91,    93,    91,
      95,    94,   148,   149,   129,    70,    28,    92,    93,    28,
     141,   214,    68,    91,    47,   132,    95,    92,    98,    71,
      71,    92,   100,    92,   100,    13,   181,   182,   220,   220,
     221,   221,   222,   222,   222,   222,   168,    28,   203,    25,
     201,   202,    91,   168,    70,    95,    92,    93,   190,   190,
      28,    98,    92,   100,    91,    49,    61,   126,   164,   123,
       3,    11,    16,    24,    29,    31,    42,    44,    46,   125,
     127,   150,   151,   152,   153,   154,   155,   156,   143,   214,
      22,   144,   126,    50,    91,   214,   135,   214,   214,   214,
     214,   212,   213,    39,   183,   184,   185,   214,    28,   181,
      45,    94,   168,    56,   179,   214,   177,   126,    19,    19,
       5,    64,    70,   145,   126,    95,    28,   150,   153,   157,
      92,    28,    70,    91,    95,    68,    71,    93,   184,    68,
     186,     7,   118,   168,    28,   214,   135,   214,   145,     8,
     156,    22,   214,    14,   214,   168,    93,   214,    95,    53,
      15,   191,    91,   126,    68,   168,   214
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
     141,   141,   142,   142,   143,   143,   144,   144,   145,   145,
     146,   147,   147,   148,   148,   149,   150,   150,   151,   151,
     152,   152,   152,   153,   153,   153,   154,   154,   155,   155,
     156,   156,   156,   156,   156,   156,   157,   158,   159,   159,
     160,   160,   161,   162,   162,   163,   163,   164,   164,   165,
     166,   167,   167,   168,   168,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   170,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   172,   172,   173,   174,   175,
     175,   176,   176,   177,   177,   178,   179,   179,   180,   181,
     182,   182,   183,   184,   184,   185,   185,   186,   186,   187,
     188,   188,   189,   189,   189,   190,   190,   191,   191,   192,
     192,   193,   194,   194,   195,   195,   196,   197,   198,   198,
     198,   199,   200,   200,   201,   202,   203,   204,   204,   204,
     204,   204,   204,   205,   205,   205,   205,   205,   205,   206,
     206,   206,   206,   207,   207,   208,   208,   208,   209,   209,
     210,   210,   211,   211,   212,   213,   214,   215,   215,   216,
     216,   217,   217,   218,   218,   218,   218,   218,   218,   218,
     219,   219,   219,   220,   220,   220,   221,   221,   221,   221,
     222,   222,   223,   223,   223,   224,   224
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
       4,     6,     4,     6,     3,     1,     1,     3,     2,     0,
       6,     1,     0,     1,     0,     3,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     1,     0,
       1,     0,     4,     4,     5,     3,     0,     1,     1,     2,
       4,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     2,     4,     1,
       0,     3,     1,     1,     3,     7,     2,     0,     6,     4,
       2,     1,     2,     2,     1,     3,     2,     2,     0,     5,
       2,     0,     5,     6,     2,     2,     0,     1,     0,     3,
       4,     2,     1,     0,     2,     0,     3,     5,     1,     2,
       1,     2,     2,     0,     5,     2,     2,     1,     1,     1,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     4,     3,     1,     3,     3,     3,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     2,     1,     2,
       1,     2,     1,     2,     2,     2,     2,     2,     2,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       3,     1,     2,     2,     1,     2,     1
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
#line 1719 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 21 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Libreria -> definicion_libreria\n"); }
#line 1725 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 25 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_programa -> programa IDENTIFICADOR ; codigo_programa\n"); }
#line 1731 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 29 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_programa -> varias_librerias cuerpo_subprograma\n"); }
#line 1737 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 35 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
#line 1743 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 36 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); }
#line 1749 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 37 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
#line 1755 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 46 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias -> varias_librerias libreria\n"); }
#line 1761 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 51 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores ->  varios_identificadores  IDENTIFICADOR\n"); }
#line 1767 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 52 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores -> IDENTIFICADOR\n"); }
#line 1773 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 56 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> IDENTIFICADOR\n"); }
#line 1779 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> IDENTIFICADOR CUATRO_PUNTOS IDENTIFICADOR\n"); }
#line 1785 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 61 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n"); }
#line 1791 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias  varias_declaraciones\n"); }
#line 1797 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 67 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias exportaciones varias_declaraciones\n"); }
#line 1803 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 1809 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 73 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones -> declaracion \n"); }
#line 1815 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 78 "simple.y" /* yacc.c:1646  */
    { printf ("  exportaciones -> EXPORTAR  varios_nombres ; \n"); }
#line 1821 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 82 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> varios_nombres ',' nombre ; \n"); }
#line 1827 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 83 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> nombre ; \n"); }
#line 1833 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 87 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_objeto \n"); }
#line 1839 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 88 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion ->  declaracion_tipo \n"); }
#line 1845 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 89 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_subprograma\n"); }
#line 1851 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 95 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores :  CONSTANTE especificacion_tipo ASIGNACION expresion ; \n"); }
#line 1857 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 96 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ;\n"); }
#line 1863 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 97 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 1869 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 101 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> nombre\n"); }
#line 1875 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 102 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
#line 1881 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 107 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
#line 1887 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 108 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
#line 1893 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 112 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_escalar\n"); }
#line 1899 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 113 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_tabla\n"); }
#line 1905 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 114 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_diccionario\n"); }
#line 1911 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 118 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar-> cero_o_uno_signo tipo_basico cero_o_uno_longitud cero_o_uno_rango\n"); }
#line 1917 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 122 "simple.y" /* yacc.c:1646  */
    { printf ("   cero_o_uno_signo -> SIGNO\n"); }
#line 1923 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 127 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_longitud -> longitud\n"); }
#line 1929 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 132 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_rango -> RANGO rango\n"); }
#line 1935 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 137 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> CORTO\n"); }
#line 1941 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 138 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> LARGO\n"); }
#line 1947 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 142 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> BOOLEANO\n"); }
#line 1953 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 143 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> CARACTER\n"); }
#line 1959 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 144 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> ENTERO\n"); }
#line 1965 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 145 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> REAL\n"); }
#line 1971 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 149 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion\n"); }
#line 1977 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 150 "simple.y" /* yacc.c:1646  */
    { printf ("  rango -> expresion DOS_PTOS expresion DOS_PTOS expresion\n"); }
#line 1983 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 154 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> TABLA ( expresion DOS_PTOS expresion ) DE especificacion_tipo\n"); }
#line 1989 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 155 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
#line 1995 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 159 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
#line 2001 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 163 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_registro\n"); }
#line 2007 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 164 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
#line 2013 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 165 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> clase\n"); }
#line 2019 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 169 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
#line 2025 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 173 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> varios_campos campo\n"); }
#line 2031 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 174 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> campo\n"); }
#line 2037 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 178 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ;\n"); }
#line 2043 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 179 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 2049 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 184 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION varios_campos FIN ENUMERACION\n"); }
#line 2055 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 185 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar varios_campos FIN ENUMERACION\n"); }
#line 2061 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 189 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> varios_elemento_enumeracion , elemento_enumeracion\n"); }
#line 2067 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 190 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> elemento_enumeracion\n"); }
#line 2073 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 194 "simple.y" /* yacc.c:1646  */
    { printf ("  elemento_enumeracion -> IDENTIFICADOR cero_uno_expresion\n"); }
#line 2079 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 199 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_expresion -> ASIGNACION expresion\n"); }
#line 2085 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 208 "simple.y" /* yacc.c:1646  */
    { printf ("  clase -> CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE\n"); }
#line 2091 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 212 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_ultima -> ULTIMA\n"); }
#line 2097 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 217 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_superclases -> superclases\n"); }
#line 2103 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 222 "simple.y" /* yacc.c:1646  */
    { printf ("  superclases -> ( varios_nombres ) \n"); }
#line 2109 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 227 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> componente"); }
#line 2115 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 228 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> visibilidad componente"); }
#line 2121 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 232 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> varias_declaraciones_componente declaracion_componente"); }
#line 2127 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 233 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> declaracion_componente"); }
#line 2133 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 238 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad -> PUBLICO \n"); }
#line 2139 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 239 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PROTEGIDO \n"); }
#line 2145 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 240 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PRIVADO\n"); }
#line 2151 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 244 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_tipo"); }
#line 2157 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 245 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_objeto"); }
#line 2163 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 246 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> varios_modificadores declaracion_subprograma"); }
#line 2169 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 250 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_modificadores ->  cero_modificadores varios_modificadores\n"); }
#line 2175 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 255 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores ->  varios_modificadores , modificador\n"); }
#line 2181 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 256 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores -> modificador\n"); }
#line 2187 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 261 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> CONSTRUCTOR "); }
#line 2193 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 262 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  DESTRUCTOR "); }
#line 2199 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 263 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  GENERICO "); }
#line 2205 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 264 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> ABSTRACTO "); }
#line 2211 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 265 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  ESPECIFICO "); }
#line 2217 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 266 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> FINAL"); }
#line 2223 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 274 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }
#line 2229 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 278 "simple.y" /* yacc.c:1646  */
    { printf ("  cabecera_subprograma -> IDENTIFICADOR cero_uno_parametrizacion cero_uno_tipoResultado\n"); }
#line 2235 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 282 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_parametrizacion -> parametrizacion\n"); }
#line 2241 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 287 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_tipoResultado -> tipo_resultado\n"); }
#line 2247 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 292 "simple.y" /* yacc.c:1646  */
    { printf ("parametrizacion -> ( varias_declaraciones_parametros declaracion_parametros ) \n"); }
#line 2253 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 296 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo cero_uno_expresion"); }
#line 2259 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 297 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo cero_uno_expresion"); }
#line 2265 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 301 "simple.y" /* yacc.c:1646  */
    {printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros ;\n");}
#line 2271 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 306 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> VALOR\n"); }
#line 2277 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 307 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> REFERENCIA\n"); }
#line 2283 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 311 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
#line 2289 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 316 "simple.y" /* yacc.c:1646  */
    { printf ("  cuerpo_subprograma -> cero_o_mas_declaraciones PRINCIPIO varias_instrucciones FIN"); }
#line 2295 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 320 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 2301 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 325 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> varias_instrucciones  instruccion\n"); }
#line 2307 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 326 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> instruccion\n"); }
#line 2313 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 334 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_asignacion\n"); }
#line 2319 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 335 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_devolver\n"); }
#line 2325 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 336 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_llamada\n"); }
#line 2331 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 337 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_si\n"); }
#line 2337 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 338 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_casos\n"); }
#line 2343 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 339 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_bucle\n"); }
#line 2349 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 340 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_interrupcion\n"); }
#line 2355 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 341 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_lanzamiento_excepcion\n"); }
#line 2361 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 342 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_captura_excepcion\n"); }
#line 2367 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 343 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> ;\n"); }
#line 2373 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 348 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_asignacion -> objeto op_asignacion expresion;"); }
#line 2379 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 352 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIGNACION"); }
#line 2385 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 353 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_SUMA"); }
#line 2391 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 354 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> :- "); }
#line 2397 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 355 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_MULT"); }
#line 2403 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 356 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DIV"); }
#line 2409 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 357 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_RESTO"); }
#line 2415 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 358 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_POT"); }
#line 2421 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 359 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> ASIG_DESPI"); }
#line 2427 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 360 "simple.y" /* yacc.c:1646  */
    { printf ("  op_asignacion -> :"); }
#line 2433 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 365 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER ;\n"); }
#line 2439 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 366 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER expresion ;\n"); }
#line 2445 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 370 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_llamada ->  llamada_subprograma ;\n"); }
#line 2451 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 374 "simple.y" /* yacc.c:1646  */
    { printf ("llamada_subprograma ->  nombre ( varias_definicion_parametro )\n"); }
#line 2457 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 378 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_definicion_parametro ->  varias_definicion_parametro\n"); }
#line 2463 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 383 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_definicion_parametro ->  varias_definicion_parametro ',' definicion_parametro\n"); }
#line 2469 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 384 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_definicion_parametro -> definicion_parametro\n"); }
#line 2475 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 388 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  expresion\n"); }
#line 2481 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 389 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  IDENTIFICADOR ASIGNACION expresion\n"); }
#line 2487 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 393 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_si ->  SI expresion ENTONCES varias_instrucciones cero_mas_instrucciones FIN SI\n"); }
#line 2493 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 397 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_instrucciones ->  SINO varias_instrucciones\n"); }
#line 2499 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 402 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_casos ->  CASOS expresion ES uno_o_mas_casos FIN CASOS\n"); }
#line 2505 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 406 "simple.y" /* yacc.c:1646  */
    { printf ("caso ->  CUANDO entradas => varias_instrucciones\n"); }
#line 2511 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 410 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  uno_o_mas_casos caso\n"); }
#line 2517 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 411 "simple.y" /* yacc.c:1646  */
    { printf ("uno_o_mas_casos ->  caso\n"); }
#line 2523 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 415 "simple.y" /* yacc.c:1646  */
    { printf ("entradas ->  varias_entradas entrada\n"); }
#line 2529 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 420 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  expresion cero_mas_expresiones1 OTRO\n"); }
#line 2535 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 421 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  OTRO\n"); }
#line 2541 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 425 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  varias_entradas entrada :\n"); }
#line 2547 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 426 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  entrada :\n"); }
#line 2553 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 430 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_expresiones1 -> .. expresion\n"); }
#line 2559 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 436 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_bucle -> cero_mas_identificador1 clausula_iteracion varias_instrucciones FIN BUCLE\n");}
#line 2565 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 440 "simple.y" /* yacc.c:1646  */
    { printf ("cero_mas_identificador1 -> IDENTIFICADOR :\n"); }
#line 2571 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 445 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  PARA IDENTIFICADOR cero_o_uno_especificacion_tipo  EN expresion\n");}
#line 2577 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 446 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  REPETIR IDENTIFICADOR cero_o_uno_especificacion_tipo EN rango cero_o_uno_descendente\n");}
#line 2583 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 447 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion ->  MIENTRAS expresion\n");}
#line 2589 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 451 "simple.y" /* yacc.c:1646  */
    { printf ("cero_o_uno_especificacion_tipo -> : especificacion_tipo \n"); }
#line 2595 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 456 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_descendete -> DESCENDENTE\n");}
#line 2601 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 463 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SIGUIENTE cero_o_uno_cuando ;\n");}
#line 2607 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 464 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SALIR cero_o_uno_de_identificador cero_o_uno_cuando ;\n");}
#line 2613 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 469 "simple.y" /* yacc.c:1646  */
    { printf ("cuando ->CUANDO expresion"); }
#line 2619 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 473 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_cuando -> cuando\n");}
#line 2625 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 478 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_de_identificador -> DE IDENTIFICADOR\n");}
#line 2631 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 483 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_lanzamiento_excepcion ->LANZA nombre ;"); }
#line 2637 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 487 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_captura_excepcion ->PRUEBA varias_instrucciones clausulas FIN PRUEBA"); }
#line 2643 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 491 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion\n"); }
#line 2649 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 492 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
#line 2655 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 493 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausula_finalmente\n"); }
#line 2661 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 498 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion ->varias_clausula_excepcion_especifica clausula_excepcion_general "); }
#line 2667 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 502 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausula_excepcion_especifica ->varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); }
#line 2673 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 507 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion_especifica -> EXCEPCION ( nombre ) varias_instrucciones "); }
#line 2679 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 511 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_excepcion_general ->EXCEPCION varias_instruccion"); }
#line 2685 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 515 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_finalmente ->FINALMENTE varias_instrucciones"); }
#line 2691 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 522 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> literal\n"); }
#line 2697 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 523 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> objeto\n"); }
#line 2703 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 524 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> llamada_subprograma\n"); }
#line 2709 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 525 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> OBJETO llamada_subprograma\n"); }
#line 2715 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 526 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> enumeraciones\n"); }
#line 2721 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 527 "simple.y" /* yacc.c:1646  */
    { printf ("  primario -> ( expresion )\n"); }
#line 2727 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 531 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> VERDADERO\n"); }
#line 2733 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 532 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> FALSO\n"); }
#line 2739 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 533 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_ENTERA\n"); }
#line 2745 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 534 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_REAL\n"); }
#line 2751 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 535 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CARACTER\n"); }
#line 2757 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 536 "simple.y" /* yacc.c:1646  */
    { printf ("  literal -> CTC_CADENA\n"); }
#line 2763 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 540 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> nombre\n"); }
#line 2769 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 541 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto .  IDENTIFICADOR\n"); }
#line 2775 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 542 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto [ expresion ]\n"); }
#line 2781 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 543 "simple.y" /* yacc.c:1646  */
    { printf ("  objeto -> objeto { varias_ctc_cadena }\n"); }
#line 2787 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 548 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> varias_ctc_cadena , CTC_CADENA\n"); }
#line 2793 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 549 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> CTC_CADENA\n"); }
#line 2799 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 554 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> [ expresion ]\n"); }
#line 2805 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 555 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> { varias_clave_valor }\n"); }
#line 2811 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 556 "simple.y" /* yacc.c:1646  */
    { printf ("  enumeraciones -> { varias_campo_valor }\n"); }
#line 2817 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 560 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones ->  varias_expresiones , expresion\n"); }
#line 2823 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 561 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_expresiones -> expresion\n"); }
#line 2829 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 570 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> varias_clave_valor , clave_valor\n"); }
#line 2835 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 571 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_clave_valor -> clave_valor\n"); }
#line 2841 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 575 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> varias_campo_valor , campo_valor\n"); }
#line 2847 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 576 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_campo_valor -> campo_valor\n"); }
#line 2853 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 588 "simple.y" /* yacc.c:1646  */
    { printf ("  clave_valor -> CTC_CADENA FLECHA expresion\n"); }
#line 2859 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 592 "simple.y" /* yacc.c:1646  */
    { printf ("  campo_valor -> IDENTIFICADOR FLECHA expresion\n"); }
#line 2865 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 599 "simple.y" /* yacc.c:1646  */
    { printf("  expresion ->  operadorOR\n"); }
#line 2871 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 602 "simple.y" /* yacc.c:1646  */
    { printf("  operadorOR ->  operadorOR OR operadorAND\n"); }
#line 2877 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 606 "simple.y" /* yacc.c:1646  */
    { printf("  operadorAND ->  operadorAND AND operadorNEG\n"); }
#line 2883 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 610 "simple.y" /* yacc.c:1646  */
    { printf("  operadorNEG -> operadorASIG ~\n"); }
#line 2889 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 616 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES '<' \n"); }
#line 2895 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 617 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES '>' \n"); }
#line 2901 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 618 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES LEQ \n"); }
#line 2907 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 619 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES FLECHA \n"); }
#line 2913 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 620 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES'=' \n"); }
#line 2919 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 621 "simple.y" /* yacc.c:1646  */
    { printf("  operadorASIG ->   operadorDES NEQ \n"); }
#line 2925 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 626 "simple.y" /* yacc.c:1646  */
    { printf("  operadorDES ->  operadorDES DESPI operadorSR\n"); }
#line 2931 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 627 "simple.y" /* yacc.c:1646  */
    { printf("  operadorDES ->  operadorDES DESPD operadorSR\n"); }
#line 2937 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 632 "simple.y" /* yacc.c:1646  */
    { printf("  operadorSR ->  operadorSR '+' operadorMDM\n"); }
#line 2943 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 633 "simple.y" /* yacc.c:1646  */
    { printf("  operadorSR ->  operadorSR '-' operadorMDM\n"); }
#line 2949 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 638 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '*' operadorPOT\n"); }
#line 2955 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 639 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '/' operadorPOT\n"); }
#line 2961 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 640 "simple.y" /* yacc.c:1646  */
    { printf("  operadorMDM ->  operadorMDM '\\' operadorPOT\n"); }
#line 2967 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 645 "simple.y" /* yacc.c:1646  */
    { printf("  operadorPOT ->  operadorINCDEC '^' operadorPOT\n"); }
#line 2973 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 651 "simple.y" /* yacc.c:1646  */
    { printf("  operadorINCDEC ->   INC operadorUN\n"); }
#line 2979 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 652 "simple.y" /* yacc.c:1646  */
    { printf("  operadorINCDEC ->  DEC operadorUN\n"); }
#line 2985 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 658 "simple.y" /* yacc.c:1646  */
    { printf("  operadorUN -> - primario \n"); }
#line 2991 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 659 "simple.y" /* yacc.c:1646  */
    { printf("  operadorUN -> primario \n"); }
#line 2997 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 3001 "simple.tab.c" /* yacc.c:1646  */
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
#line 664 "simple.y" /* yacc.c:1906  */





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
