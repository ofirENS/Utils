/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BendingElasticity.h"
#include "rdivide.h"
#include "BendingElasticity_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = { 1, 14, "rdivide",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/rdivide.m" };

/* Function Definitions */
void rdivide(const emlrtStack *sp, const emxArray_real_T *x, real_T y,
             emxArray_real_T *z)
{
  int32_T i5;
  int32_T loop_ub;
  i5 = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)z, i5, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    z->data[i5] = x->data[i5] / y;
  }
}

/* End of code generation (rdivide.c) */
