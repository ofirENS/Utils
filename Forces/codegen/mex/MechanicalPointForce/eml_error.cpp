/*
 * eml_error.cpp
 *
 * Code generation for function 'eml_error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MechanicalPointForce.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRTEInfo p_emlrtRTEI = { 20, 5, "eml_error",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/eml/eml_error.m" };

/* Function Definitions */
void eml_error(const emlrtStack *sp)
{
  static const char_T varargin_1[4] = { 's', 'q', 'r', 't' };

  emlrtErrorWithMessageIdR2012b(sp, &p_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, varargin_1);
}

/* End of code generation (eml_error.cpp) */
