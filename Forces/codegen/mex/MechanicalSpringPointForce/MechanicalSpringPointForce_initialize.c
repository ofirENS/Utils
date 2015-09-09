/*
 * MechanicalSpringPointForce_initialize.c
 *
 * Code generation for function 'MechanicalSpringPointForce_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MechanicalSpringPointForce.h"
#include "MechanicalSpringPointForce_initialize.h"
#include "MechanicalSpringPointForce_data.h"

/* Function Definitions */
void MechanicalSpringPointForce_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (MechanicalSpringPointForce_initialize.c) */
