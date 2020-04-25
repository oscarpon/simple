%{
  #include <stdio.h>
  #include "stupido.tab.h"
  int lines = 1;
%}

IDENTIFICADOR       [a-zA-Z|_]+[0-9]*
REALES              [0-9]*[\.]{1}[0-9]+([eE][+-]?[0-9]+)?
ENTEROS             [+-]?[0-9]+
CADENA              ('(({CARACTER}|[ ])*(\n)*)*')
CARACTER            \'("%\â€™")|("%\\")|("%\a")|("%\b")|("%\f")|("%\n")|("%\r")|("%\t")|("%\v")\'
PATH                (\"([.]{2}[/]|[.][/]|[/])[a-zA-Z0-9/]+\")
COMENTARIOS         ((\/\*([^*]|[\r\n])*\*\/)|(\/\/.*))

%%
[ \t];
\n lines++;
[ ] ;

(?i:abstracto)        printf("linea %d, palabra reservada: %s\n",lines,yytext);return(ABSTRACTO);
(?i:asociativa)       printf("linea %d, palabra reservada: %s\n",lines,yytext);return(ASOCIATIVA);
(?i:booleano)         printf("linea %d, palabra reservada: %s\n",lines,yytext);return(BOOLEANO);
(?i:cabecera)         printf("linea %d, palabra reservada: %s\n",lines,yytext);return(CABECERA);
(?i:cadena)           printf("linea %d, palabra reservada: %s\n",lines,yytext);return(CADENA);
(?i:caso)             printf("linea %d, palabra reservada: %s\n",lines,yytext);return(CASO);
(?i:caracter)         printf("linea %d, palabra reservada: %s\n",lines,yytext);return(CARACTER);
(?i:clase)            printf("linea %d, palabra reservada: %s\n",lines,yytext);return(CLASE);
(?i:conjunto)         printf("linea %d, palabra reservada: %s\n",lines,yytext);return(CONJUNTO);
(?i:constante)        printf("linea %d, palabra reservada: %s\n",lines,yytext);return(CONSTANTE);
(?i:cuerpo)           printf("linea %d, palabra reservada: %s\n",lines,yytext);return(CUERPO);
(?i:constructor)      printf("linea %d, palabra reservada: %s\n",lines,yytext);return(CONSTRUCTOR);
(?i:cuando)           printf("linea %d, palabra reservada: %s\n",lines,yytext);return(CUANDO);
(?i:descendente)      printf("linea %d, palabra reservada: %s\n",lines,yytext);return(DESCENDENTE);
(?i:destructor)       printf("linea %d, palabra reservada: %s\n",lines,yytext);return(DESTRUCTOR);
(?i:de)               printf("linea %d, palabra reservada: %s\n",lines,yytext);return(DE);
(?i:devolver)         printf("linea %d, palabra reservada: %s\n",lines,yytext);return(DEVOLVER);
(?i:carga)            printf("linea %d, palabra reservada: %s\n",lines,yytext);return(CARGA);
(?i:elemento)         printf("linea %d, palabra reservada: %s\n",lines,yytext);return(ELEMENTO);
(?i:ejecuta)          printf("linea %d, palabra reservada: %s\n",lines,yytext);return(EJECUTA);
(?i:en)               printf("linea %d, palabra reservada: %s\n",lines,yytext);return(EN);
(?i:entero)           printf("linea %d, palabra reservada: %s\n",lines,yytext);return(ENTERO);
(?i:entonces)         printf("linea %d, palabra reservada: %s\n",lines,yytext);return(ENTONCES);
(?i:es)               printf("linea %d, palabra reservada: %s\n",lines,yytext);return(ES);
(?i:especifico)       printf("linea %d, palabra reservada: %s\n",lines,yytext);return(ESPECIFICO);
(?i:excepto)          printf("linea %d, palabra reservada: %s\n",lines,yytext);return(EXCEPTO);
(?i:fichero)          printf("linea %d, palabra reservada: %s\n",lines,yytext);return(FICHERO);
(?i:final)            printf("linea %d, palabra reservada: %s\n",lines,yytext);return(FINAL);
(?i:finalmente)       printf("linea %d, palabra reservada: %s\n",lines,yytext);return(FINALMENTE);
(?i:funcion)          printf("linea %d, palabra reservada: %s\n",lines,yytext);return(FUNCION);
(?i:generico)         printf("linea %d, palabra reservada: %s\n",lines,yytext);return(GENERICO);
(?i:hasta)            printf("linea %d, palabra reservada: %s\n",lines,yytext);return(HASTA);
(?i:interfaz)         printf("linea %d, palabra reservada: %s\n",lines,yytext);return(INTERFAZ);
(?i:lanzar)           printf("linea %d, palabra reservada: %s\n",lines,yytext);return(LANZAR);
(?i:lista)            printf("linea %d, palabra reservada: %s\n",lines,yytext);return(LISTA);
(?i:mientras)         printf("linea %d, palabra reservada: %s\n",lines,yytext);return(MIENTRAS);
(?i:modificable)      printf("linea %d, palabra reservada: %s\n",lines,yytext);return(MODIFICABLE);
(?i:otro)             printf("linea %d, palabra reservada: %s\n",lines,yytext);return(OTRO);
(?i:paquete)          printf("linea %d, palabra reservada: %s\n",lines,yytext);return(PAQUETE);
(?i:para)             printf("linea %d, palabra reservada: %s\n",lines,yytext);return(PARA);
(?i:privado)          printf("linea %d, palabra reservada: %s\n",lines,yytext);return(PRIVADO);
(?i:probar)           printf("linea %d, palabra reservada: %s\n",lines,yytext);return(PROBAR);
(?i:procedimiento)    printf("linea %d, palabra reservada: %s\n",lines,yytext);return(PROCEDIMIENTO);
(?i:programa)         printf("linea %d, palabra reservada: %s\n",lines,yytext);return(PROGRAMA);
(?i:publico)          printf("linea %d, palabra reservada: %s\n",lines,yytext);return(PUBLICO);
(?i:real)             printf("linea %d, palabra reservada: %s\n",lines,yytext);return(REAL);
(?i:registro)         printf("linea %d, palabra reservada: %s\n",lines,yytext);return(REGISTRO);
(?i:repite)           printf("linea %d, palabra reservada: %s\n",lines,yytext);return(REPITE);
(?i:salir)            printf("linea %d, palabra reservada: %s\n",lines,yytext);return(SALIR);
(?i:semipublico)      printf("linea %d, palabra reservada: %s\n",lines,yytext);return(SEMIPUBLICO);
(?i:si)               printf("linea %d, palabra reservada: %s\n",lines,yytext);return(SI);
(?i:sino)             printf("linea %d, palabra reservada: %s\n",lines,yytext);return(SINO);
(?i:tipo)             printf("linea %d, palabra reservada: %s\n",lines,yytext);return(TIPO);
(?i:variable)         printf("linea %d, palabra reservada: %s\n",lines,yytext);return(VARIABLE);


{IDENTIFICADOR}       printf("linea %d, identificador: %s\n",lines,yytext);return(IDENTIFICADOR);
{REALES}              printf("linea %d, constante real: %s\n",lines,yytext);return(CTC_REAL);
{ENTEROS}             printf("linea %d, constante entera: %s\n",lines,yytext);return(CTC_ENTERA);
{CARACTER}            printf("linea %d, constante caracter: %s\n",lines,yytext);return(CTC_CARACTER);
{CADENA}              printf("linea %d, constante cadena: %s\n",lines,yytext);return(CTC_CADENA);
{PATH}                printf("linea %d, constante path: %s\n",lines,yytext);return(PATH);
{COMENTARIOS}         printf("linea %d, comentario: %s\n",lines,yytext);

[\+\-\*\/\.\[\]\<\>=&@^] printf("Linea %d, Operador: %s\n",lines,yytext);return(yytext[0]);

["verdadero"|"falso"] printf("linea %d, Constante booleana: %s\n",lines,yytext);return(CTC_BOOLEANA);
"::"                  printf("linea %d, Cuatro_puntos: %s\n",lines,yytext);return(CUATRO_PTOS);
(\.\.)	              printf("linea %d, Operador: %s\n",lines,yytext);return(DOS_PTOS);
(\*\*)	              printf("linea %d, Operador: %s\n",lines,yytext);return(POTENCIA);
(\<\-) 	              printf("linea %d, Operador: %s\n",lines,yytext);return(DESPI);
(\-\>)	              printf("linea %d, Operador: %s\n",lines,yytext);return(DESPD);
(=\<)	                printf("linea %d, Operador: %s\n",lines,yytext);return(LEQ);
(\>=)	                printf("linea %d, Operador: %s\n",lines,yytext);return(GEQ);
(!=)	                printf("linea %d, Operador: %s\n",lines,yytext);return(NEQ);
(\/\\)	              printf("linea %d, Operador: %s\n",lines,yytext);return(AND);
(\\\/)	              printf("linea %d, Operador: %s\n",lines,yytext);return(OR);
(:=)	                printf("linea %d, Operador: %s\n",lines,yytext);return(EQ);
(=\>)	                printf("linea %d, Operador: %s\n",lines,yytext);return(FLECHA_DOBLE);

[\(\)\{\}:;,\|]	      printf("linea %d, Delimitador: %s\n",lines,yytext);return(yytext[0]);

.                     printf ("linea %d, ERROR\n",lines);

%%
