/*
 * strcmpi.c
 *
 * Code generation for function 'strcmpi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MorseForce.h"
#include "strcmpi.h"
#include "eml_int_forloop_overflow_check.h"
#include "MorseForce_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 15, "strcmpi",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/strfun/strcmpi.m" };

static emlrtRSInfo o_emlrtRSI = { 22, "strcmpi",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/strfun/strcmpi.m" };

static emlrtRSInfo p_emlrtRSI = { 16, "lower",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/strfun/lower.m" };

static emlrtRSInfo q_emlrtRSI = { 10, "eml_string_transform",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/strfun/eml_string_transform.m"
};

static emlrtMCInfo emlrtMCI = { 16, 9, "eml_assert_supported_string",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/strfun/eml_assert_supported_string.m"
};

static emlrtMCInfo b_emlrtMCI = { 15, 19, "eml_assert_supported_string",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/strfun/eml_assert_supported_string.m"
};

static emlrtRSInfo gb_emlrtRSI = { 15, "eml_assert_supported_string",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/strfun/eml_assert_supported_string.m"
};

static emlrtRSInfo lb_emlrtRSI = { 16, "eml_assert_supported_string",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/strfun/eml_assert_supported_string.m"
};

/* Function Declarations */
static void eml_assert_supported_string(const emlrtStack *sp, const
  emxArray_char_T *s);

/* Function Definitions */
static void eml_assert_supported_string(const emlrtStack *sp, const
  emxArray_char_T *s)
{
  boolean_T p;
  int32_T i;
  const mxArray *y;
  static const int32_T iv7[2] = { 1, 31 };

  const mxArray *m2;
  char_T cv10[31];
  static const char_T cv11[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g' };

  const mxArray *b_y;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  p = true;
  for (i = 0; i < s->size[1]; i++) {
    p = (p && (s->data[i] <= 127.0));
  }

  if (p) {
  } else {
    y = NULL;
    m2 = emlrtCreateCharArray(2, iv7);
    for (i = 0; i < 31; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(sp, 31, m2, cv10);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m2 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
    *(int8_T *)mxGetData(m2) = MAX_int8_T;
    emlrtAssign(&b_y, m2);
    st.site = &gb_emlrtRSI;
    b_st.site = &lb_emlrtRSI;
    error(&st, message(&b_st, y, b_y, &emlrtMCI), &b_emlrtMCI);
  }
}

boolean_T b_strcmpi(const emlrtStack *sp, const emxArray_char_T *s1)
{
  boolean_T tf;
  int32_T n;
  int32_T k;
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv6[2] = { 1, 31 };

  const mxArray *m1;
  char_T cv6[31];
  int32_T i;
  static const char_T cv7[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const char_T cv8[10] = { 'a', 't', 't', 'r', 'a', 'c', 't', 'i', 'v',
    'e' };

  static const char_T cv9[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
    '\x05', '\x06', '\x07', '\x08', '\x09', '\x0a', '\x0b', '\x0c', '\x0d',
    '\x0e', '\x0f', '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16',
    '\x17', '\x18', '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ',
    '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>',
    '?', '@', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\',
    ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
    'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '{', '|', '}', '~', '\x7f' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  tf = false;
  st.site = &n_emlrtRSI;
  eml_assert_supported_string(&st, s1);
  n = (int32_T)muDoubleScalarMin(s1->size[1], 10.0);
  if (s1->size[1] == 10) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        st.site = &o_emlrtRSI;
        b_st.site = &p_emlrtRSI;
        c_st.site = &q_emlrtRSI;
        if (s1->data[k] <= 127.0) {
        } else {
          y = NULL;
          m1 = emlrtCreateCharArray(2, iv6);
          for (i = 0; i < 31; i++) {
            cv6[i] = cv7[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 31, m1, cv6);
          emlrtAssign(&y, m1);
          b_y = NULL;
          m1 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
          *(int8_T *)mxGetData(m1) = MAX_int8_T;
          emlrtAssign(&b_y, m1);
          d_st.site = &gb_emlrtRSI;
          e_st.site = &lb_emlrtRSI;
          error(&d_st, message(&e_st, y, b_y, &emlrtMCI), &b_emlrtMCI);
        }

        st.site = &o_emlrtRSI;
        b_st.site = &p_emlrtRSI;
        c_st.site = &q_emlrtRSI;
        if (cv9[s1->data[k] & 127] != cv9[(int32_T)cv8[k]]) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        tf = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return tf;
}

boolean_T c_strcmpi(const emlrtStack *sp, const emxArray_char_T *s1)
{
  boolean_T tf;
  int32_T n;
  int32_T k;
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 31 };

  const mxArray *m3;
  char_T cv12[31];
  int32_T i;
  static const char_T cv13[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const char_T cv14[9] = { 'r', 'e', 'p', 'u', 'l', 's', 'i', 'v', 'e' };

  static const char_T cv15[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
    '\x05', '\x06', '\x07', '\x08', '\x09', '\x0a', '\x0b', '\x0c', '\x0d',
    '\x0e', '\x0f', '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16',
    '\x17', '\x18', '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ',
    '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>',
    '?', '@', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\',
    ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
    'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '{', '|', '}', '~', '\x7f' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  tf = false;
  st.site = &n_emlrtRSI;
  eml_assert_supported_string(&st, s1);
  n = (int32_T)muDoubleScalarMin(s1->size[1], 9.0);
  if (s1->size[1] == 9) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        st.site = &o_emlrtRSI;
        b_st.site = &p_emlrtRSI;
        c_st.site = &q_emlrtRSI;
        if (s1->data[k] <= 127.0) {
        } else {
          y = NULL;
          m3 = emlrtCreateCharArray(2, iv8);
          for (i = 0; i < 31; i++) {
            cv12[i] = cv13[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 31, m3, cv12);
          emlrtAssign(&y, m3);
          b_y = NULL;
          m3 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
          *(int8_T *)mxGetData(m3) = MAX_int8_T;
          emlrtAssign(&b_y, m3);
          d_st.site = &gb_emlrtRSI;
          e_st.site = &lb_emlrtRSI;
          error(&d_st, message(&e_st, y, b_y, &emlrtMCI), &b_emlrtMCI);
        }

        st.site = &o_emlrtRSI;
        b_st.site = &p_emlrtRSI;
        c_st.site = &q_emlrtRSI;
        if (cv15[s1->data[k] & 127] != cv15[(int32_T)cv14[k]]) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        tf = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return tf;
}

boolean_T d_strcmpi(const emlrtStack *sp, const emxArray_char_T *s1)
{
  boolean_T tf;
  int32_T n;
  int32_T k;
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv9[2] = { 1, 31 };

  const mxArray *m4;
  char_T cv16[31];
  int32_T i;
  static const char_T cv17[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const char_T cv18[4] = { 'f', 'u', 'l', 'l' };

  static const char_T cv19[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
    '\x05', '\x06', '\x07', '\x08', '\x09', '\x0a', '\x0b', '\x0c', '\x0d',
    '\x0e', '\x0f', '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16',
    '\x17', '\x18', '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ',
    '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>',
    '?', '@', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\',
    ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
    'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '{', '|', '}', '~', '\x7f' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  tf = false;
  st.site = &n_emlrtRSI;
  eml_assert_supported_string(&st, s1);
  n = (int32_T)muDoubleScalarMin(s1->size[1], 4.0);
  if (s1->size[1] == 4) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        st.site = &o_emlrtRSI;
        b_st.site = &p_emlrtRSI;
        c_st.site = &q_emlrtRSI;
        if (s1->data[k] <= 127.0) {
        } else {
          y = NULL;
          m4 = emlrtCreateCharArray(2, iv9);
          for (i = 0; i < 31; i++) {
            cv16[i] = cv17[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 31, m4, cv16);
          emlrtAssign(&y, m4);
          b_y = NULL;
          m4 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
          *(int8_T *)mxGetData(m4) = MAX_int8_T;
          emlrtAssign(&b_y, m4);
          d_st.site = &gb_emlrtRSI;
          e_st.site = &lb_emlrtRSI;
          error(&d_st, message(&e_st, y, b_y, &emlrtMCI), &b_emlrtMCI);
        }

        st.site = &o_emlrtRSI;
        b_st.site = &p_emlrtRSI;
        c_st.site = &q_emlrtRSI;
        if (cv19[s1->data[k] & 127] != cv19[(int32_T)cv18[k]]) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        tf = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return tf;
}

/* End of code generation (strcmpi.c) */
