
%{
#include <stdio.h>
#include "simple.tab.h"
int lineas = 1;
%}


IDENTIFICADOR [a-zA-Z|_]+[0-9]*
DELIMITADORES (\(|\)|:|\;|\,|\.\.|\||=>)
C_ESCAPE (\%'|\%"|\%\%|\%n|\%r|\%t|"\%|\%)
C_DECIMALES \%([0-2][0-5]{1,2})
DECIMAL [+-]?[0-9]+
CARACTER [a-zA-Z]{1}
HEXADECIMAL ((\%[xX])?[0-9a-fA-F]{1,2})
OCTAL \%[oO]([0-3]+[0-7]{1,2})?
CARACTERES ({C_ESCAPE}|{C_DECIMALES}|{OCTAL}|{HEXADECIMAL})
REALES_A (({HEXADECIMAL}|{OCTAL})?[\.]+{HEXADECIMAL}|{OCTAL})
REALES_B (({HEXADECIMAL}|{OCTAL})?[\.]([0-9]*)(^)([+\-]?[0-9a-fA-F]*))
REALES ({DECIMAL}|{OCTAL}|{HEXADECIMAL}|{REALES_A}|{REALES_B})
CADENAS (([^\"]({CARACTER}|{CARACTERES}|{DECIMAL}|{C_ESCAPE}|{C_DECIMALES}|{OCTAL}|{HEXADECIMAL}[ ])*(\n)*\")*)
OPERADORES_SIMPLES [+|-|*|\/|\\|^|.|\[|\]||\{|\}|<|>|=|~]
OPERADORES_CADENA (\--|\++|<-|->|:=|:+|:-|:\/|:\\|:^|:<|:>|::|<=|>=|~=|\/\\|\\\/)
OPERADORES ({OPERADORES_SIMPLES}|{OPERADORES_CADENA})
COMENTARIOS ((\#\{.*[\n].*\#\})|(\#\#.*)|(\#\{.*\#\}))


%%
[ \t];
\n lineas++;
[ ] ;

(?i:abstracto)        printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(ABSTRACTO);
(?i:booleano)       printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(BOOLEANO);
(?i:bucle)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(BUCLE);
(?i:caracter)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(CARACTER);
(?i:casos)           printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(CASOS);
(?i:clase)             printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(CLASE);
(?i:como)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(COMO);
(?i:constante)            printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(CONSTANTE);
(?i:constructor)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(CONSTRUCTOR);
(?i:corto)        printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(CORTO);
(?i:cuando)           printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(CUANDO);
(?i:de)      printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(DE);
(?i:descendente)           printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(DESCENDENTE);
(?i:destructor)       printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(DESTRUCTOR);
(?i:devolver)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(DEVOLVER);
(?i:dicccinario)            printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(DICCIONARIO);
(?i:en)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(EN);
(?i:entero)          printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(ENTERO);
(?i:entonces)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(ENTONCES);
(?i:enumeracion)               printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(ENUMERACION);
(?i:es)       printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(ES);
(?i:especifico)          printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(ESPECIFICO);
(?i:excepcion)          printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(EXCEPCION);
(?i:exportar)            printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(EXPORTAR);
(?i:falso)       printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(FALSO);
(?i:fin)          printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(FIN);
(?i:final)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(FINAL);
(?i:finalmente)            printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(FINALMENTE);
(?i:generico)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(GENERICO);
(?i:importar)           printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(IMPORTAR);
(?i:largo)            printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(LARGO);
(?i:lanza)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(LANZA);
(?i:libreria)      printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(LIBRERIA);
(?i:lista)             printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(LISTA);
(?i:mientras)          printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(MIENTRAS);
(?i:objeto)             printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(OBJETO);
(?i:otro)          printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(OTRO);
(?i:para)           printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(PARA);
(?i:principio)    printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(PRINCIPIO);
(?i:privado)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(PRIVADO);
(?i:programa)          printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(PROGRAMA);
(?i:protegido)             printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(PROTEGIDO);
(?i:prueba)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(PRUEBA);
(?i:publico)           printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(PUBLICO);
(?i:rango)            printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(RANGO);
(?i:real)      printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(REAL);
(?i:referencia)               printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(REFERENCIA);
(?i:registro)             printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(REGISTRO);
(?i:repetir)             printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(REPETIR);
(?i:salir)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(SALIR);
(?i:si)    printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(SI);
(?i:signo)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(SIGNO);
(?i:siguiente)          printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(SIGUIENTE);
(?i:sino)             printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(SINO);
(?i:subprograma)         printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(SUBPROGRAMA);
(?i:tabla)           printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(TABLA);
(?i:tipo)            printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(TIPO);
(?i:ultima)      printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(ULTIMA);
(?i:valor)               printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(VALOR);
(?i:verdadero)             printf("linea %d, palabra reservada: %s\n",lineas,yytext);return(VERDADERO);



{IDENTIFICADOR} printf("linea %d, identificador: %s\n",lineas,yytext);return(IDENTIFICADOR);
{REALES} printf("linea %d, constante real: %s\n",lineas,yytext); return(CTC_REAL);
{CARACTERES} printf("linea %d, constante caracter: %s\n",lineas,yytext);return(CTC_CARACTER);
{CADENAS} printf("linea %d, constante cadena: %s\n",lineas,yytext);return(CTC_CADENA);






(\.\.)	              printf("linea %d, Operador: %s\n",lineas,yytext);return(DOS_PTOS);
(\-\-)	              printf("linea %d, Operador: %s\n",lineas,yytext);return(DEC);
(~=) 	              printf("linea %d, Operador: %s\n",lineas,yytext);return(NEQ);
(:\*)	              printf("linea %d, Operador: %s\n",lineas,yytext);return(ASIG_MULT);
(:\>)	              printf("linea %d, Operador: %s\n",lineas,yytext);return(ASIG_DESP);
(::)                 printf("linea %d, Operador: %s\n",lineas,yytext);return(CUATRO_PUNTOS);
(\<\-)	                printf("linea %d, Operador: %s\n",lineas,yytext);return(DESPI);
(\/\\)	              printf("linea %d, Operador: %s\n",lineas,yytext);return(AND);
(:\/)	              printf("linea %d, Operador: %s\n",lineas,yytext);return(ASIG_DIV);
(:=)	                printf("linea %d, Operador: %s\n",lineas,yytext);return(ASIGNACION);
(\-\>)	                printf("linea %d, Operador: %s\n",lineas,yytext);return(DESPD);
(\\\/)	                printf("linea %d, Operador: %s\n",lineas,yytext);return(OR);
(:\\)	                printf("linea %d, Operador: %s\n",lineas,yytext);return(ASIG_RESTO);
(=\>)	                printf("linea %d, Operador: %s\n",lineas,yytext);return(FLECHA);
(\<=)	                printf("linea %d, Operador: %s\n",lineas,yytext);return(LEQ);
(:\+)	                printf("linea %d, Operador: %s\n",lineas,yytext);return(ASIG_SUMA);
(:\^)	                printf("linea %d, Operador: %s\n",lineas,yytext);return(ASIG_POT);
(\+\+)	                printf("linea %d, Operador: %s\n",lineas,yytext);return(INC);
(\>=)	                printf("linea %d, Operador: %s\n",lineas,yytext);return(CEQ);
(:-)	                printf("linea %d, Operador: %s\n",lineas,yytext);return(ASIG_RESTA);
(:\<)	                printf("linea %d, Operador: %s\n",lineas,yytext);return(ASIG_DESPI);


[\(\)\{\}:;,\|]	      printf("linea %d, Delimitador: %s\n",lineas,yytext);return(yytext[0]);

.                                        printf ("linea %d, ERROR\n",lineas);

%%
