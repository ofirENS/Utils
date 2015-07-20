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
#include "scalexpAlloc.h"

/* Variable Definitions */
static emlrtRSInfo g_emlrtRSI = { 42, "power",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo h_emlrtRSI = { 51, "power",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo i_emlrtRSI = { 11, "eml_scalexp_alloc",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"
};

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv0[2];
  int32_T i2;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &g_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &h_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  for (i2 = 0; i2 < 2; i2++) {
    uv0[i2] = (uint32_T)a->size[i2];
  }

  i2 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)y, i2, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  if (dimagree(y, a)) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &f_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  i2 = (int32_T)uv0[0] * (int32_T)uv0[1];
  for (k = 0; k < i2; k++) {
    y->data[k] = 1.0 / a->data[k];
  }
}

/* End of code generation (power.c) */
