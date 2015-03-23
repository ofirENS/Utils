/*
 * mpower.c
 *
 * Code generation for function 'mpower'
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
#include "mpower.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "BoundaryElementHeatEquation_mexutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo af_emlrtRSI = { 41, "mpower",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

static emlrtRSInfo bf_emlrtRSI = { 54, "mpower",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

static emlrtMCInfo o_emlrtMCI = { 34, 5, "mpower",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

static emlrtMCInfo p_emlrtMCI = { 33, 15, "mpower",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

static emlrtRTEInfo fb_emlrtRTEI = { 1, 14, "mpower",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

static emlrtRSInfo ch_emlrtRSI = { 34, "mpower",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

static emlrtRSInfo mh_emlrtRSI = { 33, "mpower",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

/* Function Definitions */
void mpower(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *c)
{
  boolean_T b5;
  const mxArray *y;
  static const int32_T iv21[2] = { 1, 19 };

  const mxArray *m8;
  char_T cv24[19];
  int32_T i;
  static const char_T cv25[19] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'q', 'u', 'a', 'r', 'e' };

  const mxArray *b_y;
  static const int32_T iv22[2] = { 1, 45 };

  char_T cv26[45];
  static const char_T cv27[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *c_y;
  static const int32_T iv23[2] = { 1, 21 };

  char_T cv28[21];
  static const char_T cv29[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  real_T b_a;
  int32_T loop_ub;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &d_st;
  f_st.tls = d_st.tls;
  b5 = (1 == a->size[1]);
  if (b5) {
  } else {
    y = NULL;
    m8 = emlrtCreateCharArray(2, iv21);
    for (i = 0; i < 19; i++) {
      cv24[i] = cv25[i];
    }

    emlrtInitCharArrayR2013a(sp, 19, m8, cv24);
    emlrtAssign(&y, m8);
    st.site = &mh_emlrtRSI;
    b_st.site = &ch_emlrtRSI;
    b_error(&st, message(&b_st, y, &o_emlrtMCI), &p_emlrtMCI);
  }

  st.site = &af_emlrtRSI;
  c_st.site = &bf_emlrtRSI;
  d_st.site = &he_emlrtRSI;
  if (!(a->size[1] == 1)) {
    if (a->size[1] == 1) {
      b_y = NULL;
      m8 = emlrtCreateCharArray(2, iv22);
      for (i = 0; i < 45; i++) {
        cv26[i] = cv27[i];
      }

      emlrtInitCharArrayR2013a(&d_st, 45, m8, cv26);
      emlrtAssign(&b_y, m8);
      e_st.site = &fh_emlrtRSI;
      f_st.site = &vg_emlrtRSI;
      b_error(&e_st, message(&f_st, b_y, &j_emlrtMCI), &k_emlrtMCI);
    } else {
      c_y = NULL;
      m8 = emlrtCreateCharArray(2, iv23);
      for (i = 0; i < 21; i++) {
        cv28[i] = cv29[i];
      }

      emlrtInitCharArrayR2013a(&d_st, 21, m8, cv28);
      emlrtAssign(&c_y, m8);
      e_st.site = &gh_emlrtRSI;
      f_st.site = &wg_emlrtRSI;
      b_error(&e_st, message(&f_st, c_y, &l_emlrtMCI), &m_emlrtMCI);
    }
  }

  i = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = a->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)c, i, (int32_T)sizeof(real_T),
                    &fb_emlrtRTEI);
  b_a = a->data[0];
  loop_ub = a->size[0] * a->size[1];
  for (i = 0; i < loop_ub; i++) {
    c->data[i] = b_a * a->data[i];
  }
}

/* End of code generation (mpower.c) */
