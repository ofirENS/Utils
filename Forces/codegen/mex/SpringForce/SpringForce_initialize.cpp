/*
 * SpringForce_initialize.cpp
 *
 * Code generation for function 'SpringForce_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SpringForce.h"
#include "SpringForce_initialize.h"
#include "SpringForce_data.h"

/* Function Definitions */
void SpringForce_initialize()
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (SpringForce_initialize.cpp) */
