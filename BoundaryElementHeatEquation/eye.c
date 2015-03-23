/*
 * eye.c
 *
 * Code generation for function 'eye'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Acoeff.h"
#include "Bcoeff.h"
#include "CalculateA1B1B1Star.h"
#include "CalculateABBStarD.h"
#include "CalculateC.h"
#include "CalculateHeatSolution.h"
#include "CalculateXY.h"
#include "Ccoeff.h"
#include "Cone.h"
#include "Dcoeff.h"
#include "Done.h"
#include "GetRegularizationTerm.h"
#include "PlotResults.h"
#include "TestBemHeatEq_optimized.h"
#include "eye.h"
#include "eml_warning.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "BoundaryElementHeatEquation_mexutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo jf_emlrtRSI = { 34, "eye",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" };

static emlrtRSInfo kf_emlrtRSI = { 80, "eye",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" };

static emlrtMCInfo q_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo r_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo s_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo t_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRTEInfo hb_emlrtRTEI = { 1, 14, "eye",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" };

static emlrtDCInfo dc_emlrtDCI = { 78, 11, "eye",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m",
  4 };

static emlrtDCInfo ec_emlrtDCI = { 78, 13, "eye",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m",
  4 };

static emlrtRSInfo bh_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo kh_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo lh_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo ph_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

/* Function Definitions */
void eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *I)
{
  boolean_T p;
  boolean_T guard1 = false;
  const mxArray *y;
  static const int32_T iv26[2] = { 1, 28 };

  const mxArray *m11;
  char_T cv35[28];
  int32_T i;
  static const char_T cv36[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T b_varargin_1;
  const mxArray *d_y;
  static const int32_T iv27[2] = { 1, 21 };

  char_T cv37[21];
  static const char_T cv38[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T loop_ub;
  boolean_T b9;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  if ((varargin_1 != muDoubleScalarFloor(varargin_1)) || muDoubleScalarIsInf
      (varargin_1)) {
    p = false;
  } else {
    p = true;
  }

  guard1 = false;
  if (p) {
    if ((-2.147483648E+9 > varargin_1) || (2.147483647E+9 < varargin_1)) {
      p = false;
    } else {
      p = true;
    }

    if (p) {
      p = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    p = false;
  }

  if (p) {
  } else {
    y = NULL;
    m11 = emlrtCreateCharArray(2, iv26);
    for (i = 0; i < 28; i++) {
      cv35[i] = cv36[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m11, cv35);
    emlrtAssign(&y, m11);
    b_y = NULL;
    m11 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m11) = MIN_int32_T;
    emlrtAssign(&b_y, m11);
    c_y = NULL;
    m11 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m11) = MAX_int32_T;
    emlrtAssign(&c_y, m11);
    b_st.site = &lh_emlrtRSI;
    c_st.site = &ph_emlrtRSI;
    b_error(&b_st, c_message(&c_st, y, b_y, c_y, &q_emlrtMCI), &r_emlrtMCI);
  }

  if (varargin_1 <= 0.0) {
    b_varargin_1 = 0.0;
  } else {
    b_varargin_1 = varargin_1;
  }

  if (2.147483647E+9 >= b_varargin_1) {
  } else {
    d_y = NULL;
    m11 = emlrtCreateCharArray(2, iv27);
    for (i = 0; i < 21; i++) {
      cv37[i] = cv38[i];
    }

    emlrtInitCharArrayR2013a(&st, 21, m11, cv37);
    emlrtAssign(&d_y, m11);
    b_st.site = &kh_emlrtRSI;
    c_st.site = &bh_emlrtRSI;
    b_error(&b_st, message(&c_st, d_y, &s_emlrtMCI), &t_emlrtMCI);
  }

  i = I->size[0] * I->size[1];
  I->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(varargin_1, &dc_emlrtDCI,
    sp);
  I->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(varargin_1, &ec_emlrtDCI,
    sp);
  emxEnsureCapacity(sp, (emxArray__common *)I, i, (int32_T)sizeof(real_T),
                    &hb_emlrtRTEI);
  loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(varargin_1, &dc_emlrtDCI,
    sp) * (int32_T)emlrtNonNegativeCheckFastR2012b(varargin_1, &ec_emlrtDCI, sp);
  for (i = 0; i < loop_ub; i++) {
    I->data[i] = 0.0;
  }

  if ((int32_T)varargin_1 > 0) {
    st.site = &kf_emlrtRSI;
    if (1 > (int32_T)varargin_1) {
      b9 = false;
    } else {
      b9 = ((int32_T)varargin_1 > 2147483646);
    }

    if (b9) {
      b_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 0; i + 1 <= (int32_T)varargin_1; i++) {
      I->data[i + I->size[0] * i] = 1.0;
    }
  }
}

/* End of code generation (eye.c) */
