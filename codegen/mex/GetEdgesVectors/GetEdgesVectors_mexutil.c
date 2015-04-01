/*
 * GetEdgesVectors_mexutil.c
 *
 * Code generation for function 'GetEdgesVectors_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "GetEdgesVectors.h"
#include "GetEdgesVectors_mexutil.h"

/* Function Definitions */
void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

/* End of code generation (GetEdgesVectors_mexutil.c) */
