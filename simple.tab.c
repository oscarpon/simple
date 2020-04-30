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
#define YYLAST   291

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  225

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
       0,    27,    27,    28,    32,    36,    40,    41,    45,    46,
      47,    51,    52,    56,    57,    61,    62,    66,    71,    72,
      77,    78,    83,    87,    88,    92,    93,    94,   100,   105,
     106,   111,   112,   116,   117,   118,   122,   125,   127,   130,
     132,   135,   141,   142,   146,   147,   148,   149,   159,   163,
     167,   168,   169,   173,   177,   178,   182,   188,   189,   193,
     194,   198,   201,   209,   212,   214,   217,   219,   223,   228,
     229,   233,   234,   239,   240,   241,   245,   246,   247,   251,
     253,   254,   258,   259,   260,   261,   262,   263,   271,   275,
     278,   280,   283,   285,   289,   293,   294,   297,   299,   300,
     304,   305,   309,   314,   317,   319,   320,   324,   325,   334,
     335,   339,   340,   341,   342,   365,   370,   374,   377,   466,
     467,   475,   480,   482,   486,   490,   494,   495,   496,   501,
     504,   506,   507,   511,   515,   519
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

#define YYPACT_NINF -149

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-149)))

#define YYTABLE_NINF -136

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,   -41,   -34,    43,  -149,  -149,   -39,   -29,  -149,  -149,
    -149,   163,  -149,  -149,    53,    36,    16,    48,    25,    27,
    -149,  -149,    24,   127,   127,  -149,  -149,  -149,  -149,   127,
      55,  -149,    59,    16,  -149,    60,   -80,    16,     7,   127,
      90,    69,   117,  -149,   127,    63,   145,    88,    73,  -149,
      16,    -5,    94,   133,  -149,   104,   119,  -149,   160,   167,
    -149,  -149,    92,  -149,  -149,     9,  -149,  -149,    96,    16,
     145,   171,  -149,  -149,    99,   111,  -149,  -149,  -149,   103,
    -149,  -149,  -149,    94,  -149,  -149,   131,  -149,    29,   107,
      94,   234,  -149,  -149,  -149,   141,    -6,    94,   112,  -149,
    -149,  -149,  -149,   234,   234,  -149,  -149,  -149,  -149,  -149,
      -3,  -149,   116,    81,   144,  -149,   120,  -149,  -149,  -149,
    -149,    39,   124,     0,  -149,   -17,  -149,  -149,   129,   170,
    -149,   -23,  -149,    72,   -21,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,   147,   145,   193,   195,   210,  -149,
    -149,  -149,   136,  -149,   150,  -149,  -149,  -149,  -149,  -149,
      28,  -149,  -149,    16,   202,  -149,   174,  -149,   227,   174,
     117,   208,  -149,  -149,    16,   115,   214,  -149,    11,  -149,
    -149,  -149,  -149,  -149,  -149,   -15,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,   188,   226,
    -149,   -32,  -149,   -22,  -149,  -149,   169,  -149,   168,  -149,
       3,  -149,  -149,   254,  -149,  -149,   240,  -149,   243,  -149,
     145,  -149,  -149,  -149,   123
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     1,     7,
       7,     0,    17,     4,   104,     0,    14,     0,     0,     0,
      12,     6,     0,    18,     0,    20,    25,    26,    27,     0,
      20,     5,     0,    14,    23,     0,     0,    14,    90,   104,
       0,     0,    37,    21,    19,    21,    14,     0,    13,    22,
      14,     0,     0,    92,    91,     0,    37,    11,     0,     0,
      38,    29,     0,    30,    33,     0,    34,    35,     0,    14,
      14,   122,   121,   114,     0,    14,   107,   109,   110,     0,
     111,   112,   113,     0,    15,    24,     0,     8,     0,     0,
       0,    14,    89,    93,    88,    64,     0,     0,     0,    32,
      50,    51,    52,    14,    14,    28,    44,    45,    46,    47,
      39,   115,     0,    14,     0,   121,     0,   118,   103,   108,
     116,     0,     0,    37,    98,     0,   102,    65,    66,    37,
      62,     0,    59,     0,     0,    54,    31,    49,    48,    42,
      43,    41,    40,   124,     0,    14,     0,   126,     0,   131,
     128,   123,     0,   119,     0,     9,    10,   101,   100,    62,
      37,    99,    94,    14,    79,    67,     0,    61,     0,     0,
      37,     0,    55,    36,    14,    14,     0,   127,    16,   132,
     129,   120,   117,    95,    62,     0,    85,    82,    83,    86,
      87,    84,    75,    74,    73,    77,    76,    71,    79,    79,
      69,     0,    80,     0,    57,    60,     0,    53,     0,   125,
     134,    96,    68,     0,    72,    70,     0,    78,     0,    56,
      14,    63,    81,    58,    14
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,  -149,  -149,   256,  -149,   -50,   -16,  -149,  -149,
    -149,     8,  -149,   105,    85,  -148,   -81,  -126,   216,   146,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
     139,  -149,   108,   109,  -145,  -149,  -149,  -149,  -149,    78,
    -149,  -149,    80,  -149,    61,    79,  -149,  -149,  -149,  -149,
     191,  -149,  -149,  -149,   244,  -149,   -69,   -72,  -149,  -149,
    -149,  -149,  -149,   172,  -149,  -149,  -149,  -149,  -149,  -149,
     138,  -149,   137
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    13,    11,    21,    22,    74,    35,     5,
      12,    29,    24,    36,    25,    26,    62,    27,    63,    64,
      65,   141,   173,   142,   110,    66,    67,    99,   100,   134,
     135,   101,   131,   132,   167,   102,   128,   164,   165,   197,
     198,   199,   200,   201,   202,    28,    39,    53,    92,    54,
      89,    90,   160,    93,    31,    32,    75,    76,    77,    78,
      79,   154,    80,   116,   115,    81,    82,   146,   147,   148,
     149,   180,   150
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,   113,    88,   119,    86,   168,   218,   171,   129,   139,
     126,    49,    50,   106,   183,   107,   195,    47,    58,    23,
      68,    51,   137,   138,     6,    18,    61,     1,    68,   108,
     140,     7,    44,   121,    85,     2,    59,    69,   196,   211,
      88,   119,   159,     8,    20,    69,    58,   133,    70,   157,
     195,   195,     9,   112,    60,    71,    70,   109,    72,   130,
     216,   158,    10,    71,    59,   -16,    72,    15,   -16,   169,
     169,    33,   196,   196,   161,    61,   175,    50,   162,   184,
     212,   -16,    60,    37,   133,    17,    87,    61,    61,   206,
      38,   -14,    40,   -16,    73,   -14,  -105,   -14,    68,    30,
      46,    52,    73,   119,  -106,   174,   144,    61,    43,   210,
      18,   145,    19,    56,    45,    69,    41,    42,    20,   -14,
      83,    41,   123,   -14,    30,    48,    70,    95,    68,    43,
     155,    41,    68,    71,    57,    58,    72,    58,   119,   118,
      68,    96,    84,  -135,    61,    69,   -16,    34,  -133,    69,
      91,   224,   119,    59,    61,    59,    70,    69,   208,    20,
      70,    94,    68,    71,    41,   170,    72,    71,    70,    97,
      72,    60,    73,    60,   103,    71,   -16,    15,    72,    69,
     -16,   104,   -16,   105,    18,   114,    19,   111,   -16,    16,
      70,   186,    20,   117,   120,    17,   122,    71,   124,   187,
      72,   127,    73,   136,   188,   186,    73,   143,   -14,   151,
     -16,   153,   189,   187,    73,   156,   213,   190,   188,   191,
      18,   176,    19,   163,    60,   145,   189,   181,    20,   186,
     192,   190,   193,   191,   194,   178,    73,   187,   -37,   130,
     -37,   174,   188,   186,   192,   182,   193,    19,   194,   204,
     189,   187,    58,    20,   -37,   190,   188,   191,   207,   209,
     219,    19,   221,   220,   189,   223,    14,    20,   185,   190,
      59,   191,    98,   172,   203,   166,   214,   222,   205,   215,
     217,   125,   -37,    55,   177,    19,   179,   152,    60,     0,
       0,    20
};

static const yytype_int16 yycheck[] =
{
      16,    70,    52,    75,     9,    28,    28,    28,    14,    12,
      91,    91,    92,     4,   159,     6,   164,    33,    18,    11,
      17,    37,   103,   104,    65,    57,    42,    35,    17,    20,
      33,    65,    24,    83,    50,    43,    36,    34,   164,   184,
      90,   113,   123,     0,    65,    34,    18,    97,    45,    49,
     198,   199,    91,    69,    54,    52,    45,    48,    55,    65,
      92,    61,    91,    52,    36,    65,    55,    14,    65,    92,
      92,    35,   198,   199,    91,    91,   145,    92,    95,   160,
      95,    65,    54,    35,   134,    32,    91,   103,   104,   170,
      65,    91,    65,    65,    91,    95,    41,    94,    17,    14,
      41,    94,    91,   175,    41,    94,    25,   123,    23,   178,
      57,    30,    59,    23,    29,    34,    92,    93,    65,    91,
      32,    92,    93,    95,    39,    65,    45,     8,    17,    44,
      91,    92,    17,    52,    65,    18,    55,    18,   210,    28,
      17,    22,    69,    28,   160,    34,    65,   163,    25,    34,
      17,   220,   224,    36,   170,    36,    45,    34,   174,    65,
      45,    57,    17,    52,    92,    93,    55,    52,    45,    50,
      55,    54,    91,    54,    14,    52,    65,    14,    55,    34,
      65,    14,    65,    91,    57,    14,    59,    91,    65,    26,
      45,     3,    65,    94,    91,    32,    65,    52,    91,    11,
      55,    60,    91,    91,    16,     3,    91,    91,    91,    65,
      65,    91,    24,    11,    91,    91,    28,    29,    16,    31,
      57,    28,    59,    94,    54,    30,    24,    91,    65,     3,
      42,    29,    44,    31,    46,    25,    91,    11,     4,    65,
       6,    94,    16,     3,    42,    95,    44,    59,    46,    22,
      24,    11,    18,    65,    20,    29,    16,    31,    50,    45,
      91,    59,     8,    95,    24,    22,    10,    65,   163,    29,
      36,    31,    56,   134,   166,   129,   198,   216,   169,   199,
     201,    90,    48,    39,   147,    59,   148,   115,    54,    -1,
      -1,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   112,   113,   120,    65,    65,     0,    91,
      91,   115,   121,   114,   115,    14,    26,    32,    57,    59,
      65,   116,   117,   122,   123,   125,   126,   128,   156,   122,
     125,   165,   166,    35,   118,   119,   124,    35,    65,   157,
      65,    92,    93,   125,   122,   125,    41,   118,    65,    91,
      92,   118,    94,   158,   160,   165,    23,    65,    18,    36,
      54,   118,   127,   129,   130,   131,   136,   137,    17,    34,
      45,    52,    55,    91,   118,   167,   168,   169,   170,   171,
     173,   176,   177,    32,    69,   118,     9,    91,   117,   161,
     162,    17,   159,   164,    57,     8,    22,    50,   129,   138,
     139,   142,   146,    14,    14,    91,     4,     6,    20,    48,
     135,    91,   118,   167,    14,   175,   174,    94,    28,   168,
      91,   117,    65,    93,    91,   161,   127,    60,   147,    14,
      65,   143,   144,   117,   140,   141,    91,   127,   127,    12,
      33,   132,   134,    91,    25,    30,   178,   179,   180,   181,
     183,    65,   174,    91,   172,    91,    91,    49,    61,   127,
     163,    91,    95,    94,   148,   149,   130,   145,    28,    92,
      93,    28,   141,   133,    94,   167,    28,   183,    25,   181,
     182,    91,    95,   145,   127,   124,     3,    11,    16,    24,
      29,    31,    42,    44,    46,   126,   128,   150,   151,   152,
     153,   154,   155,   143,    22,   144,   127,    50,   118,    45,
     167,   145,    95,    28,   150,   153,    92,   156,    28,    91,
      95,     8,   155,    22,   167
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   113,   114,   115,   115,   116,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   121,   121,
     122,   122,   123,   124,   124,   125,   125,   125,   126,   127,
     127,   128,   128,   129,   129,   129,   130,   131,   131,   132,
     132,   133,   134,   134,   135,   135,   135,   135,   136,   137,
     138,   138,   138,   139,   140,   140,   141,   142,   142,   143,
     143,   144,   145,   146,   147,   147,   148,   148,   149,   150,
     150,   151,   151,   152,   152,   152,   153,   153,   153,   154,
     154,   154,   155,   155,   155,   155,   155,   155,   156,   157,
     158,   158,   159,   159,   160,   161,   161,   162,   162,   162,
     163,   163,   164,   165,   166,   166,   166,   167,   167,   168,
     168,   168,   168,   168,   168,   169,   170,   171,   172,   173,
     173,   174,   175,   175,   176,   177,   178,   178,   178,   179,
     180,   180,   180,   181,   182,   183
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     2,     0,     4,     6,
       6,     3,     1,     2,     0,     3,     0,     4,     2,     3,
       1,     2,     3,     1,     3,     1,     1,     1,     4,     1,
       1,     5,     4,     1,     1,     1,     4,     0,     1,     0,
       1,     0,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     1,     1,     4,     1,     2,     4,     4,     6,     1,
       3,     2,     0,     6,     0,     1,     0,     1,     3,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     2,     0,
       1,     3,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     1,     0,     1,     4,     4,     5,     0,     2,     3,
       1,     1,     2,     4,     0,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     2,     2,     4,     0,     3,
       4,     0,     0,     2,     3,     5,     1,     2,     1,     2,
       0,     1,     2,     5,     2,     2
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
#line 1520 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 28 "simple.y" /* yacc.c:1646  */
    { printf ("EXITO: Libreria -> definicion_libreria\n"); }
#line 1526 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 32 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_programa -> programa IDENTIFICADOR ; codigo_programa\n"); }
#line 1532 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 36 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_programa -> varias_librerias cuerpo_subprograma\n"); }
#line 1538 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 40 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_librerias -> varias_librerias libreria\n"); }
#line 1544 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 45 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
#line 1550 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 46 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
#line 1556 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 47 "simple.y" /* yacc.c:1646  */
    { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); }
#line 1562 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 51 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores ->  varios_identificadores  IDENTIFICADOR\n"); }
#line 1568 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 52 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_identificadores -> IDENTIFICADOR\n"); }
#line 1574 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 56 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> varios_identificadores2 IDENTIFICADOR\n"); }
#line 1580 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 61 "simple.y" /* yacc.c:1646  */
    { printf ("varios_identificadores2 -> varios_identificadores2 IDENTIFICADOR CUATRO_PUNTOS \n"); }
#line 1586 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 66 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_libreria -> libreria IDENTIFICADOR ; codigo_libreria\n"); }
#line 1592 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 71 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias  varias_declaraciones\n"); }
#line 1598 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 72 "simple.y" /* yacc.c:1646  */
    { printf ("  codigo_libreria -> varias_librerias exportaciones varias_declaraciones\n"); }
#line 1604 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 77 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones -> declaracion \n"); }
#line 1610 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 78 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 1616 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 83 "simple.y" /* yacc.c:1646  */
    { printf ("  exportaciones -> EXPORTAR  varios_nombres ; \n"); }
#line 1622 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 87 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> nombre ; \n"); }
#line 1628 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 88 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_nombres -> varios_nombres ',' nombre ; \n"); }
#line 1634 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 92 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_objeto \n"); }
#line 1640 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 93 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion ->  declaracion_tipo \n"); }
#line 1646 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 94 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion -> declaracion_subprograma\n"); }
#line 1652 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 100 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ;\n"); }
#line 1658 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 105 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> nombre\n"); }
#line 1664 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 106 "simple.y" /* yacc.c:1646  */
    { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
#line 1670 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 111 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
#line 1676 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 112 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
#line 1682 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 116 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_escalar\n"); }
#line 1688 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 117 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_tabla\n"); }
#line 1694 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 118 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_no_estructurado -> tipo_diccionario\n"); }
#line 1700 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 122 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar-> cero_o_uno_signo tipo_basico cero_o_uno_longitud cero_o_uno_rango\n"); }
#line 1706 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 127 "simple.y" /* yacc.c:1646  */
    { printf ("   cero_o_uno_signo -> SIGNO\n"); }
#line 1712 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 132 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_o_uno_longitud -> longitud\n"); }
#line 1718 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 141 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> CORTO\n"); }
#line 1724 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 142 "simple.y" /* yacc.c:1646  */
    { printf ("  longitud -> LARGO\n"); }
#line 1730 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 146 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> BOOLEANO\n"); }
#line 1736 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 147 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> CARACTER\n"); }
#line 1742 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 148 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> ENTERO\n"); }
#line 1748 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 149 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> REAL\n"); }
#line 1754 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 159 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
#line 1760 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 163 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
#line 1766 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 167 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_registro\n"); }
#line 1772 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 168 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
#line 1778 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 169 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_estructurado -> clase\n"); }
#line 1784 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 173 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
#line 1790 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 177 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> campo\n"); }
#line 1796 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 178 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_campos -> varios_campos campo\n"); }
#line 1802 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 182 "simple.y" /* yacc.c:1646  */
    { printf ("  campo -> varios_identificadores : especificacion_tipo ;\n"); }
#line 1808 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 188 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION varios_campos FIN ENUMERACION\n"); }
#line 1814 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 189 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar varios_campos FIN ENUMERACION\n"); }
#line 1820 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 193 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> elemento_enumeracion\n"); }
#line 1826 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 194 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_elemento_enumeracion -> varios_elemento_enumeracion , elemento_enumeracion\n"); }
#line 1832 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 198 "simple.y" /* yacc.c:1646  */
    { printf ("  elemento_enumeracion -> IDENTIFICADOR cero_uno_expresion\n"); }
#line 1838 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 209 "simple.y" /* yacc.c:1646  */
    { printf ("  clase -> CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE\n"); }
#line 1844 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 214 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_ultima -> ULTIMA\n"); }
#line 1850 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 219 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_superclases -> superclases\n"); }
#line 1856 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 223 "simple.y" /* yacc.c:1646  */
    { printf ("  superclases -> ( varios_nombres ) \n"); }
#line 1862 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 228 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> componente"); }
#line 1868 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 229 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_componente -> visibilidad componente"); }
#line 1874 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 233 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> declaracion_componente"); }
#line 1880 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 234 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones_componente -> varias_declaraciones_componente declaracion_componente"); }
#line 1886 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 239 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad -> PUBLICO \n"); }
#line 1892 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 240 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PROTEGIDO \n"); }
#line 1898 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 241 "simple.y" /* yacc.c:1646  */
    { printf ("  visibilidad ->  PRIVADO\n"); }
#line 1904 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 245 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_tipo"); }
#line 1910 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 246 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> declaracion_objeto"); }
#line 1916 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 247 "simple.y" /* yacc.c:1646  */
    { printf ("  componente -> varios_modificadores declaracion_subprograma"); }
#line 1922 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 253 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores -> modificador\n"); }
#line 1928 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 254 "simple.y" /* yacc.c:1646  */
    { printf ("  varios_modificadores ->  varios_modificadores , modificador\n"); }
#line 1934 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 258 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> CONSTRUCTOR "); }
#line 1940 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 259 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  DESTRUCTOR "); }
#line 1946 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 260 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  GENERICO "); }
#line 1952 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 261 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> ABSTRACTO "); }
#line 1958 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 262 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  ESPECIFICO "); }
#line 1964 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 263 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> FINAL"); }
#line 1970 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 271 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }
#line 1976 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 275 "simple.y" /* yacc.c:1646  */
    { printf ("  cabecera_subprograma -> IDENTIFICADOR cero_uno_parametrizacion cero_uno_tipoResultado\n"); }
#line 1982 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 280 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_parametrizacion -> parametrizacion\n"); }
#line 1988 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 285 "simple.y" /* yacc.c:1646  */
    { printf ("  cero_uno_tipoResultado -> tipo_resultado\n"); }
#line 1994 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 289 "simple.y" /* yacc.c:1646  */
    { printf ("parametrizacion -> ( varias_declaraciones_parametros declaracion_parametros ) \n"); }
#line 2000 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 293 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo cero_uno_expresion"); }
#line 2006 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 294 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo cero_uno_expresion"); }
#line 2012 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 299 "simple.y" /* yacc.c:1646  */
    {printf ("varias_declaraciones_parametros -> declaracion_parametros ;\n");}
#line 2018 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 300 "simple.y" /* yacc.c:1646  */
    {printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros ;\n");}
#line 2024 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 304 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> VALOR\n"); }
#line 2030 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 305 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> REFERENCIA\n"); }
#line 2036 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 309 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
#line 2042 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 314 "simple.y" /* yacc.c:1646  */
    { printf ("  cuerpo_subprograma -> cero_o_mas_declaraciones PRINCIPIO varias_instrucciones FIN"); }
#line 2048 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 319 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones -> declaracion \n"); }
#line 2054 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 320 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
#line 2060 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 324 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> instruccion\n"); }
#line 2066 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 325 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_instrucciones -> varias_instrucciones  instruccion\n"); }
#line 2072 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 334 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_devolver\n"); }
#line 2078 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 335 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_llamada\n"); }
#line 2084 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 339 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_interrupcion\n"); }
#line 2090 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 340 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_lanzamiento_excepcion\n"); }
#line 2096 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 341 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_captura_excepcion\n"); }
#line 2102 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 342 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> ;\n"); }
#line 2108 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 365 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> DEVOLVER ;\n"); }
#line 2114 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 370 "simple.y" /* yacc.c:1646  */
    { printf ("  instruccion_llamada ->  llamada_subprograma ;\n"); }
#line 2120 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 374 "simple.y" /* yacc.c:1646  */
    { printf ("llamada_subprograma ->  nombre ( varias_definicion_parametro )\n"); }
#line 2126 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 466 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SIGUIENTE cero_o_uno_cuando ;\n");}
#line 2132 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 467 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion ->  SALIR cero_o_uno_de_identificador cero_o_uno_cuando ;\n");}
#line 2138 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 482 "simple.y" /* yacc.c:1646  */
    {printf ("cero_o_uno_de_identificador -> DE IDENTIFICADOR\n");}
#line 2144 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 486 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_lanzamiento_excepcion ->LANZA nombre ;"); }
#line 2150 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 490 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_captura_excepcion ->PRUEBA varias_instrucciones clausulas FIN PRUEBA"); }
#line 2156 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 494 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion\n"); }
#line 2162 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 495 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
#line 2168 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 496 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausula_finalmente\n"); }
#line 2174 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 501 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion ->varias_clausula_excepcion_especifica clausula_excepcion_general "); }
#line 2180 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 506 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausula_excepcion_especifica ->clausula_excepcion_especifica\n"); }
#line 2186 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 507 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausula_excepcion_especifica ->varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); }
#line 2192 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 511 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion_especifica -> EXCEPCION ( nombre ) varias_instrucciones "); }
#line 2198 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 515 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_excepcion_general ->EXCEPCION varias_instruccion"); }
#line 2204 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 519 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_finalmente ->FINALMENTE varias_instrucciones"); }
#line 2210 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 2214 "simple.tab.c" /* yacc.c:1646  */
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
#line 683 "simple.y" /* yacc.c:1906  */





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
