/*
 * eml_error.c
 *
 * Code generation for function 'eml_error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BendingElasticityForce.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRTEInfo h_emlrtRTEI = { 20, 5, "eml_error",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/eml/eml_error.m"
};

/* Function Definitions */
void eml_error(const emlrtStack *sp)
{
  static char_T cv4[4][1] = { { 'a' }, { 'c' }, { 'o' }, { 's' } };

  emlrtErrorWithMessageIdR2012b(sp, &h_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, cv4);
}

/* End of code generation (eml_error.c) */
