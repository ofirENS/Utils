/*
 * GetEdgesVectors_initialize.c
 *
 * Code generation for function 'GetEdgesVectors_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "GetEdgesVectors.h"
#include "GetEdgesVectors_initialize.h"
#include "GetEdgesVectors_data.h"

/* Function Definitions */
void GetEdgesVectors_initialize(emlrtContext *aContext)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (GetEdgesVectors_initialize.c) */
