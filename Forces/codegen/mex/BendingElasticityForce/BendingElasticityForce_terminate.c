/*
 * BendingElasticityForce_terminate.c
 *
 * Code generation for function 'BendingElasticityForce_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BendingElasticityForce.h"
#include "BendingElasticityForce_terminate.h"

/* Function Definitions */
void BendingElasticityForce_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void BendingElasticityForce_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (BendingElasticityForce_terminate.c) */
