%{

  #include <stdio.h>
  #define YYDEBUG 1
  extern FILE *yyin;
  extern int yylex();
  int yyerror(char *s);
  

%}

%token UNI ABSTRACTO BOOLEANO BUCLE CARACTER CASOS CLASE COMO CONSTANTE CONSTRUCTOR CORTO CUANDO DE DESCENDENTE DESTRUCTOR DEVOLVER DICCIONARIO EN ENTERO ENTONCES ENUMERACION ES ESPECIFICO EXCEPCION EXPORTAR FALSO FIN FINAL FINALMENTE GENERICO IMPORTAR LARGO LANZA LIBRERIA LISTA MIENTRAS OBJETO OTRO PARA PRINCIPIO PRIVADO PROGRAMA PROTEGIDO PRUEBA PUBLICO RANGO REAL REFERENCIA REGISTRO REPETIR SALIR SI SIGNO SIGUIENTE SINO SUBPROGRAMA TABLA TIPO ULTIMA VALOR VERDADERO CTC_CARACTER CTC_CADENA IDENTIFICADOR CTC_ENTERA CTC_REAL DOS_PTOS CUATRO_PUNTOS ASIGNACION FLECHA INC DEC DESPI DESPD LEQ CEQ NEQ AND OR ASIG_SUMA ASIG_RESTA ASIG_MULT ASIG_DIV ASIG_RESTO ASIG_POT ASIG_DESPI ASIG_DESP  

%left OR
%left AND
%nonassoc '~'
%nonassoc '<' '>' LEQ CEQ '=' NEQ
%left DESPD DESPI 
%left '+' '-'
%left '*' '/' '\\'
%right '^'
%nonassoc INC DEC
%nonassoc UNI 

%%

/***********************PROGRAMA**************************/   


programa 
 : definicion_programa                      { printf ("EXITO: Programa -> definicion_programa\n"); }
 | definicion_libreria                      { printf ("EXITO: Libreria -> definicion_libreria\n"); }
 ;

definicion_programa 
: PROGRAMA IDENTIFICADOR ';' codigo_programa                { printf ("definicion_programa -> programa IDENTIFICADOR ; codigo_programa\n"); }
| error ';'   {yyerrok;}
;

codigo_programa 
: varias_librerias cuerpo_subprograma  { printf ("  codigo_programa -> varias_librerias cuerpo_subprograma\n"); }
;



 libreria 
  : IMPORTAR LIBRERIA nombre ';'                              { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
  | IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ';'           { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); } 
  | DE LIBRERIA nombre IMPORTAR varios_identificadores  ';'  { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
  | error ';'   {yyerrok;}
  ;



nombre   
:  nombre CUATRO_PUNTOS IDENTIFICADOR { printf ("nombre -> nombre :: IDENTIFICADOR\n"); }
|  IDENTIFICADOR  { printf ("nombre -> IDENTIFICADOR\n"); }
;




varias_librerias
  : varias_librerias libreria        { printf ("  varias_librerias -> varias_librerias libreria\n"); }
  |                                  { printf ("  varias_librerias -> EMPTY\n"); }
	;
   
varios_identificadores
: varios_identificadores ',' IDENTIFICADOR       { printf ("  varios_identificadores ->  varios_identificadores , IDENTIFICADOR\n"); }
| IDENTIFICADOR                                  { printf ("  varios_identificadores -> IDENTIFICADOR\n"); }
;




definicion_libreria 
: LIBRERIA IDENTIFICADOR ';' codigo_libreria               { printf ("definicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n"); }
;


codigo_libreria
: varias_librerias  varias_declaraciones               { printf ("  codigo_libreria -> varias_librerias  varias_declaraciones\n"); }
| varias_librerias exportaciones varias_declaraciones  { printf ("  codigo_libreria -> varias_librerias exportaciones varias_declaraciones\n"); }
 
;

varias_declaraciones
   : varias_declaraciones  declaracion   { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
   | declaracion                         { printf ("  varias_declaraciones -> declaracion \n"); }
	 ;


exportaciones 
    : EXPORTAR varios_nombres ';'                 { printf ("  exportaciones -> EXPORTAR  varios_nombres ; \n"); }       
    ;

varios_nombres
  : varios_nombres ',' nombre                         { printf ("  varios_nombres -> varios_nombres ',' nombre ; \n"); } 
  | nombre                                        { printf ("  varios_nombres -> nombre ; \n"); } 
  ;

declaracion 
    : declaracion_objeto                               { printf ("  declaracion -> declaracion_objeto \n"); }
    | declaracion_tipo                                 { printf ("  declaracion ->  declaracion_tipo \n"); }
    | declaracion_subprograma                          { printf ("  declaracion -> declaracion_subprograma\n"); }
    ;

/********************OBJETOS****************************/

declaracion_objeto 
  :  varios_identificadores ':' CONSTANTE especificacion_tipo ASIGNACION expresion ';'    { printf ("  declaracion_objeto -> varios_identificadores :  CONSTANTE especificacion_tipo ASIGNACION expresion ; \n"); }
  |  varios_identificadores ':' especificacion_tipo ';'                                   { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ;\n"); }
  |  varios_identificadores ':' especificacion_tipo ASIGNACION expresion ';'              { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
  ;

especificacion_tipo
  : nombre                                                                      { printf ("  especificacion_tipo -> nombre\n"); }
  | tipo_no_estructurado                                                         { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
  ;

/********************TIPOS*****************************/
declaracion_tipo
    : TIPO IDENTIFICADOR ES tipo_no_estructurado ';'        { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
    | TIPO IDENTIFICADOR ES tipo_estructurado               { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
    ;

tipo_no_estructurado
  : tipo_escalar                                            { printf ("  tipo_no_estructurado -> tipo_escalar\n"); }
  | tipo_tabla                                              { printf ("  tipo_no_estructurado -> tipo_tabla\n"); }
  | tipo_diccionario                                        { printf ("  tipo_no_estructurado -> tipo_diccionario\n"); }
  ;

tipo_escalar
  : cero_o_uno_signo tipo_basico cero_o_uno_longitud cero_o_uno_rango         { printf ("  tipo_escalar-> cero_o_uno_signo tipo_basico cero_o_uno_longitud cero_o_uno_rango\n"); }
  ;

cero_o_uno_signo
  : SIGNO                                                   { printf ("   cero_o_uno_signo -> SIGNO\n"); }
  |                                                         { printf ("  cero_o_uno_signo -> EMPTY\n"); }
  ;

cero_o_uno_longitud
  : longitud                                                { printf ("  cero_o_uno_longitud -> longitud\n"); }
  |                                                         { printf ("  cero_o_uno_longitud -> EMPTY\n"); }
  ;

cero_o_uno_rango
  : RANGO rango                                      { printf ("  cero_o_uno_rango -> RANGO rango\n"); }
  |                                                  { printf ("  cero_o_uno_rango -> EMPTY\n"); }
  ;

longitud 
  : CORTO                                                   { printf ("  longitud -> CORTO\n"); }
  | LARGO                                                   { printf ("  longitud -> LARGO\n"); }
  ;

tipo_basico
  : BOOLEANO                                                { printf ("  tipo_basico -> BOOLEANO\n"); }
  | CARACTER                                                { printf ("  tipo_basico -> CARACTER\n"); }
  | ENTERO                                                  { printf ("  tipo_basico -> ENTERO\n"); }
  | REAL                                                    { printf ("  tipo_basico -> REAL\n"); }
  ;
  
rango
  : expresion DOS_PTOS expresion                              { printf ("  rango -> expresion DOS_PTOS expresion\n"); }
  | expresion DOS_PTOS expresion DOS_PTOS expresion           { printf ("  rango -> expresion DOS_PTOS expresion DOS_PTOS expresion\n"); }
  ;

tipo_tabla
  : TABLA '(' expresion DOS_PTOS expresion ')' DE especificacion_tipo { printf ("  tipo_tabla -> TABLA ( expresion DOS_PTOS expresion ) DE especificacion_tipo\n"); }
  | LISTA DE especificacion_tipo                                      { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
  ;

tipo_diccionario 
  : DICCIONARIO DE especificacion_tipo                                { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
  ;

tipo_estructurado
  : tipo_registro                                            { printf ("  tipo_estructurado -> tipo_registro\n"); }
  | tipo_enumerado                                           { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
  | clase                                                    { printf ("  tipo_estructurado -> clase\n"); }
  ;

tipo_registro
  : REGISTRO varios_campos FIN REGISTRO                      { printf ("  tipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
  ;

varios_campos
  : varios_campos campo                                      { printf ("  varios_campos -> varios_campos campo\n"); }
  | campo                                                    { printf ("  varios_campos -> campo\n"); }
  ;

campo
  : varios_identificadores ':' especificacion_tipo ';' { printf ("  campo -> varios_identificadores : especificacion_tipo ;\n"); }
  | varios_identificadores ':' especificacion_tipo ASIGNACION expresion ';' { printf ("  campo -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
  ;


tipo_enumerado
  : ENUMERACION varios_elemento_enumeracion FIN ENUMERACION                 { printf ("  tipo_enumerado -> ENUMERACION varios_campos FIN ENUMERACION\n"); }
  | ENUMERACION DE tipo_escalar varios_elemento_enumeracion FIN ENUMERACION { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar varios_campos FIN ENUMERACION\n"); }
  ;

varios_elemento_enumeracion
  : varios_elemento_enumeracion ',' elemento_enumeracion         { printf ("  varios_elemento_enumeracion -> varios_elemento_enumeracion , elemento_enumeracion\n"); }
  | elemento_enumeracion                                     { printf ("  varios_elemento_enumeracion -> elemento_enumeracion\n"); }
  ;

elemento_enumeracion
  : IDENTIFICADOR cero_uno_expresion                       { printf ("  elemento_enumeracion -> IDENTIFICADOR cero_uno_expresion\n"); }
  ;

cero_uno_expresion
: ASIGNACION expresion    { printf ("  cero_uno_expresion -> ASIGNACION expresion\n"); }
|                         { printf ("  cero_uno_expresion -> EMPTY\n"); }
;



/***********CLASES*********************************/

clase 
  : CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE          { printf ("  clase -> CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE\n"); }
  ;

cero_uno_ultima
: ULTIMA                    { printf ("  cero_uno_ultima -> ULTIMA\n"); }
|                           { printf ("  cero_uno_ultima -> EMPTY\n"); }
;

cero_uno_superclases
:  superclases            { printf ("  cero_uno_superclases -> superclases\n"); }
|                         { printf ("  cero_uno_superclases -> EMPTY\n"); }
;

superclases 
: '(' varios_nombres ')'            { printf ("  superclases -> ( varios_nombres ) \n"); }
;


declaracion_componente 
  : componente { printf ("  declaracion_componente -> componente"); }
  | visibilidad componente { printf ("  declaracion_componente -> visibilidad componente"); } 
  ;

varias_declaraciones_componente
  : varias_declaraciones_componente declaracion_componente    { printf ("  varias_declaraciones_componente -> varias_declaraciones_componente declaracion_componente"); }
  | declaracion_componente                        { printf ("  varias_declaraciones_componente -> declaracion_componente"); }
  ;


visibilidad 
: PUBLICO                                           { printf ("  visibilidad -> PUBLICO \n"); }
| PROTEGIDO                                         { printf ("  visibilidad ->  PROTEGIDO \n"); }
| PRIVADO                                           { printf ("  visibilidad ->  PRIVADO\n"); }
;

componente 
: declaracion_tipo   { printf ("  componente -> declaracion_tipo"); }
| declaracion_objeto   { printf ("  componente -> declaracion_objeto"); }
| cero_modificadores  declaracion_subprograma { printf ("  componente -> varios_modificadores declaracion_subprograma"); }
;

cero_modificadores
: varios_modificadores                      { printf ("  cero_modificadores ->  cero_modificadores varios_modificadores\n"); }
|                                           { printf ("  cero_modificadores -> EMPTY\n"); }
;

varios_modificadores
:varios_modificadores ',' modificador      { printf ("  varios_modificadores ->  varios_modificadores , modificador\n"); }
| modificador                              { printf ("  varios_modificadores -> modificador\n"); } 
;


modificador 
: CONSTRUCTOR                                 { printf ("  modificador -> CONSTRUCTOR "); }
| DESTRUCTOR                                  { printf ("  modificador ->  DESTRUCTOR "); }
| GENERICO                                    { printf ("  modificador ->  GENERICO "); }
| ABSTRACTO                                   { printf ("  modificador -> ABSTRACTO "); }
| ESPECIFICO                                  { printf ("  modificador ->  ESPECIFICO "); }
| FINAL                                       { printf ("  modificador -> FINAL"); }
;



/**************************************SUBPROGRAMAS***************************************/

declaracion_subprograma 
: SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA   { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }
;

cabecera_subprograma 
: IDENTIFICADOR cero_uno_parametrizacion cero_uno_tipoResultado { printf ("  cabecera_subprograma -> IDENTIFICADOR cero_uno_parametrizacion cero_uno_tipoResultado\n"); }
;

cero_uno_parametrizacion
: parametrizacion         { printf ("  cero_uno_parametrizacion -> parametrizacion\n"); }
|                         { printf ("  cero_uno_parametrizacion -> EMPTY\n"); }
;

cero_uno_tipoResultado
: tipo_resultado          { printf ("  cero_uno_tipoResultado -> tipo_resultado\n"); }
|                         { printf ("  cero_uno_tipoResultado -> EMPTY\n"); }
;

parametrizacion 
: '(' varias_declaraciones_parametros declaracion_parametros ')'  { printf ("parametrizacion -> ( varias_declaraciones_parametros declaracion_parametros ) \n"); }
;

declaracion_parametros
: varios_identificadores ':' especificacion_tipo cero_uno_expresion   { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo cero_uno_expresion"); }
| varios_identificadores ':' modo especificacion_tipo cero_uno_expresion   { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo cero_uno_expresion"); }
;

varias_declaraciones_parametros
  : varias_declaraciones_parametros declaracion_parametros ';'            {printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros ;\n");}
  |                                                                       { printf ("  varias_declaraciones_parametros -> EMPTY\n"); }
  ;

modo 
: VALOR                      { printf ("modo -> VALOR\n"); }
| REFERENCIA                 { printf ("modo -> REFERENCIA\n"); }
;

tipo_resultado 
: DEVOLVER especificacion_tipo      { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
;


cuerpo_subprograma 
:  cero_o_mas_declaraciones PRINCIPIO varias_instrucciones FIN    { printf ("  cuerpo_subprograma -> cero_o_mas_declaraciones PRINCIPIO varias_instrucciones FIN"); }
;

cero_o_mas_declaraciones
  : varias_declaraciones  declaracion   { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
  |                                     { printf ("  varias_declaraciones -> EMPTY\n"); }
	;

varias_instrucciones
 : varias_instrucciones  instruccion       { printf ("  varias_instrucciones -> varias_instrucciones  instruccion\n"); }                       
 | instruccion                             { printf ("  varias_instrucciones -> instruccion\n"); }
 ;


/*************************************INSTRUCCIONES***************************************/


instruccion 
  : instruccion_asignacion { printf ("instruccion -> instruccion_asignacion\n"); }
  | instruccion_devolver { printf ("instruccion -> instruccion_devolver\n"); }
  | instruccion_llamada { printf ("instruccion -> instruccion_llamada\n"); }
  |  instruccion_si { printf ("instruccion -> instruccion_si\n"); }
  |  instruccion_casos { printf ("instruccion -> instruccion_casos\n"); }
  |  instruccion_bucle { printf ("instruccion -> instruccion_bucle\n"); }
  |  instruccion_interrupcion { printf ("instruccion -> instruccion_interrupcion\n"); }
  |  instruccion_lanzamiento_excepcion  { printf ("instruccion -> instruccion_lanzamiento_excepcion\n"); }
  |  instruccion_captura_excepcion { printf ("instruccion -> instruccion_captura_excepcion\n"); }
  |  ';' { printf ("instruccion -> ;\n"); }
  ;


instruccion_asignacion 
: objeto op_asignacion expresion ';'  { printf ("  instruccion_asignacion -> objeto op_asignacion expresion;"); }
;

op_asignacion 
  :  ASIGNACION  { printf ("  op_asignacion -> ASIGNACION"); }
  |  ASIG_SUMA  { printf ("  op_asignacion -> ASIG_SUMA"); }
  |  ASIG_RESTA  { printf ("  op_asignacion -> :- "); } 
  |  ASIG_MULT  { printf ("  op_asignacion -> ASIG_MULT"); }
  |  ASIG_DIV  { printf ("  op_asignacion -> ASIG_DIV"); }
  |  ASIG_RESTO  { printf ("  op_asignacion -> ASIG_RESTO"); }
  |  ASIG_POT  { printf ("  op_asignacion -> ASIG_POT"); }
  |  ASIG_DESPI  { printf ("  op_asignacion -> ASIG_DESPI"); }
  |  ASIG_DESP   { printf ("  op_asignacion -> ASIG_DESP"); }
  ;


instruccion_devolver 
  : DEVOLVER ';' { printf ("  instruccion_devolver -> DEVOLVER ;\n"); }
  | DEVOLVER  expresion  ';' { printf ("  instruccion_devolver -> DEVOLVER expresion ;\n"); }
  ;

  instruccion_llamada 
    : llamada_subprograma ';' { printf ("  instruccion_llamada ->  llamada_subprograma ;\n"); }
    ;

 llamada_subprograma 
  : nombre '(' cero_definicion_parametro ')'{ printf ("llamada_subprograma ->  nombre ( varias_definicion_parametro )\n"); }
  ;

  cero_definicion_parametro
  : varias_definicion_parametro                               { printf ("  cero_definicion_parametro ->  varias_definicion_parametro\n"); }
  |                                                           { printf ("  cero_definicion_parametro -> EMPTY\n"); }
  ;

  varias_definicion_parametro
  : varias_definicion_parametro ','  definicion_parametro       { printf ("  varias_definicion_parametro ->  varias_definicion_parametro ',' definicion_parametro\n"); }
	| definicion_parametro                             { printf ("  varias_definicion_parametro -> definicion_parametro\n"); }
  ;

definicion_parametro 
:  expresion       { printf ("definicion_parametro ->  expresion\n"); }
| IDENTIFICADOR ASIGNACION expresion { printf ("definicion_parametro ->  IDENTIFICADOR ASIGNACION expresion\n"); }
;

instruccion_si 
: SI expresion ENTONCES varias_instrucciones cero_mas_instrucciones FIN SI  { printf ("instruccion_si ->  SI expresion ENTONCES varias_instrucciones cero_mas_instrucciones FIN SI\n"); }
;

cero_mas_instrucciones
: SINO varias_instrucciones { printf ("cero_mas_instrucciones ->  SINO varias_instrucciones\n"); }
|                           { printf ("  cero_mas_instrucciones -> EMPTY\n"); }
;

instruccion_casos 
: CASOS expresion ES uno_o_mas_casos  FIN CASOS  { printf ("instruccion_casos ->  CASOS expresion ES uno_o_mas_casos FIN CASOS\n"); }
;

caso 
: CUANDO entradas FLECHA varias_instrucciones   { printf ("caso ->  CUANDO entradas => varias_instrucciones\n"); }
;

uno_o_mas_casos
: uno_o_mas_casos caso          { printf ("uno_o_mas_casos ->  uno_o_mas_casos caso\n"); }
| caso                          { printf ("uno_o_mas_casos ->  caso\n"); }
;

entradas 
: varias_entradas entrada            { printf ("entradas ->  varias_entradas entrada\n"); }
;


entrada 
: expresion cero_mas_expresiones1 { printf ("entrada ->  expresion cero_mas_expresiones1 OTRO\n"); }
| OTRO                            { printf ("entrada ->  OTRO\n"); }
;

varias_entradas
: varias_entradas entrada  ':'     { printf ("varias_entradas ->  varias_entradas entrada :\n"); }
| entrada  ':'                     { printf ("varias_entradas ->  entrada :\n"); }         
;

cero_mas_expresiones1
: DOS_PTOS expresion { printf ("cero_mas_expresiones1 -> DOS_PTOS expresion\n"); }
|                    { printf ("  cero_mas_expresiones1 -> EMPTY\n"); }
;


instruccion_bucle
: cero_mas_identificador1 clausula_iteracion varias_instrucciones FIN BUCLE   { printf ("instruccion_bucle -> cero_mas_identificador1 clausula_iteracion varias_instrucciones FIN BUCLE\n");}
;

cero_mas_identificador1
: IDENTIFICADOR ':'   { printf ("cero_mas_identificador1 -> IDENTIFICADOR :\n"); }
|                     { printf ("  cero_mas_identificador1 -> EMPTY\n"); }
;

clausula_iteracion 
: PARA IDENTIFICADOR cero_o_uno_especificacion_tipo  EN expresion                      { printf ("clausula_iteracion ->  PARA IDENTIFICADOR cero_o_uno_especificacion_tipo  EN expresion\n");}
| REPETIR IDENTIFICADOR cero_o_uno_especificacion_tipo EN rango cero_o_uno_descendente { printf ("clausula_iteracion ->  REPETIR IDENTIFICADOR cero_o_uno_especificacion_tipo EN rango cero_o_uno_descendente\n");}
| MIENTRAS expresion                                                                   { printf ("clausula_iteracion ->  MIENTRAS expresion\n");}
;

cero_o_uno_especificacion_tipo
: ':' especificacion_tipo   { printf ("cero_o_uno_especificacion_tipo -> : especificacion_tipo \n"); }
|                           { printf ("  cero_o_uno_especificacion_tipo -> EMPTY\n"); }
;

cero_o_uno_descendente
  : DESCENDENTE              {printf ("cero_o_uno_descendente -> DESCENDENTE\n");}
  |                          { printf ("  cero_o_uno_descendente -> EMPTY\n"); }
  ;



instruccion_interrupcion 
  : SIGUIENTE cero_o_uno_cuando  ';'                          { printf ("instruccion_interrupcion ->  SIGUIENTE cero_o_uno_cuando ;\n");}
  | SALIR cero_o_uno_de_identificador  cero_o_uno_cuando  ';' { printf ("instruccion_interrupcion ->  SALIR cero_o_uno_de_identificador cero_o_uno_cuando ;\n");}

  ;
 
cuando 
: CUANDO expresion                                        { printf ("cuando ->CUANDO expresion"); }
;

cero_o_uno_cuando
  : cuando                                                {printf ("cero_o_uno_cuando -> cuando\n");}
  |                                                       { printf ("  cero_o_uno_cuando -> EMPTY\n"); }
  ;

cero_o_uno_de_identificador
  : DE IDENTIFICADOR                                      {printf ("cero_o_uno_de_identificador -> DE IDENTIFICADOR\n");}
  |                                                       { printf ("  cero_o_uno_de_identificador -> EMPTY\n"); }
  ;

instruccion_lanzamiento_excepcion 
: LANZA nombre ';'                                            { printf ("instruccion_lanzamiento_excepcion ->LANZA nombre ;"); }
;

instruccion_captura_excepcion 
: PRUEBA  varias_instrucciones clausulas FIN PRUEBA                   { printf ("instruccion_captura_excepcion ->PRUEBA varias_instrucciones clausulas FIN PRUEBA"); }
;

clausulas 
: clausulas_excepcion                                         { printf ("clausulas ->clausulas_excepcion\n"); }
| clausulas_excepcion clausula_finalmente                     { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
| clausula_finalmente                                         { printf ("clausulas ->clausula_finalmente\n"); }  
;


clausulas_excepcion 
: varias_clausula_excepcion_especifica clausula_excepcion_general       { printf ("clausulas_excepcion ->varias_clausula_excepcion_especifica clausula_excepcion_general "); }
;

 varias_clausula_excepcion_especifica 
  : varias_clausula_excepcion_especifica clausula_excepcion_especifica  { printf ("varias_clausula_excepcion_especifica ->varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); } 
  |                                                                     { printf ("  varias_clausula_excepcion_especifica -> EMPTY\n"); }
  ;

clausula_excepcion_especifica 
: EXCEPCION '(' nombre ')' varias_instrucciones { printf ("clausulas_excepcion_especifica -> EXCEPCION ( nombre ) varias_instrucciones "); }
;

clausula_excepcion_general 
: EXCEPCION varias_instrucciones                { printf ("clausula_excepcion_general ->EXCEPCION varias_instruccion"); }
;

clausula_finalmente 
: FINALMENTE varias_instrucciones { printf ("clausula_finalmente ->FINALMENTE varias_instrucciones"); }
;


/********************EXPRESIONES************************************/

expresion
	: primario		                         { printf("  expresion ->  primario\n"); }
  | expresion '+' expresion               { printf("  expresion -> + expresion\n"); }
  | expresion '-' expresion               { printf("  expresion -> - expresion\n"); }
  | expresion '*' expresion               { printf("  expresion -> * expresion\n"); }
  | expresion '/' expresion                { printf("  expresion -> / expresion\n"); }
  | expresion '\\' expresion              { printf("  expresion -> \\ expresion\n"); }
  | expresion '^' expresion               { printf("  expresion -> ^ expresion\n"); }
  | expresion AND expresion               { printf("  expresion -> && expresion\n"); }
  | expresion OR expresion                { printf("  expresion -> | expresion\n"); }
  | '~' expresion                          { printf("  expresion -> ~ expresion\n"); }
  | expresion '<' expresion               { printf("  expresion -> < expresion\n"); }
  | expresion '>' expresion               { printf("  expresion -> > expresion\n"); }
  | expresion LEQ expresion               { printf("  expresion -> <= expresion\n"); }
  | expresion CEQ expresion                { printf("  expresion -> =< expresion\n"); }
  | expresion '=' expresion                { printf("  expresion -> = expresion\n"); }
  | expresion NEQ expresion                { printf("  expresion -> ~ expresion\n"); }
  | expresion DESPI expresion              { printf("  expresion -> <- expresion\n"); }
  | expresion DESPD expresion              { printf("  expresion -> -> expresion\n"); }
  | INC  expresion                         { printf("  expresion -> ++ expresion\n"); }
  | DEC  expresion                         { printf("  expresion -> -- expresion\n"); }
  | UNI  expresion                         { printf("  expresion -> - expresion\n"); }
  ;





primario
  : literal                                                             { printf ("  primario -> literal\n"); }
  | objeto                                                              { printf ("  primario -> objeto\n"); }
  | llamada_subprograma                                                 { printf ("  primario -> llamada_subprograma\n"); }
  | OBJETO llamada_subprograma                                          { printf ("  primario -> OBJETO llamada_subprograma\n"); }
  | enumeraciones                                                       { printf ("  primario -> enumeraciones\n"); }
  | '(' expresion ')'                                                   { printf ("  primario -> ( expresion )\n"); }
  ;
  
literal
  : VERDADERO                                                           { printf ("  literal -> VERDADERO\n"); }
  | FALSO                                                               { printf ("  literal -> FALSO\n"); }
  | CTC_ENTERA                                                          { printf ("  literal -> CTC_ENTERA\n"); }
  | CTC_REAL                                                            { printf ("  literal -> CTC_REAL\n"); }
  | CTC_CARACTER                                                        { printf ("  literal -> CTC_CARACTER\n"); }
  | CTC_CADENA                                                          { printf ("  literal -> CTC_CADENA\n"); }
  ;

objeto
  : nombre                                                              { printf ("  objeto -> nombre\n"); }
  | objeto '.' IDENTIFICADOR                                            { printf ("  objeto -> objeto .  IDENTIFICADOR\n"); }
  | objeto '[' varias_expresiones ']'                                   { printf ("  objeto -> objeto [ expresion ]\n"); }
  | objeto '{' varias_ctc_cadena '}'                                    { printf ("  objeto -> objeto { varias_ctc_cadena }\n"); }
  ;


varias_ctc_cadena
 : varias_ctc_cadena ',' CTC_CADENA                                        { printf ("  varias_ctc_cadena -> varias_ctc_cadena , CTC_CADENA\n"); }
 | CTC_CADENA                                                          { printf ("  varias_ctc_cadena -> CTC_CADENA\n"); }
 ;

varias_clausulas_iteracion
 : varias_clausulas_iteracion  clausula_iteracion       { printf ("  varias_clausulas_iteracion -> varias_clausulas_iteracion  clausula_iteracion\n"); }                       
 | clausula_iteracion                                   { printf ("  varias_clausulas_iteracion -> clausula_iteracion\n"); }
 ;

varias_expresiones
  : varias_expresiones ',' expresion       { printf ("  varias_expresiones ->  varias_expresiones , expresion\n"); }
	| expresion                              { printf ("  varias_expresiones -> expresion\n"); }	 
	;


enumeraciones
  : '[' expresion_condicional varias_clausulas_iteracion ']'            { printf ("  enumeraciones ->  expresion_condicional varias_clausulas_iteracion \n"); }
  | '[' expresion_condicional ']'                                        { printf ("  enumeraciones ->  expresion_condicional \n"); }
  | '[' varias_expresiones ']'                                          { printf ("  enumeraciones ->  varias_expresiones \n"); }
  | '{' varias_clave_valor '}'                                          { printf ("  enumeraciones ->  varias_clave_valor \n"); }
  | '{' varias_campo_valor '}'                                          { printf ("  enumeraciones ->  varias_campo_valor \n"); }
  ;


varias_clave_valor
: varias_clave_valor ',' clave_valor                                      { printf ("  varias_clave_valor -> varias_clave_valor , clave_valor\n"); }
| clave_valor                                                         { printf ("  varias_clave_valor -> clave_valor\n"); }
;

varias_campo_valor
: varias_campo_valor ',' campo_valor                                      { printf ("  varias_campo_valor -> varias_campo_valor , campo_valor\n"); }
| campo_valor                                                         { printf ("  varias_campo_valor -> campo_valor\n"); }
;




expresion_condicional
  : expresion                                                           { printf ("  expresion_condicional -> expresion\n"); }
  | SI expresion ENTONCES expresion                                     { printf ("  expresion_condicional -> SI expresion ENTONCES expresion\n"); }
  | SI expresion ENTONCES expresion SINO expresion                   { printf ("  expresion_condicional -> SI expresion ENTONCES expresion SINO expresion\n"); }
  ;



clave_valor
  : CTC_CADENA FLECHA expresion                                         { printf ("  clave_valor -> CTC_CADENA => expresion\n"); }
  ;

campo_valor
  : IDENTIFICADOR FLECHA expresion                                      { printf ("  campo_valor -> IDENTIFICADOR => expresion\n"); }
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
    printf("Uso: ./simple NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
