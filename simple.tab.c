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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   233

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  210

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
      93,    94,   107,   106,     2,    96,    97,   108,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    92,    91,
     103,   105,   104,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    98,   109,    99,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   100,     2,   101,   102,     2,     2,     2,
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
       0,    27,    27,    28,    32,    36,    40,    41,    45,    46,
      47,    51,    52,    56,    57,    67,    72,    73,    77,    79,
      80,    85,    89,    90,    94,    95,    96,   102,   107,   108,
     113,   114,   118,   119,   120,   124,   127,   129,   132,   134,
     137,   161,   165,   169,   170,   171,   175,   179,   180,   184,
     185,   190,   194,   195,   199,   201,   211,   214,   216,   220,
     222,   227,   233,   234,   238,   239,   244,   245,   246,   251,
     252,   253,   258,   259,   260,   264,   265,   266,   267,   268,
     269,   277,   287,   295,   297,   302,   304,   310,   319,   324,
     326,   327,   332,   340,   341,   346,   354,   363,   364,   373,
     374,   378,   379,   380,   381,   413,   420,   428,   435,   443,
     561,   562,   572,   577,   579,   583,   588,   592,   593,   594,
     599,   605,   607,   608,   612,   617,   623
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
  "ASIG_DESPI", "ASIG_DESP", "LONGITUD", "TIPO_BASICO", "';'", "':'",
  "'('", "')'", "'^'", "'-'", "'.'", "'['", "']'", "'{'", "'}'", "'~'",
  "'<'", "'>'", "'='", "'+'", "'*'", "'/'", "'\\\\'", "$accept",
  "programa", "definicion_programa", "codigo_programa", "varias_librerias",
  "libreria", "varios_identificadores", "nombre", "definicion_libreria",
  "codigo_libreria", "varias_declaraciones", "exportaciones",
  "varios_nombres", "declaracion", "declaracion_objeto",
  "especificacion_tipo", "declaracion_tipo", "tipo_no_estructurado",
  "tipo_escalar", "cero_o_uno_signo", "cero_o_uno_longitud",
  "cero_o_uno_rango", "tipo_tabla", "tipo_diccionario",
  "tipo_estructurado", "tipo_registro", "varios_campos", "campo",
  "tipo_enumerado", "varios_elemento_enumeracion", "elemento_enumeracion",
  "cero_o_uno_elemento_enumeracion", "clase", "cero_uno_ultima",
  "cero_uno_superclases", "superclases", "declaracion_componente",
  "varias_declaraciones_componente", "visibilidad", "componente",
  "varios_modificadores", "modificador", "declaracion_subprograma",
  "cabecera_subprograma", "cero_uno_parametrizacion",
  "cero_uno_tipoResultado", "parametrizacion", "declaracion_parametros",
  "varias_declaraciones_parametros", "cero_uno_expresion", "modo",
  "tipo_resultado", "cuerpo_subprograma", "varias_instrucciones",
  "instruccion", "instruccion_devolver", "cero_uno_expr",
  "instruccion_llamada", "llamada_subprograma",
  "varias_definicion_parametro", "instruccion_interrupcion",
  "cero_o_uno_cuando", "cero_o_uno_de_identificador",
  "instruccion_lanzamiento_excepcion", "instruccion_captura_excepcion",
  "clausulas", "clausulas_excepcion",
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
     345,    59,    58,    40,    41,    94,    45,    46,    91,    93,
     123,   125,   126,    60,    62,    61,    43,    42,    47,    92
};
# endif

#define YYPACT_NINF -130

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-130)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     100,    27,    50,     7,  -130,   -46,  -130,   -41,   -41,  -130,
     -20,    16,  -130,   -22,    -4,   100,   100,    46,    51,    61,
    -130,  -130,   129,  -130,   130,  -130,  -130,   -52,  -130,    45,
      62,    81,  -130,   -54,   111,  -130,  -130,  -130,  -130,  -130,
     -41,    94,    94,  -130,  -130,  -130,    72,    94,   143,    -9,
       3,  -130,   103,   -30,    94,    46,   158,  -130,   122,   155,
     166,   167,  -130,   103,  -130,  -130,  -130,    92,  -130,  -130,
    -130,   -41,     3,   170,  -130,  -130,     0,    -2,  -130,  -130,
    -130,   101,  -130,  -130,  -130,  -130,   103,   -40,   102,    46,
      -9,  -130,  -130,  -130,   125,   176,    46,   105,  -130,  -130,
    -130,  -130,    -9,    -9,   108,   107,    10,    -8,   134,  -130,
     109,  -130,  -130,  -130,  -130,   -33,  -130,   -73,  -130,  -130,
     110,   148,   -35,   -16,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,   113,     3,   173,   174,   182,  -130,  -130,  -130,
     117,  -130,   116,  -130,  -130,    -9,  -130,  -130,   -41,    89,
    -130,   146,    -9,   162,  -130,  -130,   -41,     3,   168,  -130,
     -11,  -130,  -130,  -130,  -130,  -130,     4,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,    75,
      99,  -130,   126,  -130,  -130,   -14,  -130,     6,  -130,    15,
    -130,     3,  -130,  -130,   206,  -130,  -130,  -130,  -130,  -130,
     193,  -130,  -130,  -130,     3,  -130,  -130,   127,     3,  -130
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     3,     0,     0,     1,
       0,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       8,     4,    18,     6,    18,    15,    11,     0,    14,     0,
       0,     0,     7,     0,     0,    19,    24,    25,    26,     5,
       0,    16,    18,    12,     9,    10,    83,    18,     0,    36,
       0,    20,    22,     0,    17,     0,    85,    84,     0,    36,
       0,     0,    37,    28,    27,    29,    32,     0,    33,    34,
     106,     0,     0,   113,   112,   104,     0,     0,    97,    99,
     100,     0,   101,   102,   103,    21,    23,     0,     0,     0,
      36,    82,    86,    81,    57,     0,     0,     0,    31,    43,
      44,    45,    36,    36,    38,     0,     0,     0,     0,   112,
       0,   109,    96,    98,   107,     0,    90,     0,    95,    58,
      59,    36,     0,     0,    47,    30,    42,    41,    39,    40,
     105,   115,     0,     0,     0,   117,     0,   122,   119,   114,
       0,   110,     0,    94,    93,    36,    91,    87,     0,    72,
      60,     0,    36,     0,    48,    35,     0,   126,     0,   118,
       0,   123,   120,   111,   108,    92,     0,    78,    75,    76,
      79,    80,    77,    68,    67,    66,    70,    69,    64,    72,
      72,    62,     0,    73,    55,     0,    52,     0,    46,     0,
     116,   125,    88,    61,     0,    65,    63,    74,    71,    54,
       0,    53,    92,    49,     0,    56,    51,     0,   124,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,  -130,  -130,   200,   147,   -15,    -7,  -130,  -130,
     136,  -130,  -130,    36,  -120,    22,  -113,   160,    96,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,    97,  -130,  -130,
      37,  -130,  -130,  -130,  -130,  -130,    42,  -130,  -130,    43,
    -130,    44,    47,  -130,  -130,  -130,  -130,   135,  -130,    23,
    -130,  -130,   180,  -129,   -69,  -130,  -130,  -130,  -130,  -130,
    -130,   119,  -130,  -130,  -130,  -130,  -130,  -130,    95,  -130,
      98
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    21,    22,    23,    33,    76,     6,    25,
      34,    42,    53,    35,    36,    64,    37,    65,    66,    67,
     129,   155,    68,    69,    98,    99,   123,   124,   100,   185,
     186,   199,   101,   120,   149,   150,   178,   179,   180,   181,
     182,   183,    38,    47,    56,    91,    57,    88,    89,   192,
     145,    92,    39,    77,    78,    79,   105,    80,    81,   142,
      82,   110,   109,    83,    84,   134,   135,   136,   137,   162,
     138
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      13,    14,    27,   107,   157,    19,    70,     9,   113,    60,
      17,    43,   153,    43,   200,    70,   143,   132,   146,    11,
      70,   147,   133,    71,    12,    43,   112,    61,   144,   176,
      43,   191,    71,    52,    72,    12,   177,    71,    49,    44,
      87,    73,    63,    72,    74,    62,    86,    18,    72,    26,
      73,   184,   115,    74,    12,    73,    12,   152,    74,   176,
     176,    85,     7,    12,   106,    18,   177,   177,    12,    18,
      51,    15,    10,    18,    87,   208,   202,    51,   167,    18,
      75,   122,   156,    63,    18,     8,   168,    20,   113,    75,
      51,   169,   167,   111,    75,    63,    63,   203,   193,   170,
     168,   131,   167,   194,   171,   169,   172,    16,   122,   204,
     168,    26,   118,   170,     1,   169,    28,   173,   171,   174,
     172,   175,   113,   170,   126,   127,    29,    46,   171,   167,
     172,   173,     2,   174,    31,   175,    45,   168,    63,   113,
      26,   166,   169,     1,     1,    63,    48,     5,    31,   189,
     170,    30,    50,    31,    26,   171,    40,   172,    31,    26,
      41,     2,     2,    94,    26,    55,    59,   165,    30,    32,
      31,    32,    18,    60,   187,    90,    26,    95,    54,    93,
     102,   103,   104,    30,   108,   119,    30,    30,    31,    31,
     121,    61,   114,   116,    26,    26,   125,   128,   130,   139,
     141,   158,    62,   148,   133,    96,   156,   160,   163,    62,
     164,   184,   188,   190,   205,   206,    24,   151,   209,    97,
     154,   195,   201,   196,   117,   207,   197,    58,   140,   198,
       0,   161,     0,   159
};

static const yytype_int16 yycheck[] =
{
       7,     8,    17,    72,   133,     9,    17,     0,    77,    18,
      32,    65,    28,    65,    28,    17,    49,    25,    91,    65,
      17,    94,    30,    34,    65,    65,    28,    36,    61,   149,
      65,   160,    34,    40,    45,    65,   149,    34,    92,    91,
      55,    52,    49,    45,    55,    54,    53,    69,    45,    65,
      52,    65,    92,    55,    65,    52,    65,    92,    55,   179,
     180,    91,    35,    65,    71,    69,   179,   180,    65,    69,
      34,    91,    65,    69,    89,   204,    70,    41,     3,    69,
      91,    96,    93,    90,    69,    35,    11,    91,   157,    91,
      54,    16,     3,    93,    91,   102,   103,    91,    94,    24,
      11,    91,     3,    28,    29,    16,    31,    91,   123,    94,
      11,    65,    90,    24,    14,    16,    65,    42,    29,    44,
      31,    46,   191,    24,   102,   103,    65,    65,    29,     3,
      31,    42,    32,    44,    59,    46,    91,    11,   145,   208,
      65,   148,    16,    14,    14,   152,    65,     0,    59,   156,
      24,    57,    41,    59,    65,    29,    26,    31,    59,    65,
      24,    32,    32,     8,    65,    93,    23,   145,    57,    22,
      59,    24,    69,    18,   152,    17,    65,    22,    42,    57,
      14,    14,    90,    57,    14,    60,    57,    57,    59,    59,
      14,    36,    91,    91,    65,    65,    91,    89,    91,    65,
      91,    28,    54,    93,    30,    50,    93,    25,    91,    54,
      94,    65,    50,    45,     8,    22,    16,   121,    91,    59,
     123,   179,   185,   180,    89,   202,   182,    47,   109,   182,
      -1,   136,    -1,   135
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    32,   111,   112,   115,   118,    35,    35,     0,
      65,    65,    65,   117,   117,    91,    91,    32,    69,     9,
      91,   113,   114,   115,   114,   119,    65,   116,    65,    65,
      57,    59,   115,   116,   120,   123,   124,   126,   152,   162,
      26,   120,   121,    65,    91,    91,    65,   153,    65,    92,
      41,   123,   117,   122,   120,    93,   154,   156,   162,    23,
      18,    36,    54,   117,   125,   127,   128,   129,   132,   133,
      17,    34,    45,    52,    55,    91,   117,   163,   164,   165,
     167,   168,   170,   173,   174,    91,   117,   116,   157,   158,
      17,   155,   161,    57,     8,    22,    50,   127,   134,   135,
     138,   142,    14,    14,    90,   166,   117,   164,    14,   172,
     171,    93,    28,   164,    91,    92,    91,   157,   125,    60,
     143,    14,   116,   136,   137,    91,   125,   125,    89,   130,
      91,    91,    25,    30,   175,   176,   177,   178,   180,    65,
     171,    91,   169,    49,    61,   160,    91,    94,    93,   144,
     145,   128,    92,    28,   137,   131,    93,   163,    28,   180,
      25,   178,   179,    91,    94,   125,   117,     3,    11,    16,
      24,    29,    31,    42,    44,    46,   124,   126,   146,   147,
     148,   149,   150,   151,    65,   139,   140,   125,    50,   117,
      45,   163,   159,    94,    28,   146,   149,   151,   152,   141,
      28,   140,    70,    91,    94,     8,    22,   159,   163,    91
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   112,   113,   114,   114,   115,   115,
     115,   116,   116,   117,   117,   118,   119,   119,   120,   120,
     120,   121,   122,   122,   123,   123,   123,   124,   125,   125,
     126,   126,   127,   127,   127,   128,   129,   129,   130,   130,
     131,   132,   133,   134,   134,   134,   135,   136,   136,   137,
     137,   138,   139,   139,   140,   141,   142,   143,   143,   144,
     144,   145,   146,   146,   147,   147,   148,   148,   148,   149,
     149,   149,   150,   150,   150,   151,   151,   151,   151,   151,
     151,   152,   153,   154,   154,   155,   155,   156,   157,   158,
     158,   158,   159,   160,   160,   161,   162,   163,   163,   164,
     164,   164,   164,   164,   164,   165,   166,   167,   168,   169,
     170,   170,   171,   172,   172,   173,   174,   175,   175,   175,
     176,   177,   177,   177,   178,   179,   180
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     1,     2,     4,     6,
       6,     1,     2,     1,     3,     4,     2,     3,     0,     1,
       2,     3,     1,     2,     1,     1,     1,     3,     1,     1,
       5,     4,     1,     1,     1,     4,     0,     1,     0,     1,
       0,     3,     3,     1,     1,     1,     4,     1,     2,     4,
       6,     6,     1,     2,     2,     0,     6,     0,     1,     0,
       1,     3,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     4,     3,     0,     1,     0,     1,     4,     5,     0,
       2,     3,     0,     1,     1,     2,     4,     1,     2,     1,
       1,     1,     1,     1,     1,     3,     0,     2,     4,     0,
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
#line 1498 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 28 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Libreria -> definicion_libreria\n"); }
#line 1504 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 32 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_programa -> programa IDENTIFICADOR ; codigo_programa\n"); }
#line 1510 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 36 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_programa -> varias_librerias cuerpo_subprograma\n"); }
#line 1516 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 40 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias -> libreria\n"); }
#line 1522 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 41 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias ->  varias_libreria  libreria\n"); }
#line 1528 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 45 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
#line 1534 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 46 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
#line 1540 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 47 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); }
#line 1546 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 51 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores -> IDENTIFICADOR\n"); }
#line 1552 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 52 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores ->  varios_identificadores  IDENTIFICADOR\n"); }
#line 1558 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 56 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> IDENTIFICADOR\n"); }
#line 1564 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> CUATRO_PUNTOS IDENTIFICADOR\n"); }
#line 1570 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 67 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n"); }
#line 1576 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 72 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias  varias_declaraciones\n"); }
#line 1582 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 73 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias exportaciones varias_declaraciones\n"); }
#line 1588 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 79 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones -> declaracion \n"); }
#line 1594 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 80 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 1600 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 85 "simple.y" /* yacc.c:1646  */
    { printf ("  exportaciones -> EXPORTAR  varios_nombres ; \n"); }
#line 1606 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 89 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> nombre ; \n"); }
#line 1612 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 90 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> varios_nombres  nombre ; \n"); }
#line 1618 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 94 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_objeto \n"); }
#line 1624 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 95 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion ->  declaracion_tipo \n"); }
#line 1630 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 96 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_subprograma\n"); }
#line 1636 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 102 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo\n"); }
#line 1642 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 107 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> nombre\n"); }
#line 1648 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 108 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
#line 1654 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 113 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> EMPTY\n"); }
#line 1660 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 114 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
#line 1666 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 118 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_escalar\n"); }
#line 1672 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 119 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_tabla\n"); }
#line 1678 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 120 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_diccionario\n"); }
#line 1684 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 124 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar-> cero_o_uno_signo TIPO_BASICO cero_o_uno_longitud cero_o_uno_rango\n"); }
#line 1690 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 129 "simple.y" /* yacc.c:1646  */
    { printf ("   cero_o_uno_signo -> SIGNO\n"); }
#line 1696 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 134 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_longitud -> LONGITUD\n"); }
#line 1702 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 161 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
#line 1708 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 165 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
#line 1714 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 169 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_registro\n"); }
#line 1720 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 170 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
#line 1726 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 171 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> clase\n"); }
#line 1732 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 175 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
#line 1738 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 179 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> campo\n"); }
#line 1744 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 180 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> varios_campos campo\n"); }
#line 1750 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 184 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ;\n"); }
#line 1756 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 185 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ASIGNACION cero_uno_expresion;\n"); }
#line 1762 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 190 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar varios_campos FIN ENUMERACION\n"); }
#line 1768 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 194 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> elemento_enumeracion\n"); }
#line 1774 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 195 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> varios_elemento_enumeracion elemento_enumeracion\n"); }
#line 1780 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 199 "simple.y" /* yacc.c:1646  */
    { printf ("  elemento_enumeracion -> IDENTIFICADOR cero_o_uno_elemento_enumeracion\n"); }
#line 1786 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 211 "simple.y" /* yacc.c:1646  */
    { printf ("  clase -> CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE\n"); }
#line 1792 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 216 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_ultima -> ULTIMA\n"); }
#line 1798 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 222 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_superclases -> superclases\n"); }
#line 1804 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 227 "simple.y" /* yacc.c:1646  */
    { printf ("  superclases -> ( nombre )\n"); }
#line 1810 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 233 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> componente"); }
#line 1816 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 234 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> visibilidad componente"); }
#line 1822 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 238 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> declaracion_componente"); }
#line 1828 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 239 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> varias_declaraciones_componente declaracion_componente"); }
#line 1834 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 244 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad -> PUBLICO \n"); }
#line 1840 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 245 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PROTEGIDO \n"); }
#line 1846 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 246 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PRIVADO\n"); }
#line 1852 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 251 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_tipo"); }
#line 1858 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 252 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_objeto"); }
#line 1864 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 253 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> varios_modificadores declaracion_subprograma"); }
#line 1870 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 258 "simple.y" /* yacc.c:1646  */
    { printf ("varios_modificadores -> EMPTY\n"); }
#line 1876 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 259 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores -> modificador\n"); }
#line 1882 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 260 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores ->  varios_modificadores  modificador\n"); }
#line 1888 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 264 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> CONSTRUCTOR "); }
#line 1894 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 265 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  DESTRUCTOR "); }
#line 1900 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 266 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  GENERICO "); }
#line 1906 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 267 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> ABSTRACTO "); }
#line 1912 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 268 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  ESPECIFICO "); }
#line 1918 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 269 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> FINAL"); }
#line 1924 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 281 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }
#line 1930 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 290 "simple.y" /* yacc.c:1646  */
    { printf ("  cabecera_subprograma -> IDENTIFICADOR cero_uno_parametrizacion cero_uno_tipoResultado\n"); }
#line 1936 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 298 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_parametrizacion -> parametrizacion\n"); }
#line 1942 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 305 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_tipoResultado -> tipo_resultado\n"); }
#line 1948 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 313 "simple.y" /* yacc.c:1646  */
    { printf ("parametrizacion -> varias_declaraciones_parametros declaracion_parametros"); }
#line 1954 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 320 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo cero_uno_expresion"); }
#line 1960 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 326 "simple.y" /* yacc.c:1646  */
    {printf ("varias_declaraciones_parametros -> declaracion_parametros ;\n");}
#line 1966 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 327 "simple.y" /* yacc.c:1646  */
    {printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros ;\n");}
#line 1972 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 342 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> VALOR REFERENCIA"); }
#line 1978 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 348 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo"); }
#line 1984 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 358 "simple.y" /* yacc.c:1646  */
    { printf ("  cuerpo_subprograma -> varias_declaraciones PRINCIPIO varias_instrucciones FIN"); }
#line 1990 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 363 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> instruccion\n"); }
#line 1996 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 364 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones ->  varias_instrucciones  instruccion\n"); }
#line 2002 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 373 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_devolver\n"); }
#line 2008 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 374 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_llamada\n"); }
#line 2014 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 378 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_interrupcion\n"); }
#line 2020 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 379 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_lanzamiento_excepcion\n"); }
#line 2026 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 380 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_captura_excepcion\n"); }
#line 2032 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 381 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> ;\n"); }
#line 2038 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 416 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER cero_uno_expr ;\n"); }
#line 2044 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 430 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_llamada ->  llamada_subprograma ;\n"); }
#line 2050 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 439 "simple.y" /* yacc.c:1646  */
    { printf ("llamada_subprograma ->  nombre ( varias_definicion_parametro )\n"); }
#line 2056 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 561 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SIGUIENTE cero_o_uno_cuando ;\n");}
#line 2062 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 562 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SALIR cero_o_uno_de_identificador cero_o_uno_cuando ;\n");}
#line 2068 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 579 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_de_identificador -> DE IDENTIFICADOR\n");}
#line 2074 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 585 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_lanzamiento_excepcion ->LANZA nombre ;"); }
#line 2080 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 588 "simple.y" /* yacc.c:1646  */
    { printf ("instrucc_cap ->PRUEBA instruc clausulas FIN PRUEBA"); }
#line 2086 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 592 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion\n"); }
#line 2092 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 593 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
#line 2098 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 594 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausula_finalmente\n"); }
#line 2104 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 601 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion ->varias_clausula_excepcion_especifica clausula_excepcion_general "); }
#line 2110 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 607 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausula_excepcion_especifica ->clausula_excepcion_especifica\n"); }
#line 2116 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 608 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausula_excepcion_especifica ->varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); }
#line 2122 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 612 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excep_espec ->EXCEPCION ( nombre ) varias_instrucciones "); }
#line 2128 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 619 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_excepcion_general ->EXCEPCION instruccion"); }
#line 2134 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 625 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_finalmente ->FINALMENTE instruccion"); }
#line 2140 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 2144 "simple.tab.c" /* yacc.c:1646  */
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
#line 788 "simple.y" /* yacc.c:1906  */





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
