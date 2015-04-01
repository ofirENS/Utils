/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "LennardJones.h"
#include "power.h"
#include "LennardJones_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo i_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\scalexpAlloc.p"
};

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv0[2];
  int32_T i2;
  int32_T k;
  for (i2 = 0; i2 < 2; i2++) {
    uv0[i2] = (uint32_T)a->size[i2];
  }

  i2 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i2, (int32_T)sizeof(real_T),
                    &i_emlrtRTEI);
  i2 = (int32_T)uv0[0] * (int32_T)uv0[1];
  for (k = 0; k < i2; k++) {
    y->data[k] = 1.0 / a->data[k];
  }
}

/* End of code generation (power.c) */
