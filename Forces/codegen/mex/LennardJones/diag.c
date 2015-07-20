/*
 * diag.c
 *
 * Code generation for function 'diag'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "LennardJones.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "LennardJones_emxutil.h"
#include "LennardJones_data.h"

/* Variable Definitions */
static emlrtRSInfo j_emlrtRSI = { 90, "diag",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtRSInfo l_emlrtRSI = { 74, "diag",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtRTEInfo g_emlrtRTEI = { 1, 14, "diag",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtRTEInfo j_emlrtRTEI = { 86, 19, "diag",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/diag.m" };

/* Function Definitions */
void b_diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T j;
  int32_T unnamed_idx_1;
  int32_T i3;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  j = v->size[0];
  unnamed_idx_1 = v->size[0];
  i3 = d->size[0] * d->size[1];
  d->size[0] = j;
  emxEnsureCapacity(sp, (emxArray__common *)d, i3, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  i3 = d->size[0] * d->size[1];
  d->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)d, i3, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  j *= unnamed_idx_1;
  for (i3 = 0; i3 < j; i3++) {
    d->data[i3] = 0.0;
  }

  st.site = &l_emlrtRSI;
  if (1 > v->size[0]) {
    overflow = false;
  } else {
    overflow = (v->size[0] > 2147483646);
  }

  if (overflow) {
    b_st.site = &k_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (j = 0; j + 1 <= v->size[0]; j++) {
    d->data[j + d->size[0] * j] = v->data[j];
  }
}

void diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T m;
  int32_T n;
  int32_T stride;
  boolean_T b1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    m = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)d, m, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    d->data[0] = v->data[0];
  } else {
    if (!((v->size[0] == 1) || (v->size[1] == 1))) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &j_emlrtRTEI,
        "Coder:toolbox:diag_varsizedMatrixVector", 0);
    }

    m = v->size[0];
    n = v->size[1];
    if (0 < v->size[1]) {
      n = muIntScalarMin_sint32(m, n);
      stride = v->size[0] + 1;
    } else {
      n = 0;
      stride = 0;
    }

    m = d->size[0];
    d->size[0] = n;
    emxEnsureCapacity(sp, (emxArray__common *)d, m, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    st.site = &j_emlrtRSI;
    if (1 > n) {
      b1 = false;
    } else {
      b1 = (n > 2147483646);
    }

    if (b1) {
      b_st.site = &k_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (m = 0; m + 1 <= n; m++) {
      d->data[m] = v->data[m * stride];
    }
  }
}

/* End of code generation (diag.c) */
