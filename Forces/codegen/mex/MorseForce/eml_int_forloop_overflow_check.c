/*
 * eml_int_forloop_overflow_check.c
 *
 * Code generation for function 'eml_int_forloop_overflow_check'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MorseForce.h"
#include "eml_int_forloop_overflow_check.h"
#include "MorseForce_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo g_emlrtMCI = { 75, 9, "eml_int_forloop_overflow_check",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo h_emlrtMCI = { 74, 15, "eml_int_forloop_overflow_check",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo fb_emlrtRSI = { 74, "eml_int_forloop_overflow_check",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo kb_emlrtRSI = { 75, "eml_int_forloop_overflow_check",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

/* Function Definitions */
void check_forloop_overflow_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv10[2] = { 1, 34 };

  const mxArray *m5;
  char_T cv20[34];
  int32_T i;
  static const char_T cv21[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv11[2] = { 1, 23 };

  char_T cv22[23];
  static const char_T cv23[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  y = NULL;
  m5 = emlrtCreateCharArray(2, iv10);
  for (i = 0; i < 34; i++) {
    cv20[i] = cv21[i];
  }

  emlrtInitCharArrayR2013a(sp, 34, m5, cv20);
  emlrtAssign(&y, m5);
  b_y = NULL;
  m5 = emlrtCreateCharArray(2, iv11);
  for (i = 0; i < 23; i++) {
    cv22[i] = cv23[i];
  }

  emlrtInitCharArrayR2013a(sp, 23, m5, cv22);
  emlrtAssign(&b_y, m5);
  st.site = &fb_emlrtRSI;
  b_st.site = &kb_emlrtRSI;
  error(&st, message(&b_st, y, b_y, &g_emlrtMCI), &h_emlrtMCI);
}

/* End of code generation (eml_int_forloop_overflow_check.c) */
