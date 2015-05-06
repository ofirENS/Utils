/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MorseForce.h"
#include "power.h"
#include "MorseForce_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "/usr/local/MATLAB/R2014a/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"
};

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv0[2];
  int32_T i3;
  int32_T k;
  for (i3 = 0; i3 < 2; i3++) {
    uv0[i3] = (uint32_T)a->size[i3];
  }

  i3 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i3, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  i3 = (int32_T)uv0[0] * (int32_T)uv0[1];
  for (k = 0; k < i3; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
