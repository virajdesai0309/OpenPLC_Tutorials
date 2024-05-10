#include "beremiz.h"
#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

__DECLARE_ENUMERATED_TYPE(LOGLEVEL,
  LOGLEVEL__CRITICAL,
  LOGLEVEL__WARNING,
  LOGLEVEL__INFO,
  LOGLEVEL__DEBUG
)
// FUNCTION_BLOCK LOGGER
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,MSG)
  __DECLARE_VAR(LOGLEVEL,LEVEL)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,TRIG0)

} LOGGER;

void LOGGER_init__(LOGGER *data__, BOOL retain);
// Code part
void LOGGER_body__(LOGGER *data__);
// PROGRAM LOGIC_GATES
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,INPUT_0)
  __DECLARE_VAR(BOOL,INPUT_1)
  __DECLARE_VAR(BOOL,INPUT_2)
  __DECLARE_VAR(BOOL,INPUT_3)
  __DECLARE_VAR(BOOL,INPUT_4)
  __DECLARE_VAR(BOOL,OUTPUT_0)
  __DECLARE_VAR(BOOL,OUTPUT_1)
  __DECLARE_VAR(BOOL,OUTPUT_2)

} LOGIC_GATES;

void LOGIC_GATES_init__(LOGIC_GATES *data__, BOOL retain);
// Code part
void LOGIC_GATES_body__(LOGIC_GATES *data__);
#endif //__POUS_H
