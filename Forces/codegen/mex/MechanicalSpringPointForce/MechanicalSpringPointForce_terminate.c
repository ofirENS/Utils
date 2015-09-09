/*
 * MechanicalSpringPointForce_terminate.c
 *
 * Code generation for function 'MechanicalSpringPointForce_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MechanicalSpringPointForce.h"
#include "MechanicalSpringPointForce_terminate.h"
#include "MechanicalSpringPointForce_data.h"

/* Function Definitions */
void MechanicalSpringPointForce_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void MechanicalSpringPointForce_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (MechanicalSpringPointForce_terminate.c) */
