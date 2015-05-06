/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MorseForce.h"
#include "sum.h"
#include "MorseForce_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "MorseForce_data.h"

/* Variable Definitions */
static emlrtRSInfo cb_emlrtRSI = { 72, "sum",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo db_emlrtRSI = { 76, "sum",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRTEInfo i_emlrtRTEI = { 55, 1, "sum",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRTEInfo j_emlrtRTEI = { 1, 14, "sum",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/datafun/sum.m" };

/* Function Definitions */
void sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T sz[2];
  int32_T iy;
  int32_T ixstart;
  boolean_T overflow;
  int32_T j;
  int32_T ix;
  real_T s;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (iy = 0; iy < 2; iy++) {
    sz[iy] = (uint32_T)x->size[iy];
  }

  iy = y->size[0];
  y->size[0] = (int32_T)sz[0];
  emxEnsureCapacity(sp, (emxArray__common *)y, iy, (int32_T)sizeof(real_T),
                    &i_emlrtRTEI);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    iy = y->size[0];
    y->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(sp, (emxArray__common *)y, iy, (int32_T)sizeof(real_T),
                      &j_emlrtRTEI);
    ixstart = (int32_T)sz[0];
    for (iy = 0; iy < ixstart; iy++) {
      y->data[iy] = 0.0;
    }
  } else {
    iy = -1;
    ixstart = -1;
    st.site = &cb_emlrtRSI;
    overflow = (x->size[0] > 2147483646);
    if (overflow) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (j = 1; j <= x->size[0]; j++) {
      ixstart++;
      ix = ixstart;
      s = x->data[ixstart];
      st.site = &db_emlrtRSI;
      if (2 > x->size[1]) {
        overflow = false;
      } else {
        overflow = (x->size[1] > 2147483646);
      }

      if (overflow) {
        b_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 2; k <= x->size[1]; k++) {
        ix += x->size[0];
        s += x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

/* End of code generation (sum.c) */
