/*
 * _coder_GetEdgesVectors_mex.c
 *
 * Code generation for function 'GetEdgesVectors'
 *
 */

/* Include files */
#include "mex.h"
#include "_coder_GetEdgesVectors_api.h"
#include "GetEdgesVectors_initialize.h"
#include "GetEdgesVectors_terminate.h"

/* Function Declarations */
static void GetEdgesVectors_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "GetEdgesVectors", NULL, false, {2045744189U,2170104910U,2743257031U,4284093946U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void GetEdgesVectors_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  const mxArray *outputs[1];
  const mxArray *inputs[2];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  int nInputs = nrhs;
  emlrtStack st = { NULL, NULL, NULL };
  /* Module initialization. */
  GetEdgesVectors_initialize(&emlrtContextGlobal);
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 2, mxCHAR_CLASS, 15, "GetEdgesVectors");
  } else if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 15, "GetEdgesVectors");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = prhs[n];
  }
  /* Call the function. */
  GetEdgesVectors_api(inputs, outputs);
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  GetEdgesVectors_terminate();
}

void GetEdgesVectors_atexit_wrapper(void)
{
   GetEdgesVectors_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(GetEdgesVectors_atexit_wrapper);
  /* Dispatch the entry-point. */
  GetEdgesVectors_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (_coder_GetEdgesVectors_mex.c) */
