/*
 * MechanicalPointForce_terminate.cpp
 *
 * Code generation for function 'MechanicalPointForce_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MechanicalPointForce.h"
#include "MechanicalPointForce_terminate.h"
#include "MechanicalPointForce_data.h"

/* Function Definitions */
void MechanicalPointForce_atexit()
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void MechanicalPointForce_terminate()
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (MechanicalPointForce_terminate.cpp) */
