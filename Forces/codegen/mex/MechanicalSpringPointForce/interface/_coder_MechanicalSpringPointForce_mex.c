/*
 * _coder_MechanicalSpringPointForce_mex.c
 *
 * Code generation for function '_coder_MechanicalSpringPointForce_mex'
 *
 */

/* Include files */
#include "MechanicalSpringPointForce.h"
#include "_coder_MechanicalSpringPointForce_mex.h"
#include "MechanicalSpringPointForce_terminate.h"
#include "_coder_MechanicalSpringPointForce_api.h"
#include "MechanicalSpringPointForce_initialize.h"
#include "MechanicalSpringPointForce_data.h"

/* Function Declarations */
static void c_MechanicalSpringPointForce_me(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[5]);

/* Function Definitions */
static void c_MechanicalSpringPointForce_me(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[5])
{
  int32_T n;
  const mxArray *inputs[5];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        26, "MechanicalSpringPointForce");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 26,
                        "MechanicalSpringPointForce");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  MechanicalSpringPointForce_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  MechanicalSpringPointForce_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(MechanicalSpringPointForce_atexit);

  /* Module initialization. */
  MechanicalSpringPointForce_initialize();

  /* Dispatch the entry-point. */
  c_MechanicalSpringPointForce_me(nlhs, plhs, nrhs, prhs);
}

/* End of code generation (_coder_MechanicalSpringPointForce_mex.c) */
