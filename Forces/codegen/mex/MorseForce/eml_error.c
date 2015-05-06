/*
 * eml_error.c
 *
 * Code generation for function 'eml_error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MorseForce.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRTEInfo l_emlrtRTEI = { 20, 5, "eml_error",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/eml/eml_error.m" };

/* Function Definitions */
void eml_error(const emlrtStack *sp)
{
  static char_T cv24[4][1] = { { 's' }, { 'q' }, { 'r' }, { 't' } };

  emlrtErrorWithMessageIdR2012b(sp, &l_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, cv24);
}

/* End of code generation (eml_error.c) */
