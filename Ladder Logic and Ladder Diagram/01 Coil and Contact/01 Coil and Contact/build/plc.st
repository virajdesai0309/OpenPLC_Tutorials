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


PROGRAM Coil_and_Contact
  VAR
    Toggle_Switch : BOOL;
    Coil_1 : BOOL;
    Coil_2 : BOOL;
    Coil_3 : BOOL;
    Coil_4 : BOOL;
  END_VAR

  Coil_1 := Toggle_Switch;
  Coil_2 := Toggle_Switch;
  Coil_3 := Toggle_Switch;
  Coil_4 := Toggle_Switch;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : Coil_and_Contact;
  END_RESOURCE
END_CONFIGURATION
