TYPE
  LOGLEVEL : (CRITICAL, WARNING, INFO, DEBUG) := INFO;
END_TYPE

FUNCTION_BLOCK LOGGER
  VAR_INPUT
    TRIG : BOOL;
    MSG : STRING;
    LEVEL : LOGLEVEL := INFO;
  END_VAR
  VAR
    TRIG0 : BOOL;
  END_VAR

  IF TRIG AND NOT TRIG0 THEN
  {{
   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  }}
  END_IF;
  TRIG0:=TRIG;
END_FUNCTION_BLOCK


PROGRAM Logic_Gates
  VAR
    Input_0 : BOOL;
    Input_1 : BOOL;
    Input_2 : BOOL;
    Input_3 : BOOL;
    Input_4 : BOOL;
    Output_0 : BOOL;
    Output_1 : BOOL;
    Output_2 : BOOL;
  END_VAR

  Output_0 := NOT(Input_0);
  Output_1 := Input_1 OR Input_2;
  Output_2 := NOT(Input_4) AND NOT(Input_3);
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : Logic_Gates;
  END_RESOURCE
END_CONFIGURATION
