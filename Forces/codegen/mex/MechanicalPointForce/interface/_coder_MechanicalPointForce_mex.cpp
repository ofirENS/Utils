/*
 * _coder_MechanicalPointForce_mex.cpp
 *
 * Code generation for function '_coder_MechanicalPointForce_mex'
 *
 */

/* Include files */
#include "MechanicalPointForce.h"
#include "_coder_MechanicalPointForce_mex.h"
#include "MechanicalPointForce_terminate.h"
#include "_coder_MechanicalPointForce_api.h"
#include "MechanicalPointForce_initialize.h"
#include "MechanicalPointForce_data.h"

/* Function Declarations */
static void c_MechanicalPointForce_mexFunct(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[5]);

/* Function Definitions */
static void c_MechanicalPointForce_mexFunct(int32_T nlhs, mxArray *plhs[1],
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
                        20, "MechanicalPointForce");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 20,
                        "MechanicalPointForce");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  MechanicalPointForce_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  MechanicalPointForce_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(MechanicalPointForce_atexit);

  /* Module initialization. */
  MechanicalPointForce_initialize();

  /* Dispatch the entry-point. */
  c_MechanicalPointForce_mexFunct(nlhs, plhs, nrhs, prhs);
}

/* End of code generation (_coder_MechanicalPointForce_mex.cpp) */
