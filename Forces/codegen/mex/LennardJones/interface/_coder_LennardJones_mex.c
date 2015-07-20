/*
 * _coder_LennardJones_mex.c
 *
 * Code generation for function '_coder_LennardJones_mex'
 *
 */

/* Include files */
#include "LennardJones.h"
#include "_coder_LennardJones_mex.h"
#include "LennardJones_terminate.h"
#include "_coder_LennardJones_api.h"
#include "LennardJones_initialize.h"
#include "LennardJones_data.h"

/* Function Declarations */
static void LennardJones_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T
  nrhs, const mxArray *prhs[5]);

/* Function Definitions */
static void LennardJones_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T
  nrhs, const mxArray *prhs[5])
{
  int32_T n;
  const mxArray *inputs[5];
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        12, "LennardJones");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "LennardJones");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  LennardJones_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  LennardJones_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(LennardJones_atexit);

  /* Module initialization. */
  LennardJones_initialize();

  /* Dispatch the entry-point. */
  LennardJones_mexFunction(nlhs, plhs, nrhs, prhs);
}

/* End of code generation (_coder_LennardJones_mex.c) */
