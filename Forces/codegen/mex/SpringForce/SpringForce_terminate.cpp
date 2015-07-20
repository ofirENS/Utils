/*
 * SpringForce_terminate.cpp
 *
 * Code generation for function 'SpringForce_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SpringForce.h"
#include "SpringForce_terminate.h"
#include "SpringForce_data.h"

/* Function Definitions */
void SpringForce_atexit()
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void SpringForce_terminate()
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (SpringForce_terminate.cpp) */
