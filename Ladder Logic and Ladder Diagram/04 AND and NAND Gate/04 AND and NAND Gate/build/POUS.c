void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void AND_NAND_init__(AND_NAND *data__, BOOL retain) {
  __INIT_VAR(data__->INPUT_0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->INPUT_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->INPUT_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->INPUT_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OUTPUT_0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OUTPUT_1,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void AND_NAND_body__(AND_NAND *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,OUTPUT_0,,(__GET_VAR(data__->INPUT_1,) && __GET_VAR(data__->INPUT_0,)));
  __SET_VAR(data__->,OUTPUT_1,,(!(__GET_VAR(data__->INPUT_3,)) || !(__GET_VAR(data__->INPUT_2,))));

  goto __end;

__end:
  return;
} // AND_NAND_body__() 





