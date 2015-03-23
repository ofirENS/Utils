/*
 * eml_warning.c
 *
 * Code generation for function 'eml_warning'
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
#include "eml_warning.h"
#include "BoundaryElementHeatEquation_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo f_emlrtMCI = { 16, 13, "eml_warning",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

static emlrtMCInfo g_emlrtMCI = { 16, 5, "eml_warning",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

static emlrtRSInfo ug_emlrtRSI = { 16, "eml_warning",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

/* Function Declarations */
static void warning(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

/* Function Definitions */
static void warning(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "warning", true, location);
}

void b_eml_warning(const emlrtStack *sp, real_T varargin_2, const char_T
                   varargin_3[14])
{
  const mxArray *y;
  static const int32_T iv13[2] = { 1, 32 };

  const mxArray *m5;
  char_T cv16[32];
  int32_T i;
  static const char_T cv17[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e',
    'n', 't', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *b_y;
  static const int32_T iv14[2] = { 1, 14 };

  char_T b_varargin_3[14];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m5 = emlrtCreateCharArray(2, iv13);
  for (i = 0; i < 32; i++) {
    cv16[i] = cv17[i];
  }

  emlrtInitCharArrayR2013a(sp, 32, m5, cv16);
  emlrtAssign(&y, m5);
  b_y = NULL;
  m5 = emlrtCreateCharArray(2, iv14);
  for (i = 0; i < 14; i++) {
    b_varargin_3[i] = varargin_3[i];
  }

  emlrtInitCharArrayR2013a(sp, 14, m5, b_varargin_3);
  emlrtAssign(&b_y, m5);
  st.site = &ug_emlrtRSI;
  warning(&st, c_message(&st, y, emlrt_marshallOut(varargin_2), b_y, &f_emlrtMCI),
          &g_emlrtMCI);
}

void eml_warning(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv11[2] = { 1, 27 };

  const mxArray *m3;
  char_T cv11[27];
  int32_T i;
  static const char_T cv12[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't',
    'r', 'i', 'x' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m3 = emlrtCreateCharArray(2, iv11);
  for (i = 0; i < 27; i++) {
    cv11[i] = cv12[i];
  }

  emlrtInitCharArrayR2013a(sp, 27, m3, cv11);
  emlrtAssign(&y, m3);
  st.site = &ug_emlrtRSI;
  warning(&st, message(&st, y, &f_emlrtMCI), &g_emlrtMCI);
}

/* End of code generation (eml_warning.c) */
