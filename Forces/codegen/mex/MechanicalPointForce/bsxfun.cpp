/*
 * bsxfun.cpp
 *
 * Code generation for function 'bsxfun'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MechanicalPointForce.h"
#include "bsxfun.h"
#include "MechanicalPointForce_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "MechanicalPointForce_data.h"

/* Variable Definitions */
static emlrtRSInfo d_emlrtRSI = { 85, "bsxfun",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

static emlrtRSInfo e_emlrtRSI = { 87, "bsxfun",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

static emlrtRSInfo f_emlrtRSI = { 97, "bsxfun",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

static emlrtRTEInfo g_emlrtRTEI = { 1, 14, "bsxfun",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

static emlrtRTEInfo h_emlrtRTEI = { 75, 1, "bsxfun",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

static emlrtRTEInfo i_emlrtRTEI = { 95, 5, "bsxfun",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

static emlrtRTEInfo m_emlrtRTEI = { 21, 23, "bsxfun",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

static emlrtRTEInfo n_emlrtRTEI = { 19, 23, "bsxfun",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

/* Function Definitions */
void bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
            emxArray_real_T *b, emxArray_real_T *c)
{
  int32_T na1;
  boolean_T overflow;
  int32_T b_c;
  int32_T i0;
  int32_T a_idx_0;
  emxArray_real_T *av;
  int32_T k;
  int32_T asub;
  int32_T bsub;
  int32_T ak;
  int32_T bk;
  int32_T ck;
  emxArray_real_T *cv;
  boolean_T b1;
  real_T b_b;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  na1 = a->size[0];
  if ((a->size[1] != 1) && (b->size[1] != 1) && (a->size[1] != b->size[1])) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &n_emlrtRTEI,
      "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }

  overflow = !(a->size[1] != b->size[1]);
  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &m_emlrtRTEI,
      "Coder:toolbox:bsxfun_dynamicExpansion", 0);
  }

  if (a->size[1] <= b->size[1]) {
    b_c = a->size[1];
  } else {
    b_c = b->size[1];
  }

  i0 = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = b_c;
  emxEnsureCapacity(sp, (emxArray__common *)c, i0, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  a_idx_0 = a->size[0];
  if ((a_idx_0 == 0) || (b_c == 0)) {
  } else {
    b_emxInit_real_T(sp, &av, 1, &h_emlrtRTEI, true);
    k = a->size[0];
    i0 = av->size[0];
    av->size[0] = k;
    emxEnsureCapacity(sp, (emxArray__common *)av, i0, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    asub = 1;
    bsub = 1;
    ak = 0;
    bk = 0;
    a_idx_0 = a->size[0];
    ck = a->size[0];
    k = a->size[0];
    b_c = ck * b_c - k;
    st.site = &d_emlrtRSI;
    ck = a->size[0];
    if ((ck == 0) || (0 > b_c)) {
      overflow = false;
    } else {
      ck = a->size[0];
      overflow = (b_c > MAX_int32_T - ck);
    }

    if (overflow) {
      b_st.site = &g_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    ck = 0;
    b_emxInit_real_T(sp, &cv, 1, &i_emlrtRTEI, true);
    while ((a_idx_0 > 0) && (ck <= b_c)) {
      st.site = &e_emlrtRSI;
      if (1 > na1) {
        b1 = false;
      } else {
        b1 = (na1 > 2147483646);
      }

      if (b1) {
        b_st.site = &g_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 0; k + 1 <= na1; k++) {
        av->data[k] = a->data[ak + k];
      }

      b_b = b->data[bk];
      i0 = cv->size[0];
      cv->size[0] = av->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)cv, i0, (int32_T)sizeof(real_T),
                        &g_emlrtRTEI);
      k = av->size[0];
      for (i0 = 0; i0 < k; i0++) {
        cv->data[i0] = av->data[i0] - b_b;
      }

      st.site = &f_emlrtRSI;
      if (a_idx_0 > 2147483646) {
        b_st.site = &g_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 0; k + 1 <= a_idx_0; k++) {
        c->data[ck + k] = cv->data[k];
      }

      if (asub < a->size[1]) {
        ak += na1;
        bk++;
        bsub++;
        asub++;
      } else if (bsub < b->size[1]) {
        bk++;
        bsub++;
      } else {
        asub = 1;
        bsub = 1;
      }

      ck += a_idx_0;
    }

    emxFree_real_T(&cv);
    emxFree_real_T(&av);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (bsxfun.cpp) */
