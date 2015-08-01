/*
 * MechanicalPointForce_initialize.cpp
 *
 * Code generation for function 'MechanicalPointForce_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MechanicalPointForce.h"
#include "MechanicalPointForce_initialize.h"
#include "MechanicalPointForce_data.h"

/* Function Definitions */
void MechanicalPointForce_initialize()
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (MechanicalPointForce_initialize.cpp) */
