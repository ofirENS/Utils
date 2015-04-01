/*
 * _coder_BendingElasticityForce_mex.c
 *
 * Code generation for function 'BendingElasticityForce'
 *
 */

/* Include files */
#include "mex.h"
#include "_coder_BendingElasticityForce_api.h"
#include "BendingElasticityForce_initialize.h"
#include "BendingElasticityForce_terminate.h"

/* Function Declarations */
static void BendingElasticityForce_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "BendingElasticityForce", NULL, false, {2045744189U,2170104910U,2743257031U,4284093946U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void BendingElasticityForce_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  const mxArray *outputs[1];
  const mxArray *inputs[5];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  int nInputs = nrhs;
  emlrtStack st = { NULL, NULL, NULL };
  /* Module initialization. */
  BendingElasticityForce_initialize(&emlrtContextGlobal);
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 5, mxCHAR_CLASS, 22, "BendingElasticityForce");
  } else if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 22, "BendingElasticityForce");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = prhs[n];
  }
  /* Call the function. */
  BendingElasticityForce_api(inputs, outputs);
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  BendingElasticityForce_terminate();
}

void BendingElasticityForce_atexit_wrapper(void)
{
   BendingElasticityForce_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(BendingElasticityForce_atexit_wrapper);
  /* Dispatch the entry-point. */
  BendingElasticityForce_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (_coder_BendingElasticityForce_mex.c) */
