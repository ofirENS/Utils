/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MorseForce.h"
#include "rdivide.h"
#include "MorseForce_emxutil.h"
#include "MorseForce_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo ab_emlrtRSI = { 15, "rdivide",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRSInfo bb_emlrtRSI = { 9, "eml_div",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/eml/eml_div.m" };

static emlrtMCInfo j_emlrtMCI = { 14, 5, "rdivide",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtMCInfo k_emlrtMCI = { 13, 15, "rdivide",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRTEInfo h_emlrtRTEI = { 1, 14, "rdivide",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtECInfo i_emlrtECI = { 2, 1, 1, "div",
  "/usr/local/MATLAB/R2014a/toolbox/coder/coder/+coder/+internal/div.p" };

static emlrtRSInfo eb_emlrtRSI = { 13, "rdivide",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRSInfo mb_emlrtRSI = { 14, "rdivide",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/rdivide.m" };

/* Function Definitions */
void rdivide(const emlrtStack *sp, const emxArray_real_T *x, const
             emxArray_real_T *y, emxArray_real_T *z)
{
  uint32_T varargin_1[2];
  int32_T i;
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  boolean_T exitg1;
  const mxArray *b_y;
  static const int32_T iv12[2] = { 1, 15 };

  const mxArray *m6;
  char_T cv25[15];
  static const char_T cv26[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  int32_T b_x[2];
  int32_T c_y[2];
  int32_T loop_ub;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  for (i = 0; i < 2; i++) {
    varargin_1[i] = (uint32_T)x->size[i];
  }

  for (i = 0; i < 2; i++) {
    varargin_2[i] = (uint32_T)y->size[i];
  }

  p = false;
  b_p = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 2)) {
    if (!(varargin_1[i] == varargin_2[i])) {
      b_p = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  if (!b_p) {
  } else {
    p = true;
  }

  if (p) {
  } else {
    b_y = NULL;
    m6 = emlrtCreateCharArray(2, iv12);
    for (i = 0; i < 15; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m6, cv25);
    emlrtAssign(&b_y, m6);
    st.site = &eb_emlrtRSI;
    b_st.site = &mb_emlrtRSI;
    error(&st, b_message(&b_st, b_y, &j_emlrtMCI), &k_emlrtMCI);
  }

  st.site = &ab_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  for (i = 0; i < 2; i++) {
    b_x[i] = x->size[i];
  }

  for (i = 0; i < 2; i++) {
    c_y[i] = y->size[i];
  }

  emlrtSizeEqCheck2DFastR2012b(b_x, c_y, &i_emlrtECI, &c_st);
  i = z->size[0] * z->size[1];
  z->size[0] = x->size[0];
  z->size[1] = x->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)z, i, (int32_T)sizeof(real_T),
                    &h_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i = 0; i < loop_ub; i++) {
    z->data[i] = x->data[i] / y->data[i];
  }
}

/* End of code generation (rdivide.c) */
