/*
 * eml_int_forloop_overflow_check.c
 *
 * Code generation for function 'eml_int_forloop_overflow_check'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "LennardJones.h"
#include "eml_int_forloop_overflow_check.h"

/* Variable Definitions */
static emlrtRTEInfo k_emlrtRTEI = { 87, 21, "eml_int_forloop_overflow_check",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

/* Function Definitions */
void check_forloop_overflow_error(const emlrtStack *sp)
{
  static const char_T cv3[5] = { 'i', 'n', 't', '3', '2' };

  emlrtErrorWithMessageIdR2012b(sp, &k_emlrtRTEI,
    "Coder:toolbox:int_forloop_overflow", 3, 4, 5, cv3);
}

/* End of code generation (eml_int_forloop_overflow_check.c) */
