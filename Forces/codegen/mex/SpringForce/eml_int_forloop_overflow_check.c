/*
 * eml_int_forloop_overflow_check.c
 *
 * Code generation for function 'eml_int_forloop_overflow_check'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SpringForce.h"
#include "eml_int_forloop_overflow_check.h"
#include "SpringForce_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 75, 9, "eml_int_forloop_overflow_check",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo b_emlrtMCI = { 74, 15, "eml_int_forloop_overflow_check",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo p_emlrtRSI = { 74, "eml_int_forloop_overflow_check",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo t_emlrtRSI = { 75, "eml_int_forloop_overflow_check",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

/* Function Declarations */
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m3;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m3, 2, pArrays, "message", true, location);
}

void check_forloop_overflow_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv6[2] = { 1, 34 };

  const mxArray *m1;
  char_T cv6[34];
  int32_T i;
  static const char_T cv7[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv7[2] = { 1, 23 };

  char_T cv8[23];
  static const char_T cv9[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  y = NULL;
  m1 = emlrtCreateCharArray(2, iv6);
  for (i = 0; i < 34; i++) {
    cv6[i] = cv7[i];
  }

  emlrtInitCharArrayR2013a(sp, 34, m1, cv6);
  emlrtAssign(&y, m1);
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv7);
  for (i = 0; i < 23; i++) {
    cv8[i] = cv9[i];
  }

  emlrtInitCharArrayR2013a(sp, 23, m1, cv8);
  emlrtAssign(&b_y, m1);
  st.site = &p_emlrtRSI;
  b_st.site = &t_emlrtRSI;
  error(&st, message(&b_st, y, b_y, &emlrtMCI), &b_emlrtMCI);
}

/* End of code generation (eml_int_forloop_overflow_check.c) */
