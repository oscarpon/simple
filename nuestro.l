%{
	int lineas=1;
%}

PALABRA_RESERVADA (?i:abstracto)|(?i:booleano)|(?i:bucle)|(?i:caracter)|(?i:casos)|(?i:clase)|(?i:como)|(?i:constante)|(?i:constructor)|(?i:corto)|(?i:cuando)|(?i:de)|(?i:descendente)|(?i:destructor)|(?i:devolver)|(?i:diccionario)|(?i:en)|(?i:entero)|(?i:entonces)|(?i:enumeracion)|(?i:es)|(?i:especifico)|(?i:excepcion)|(?i:exportar)|(?i:falso)|(?i:fin)|(?i:final)|(?i:finalmente)|(?i:generico)|(?i:importar)|(?i:largo)|(?i:lanza)|(?i:libreria)|(?i:lista)|(?i:mientras)|(?i:objeto)|(?i:otro)|(?i:para)|(?i:principio)|(?i:privado)|(?i:programa)|(?i:protegido)|(?i:prueba)|(?i:publico)|(?i:rango)|(?i:real)|(?i:referencia)|(?i:registro)|(?i:repetir)|(?i:salir)|(?i:si)|(?i:signo)|(?i:siguiente)|(?i:sino)|(?i:subprograma)|(?i:tabla)|(?i:tipo)|(?i:ultima)|(?i:valor)|(?i:verdadero)
DELIMITADORES (\(|\)|:|\;|\,|\.\.|\||=>)
C_ESCAPE (\%'|\%"|\%\%|\%n|\%r|\%t|"\%|\%)
C_DECIMALES \%([0-2][0-5]{1,2})
DECIMAL ([0-9]*[.]?[0-9]+)
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
ERRORES [^\n\t]
IDENTIFICADOR [a-zA-Z|_]+[0-9]*


%%
\n lineas++;
[ ] ;
{PALABRA_RESERVADA} printf("linea %d, palabra reservada: %s\n",lineas,yytext);
{IDENTIFICADOR} printf("linea %d, identificador: %s\n",lineas,yytext);
{REALES} printf("linea %d, constante real: %s\n",lineas,yytext);
{CARACTERES} printf("linea %d, constante caracter: %s\n",lineas,yytext);
{CADENAS} printf("linea %d, constante cadena: %s\n",lineas,yytext);
{DELIMITADORES} printf("linea %d, delimitador: %s\n",lineas,yytext);
{OPERADORES} printf("linea %d, operador: %s\n",lineas,yytext);
{COMENTARIOS} printf("linea %d, comentario: %s\n",lineas,yytext);
{ERRORES} printf("Error en la linea %d\n",lineas);


%%

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  if (argc < 2) {
    printf("Uso: ./simple prueba.sim\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yylex();
    }
  }
