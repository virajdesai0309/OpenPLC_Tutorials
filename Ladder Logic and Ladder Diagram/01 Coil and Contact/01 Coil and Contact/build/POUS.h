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
// PROGRAM COIL_AND_CONTACT
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,TOGGLE_SWITCH)
  __DECLARE_VAR(BOOL,COIL_1)
  __DECLARE_VAR(BOOL,COIL_2)
  __DECLARE_VAR(BOOL,COIL_3)
  __DECLARE_VAR(BOOL,COIL_4)

} COIL_AND_CONTACT;

void COIL_AND_CONTACT_init__(COIL_AND_CONTACT *data__, BOOL retain);
// Code part
void COIL_AND_CONTACT_body__(COIL_AND_CONTACT *data__);
#endif //__POUS_H
