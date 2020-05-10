/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
