PROGRAM NO_NC
  VAR
    NO_Contact : BOOL;
    NC_Contact : BOOL;
    Coil_1 : BOOL;
    Coil_2 : BOOL;
  END_VAR

  Coil_1 := NO_Contact;
  Coil_2 := NOT(NC_Contact);
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : NO_NC;
  END_RESOURCE
END_CONFIGURATION
