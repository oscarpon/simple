%{

  #include <stdio.h>
  #define YYDEBUG 1
  extern FILE *yyin;
  extern int yylex();
  int yyerror(char *s);

%}

%token ABSTRACTO AND ASOCIATIVA BOOLEANO CABECERA CADENA CASO CARACTER CARGA CLASE CONJUNTO CONSTANTE CUERPO CTC_BOOLEANA CTC_CADENA CTC_CARACTER CTC_ENTERA CTC_REAL CONSTRUCTOR CUANDO CUATRO_PTOS DESCENDENTE DESPD DESPI DESTRUCTOR DE DEVOLVER DOS_PTOS EJECUTA ELEMENTO EN ENTERO ENTONCES EQ ES ESPECIFICO EXCEPTO FICHERO FINAL FINALMENTE FLECHA_DOBLE FUNCION GEQ GENERICO HASTA IDENTIFICADOR INTERFAZ LANZAR LEQ LISTA MIENTRAS MODIFICABLE NEQ OTRO OR PAQUETE PARA PATH POTENCIA PRIVADO PROBAR PROCEDIMIENTO PROGRAMA PUBLICO REAL REGISTRO REPITE SALIR SEMIPUBLICO SI SINO TIPO VARIABLE

%%

/************************/
/* Programas y Paquetes */
/************************/

programa
    : definicion_programa                                 { printf ("EXITO: Programa -> definicion_programa\n"); }
    | definicion_paquete                                  { printf ("EXITO: Paquete -> definicion_paquete\n"); }
    ;

definicion_programa
    : PROGRAMA nombre ';' bloque_programa                 { printf ("def_prog -> PROGRAMA nombre_decl bloq_prog\n"); }
    ;

bloque_programa
    : declaracion_cargas
      declaracion_tipos
      declaracion_constantes
      declaracion_variables
      bloque_instrucciones              { printf ("  bloq_prog -> declr_cargas declr_tipos declr_cons declr_vars blq_intrs\n"); }
    ;

definicion_paquete
    : PAQUETE nombre ';'
      seccion_cabecera
      seccion_cuerpo                  { printf ("  def_paq -> PAQUETE nom ; seccion_cab seccion_cuerpo\n"); }
    ;

seccion_cabecera
    : CABECERA
      declaracion_cargas
      declaracion_tipos
      declaracion_constantes
      declaracion_variables
      declaracion_interfaces          { printf ("  seccion_cab -> declr_cargas declr_tipos declr_cons declr_vars declr_interfs\n"); }
    ;

seccion_cuerpo
    : CUERPO
      declaracion_tipos
      declaracion_constantes
      declaracion_variables
      declaraciones_subprogramas      { printf ("  seccion_cuerpo -> declr_tipos declr_cons declr_vars declrs_subprgs\n"); }
    ;

/**********/
/* Cargas */
/**********/

declaracion_cargas
	:
	| CARGA varias_cargas ';'                      { printf("declaracion_cargas -> CARGA varias_cargas ;\n"); }
	;

varias_cargas
        : declaracion_carga                       { printf("varias_cargas -> declaracion_carga\n"); }
        | varias_cargas ',' declaracion_carga     { printf("varias_cargas -> varias_cargas , declaracion_carga\n"); }
        ;

declaracion_carga
	: nombre                                         { printf("declaracion_carga -> nombre\n"); }
	| nombre EN PATH                                 { printf("declaracion_carga -> nombre EN PATH\n"); }
	//| nombre '('varios_nombres ')'                   { printf("declaracion_carga -> nombre ( varios_nombres )\n"); }
	//| nombre EN PATH '(' varios_nombres ')'          { printf("declaracion_carga -> nombre EN PATH ( varios_nombres )\n"); }
	|
	;

/*********************/
/*******TIPOS********/
/*******************/

  declaracion_tipos
    :                                                   { printf ("  declaracion_tipo -> EMPTY\n"); }
    | TIPO varios_tipo                                  { printf ("  declaracion_tipo -> TIPO varios_tipo\n"); }
    ;

  varios_tipo
    : declaracion_tipo                                  { printf ("  varios_tipo -> declaracion_tipo\n"); }
    | varios_tipo declaracion_tipo                      { printf ("  varios_tipo -> varios_tipo declaracion_tipo\n"); }
    ;

  declaracion_tipo
    : nombre '=' tipo_no_estructurado_o_nombre_tipo ';' { printf ("  declaracion_tipo -> nombre = tipo_no_estructurado_o_nombre_tipo\n"); }
    | nombre '=' tipo_estructurado                      { printf ("  declaracion_tipo -> nombre = tipo_estructurado\n"); }
    ;

  tipo_estructurado
    : tipo_registro                                       { printf ("  tipo_estructurado -> tipo_registro\n"); }
  //  | declaracion_clase                                   { printf ("  tipo_estructurado -> declaracion_clase\n"); }
    ;

  tipo_no_estructurado_o_nombre_tipo
    : nombre                                              { printf ("  tipo_no_estructurado_o_nombre_tipo -> nombre\n"); }
    | tipo_lista_asociativa                               { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_lista_asociativa\n"); }
    | tipo_conjunto                                       { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_conjunto\n"); }
    | tipo_lista                                          { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_lista\n"); }
    | tipo_enumerado                                      { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_enumerado\n"); }
    | tipo_fichero                                        { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_fichero\n"); }
    | tipo_escalar                                        { printf ("  tipo_no_estructurado_o_nombre_tipo -> tipo_escalar\n"); }
    ;

  tipo_escalar
    : ENTERO                                              { printf ("  tipo_escalar -> ENTERO\n"); }
    | REAL                                                { printf ("  tipo_escalar -> REAL\n"); }
    | BOOLEANO                                            { printf ("  tipo_escalar -> BOOLEANO\n"); }
    | CARACTER                                            { printf ("  tipo_escalar -> CARACTER\n"); }
    | CADENA                                              { printf ("  tipo_escalar -> CADENA\n"); }
    ;

  tipo_fichero
    : FICHERO                                             { printf ("  tipo_fichero -> FICHERO\n"); }
    ;

  tipo_lista
    : LISTA '[' varios_rango ']' DE  tipo_no_estructurado_o_nombre_tipo { printf ("  tipo_lista -> LISTA [ varios_rango ] DE  tipo_no_estructurado_o_nombre_tipo\n"); }
    ;

  varios_rango
    : rango                                               { printf ("varios_rango -> RANGO\n"); }
    | varios_rango ',' varios_rango                       { printf ("varios_rango -> VARIOS_RANGOS\n"); }
    ;

  rango
    : expresion DOS_PTOS expresion                        { printf ("rango -> expresion DOS_PTOS expresion\n"); }
    | expresion DOS_PTOS expresion DOS_PTOS expresion     { printf ("rango -> expresion DOS_PTOS expresion DOS_PTOS expresion\n"); }
    ;

  tipo_enumerado
    : '(' expresion_constante ')'                         { printf ("  tipo_enumerado -> ( expresion_constante )\n"); }
    ;

  tipo_lista_asociativa
    : LISTA ASOCIATIVA DE lista_anidada_asociativa tipo_no_estructurado_o_nombre_tipo { printf ("  tipo_lista_asociativa -> LISTA ASOCIATIVA DE lista_anidada_asociativa tipo_no_estructurado_o_nombre_tipo\n"); }
    ;

  lista_anidada_asociativa
    :
    | LISTA ASOCIATIVA DE lista_anidada_asociativa       { printf (" lista_anidada_asociativa -> LISTA ASOCIATIVA DE lista_anidada_asociativa\n"); }
    ;

  tipo_conjunto
    : CONJUNTO DE tipo_no_estructurado_o_nombre_tipo      { printf (" tipo conjunto -> CONJUNTO\n"); }
    ;

  tipo_registro
    : REGISTRO '{' varias_declaraciones_campo '}'         { printf ("  tipo_registro -> REGISTRO { varias_declaraciones_campo }\n"); }
    ;

  varias_declaraciones_campo
    : declaracion_campo                                   { printf ("  varias_declaraciones_campo -> declaracion_campo\n"); }
    | varias_declaraciones_campo  declaracion_campo       { printf ("  varias_declaraciones_campo -> varias_declaraciones_campo\n"); }
    ;

  declaracion_campo
    : uno_o_mas_nombres ':' tipo_no_estructurado_o_nombre_tipo ';'  { printf ("  declaracion_campo -> uno_o_mas_nombres : tipo_no_estructurado_o_nombre_tipo ;\n"); }
    ;

  uno_o_mas_nombres
    : nombre                                              { printf ("  uno_o_mas_nombres -> nombre\n"); }
    | nombre ',' uno_o_mas_nombres                        { printf ("  uno_o_mas_nombres -> nombre , uno_o_mas_nombres\n"); }
    ;


/**************/
/* Constantes */
/**************/

  declaracion_constantes
	  :
	  | CONSTANTE varias_declaracion_constantes                    { printf ("  declaracion_constantes -> CONSTANTE varias_declaracion_constantes ;\n"); }
	  ;

  varias_declaracion_constantes
	 : declaracion_constante                                       { printf ("  varias_declaracion_constantes -> declaracion_constante\n"); }
	 | varias_declaracion_constantes  declaracion_constante        { printf ("  varias_declaracion_constantes -> varias_declaracion_constantes  declaracion_constante\n"); }
	 ;

  declaracion_constante
	 : nombre ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante  ';' { printf ("  declaracion_constante -> nombre : tipo_no_estructurado_o_nombre_tipo = valor_constante ;\n"); }
	 ;

  varios_valor_constante
	 : valor_constante                                              { printf ("  varios_valor_constante -> valor_constante\n"); }
	 | varios_valor_constante ',' valor_constante                   { printf ("  varios_valor_constante -> varios_valor_constante ',' valor_constante\n"); }
	 ;

  valor_constante
	 : expresion                                                   { printf ("  valor_constante -> expresion\n"); }
	 | '[' varios_valor_constante ']'                              { printf ("  valor_constante -> [ varios_valor_constante ]\n"); }
   | '[' varios_clave_valor ']'                                  { printf ("  valor_constante -> [ varios_clave_valor ]\n"); }
	 | '[' varios_campo_valor ']'                                  { printf ("  valor_constante -> [ varios_campo_valor ]\n"); }
	 ;

  varios_clave_valor
	 : clave_valor                                                 { printf ("  varios_clave_valor -> clave_valor\n"); }
	 | varios_clave_valor ',' clave_valor                          { printf ("  varios_clave_valor -> varios_clave_valor , clave_valor\n"); }
	 ;

  clave_valor
	 : CTC_CADENA FLECHA_DOBLE valor_constante                     { printf ("  clave_valor -> CTC_CADENA FLECHA_DOBLE valor_constante\n"); }
	 ;

  varios_campo_valor
	 : campo_valor                                                 { printf ("  varios_campo_valor -> campo_valor\n"); }
	 | varios_campo_valor ',' campo_valor                          { printf ("  varios_campo_valor -> varios_campo_valor , campo_valor\n"); }
	 ;

  campo_valor
	 : nombre FLECHA_DOBLE valor_constante                         { printf ("  campo_valor ->  nombre FLECHA_DOBLE valor_constante\n"); }
	 ;


/*************/
/* Variables */
/*************/

declaracion_variables
  :                                                       { printf ("  declaracion_variables -> Empty\n"); }
  | VARIABLE varios_declaracion_variables                 { printf ("  declaracion_variables -> VARIABLE varios_declaracion_variables\n"); }
  ;

varios_declaracion_variables
  : declaracion_variable                                  { printf ("  varios_declaracion_variables -> declaracion_variable\n"); }
  | varios_declaracion_variables declaracion_variable     { printf ("  varios_declaracion_variables -> varios_declaracion_variables declaracion_variable \n"); }
  ;

declaracion_variable
  : uno_o_mas_nombres ':' tipo_no_estructurado_o_nombre_tipo ';'                        { printf ("  declaracion_variable -> uno_o_mas_nombres : tipo_no_estructurado_o_nombre_tipo ; \n"); }
  | uno_o_mas_nombres ':' tipo_no_estructurado_o_nombre_tipo '=' CTC_ENTERA ';'    { printf ("  declaracion_variable -> uno_o_mas_nombres : tipo_no_estructurado_o_nombre_tipo = valor_constante ;\n"); }
  ;

/**************/
/* Interfaces */
/**************/

declaracion_interfaces
	:
	| INTERFAZ varios_cabeceras_subprogramas                   { printf ("  declaracion_interfaces -> INTERFAZ varios_cabeceras_subprogramas\n"); }
	;

varios_cabeceras_subprogramas
	: cabecera_subprograma ';'                                 { printf ("  varios_cabeceras_subprogramas -> cabecera_subprograma ;\n"); }
	| varios_cabeceras_subprogramas cabecera_subprograma ';'   { printf ("  varios_cabeceras_subprogramas -> varios_cabeceras_subprogramas cabecera_subprograma ;\n"); }
	;

/********************/
/** INSTRUCCIONES **/
/******************/

bloque_instrucciones
  : '{' instruccion '}'                                   { printf ("  bloque_instrucciones ->  instruccion\n"); }
  | bloque_instrucciones '{' instruccion '}'              { printf ("  bloque_instrucciones ->  instruccion (Recursiva)\n"); }
  ;

instruccion
  : ';'                                                   { printf ("  instruccion->  ;\n"); }
  | instruccion_asignacion                                { printf ("  instruccion-> instruccion_asignacion\n"); }
  | instruccion_salir                                     { printf ("  instruccion-> instruccion_salir\n"); }
  | instruccion_devolver                                  { printf ("  instruccion-> instruccion_devolver\n"); }
  | instruccion_llamada                                   { printf ("  instruccion-> instruccion_llamada\n"); }
  | instruccion_si                                        { printf ("  instruccion-> instruccion_si\n"); }
  | instruccion_caso                                      { printf ("  instruccion-> instruccion_caso\n"); }
  | instruccion_bucle                                     { printf ("  instruccion-> instruccion_bucle\n"); }
  | instruccion_probar_excepto                            { printf ("  instruccion-> instruccion_probar_excepto\n"); }
  | instruccion_lanzar                                    { printf ("  instruccion-> instruccion_lanzar\n"); }
  ;

instruccion_asignacion
  : objeto EQ expresion ';'                               { printf ("  instruccion_asignacion -> objeto EQ expresion\n"); }
  ;

instruccion_salir
  : SALIR SI expresion ';'                                { printf ("  instruccion_salir-> SALIR SI expresion ;\n"); }
  | SALIR ';'                                             { printf ("  instruccion_salir-> SALIR ;\n"); }
  ;

instruccion_devolver
  : DEVOLVER expresion ';'                                { printf ("  instruccion_devolver-> DEVOLVER expresion ;\n"); }
  | DEVOLVER ';'                                          { printf ("  instruccion_devolver-> DEVOLVER ;\n"); }
  ;

instruccion_llamada
  : llamada_subprograma ';'                               { printf ("  instruccion_llamada-> llamada_subprograma ;\n"); }
  ;

llamada_subprograma
  : nombre '(' varias_expresiones ')'                     { printf ("  llamada_subprograma-> nombre(varias_expresiones)\n"); }
  ;

instruccion_si
  : SI expresion ENTONCES bloque_instrucciones            { printf ("  instruccion_si-> SI expresion ENTONCES bloque_instrucciones\n"); }
  | SI expresion ENTONCES bloque_instrucciones SINO bloque_instrucciones  { printf ("  instruccion_si-> SI expresion ENTONCES bloque_instrucciones SINO bloque_instrucciones\n"); }
  ;

instruccion_caso
  : EN CASO expresion ES varios_casos ';'                 { printf ("  instruccion_caso-> EN CASO expresion ES varios_casos\n"); }
  ;

varios_casos
  : caso                                                  { printf ("  varios_casos -> caso\n"); }
  | varios_casos ',' caso                                 { printf ("  varios_casos-> varios_casos , caso\n"); }
  ;

caso
  : CUANDO varias_entradas FLECHA_DOBLE bloque_instrucciones  { printf ("  caso-> CUANDO varias_entradas FLECHA_DOBLE bloque_instrucciones\n"); }
  ;

varias_entradas
  : entrada                                               { printf ("  varias_entradas-> entrada\n"); }
  | varias_entradas '|' entrada                           { printf ("  varias_entradas-> varias_entradas | entrada\n"); }
  ;

entrada
  : expresion                                             { printf ("  entrada-> expresion\n"); }
  | rango
  | OTRO                                                  { printf ("  entrada-> OTRO\n"); }
  ;

instruccion_bucle
  : clausula_iteracion bloque_instrucciones ';'           { printf ("  instruccion_bucle-> clausula_iteracion bloque_instrucciones;\n"); }
  ;

clausula_iteracion
  : PARA nombre EN objeto                                 { printf ("  clausula_iteracion-> PARA nombre EN objeto\n"); }
  | REPITE ELEMENTO nombre EN rango DESCENDENTE           { printf ("  clausula_iteracion-> REPITE ELEMENTO nombre EN rango DESCENDENTE\n"); }
  | REPITE ELEMENTO nombre EN rango                       { printf ("  clausula_iteracion-> REPITE ELEMENTO nombre EN rango\n"); }
  | MIENTRAS expresion                                    { printf ("  clausula_iteracion-> MIENTRAS expresion\n"); }
  | REPITE HASTA expresion                                { printf ("  clausula_iteracion-> REPITE HASTA expresion\n"); }
  ;

instruccion_probar_excepto
  : PROBAR bloque_instrucciones EXCEPTO varias_clausulas_excepcion   { printf ("  instruccion_probar_excepto->PROBAR bloque_instrucciones EXCEPTO varias_clausulas_excepcion\n"); }
  | PROBAR bloque_instrucciones EXCEPTO varias_clausulas_excepcion FINALMENTE bloque_instrucciones   { printf ("  instruccion_probar_excepto->PROBAR bloque_instrucciones EXCEPTO varias_clausulas_excepcion FINALMENTE bloque_instrucciones\n"); }
  ;

varias_clausulas_excepcion
  : clausula_excepcion                                    { printf ("  varias_clausulas_excepcion->clausula_excepcion\n"); }
  | varias_clausulas_excepcion ',' clausula_excepcion     { printf ("  varias_clausulas_excepcion->varias_clausulas_excepcion , clausula_excepcion\n"); }
  ;

clausula_excepcion
  : CUANDO nombre EJECUTA bloque_instrucciones            { printf ("  clausula_excepcion->CUANDO nombre EJECUTA bloque_instrucciones\n"); }
  ;

instruccion_lanzar
  : LANZAR nombre ';'                                     { printf ("  instruccion_lanzar->LANZAR nombre;\n"); }
  ;

/**********/
/* Clases */
/**********/

/*
declaracion_clase
  : CLASE final '{' declaraciones_publicas cero_o_una_declaraciones_semi cero_o_una_declaraciones_privadas '}'                              { printf ("  declaracion_clase->CLASE final { declaraciones_publicas cero_o_una_declaraciones_semi cero_o_una_declaraciones_privadas };\n"); }
  | CLASE final '(' uno_o_mas_nombres ')' '{' declaraciones_publicas cero_o_una_declaraciones_semi cero_o_una_declaraciones_privadas '}'    { printf ("  declaracion_clase->CLASE final ( uno_o_mas_nombres ) { declaraciones_publicas cero_o_una_declaraciones_semi cero_o_una_declaraciones_privadas }};\n"); }
  ;

final
	:
  | FINAL
  ;

cero_o_una_declaraciones_semi
  :
  | declaraciones_semi                { printf ("  cero_o_una_declaraciones_semi->declaraciones_semi\n"); }
  ;

cero_o_una_declaraciones_privadas
  :
  | declaraciones_privadas            { printf ("  cero_o_una_declaraciones_privadas->declaraciones_privadas\n"); }
  ;

declaraciones_publicas
  : PUBLICO varios_declaraciones_componentes    { printf ("  cero_o_una_declaraciones_publicas->PUBLICO varios_declaraciones_componentes\n"); }
  | varios_declaraciones_componentes            { printf ("  cero_o_una_declaraciones_publicas->varios_declaraciones_componentes\n"); }
  ;

declaraciones_semi
  :
  | SEMIPUBLICO varios_declaraciones_componentes  { printf ("  declaraciones_semi->SEMIPUBLICO varios_declaraciones_componentes\n"); }
  ;

declaraciones_privadas
  :
  | PRIVADO varios_declaraciones_componentes      { printf ("  declaraciones_privadas->PRIVADO varios_declaraciones_componentes\n"); }
  ;

varios_declaraciones_componentes
  : declaracion_componente                        { printf ("  varios_declaraciones_componentes->declaracion_componente\n"); }
  | varios_declaraciones_componentes  declaracion_componente  { printf ("  varios_declaraciones_componentes->varios_declaraciones_componentes  declaracion_componente\n"); }
  ;

declaracion_componente
  : declaracion_tipo_anidado                      { printf ("  declaracion_componente->declaracion_tipo_anidado\n"); }
  | declaracion_constante_anidada                 { printf ("  declaracion_componente->declaracion_constante_anidada\n"); }
  | declaracion_atributos                         { printf ("  declaracion_componente->declaracion_atributos\n"); }
  | cabecera_subprograma ';' modificadores        { printf ("  declaracion_componente->cabecera_subprograma ; modificadores\n"); }
  | cabecera_subprograma ';'                      { printf ("  declaracion_componente->cabecera_subprograma ;\n"); }
  ;

declaracion_tipo_anidado
  : TIPO declaracion_tipo                         { printf ("  declaracion_tipo_anidado->TIPO declaracion_tipo\n"); }
  ;

declaracion_constante_anidada
  : CONSTANTE declaracion_constante               { printf ("  declaracion_constante_anidada->CONSTANTE declaracion_constante\n"); }
  ;

declaracion_atributos
  : uno_o_mas_nombres ':' tipo_no_estructurado_o_nombre_tipo ';'  { printf ("  declaracion_atributos->uno_o_mas_nombres : tipo_no_estructurado_o_nombre_tipo ;\n"); }
  ;

modificadores
  : modificador ';'                                { printf ("  modificadores->modificador ;\n"); }
  | modificadores modificador ';'                  { printf ("  modificadores->modificadores modificador ;\n"); }
  ;

modificador
  : GENERICO                                       { printf ("  modificadores->GENERICO\n"); }
  | ABSTRACTO                                      { printf ("  modificadores->ABSTRACTO\n"); }
  | ESPECIFICO                                     { printf ("  modificadores->ESPECIFICO\n"); }
  | FINAL                                          { printf ("  modificadores->FINAL\n"); }
  ;
*/

/*****************/
/* Subprogramas */
/****************/

declaraciones_subprogramas
  : declaracion_subprograma                                {printf("declaraciones_subprogramas -> declaracion_subprograma\n");}
  | declaraciones_subprogramas declaracion_subprograma     {printf("declaraciones_subprogramas -> declaracion_subprogramas declaracion_subprograma\n");}
  ;

  declaracion_subprograma
      : cabecera_subprograma bloque_subprograma             {printf("declaracion_subprograma -> cabecera_subprograma bloque_subprograma\n");}
      ;

  cabecera_subprograma
      : cabecera_funcion                                     {printf("cabecera_subprograma-> cabecera_funcion\n");}
      | cabecera_procedimiento                               {printf("cabecera_subprograma-> cabecera_procedimiento\n");}
      | cabecera_constructor                                 {printf("cabecera_subprograma-> cabecera_constructor\n");}
      | cabecera_destructor                                  {printf("cabecera_subprograma-> cabecera_destructor\n");}
      ;

  cabecera_funcion
      : FUNCION nombre cero_o_uno_declaracion_parametros FLECHA_DOBLE tipo_no_estructurado_o_nombre_tipo     {printf("cabecera_funcion -> FUNCION nombre cero_o_uno_declaracion_parametros FLECHA_DOBLE tipo_no_estructurado_o_nombre_tipo\n");}
      ;

  cabecera_procedimiento
      : PROCEDIMIENTO nombre cero_o_uno_declaracion_parametros      {printf("cabecera_procedimiento -> PROCEDIMIENTO nombre cero_o_uno_declaracion_parametros\n");}
      ;

  cabecera_constructor
      : CONSTRUCTOR nombre cero_o_uno_declaracion_parametros        {printf("cabecera_constructor -> CONSTRUCTOR nombre cero_o_uno_declaracion_parametros\n");}
      ;

  cabecera_destructor
      : DESTRUCTOR nombre                                           {printf("cabecera_destructor -> DESTRUCTOR nombre\n");}
      ;

  cero_o_uno_declaracion_parametros
      :                                                             {printf("cero_o_uno_declaracion_parametros -> ");}
      | declaracion_parametros                                      {printf("cero_o_uno_declaracion_parametros -> declaracion_parametros\n");}
      ;

  declaracion_parametros
      : '(' lista_parametros_formales ')'                           {printf("declaracion_parametros -> lista_parametros_formales\n ");}
      ;

  lista_parametros_formales
      : parametros_formales                                         {printf("lista_parametros_formales -> parametros_formales\n");}
      | lista_parametros_formales ';' parametros_formales           {printf("lista_parametros_formales ->  lista_parametros_formales ; parametros_formales\n");}
      ;

  parametros_formales
      : nombre ':' tipo_no_estructurado_o_nombre_tipo MODIFICABLE    {printf("parametros_formales -> nombre : tipo_no_estructurado_o_nombre_tipo MODIFICABLE\n");}
      | nombre ':' tipo_no_estructurado_o_nombre_tipo                {printf("parametros_formales -> nombre : tipo_no_estructurado_o_nombre_tipo\n");}
      ;

  bloque_subprograma
      : nombre
    //  : declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones    {printf("bloque_subprograma -> declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones\n");}
      ;

/*******************************************/
/*************  EXPRESIONES *****************/
/*****************************************/

objeto
	: nombre				                       { printf("  objeto  ->  nombre	 \n"); }
	| objeto '[' varias_expresiones ']'	   { printf("  objeto ->  objeto '[' varias_expresiones ']'\n"); }
	| objeto '.' IDENTIFICADOR		         { printf("  objeto ->  objeto '.' IDENTIFICADOR\n"); }
;
varias_expresiones
	: expresion			                       	{ printf("  varias_expresiones ->  expresion\n"); }
	| varias_expresiones ',' expresion	    { printf("  varias_expresiones ->  varias_expresiones ',' expresion\n"); }
;
expresion_constante
	: CTC_ENTERA		                        { printf("  expresion_constante ->  CTC_ENTERA\n"); }
	| CTC_REAL		                          { printf("  expresion_constante ->  CTC_REAL\n"); }
	| CTC_CADENA		                        { printf("  expresion_constante ->  CTC_CADENA\n"); }
	| CTC_CARACTER		                      { printf("  expresion_constante ->  CTC_CARACTER\n"); }
	| CTC_BOOLEANA		                      { printf("  expresion_constante ->  CTC_BOOLEANA\n"); }
;
expresion_primaria
	: expresion_constante	                   { printf("  expresion_primaria ->  expresion_constante\n"); }
	| objeto		                             { printf("  expresion_primaria ->  objeto\n"); }
	//| llamada_subprograma	                 { printf("  expresion_primaria ->  llamada_subprograma\n"); }
	| '(' expresion ')'	                     { printf("  expresion_primaria ->  '(' expresion ')'\n"); }
;
expresion
	: operadorOR		                         { printf("  expresion ->  operadorOR\n"); }
  ;
operadorOR
	: operadorOR OR operadorAND	             { printf("  operadorOR ->  operadorOR OR operadorAND\n"); }
	| operadorAND			                       //{ printf("  operadorOR ->  operadorAND\n"); }
  ;
operadorAND
	: operadorAND AND operadorNEG	           { printf("  operadorAND ->  operadorAND AND operadorNEG\n"); }
	| operadorNEG			                       //{ printf("  operadorAND ->  operadorNEG\n"); }
;
operadorNEG
	: '!' operadorASIG		                   { printf("  operadorNEG ->  '!' operadorASIG\n"); }
	| operadorASIG			                     //{ printf("  operadorNEG ->  operadorASIG\n"); }
;
operadorASIG
	: operadorASIG '<' operadorORBIN	       { printf("  operadorASIG ->  operadorASIG '<' operadorORBIN\n"); }
	| operadorASIG '>' operadorORBIN	       { printf("  operadorASIG ->  operadorASIG '>' operadorORBIN\n"); }
	| operadorASIG LEQ operadorORBIN	       { printf("  operadorASIG ->  operadorASIG LEQ operadorORBIN\n"); }
	| operadorASIG GEQ operadorORBIN	       { printf("  operadorASIG ->  operadorASIG GEQ operadorORBIN\n"); }
	| operadorASIG EQ operadorORBIN		       { printf("  operadorASIG ->  operadorASIG EQ operadorORBIN\n"); }
	| operadorASIG NEQ operadorORBIN	       { printf("  operadorASIG ->  operadorASIG NEQ operadorORBIN\n"); }
	| operadorORBIN				                   //{ printf("  operadorASIG ->  operadorORBIN\n"); }
;
operadorORBIN
	: operadorORBIN '&' operadorXOR		       { printf("  operadorORBIN ->  operadorORBIN '&' operadorXOR\n"); }
	| operadorXOR				                     //{ printf("  operadorORBIN ->  operadorXOR\n"); }
;
operadorXOR
	: operadorXOR '@' operadorANDBIN	       { printf("  operadorXOR ->  operadorXOR '@' operadorANDBIN\n"); }
	| operadorANDBIN			                   //{ printf("  operadorXOR ->  operadorANDBIN\n"); }
;
operadorANDBIN
	: operadorANDBIN '^'	operadorDES	       { printf("  operadorANDBIN ->  operadorANDBIN '^'	operadorDES\n"); }
	| operadorDES				                     //{ printf("  operadorANDBIN ->  operadorDES\n"); }
;
operadorDES
	: operadorDES DESPI operadorSR		       { printf("  operadorDES ->  operadorDES DESPI operadorSR\n"); }
	| operadorDES DESPD operadorSR		       { printf("  operadorDES ->  operadorDES DESPD operadorSR\n"); }
	| operadorSR				                     //{ printf("  operadorDES ->  operadorSR\n"); }
;
operadorSR
	: operadorSR '+' operadorMDM		         { printf("  operadorSR ->  operadorSR '+' operadorMDM\n"); }
	| operadorSR '-' operadorMDM		         { printf("  operadorSR ->  operadorSR '-' operadorMDM\n"); }
	| operadorMDM				                     //{ printf("  operadorSR ->  operadorMDM\n"); }
;
operadorMDM
	: operadorMDM '*' operadorPOT		         { printf("  operadorMDM ->  operadorMDM '*' operadorPOT\n"); }
	| operadorMDM '/' operadorPOT		         { printf("  operadorMDM ->  operadorMDM '/' operadorPOT\n"); }
	| operadorMDM '%' operadorPOT		         { printf("  operadorMDM ->  operadorMDM 'MOD' operadorPOT\n"); }
	| operadorPOT				                     //{ printf("  operadorMDM ->  operadorPOT\n"); }
;
operadorPOT
	: operadorUN POTENCIA operadorPOT	       { printf("  operadorPOT ->  operadorUN POTENCIA operadorPOT\n"); }
	| operadorUN				                     //{ printf("  operadorPOT ->  operadorUN\n"); }
;
operadorUN
	: '-' expresion_primaria		             { printf("  operadorUN ->  '-' expresion_primaria\n"); }
	| expresion_primaria			               { printf("  operadorUN ->  expresion_primaria\n"); }
;

nombre
    : IDENTIFICADOR                         { printf ("  nombre -> IDENTIFICADOR\n"); }
    | nombre CUATRO_PTOS IDENTIFICADOR      { printf ("  nombre -> nombre :: IDENTIFICADOR\n"); }
    | nombre ',' IDENTIFICADOR              { printf ("  nombre -> nombre ,  IDENTIFICADOR\n"); }
    ;

%%

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
    printf("Uso: ./stupido NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
