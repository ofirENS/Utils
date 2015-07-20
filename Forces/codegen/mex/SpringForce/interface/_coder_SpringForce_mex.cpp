/*
 * _coder_SpringForce_mex.cpp
 *
 * Code generation for function '_coder_SpringForce_mex'
 *
 */

/* Include files */
#include "SpringForce.h"
#include "_coder_SpringForce_mex.h"
#include "SpringForce_terminate.h"
#include "_coder_SpringForce_api.h"
#include "SpringForce_initialize.h"
#include "SpringForce_data.h"

/* Function Declarations */
static void SpringForce_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[4]);

/* Function Definitions */
static void SpringForce_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[4])
{
  int32_T n;
  const mxArray *inputs[4];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        11, "SpringForce");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "SpringForce");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  SpringForce_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  SpringForce_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(SpringForce_atexit);

  /* Module initialization. */
  SpringForce_initialize();

  /* Dispatch the entry-point. */
  SpringForce_mexFunction(nlhs, plhs, nrhs, prhs);
}

/* End of code generation (_coder_SpringForce_mex.cpp) */
