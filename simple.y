%{

  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();
  int yyer(char *s);
  #define YYDEBUG 1

%}

%token ABSTRACTO BOOLEANO BUCLE CARACTER CASOS CLASE COMO CONSTANTE CONSTRUCTOR CORTO
%token CUANDO DE DESCENDENTE DESTRUCTOR DEVOLVER DICCIONARIO EN ENTERO ENTONCES 
%token ENUMERACION ES ESPECIFICO EXCEPCION EXPORTAR FALSO FIN FINAL FINALMENTE GENERICO
%token IMPORTAR LARGO LANZA LIBRERIA LISTA MIENTRAS OBJETO OTRO PARA PRINCIPIO PRIVADO
%token PROGRAMA PROTEGIDO PRUEBA PUBLICO RANGO REAL REFERENCIA REGISTRO REPETIR SALIR
%token SI SIGNO SIGUIENTE SINO SUBPROGRAMA TABLA TIPO ULTIMA VALOR VERDADERO CTC_CARACTER
%token CTC_CADENA IDENTIFICADOR CTC_ENTERA CTC_REAL DOS_PTOS CUATRO_PUNTOS
%token ASIGNACION FLECHA INC DEC DESPI DESPD LEQ CEQ NEQ AND OR ASIG_SUMA ASIG_RESTA
%token ASIG_MULT ASIG_DIV ASIG_RESTO ASIG_POT ASIG_DESPI ASIG_DESP LONGITUD TIPO_BASICO

%%

/***********************PROGRAMA**************************/


programa 
 : definicion_programa                      { printf ("EXITO: Programa -> definicion_programa\n"); }
 | definicion_libreria                      { printf ("EXITO: Libreria -> definicion_libreria\n"); }
 ;

definicion_programa 
: programa IDENTIFICADOR ';' codigo_programa                { printf ("def_prog -> programa IDENTIFICADOR ; codigo_programa\n"); }
;

codigo_programa 
: varias_librerias cuerpo_subprograma  { printf ("  codigo_programa -> varias_librerias cuerpo_subprograma\n"); }
;
/****DUDA SOBRE COMO PNER VACIO EN LIBRERIA****/
varias_librerias
	 : libreria                        { printf ("  varias_librerias -> libreria\n"); }
	 | varias_librerias  libreria       { printf ("  varias_librerias ->  varias_libreria  libreria\n"); }
	 ;
   
 libreria 
  : IMPORTAR LIBRERIA nombre ';'                              { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
  | DE LIBRERIA nombre IMPORTAR  varios_identificadores  ';'  { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
  | IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ';'           { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); }                                          
  ;

varios_identificadores
	 : IDENTIFICADOR                               { printf ("  varios_identificadores -> IDENTIFICADOR\n"); }
	 | varios_identificadores  IDENTIFICADOR       { printf ("  varios_identificadores ->  varios_identificadores  IDENTIFICADOR\n"); }
	 ;

nombre
: IDENTIFICADOR { printf ("nombre -> IDENTIFICADOR\n"); }                            
| nombre CUATRO_PUNTOS IDENTIFICADOR { printf ("nombre -> CUATRO_PUNTOS IDENTIFICADOR\n"); }
;


varios_identificadores2
	 : 
	 | varios_identificadores2  IDENTIFICADOR CUATRO_PUNTOS      { printf ("varios_identificadores2 ->  varios_identificadores2  IDENTIFICADOR CUATRO_PUNTOS \n"); }
	 ;

definicion_libreria 
 : libreria IDENTIFICADOR ';' codigo_libreria               { printf ("definicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n"); }
;


codigo_libreria
: varias_librerias  varias_declaraciones               { printf ("  codigo_libreria -> varias_librerias  varias_declaraciones\n"); }
| varias_librerias exportaciones varias_declaraciones  { printf ("  codigo_libreria -> varias_librerias exportaciones varias_declaraciones\n"); }
 
;

varias_declaraciones
	 : declaracion                         { printf ("  varias_declaraciones -> declaracion \n"); }
	 | varias_declaraciones  declaracion   { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
	 ;


exportaciones 
    : EXPORTAR varios_nombres ';'                 { printf ("  exportaciones -> EXPORTAR  varios_nombres ; \n"); }       
    ;

varios_nombres
  : nombre                                        { printf ("  varios_nombres -> nombre ; \n"); } 
  | varios_nombres nombre                         { printf ("  varios_nombres -> varios_nombres  nombre ; \n"); } 
  ;

declaracion 
    : declaracion_objeto 
    | declaracion_tipo 
    | declaracion_subprograma    { printf ("  declaracion -> declaracion_objeto declaracion_tipo declaracion_subprograma\n"); }
      ;



/********************OBJETOS****************************/
declaracion_objeto 
  :  varios_identificadores ':' CONSTANTE especificacion_tipo ASIGNACION expresion ';'    { printf ("  declaracion_objeto -> varios_identificadores :  CONSTANTE especificacion_tipo ASIGNACION expresion ; \n"); }
  |  varios_identificadores ':' especificacion_tipo                                      { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo\n"); }
  |  varios_identificadores ':' especificacion_tipo ASIGNACION expresion                 { printf ("  declaracion_objeto -> varios_identificadores : especificacion_tipo ASIGNACION expresion\n"); }
  ;

varios_identificadores
  : IDENTIFICADOR                                                               { printf ("  varios_identificadores -> IDENTIFICADOR\n"); }
  | varios_identificadores IDENTIFICADOR                                        { printf ("  varios_identificadores -> varios_identificadores IDENTIFICADOR\n"); }
  ;
especificacion_tipo
  : nombre                                                                      { printf ("  especificacion_tipo -> nombre\n"); }
  | tipo_no_estructurado                                                         { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
  ;

/********************TIPOS*****************************/
declaracion_tipo
    : TIPO IDENTIFICADOR ES tipo_no_estructurado ';'        { printf ("  declaracion_tipo -> EMPTY\n"); }
    | TIPO IDENTIFICADOR ES tipo_estructurado               { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
    ;

tipo_no_estructurado
  : tipo_escalar                                            { printf ("  tipo_no_estructurado -> tipo_escalar\n"); }
  | tipo_tabla                                              { printf ("  tipo_no_estructurado -> tipo_tabla\n"); }
  | tipo_diccionario                                        { printf ("  tipo_no_estructurado -> tipo_diccionario\n"); }
  ;

tipo_escalar
  : cero_o_uno_signo TIPO_BASICO cero_o_uno_longitud cero_o_uno_rango         { printf ("  tipo_escalar-> cero_o_uno_signo TIPO_BASICO cero_o_uno_longitud cero_o_uno_rango\n"); }
  ;

cero_o_uno_signo
  : 
  | SIGNO                                                   { printf ("   cero_o_uno_signo -> SIGNO\n"); }
  ;

cero_o_uno_longitud
  :
  | LONGITUD                                                { printf ("  cero_o_uno_longitud -> LONGITUD\n"); }
  ;

cero_o_uno_rango
  :
  | RANGO rango                                      { printf ("  cero_o_uno_rango -> RANGO rango\n"); }
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
  | expresion DOS_PTOS expresion DOS_PTOS expresion           { printf ("  rango -> expresion DOS_PTOS expresion\n"); }
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
  : campo                                                    { printf ("  varios_campos -> campo\n"); }
  | varios_campos campo                                      { printf ("  varios_campos -> varios_campos campo\n"); }
  ;

campo
  : varios_identificadores ':' especificacion_tipo ';' { printf ("  campo -> varios_identificadores : especificacion_tipo ;\n"); }
  | varios_identificadores ':' especificacion_tipo ASIGNACION cero_uno_expresion ';' { printf ("  campo -> varios_identificadores : especificacion_tipo ASIGNACION cero_uno_expresion;\n"); }
  ;


tipo_enumerado
  : ENUMERACION DE tipo_escalar varios_elemento_enumeracion FIN ENUMERACION { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar varios_campos FIN ENUMERACION\n"); }
  ;

varios_elemento_enumeracion
  : elemento_enumeracion                                     { printf ("  varios_elemento_enumeracion -> elemento_enumeracion\n"); }
  | varios_elemento_enumeracion elemento_enumeracion         { printf ("  varios_elemento_enumeracion -> varios_elemento_enumeracion elemento_enumeracion\n"); }
  ;

elemento_enumeracion
  : IDENTIFICADOR cero_o_uno_elemento_enumeracion                       { printf ("  elemento_enumeracion -> IDENTIFICADOR cero_o_uno_elemento_enumeracion\n"); }

cero_o_uno_elemento_enumeracion
  : 
  | ASIGNACION expresion                                    {printf (" cero_o_uno_elemento_enumeracion -> ASIGNACION expresion\n");}
  ;



/***********CLASES*********************************/

clase 
  : CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE          { printf ("  clase -> CLASE cero_uno_ultima cero_uno_superclases varias_declaraciones_componente FIN CLASE\n"); }
   ;

cero_uno_ultima
: 
| ULTIMA                    { printf ("  cero_uno_ultima -> ULTIMA\n"); }

;

cero_uno_superclases
: 
| superclases            { printf ("  cero_uno_superclases -> superclases\n"); }

;

superclases 
    : '(' nombre ')'            { printf ("  superclases -> ( nombre )\n"); }
         
    ;


declaracion_componente 
    : componente { printf ("  declaracion_componente -> componente"); }
    | visibilidad componente { printf ("  declaracion_componente -> visibilidad componente"); } 
    ;

varias_declaraciones_componente
  : declaracion_componente                        { printf ("  varias_declaraciones_componente -> declaracion_componente"); }
  | varias_declaraciones_componente declaracion_componente    { printf ("  varias_declaraciones_componente -> varias_declaraciones_componente declaracion_componente"); }
  ;


visibilidad 
: PUBLICO 
| PROTEGIDO 
| PRIVADO
             { printf ("  visibilidad -> PUBLICO PROTEGIDO PRIVADO\n"); }
  ;

componente 
: declaracion_tipo
| declaracion_objeto
| varios_modificadores  declaracion_subprograma
          { printf ("  componente -> declaracion_tipo declaracion_objeto varios_modificadores declaracion_subprograma"); }
   ;


varios_modificadores
	 : 
   | modificador                           { printf ("  varios_modificadores -> modificador\n"); }
	 | varios_modificadores  modificador      { printf ("  varios_modificadores ->  varios_modificadores  modificador\n"); }
	 ;

modificador 
: CONSTRUCTOR 
| DESTRUCTOR 
| GENERICO 
| ABSTRACTO 
| ESPECIFICO 
| FINAL
          { printf ("  modificador -> CONSTRUCTOR DESTRUCTOR GENERICO ABSTRACTO ESPECIFICO FINAL"); }
 ;



/**************************************SUBPROGRAMAS***************************************/

declaracion_subprograma 
  : SUBPROGRAMA 
  cabecera_subprograma 
  cuerpo_subprograma 
  SUBPROGRAMA
                          { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }

  ;

  
cabecera_subprograma 
    : IDENTIFICADOR 
     cero_uno_parametrizacion 
     cero_uno_tipoResultado 
                                        { printf ("  cabecera_subprograma -> IDENTIFICADOR cero_uno_parametrizacion cero_uno_tipoResultado\n"); }

      ;


cero_uno_parametrizacion
: 
| parametrizacion
              { printf ("  cero_uno_parametrizacion -> parametrizacion\n"); }

;

cero_uno_tipoResultado
: 
| tipo_resultado
              { printf ("  cero_uno_tipoResultado -> tipo_resultado\n"); }

;

parametrizacion 
      : '(' varias_declaraciones_parametros 
         declaracion_parametros 
        ')'
                                                          { printf ("parametrizacion -> varias_declaraciones_parametros declaracion_parametros"); }

        ;


declaracion_parametros 
      : varios_identificadores ':' modo especificacion_tipo cero_uno_expresion
                                                          { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo cero_uno_expresion"); }

       ;

varias_declaraciones_parametros
  :
  | declaracion_parametros ';'                                            {printf ("varias_declaraciones_parametros -> declaracion_parametros ;\n");}
  | varias_declaraciones_parametros declaracion_parametros ';'            {printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros ;\n");}

;


cero_uno_expresion
: 
| ASIGNACION expresion
              { printf ("  cero_uno_expresion -> ':=' expresion\n"); }

;

modo 
   : VALOR  
   | REFERENCIA
                                                          { printf ("modo -> VALOR REFERENCIA"); }
     ;

tipo_resultado 
    : DEVOLVER
       especificacion_tipo
                                                          { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo"); }

       ;


cuerpo_subprograma 
    :  varias_declaraciones  
       PRINCIPIO  
       varias_instrucciones  
       FIN
                                                          { printf ("  cuerpo_subprograma -> varias_declaraciones PRINCIPIO varias_instrucciones FIN"); }

       ;

varias_instrucciones
	 : 
   | instruccion                   { printf ("  varias_instrucciones -> instruccion\n"); }
	 | varias_instrucciones  instruccion       { printf ("  varias_instrucciones ->  varias_instrucciones  instruccion\n"); }
	 ;


varias_declaraciones
	 : 
   | declaracion                        { printf ("  varias_declaraciones -> declaracion\n"); }
	 | varias_declaraciones  declaracion      { printf ("  varias_declaraciones ->  varias_declaraciones  declaracion\n"); }
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
    : objeto
     op_asignacion
      expresion 
      ';'
                                                          { printf ("  instruccion_asignacion -> objeto op_asignacion expresion;"); }

      ;
      

op_asignacion 
  : ASIGNACION  { printf ("  op_asignacion -> ASIGNACION"); }
  | ASIG_SUMA  { printf ("  op_asignacion -> ASIG_SUMA"); }
  |  ASIG_RESTA  { printf ("  op_asignacion -> :- "); } /*ERROR EN ESTE OPERADOR: CARACTER EXTRA EN CARACTER LITERAL */
  |  ASIG_MULT  { printf ("  op_asignacion -> ASIG_MULT"); }
  |  ASIG_DIV  { printf ("  op_asignacion -> ASIG_DIV"); }
  |  ASIG_RESTO  { printf ("  op_asignacion -> ASIG_RESTO"); }
  |  ASIG_POT  { printf ("  op_asignacion -> ASIG_POT"); }
  |  ASIG_DESPI  { printf ("  op_asignacion -> ASIG_DESPI"); }
  |  ':'   { printf ("  op_asignacion -> :"); }
                                               
    
    ;


instruccion_devolver 
  : DEVOLVER  
   cero_uno_expr  
   ';'
           { printf ("  instruccion_devolver -> DEVOLVER cero_uno_expr ;\n"); }
   ;


cero_uno_expr
: 
| expresion
              { printf ("cero_uno_expresion -> expresion\n"); }

;

  instruccion_llamada 
    : llamada_subprograma 
    ';'
               { printf ("  instruccion_llamada ->  llamada_subprograma ;\n"); }

    ;

 llamada_subprograma 
  : nombre 
  '(' 
  varias_definicion_parametro
   ')'
               { printf ("llamada_subprograma ->  nombre ( varias_definicion_parametro )\n"); }

  ;

  varias_definicion_parametro
	 : 
   | definicion_parametro                             { printf ("  varias_definicion_parametro -> definicion_parametro\n"); }
	 | varias_definicion_parametro  definicion_parametro       { printf ("  varias_definicion_parametro ->  varias_definicion_parametro  definicion_parametro\n"); }
	 ;



definicion_parametro 
  :  
  cero_uno_identificador  
  expresion
               { printf ("definicion_parametro ->  cero_uno_identificador expresion\n"); }

  ;

  cero_uno_identificador
: 
| IDENTIFICADOR ASIGNACION
              { printf ("cero_uno_identificador -> IDENTIFICADOR :=\n"); }

;
instruccion_si 
  : SI expresion ENTONCES  
  varias_instrucciones 
  cero_mas_instrucciones  FIN SI
               { printf ("instruccion_si ->  SI expresion ENTONCES varias_instrucciones cero_mas_instrucciones FIN SI\n"); }

  ;

cero_mas_instrucciones
: 
| SINO varias_instrucciones
               { printf ("cero_mas_instrucciones ->  SINO varias_instrucciones\n"); }

;
instruccion_casos 
  : CASOS 
  expresion 
  ES caso  
  FIN CASOS 
               { printf ("instruccion_casos ->  CASOS expresion ES caso FIN CASOS\n"); }

  ;


caso 
: CUANDO entradas 
FLECHA 
varias_instrucciones
               { printf ("caso ->  CUANDO entradas => varias_instrucciones\n"); }

;
entradas 
: varias_entradas /*entrada ':'*/ 
 entrada
               { printf ("entradas ->  varias_entradas entrada\n"); }

 ;
 varias_entradas
  : entradas  ':'                  { printf ("varias_entradas ->  entradas :\n"); }         
  | varias_entradas entradas  ':'     { printf ("varias_entradas ->  varias_entradas entradas :\n"); }
  ;

entrada 
: expresion cero_mas_expresiones1
| OTRO
               { printf ("entrada ->  expresion cero_mas_expresiones1 OTRO\n"); }

;

cero_mas_expresiones1
: 
| DOS_PTOS expresion
               { printf ("cero_mas_expresiones1 -> .. expresion\n"); }

;


instruccion_bucle 
: cero_mas_identificador1 
clausula_iteracion varias_instrucciones 
 FIN BUCLE

                { printf ("instruccion_bucle -> cero_mas_identificador1 clausula_iteracion varias_instrucciones FIN BUCLE\n");}

 ;

cero_mas_identificador1
: 
| IDENTIFICADOR ':'
               { printf ("cero_mas_identificador1 -> IDENTIFICADOR :\n"); }

;

clausula_iteracion 
: PARA IDENTIFICADOR cero_mas_especificacion_tipo  EN expresion
| REPETIR IDENTIFICADOR cero_mas_especificacion_tipo EN rango cero_o_uno_descendente 
| MIENTRAS expresion
                { printf ("clausula_iteracion ->  PARA IDENTIFICADOR cero_mas_especificacion_tipo EN expresion REPETIR IDENTIFICADOR cero_mas_especificacion_tipo EN rango cero_o_uno_descendente MIENTRAS expresion\n");}

;

cero_mas_especificacion_tipo
: 
| ':' especificacion_tipo
               { printf ("cero_mas_especificacion -> : especificacion_tipo :\n"); }

;

///************************************/////////////////////////////////////////////////////////////////////////////////////
cero_o_uno_descendente
  : DESCENDENTE              {printf ("cero_o_uno_descendete -> DESCENDENTE\n");}
  ;



instruccion_interrupcion 
  : SIGUIENTE cero_o_uno_cuando  ';'                          { printf ("instruccion_interrupcion ->  SIGUIENTE cero_o_uno_cuando ;\n");}
  | SALIR cero_o_uno_de_identificador  cero_o_uno_cuando  ';' { printf ("instruccion_interrupcion ->  SALIR cero_o_uno_de_identificador cero_o_uno_cuando ;\n");}

  ;
 
cuando 
: CUANDO 
  expresion
        { printf ("cuando ->CUANDO expresion"); }
;

cero_o_uno_cuando
  : 
  | cuando                                                {printf ("cero_o_uno_cuando -> cuando\n");}
  ;

cero_o_uno_de_identificador
  :
  | DE IDENTIFICADOR                                      {printf ("cero_o_uno_de_identificador -> DE IDENTIFICADOR\n");}
  ;

instruccion_lanzamiento_excepcion 
: LANZA nombre 
';'
         { printf ("instruccion_lanzamiento_excepcion ->LANZA nombre ;"); }
;
instruccion_captura_excepcion 
: PRUEBA  instruccion  clausulas FIN PRUEBA                   { printf ("instrucc_cap ->PRUEBA instruc clausulas FIN PRUEBA"); }
;

clausulas 
: clausulas_excepcion                                         { printf ("clausulas ->clausulas_excepcion\n"); }
| clausulas_excepcion clausulsa_finalmente                     { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
| clausula_finalmente                                         { printf ("clausulas ->clausula_finalmente\n"); }  
;


clausulas_excepcion 
: varias_clausula_excepcion_especifica 
 clausula_excepcion_general
         { printf ("clausulas_excepcion ->varias_clausula_excepcion_especifica clausula_excepcion_general "); }

 ;

 varias_clausula_excepcion_especifica
  :
  | clausula_excepcion_especifica                                       { printf ("varias_clausula_excepcion_especifica ->clausula_excepcion_especifica\n"); } 
  | varias_clausula_excepcion_especifica clausula_excepcion_especifica  { printf ("varias_clausula_excepcion_especifica ->varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); } 
  ;

clausula_excepcion_especifica 
: EXCEPCION '(' nombre ')' varias_instrucciones { printf ("clausulas_excep_espec ->EXCEPCION ( nombre ) varias_instrucciones "); }
;


clausula_excepcion_general 
: EXCEPCION 
varias_instrucciones
         { printf ("clausula_excepcion_general ->EXCEPCION instruccion"); }

;
clausula_finalmente 
: FINALMENTE 
varias_instrucciones
         { printf ("clausula_finalmente ->FINALMENTE instruccion"); }

;


/********************EXPRESIONES************************************/
expresion_potencia
  : expresion_posfija                                                   { printf ("  expresion_potencia-> expresion_posfija\n"); }
  | expresion_posfija '^' expresion_potencia                            { printf ("  expresion_potencia-> expresion_posfija ^ expresion_potencia\n"); }
  ;

expresion_posfija
  : expresion_unaria                                                    { printf ("  expresion_posfija -> expresion_unaria\n"); }
  | expresion_unaria operador_posfijo                                   { printf ("  expresion_posfija -> expresion_unaria operador_posfijo\n"); }
  ;

operador_posfijo
  : INC                                                                 { printf ("  operador_posfijo -> INC\n"); }
  | DEC                                                                 { printf ("  operador_posfijo -> DEC\n"); }
  ;

expresion_unaria
  : primario                                                            { printf ("  expresion_unaria -> primario\n"); }
  | '-' primario                                                        { printf ("  expresion_unaria -> - primario\n"); }
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

varias_expresiones
	 : expresion                        { printf ("  varias_expresiones -> expresion\n"); }
	 | varias_expresiones  expresion       { printf ("  varias_expresiones ->  varias_expresiones  expresion\n"); }
	 ;

varias_ctc_cadena
  : CTC_CADENA                                                          { printf ("  varias_ctc_cadena -> CTC_CADENA\n"); }
  | varias_ctc_cadena CTC_CADENA                                        { printf ("  varias_ctc_cadena -> varias_ctc_cadena CTC_CADENA\n"); }
  ;

enumeraciones
  : '[' expresion_condicional varias_clausulas_iteracion ']'            { printf ("  enumeraciones -> [ expresion_condicional varias_clausulas_iteracion ]\n"); }
  | '[' varias_expresiones ']'                                          { printf ("  enumeraciones -> [ expresion ]\n"); }
  | '{' varias_clave_valor '}'                                          { printf ("  enumeraciones -> { varias_clave_valor }\n"); }
  | '{' varias_campo_valor '}'                                          { printf ("  enumeraciones -> { varias_campo_valor }\n"); }
  ;

varias_clausulas_iteracion
  : varias_clausulas_iteracion                                          { printf ("  varias_clausulas_iteracion -> IDENTIFICADOR ASIGNACION expresion\n"); }
  | varias_clausulas_iteracion clausula_iteracion                       { printf ("  varias_clausulas_iteracion -> varias_clausulas_iteracion clausula_iteracion\n"); }
  ;

varias_clave_valor
  : clave_valor                                                         { printf ("  varias_clave_valor -> clave_valor\n"); }
  | varias_clave_valor clave_valor                                      { printf ("  varias_clave_valor -> varias_clave_valor clave_valor\n"); }
  ;

varias_campo_valor
  : campo_valor                                                         { printf ("  varias_campo_valor -> campo_valor\n"); }
  | varias_campo_valor campo_valor                                      { printf ("  varias_campo_valor -> varias_campo_valor campo_valor\n"); }
  ;
  

expresion_condicional
  : expresion                                                           { printf ("  expresion_condicional -> expresion\n"); }
  | SI expresion ENTONCES expresion                                     { printf ("  expresion_condicional -> SI expresion ENTONCES expresion\n"); }
  | SI expresion ENTONCES expresion SINO varias_expresiones             { printf ("  expresion_condicional -> SI expresion ENTONCES expresion SINO varias_expresiones\n"); }
  ;

clave_valor
  : CTC_CADENA FLECHA expresion                                         { printf ("  clave_valor -> CTC_CADENA FLECHA expresion\n"); }
  ;

campo_valor
  : IDENTIFICADOR FLECHA expresion                                      { printf ("  campo_valor -> IDENTIFICADOR FLECHA expresion\n"); }
  ;


expresion
	: operadorOR		                         { printf("  expresion ->  operadorOR\n"); }
;
operadorOR
	: operadorOR OR operadorAND	             { printf("  operadorOR ->  operadorOR OR operadorAND\n"); }
	| operadorAND			                      
;
operadorAND
	: operadorAND AND operadorNEG	           { printf("  operadorAND ->  operadorAND AND operadorNEG\n"); }
	| operadorNEG			                      
;
operadorNEG
	: '~' operadorASIG		                   { printf("  operadorNEG ->  '~' operadorASIG\n"); }
	| operadorASIG			                     
;


operadorASIG
	: '<' operadorDES	       { printf("  operadorASIG ->  operadorASIG '<' operadorDES\n"); }
	| '>' operadorDES	       { printf("  operadorASIG ->  operadorASIG '>' operadorDES\n"); }
	| LEQ operadorDES	       { printf("  operadorASIG ->  operadorASIG LEQ operadorDES\n"); }
	| FLECHA operadorDES	       { printf("  operadorASIG ->  operadorASIG FLECHA operadorDES\n"); }
	| '=' operadorDES		       { printf("  operadorASIG ->  operadorASIG '=' operadorDES\n"); }
	| NEQ operadorDES	       { printf("  operadorASIG ->  operadorASIG NEQ operadorDES\n"); }
	| operadorDES				                 
;

operadorDES
	: operadorDES DESPI operadorSR		       { printf("  operadorDES ->  operadorDES DESPI operadorSR\n"); }
	| operadorDES DESPD operadorSR		       { printf("  operadorDES ->  operadorDES DESPD operadorSR\n"); }
	| operadorSR				                    
;

operadorSR
	: operadorSR '+' operadorMDM		         { printf("  operadorSR ->  operadorSR '+' operadorMDM\n"); }
	| operadorSR '-' operadorMDM		         { printf("  operadorSR ->  operadorSR '-' operadorMDM\n"); }
	| operadorMDM				                     
;

operadorMDM
	: operadorMDM '*' operadorPOT		         { printf("  operadorMDM ->  operadorMDM '*' operadorPOT\n"); }
	| operadorMDM '/' operadorPOT		         { printf("  operadorMDM ->  operadorMDM '/' operadorPOT\n"); }
	| operadorMDM '\\' operadorPOT		       { printf("  operadorMDM ->  operadorMDM '\\' operadorPOT\n"); }
	| operadorPOT				                     
;

operadorPOT
	: operadorINCDEC '^' operadorPOT	       { printf("  operadorPOT ->  operadorINCDEC '^' operadorPOT\n"); }
	| operadorINCDEC				                     
;


operadorINCDEC
	:  INC operadorMDM		         { printf("  operadorINCDEC ->  operadorINCDEC INC operadorMDM\n"); }
	|  DEC operadorMDM		         { printf("  operadorINCDEC ->  operadorINCDEC DEC operadorMDM\n"); }
	| operadorMDM				                     //{ printf("  operadorSR ->  operadorMDM\n"); }
;

operadorUN
	: '-' primario		             { printf("  operadorUN ->  '-' primario\n"); }
	| primario			               { printf("  operadorUN ->  primario\n"); }
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

  yydebug = 1;

  if (argc < 2) {
    printf("Uso: ./simple NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
