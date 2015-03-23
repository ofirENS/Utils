/*
 * PlotResults.c
 *
 * Code generation for function 'PlotResults'
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
#include "BoundaryElementHeatEquation_emxutil.h"

/* Variable Definitions */
static emlrtMCInfo v_emlrtMCI = { 5, 7, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtMCInfo w_emlrtMCI = { 6, 6, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtMCInfo x_emlrtMCI = { 7, 1, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtMCInfo y_emlrtMCI = { 8, 1, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtMCInfo ab_emlrtMCI = { 10, 1, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtRTEInfo jb_emlrtRTEI = { 1, 10, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtBCInfo ye_emlrtBCI = { -1, -1, 10, 28, "u", "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m",
  0 };

static emlrtRSInfo pg_emlrtRSI = { 10, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtRSInfo qg_emlrtRSI = { 8, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtRSInfo rg_emlrtRSI = { 7, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtRSInfo sg_emlrtRSI = { 6, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

static emlrtRSInfo tg_emlrtRSI = { 5, "PlotResults",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\PlotResults.m"
};

/* Function Declarations */
static const mxArray *axes(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void b_line(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                   const mxArray *d, const mxArray *e, emlrtMCInfo *location);
static const mxArray *figure(const emlrtStack *sp, emlrtMCInfo *location);
static void line(const emlrtStack *sp, const mxArray *b, const mxArray *c, const
                 mxArray *d, const mxArray *e, const mxArray *f, const mxArray
                 *g, const mxArray *h, const mxArray *i, const mxArray *j, const
                 mxArray *k, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *axes(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m27;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m27, 4, pArrays, "axes", true, location);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m17;
  real_T *pData;
  int32_T i92;
  int32_T i;
  y = NULL;
  m17 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m17);
  i92 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i92] = u->data[u->size[0] * i];
    i92++;
  }

  emlrtAssign(&y, m17);
  return y;
}

static void b_line(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                   const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  emlrtCallMATLABR2012b(sp, 0, NULL, 4, pArrays, "line", true, location);
}

static const mxArray *figure(const emlrtStack *sp, emlrtMCInfo *location)
{
  const mxArray *m26;
  return emlrtCallMATLABR2012b(sp, 1, &m26, 0, NULL, "figure", true, location);
}

static void line(const emlrtStack *sp, const mxArray *b, const mxArray *c, const
                 mxArray *d, const mxArray *e, const mxArray *f, const mxArray
                 *g, const mxArray *h, const mxArray *i, const mxArray *j, const
                 mxArray *k, emlrtMCInfo *location)
{
  const mxArray *pArrays[10];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  pArrays[5] = g;
  pArrays[6] = h;
  pArrays[7] = i;
  pArrays[8] = j;
  pArrays[9] = k;
  emlrtCallMATLABR2012b(sp, 0, NULL, 10, pArrays, "line", true, location);
}

void PlotResults(const emlrtStack *sp, const emxArray_real_T *t, const
                 emxArray_real_T *sigIn, const emxArray_real_T *u, const
                 emxArray_real_T *r)
{
  emxArray_real_T *b_u;
  emxArray_real_T *c_u;
  const mxArray *fig = NULL;
  const mxArray *y;
  static const int32_T iv28[2] = { 1, 6 };

  const mxArray *m12;
  char_T cv39[6];
  int32_T i;
  static const char_T cv40[6] = { 'P', 'a', 'r', 'e', 'n', 't' };

  const mxArray *b_y;
  static const int32_T iv29[2] = { 1, 8 };

  char_T cv41[8];
  static const char_T cv42[8] = { 'n', 'e', 'x', 't', 'P', 'l', 'o', 't' };

  const mxArray *c_y;
  static const int32_T iv30[2] = { 1, 3 };

  char_T cv43[3];
  static const char_T cv44[3] = { 'A', 'd', 'd' };

  const mxArray *ax = NULL;
  const mxArray *d_y;
  static const int32_T iv31[2] = { 1, 5 };

  char_T cv45[5];
  static const char_T cv46[5] = { 'X', 'D', 'a', 't', 'a' };

  const mxArray *e_y;
  static const int32_T iv32[2] = { 1, 5 };

  static const char_T cv47[5] = { 'Y', 'D', 'a', 't', 'a' };

  int32_T i78;
  const mxArray *f_y;
  real_T *pData;
  const mxArray *g_y;
  static const int32_T iv33[2] = { 1, 11 };

  char_T cv48[11];
  static const char_T cv49[11] = { 'D', 'i', 's', 'p', 'l', 'a', 'y', 'N', 'a',
    'm', 'e' };

  const mxArray *h_y;
  static const int32_T iv34[2] = { 1, 6 };

  static const char_T cv50[6] = { 'S', 'o', 'u', 'r', 'c', 'e' };

  const mxArray *i_y;
  static const int32_T iv35[2] = { 1, 5 };

  static const char_T cv51[5] = { 'C', 'o', 'l', 'o', 'r' };

  const mxArray *j_y;
  const mxArray *k_y;
  static const int32_T iv36[2] = { 1, 6 };

  const mxArray *l_y;
  static const int32_T iv37[2] = { 1, 5 };

  const mxArray *m_y;
  static const int32_T iv38[2] = { 1, 5 };

  const mxArray *n_y;
  static const int32_T iv39[2] = { 1, 11 };

  const mxArray *o_y;
  static const int32_T iv40[2] = { 1, 11 };

  static const char_T cv52[11] = { 'h', 'e', 'a', 't', ' ', 'e', 'n', 'e', 'r',
    'g', 'y' };

  const mxArray *p_y;
  static const int32_T iv41[2] = { 1, 5 };

  const mxArray *q_y;
  const mxArray *r_y;
  static const int32_T iv42[2] = { 1, 6 };

  static const char_T cv53[6] = { 'p', 'a', 'r', 'e', 'n', 't' };

  const mxArray *s_y;
  static const int32_T iv43[2] = { 1, 5 };

  const mxArray *t_y;
  static const int32_T iv44[2] = { 1, 5 };

  const mxArray *u_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  c_emxInit_real_T(sp, &b_u, 1, &jb_emlrtRTEI, true);
  c_emxInit_real_T(sp, &c_u, 1, &jb_emlrtRTEI, true);

  /*  plot the input signal as a function of time, the solution u(x,t) and the */
  /*  source solution r(t) */
  st.site = &tg_emlrtRSI;
  emlrtAssign(&fig, figure(&st, &v_emlrtMCI));
  y = NULL;
  m12 = emlrtCreateCharArray(2, iv28);
  for (i = 0; i < 6; i++) {
    cv39[i] = cv40[i];
  }

  emlrtInitCharArrayR2013a(sp, 6, m12, cv39);
  emlrtAssign(&y, m12);
  b_y = NULL;
  m12 = emlrtCreateCharArray(2, iv29);
  for (i = 0; i < 8; i++) {
    cv41[i] = cv42[i];
  }

  emlrtInitCharArrayR2013a(sp, 8, m12, cv41);
  emlrtAssign(&b_y, m12);
  c_y = NULL;
  m12 = emlrtCreateCharArray(2, iv30);
  for (i = 0; i < 3; i++) {
    cv43[i] = cv44[i];
  }

  emlrtInitCharArrayR2013a(sp, 3, m12, cv43);
  emlrtAssign(&c_y, m12);
  st.site = &sg_emlrtRSI;
  emlrtAssign(&ax, axes(&st, y, emlrtAlias(fig), b_y, c_y, &w_emlrtMCI));
  d_y = NULL;
  m12 = emlrtCreateCharArray(2, iv31);
  for (i = 0; i < 5; i++) {
    cv45[i] = cv46[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m12, cv45);
  emlrtAssign(&d_y, m12);
  e_y = NULL;
  m12 = emlrtCreateCharArray(2, iv32);
  for (i = 0; i < 5; i++) {
    cv45[i] = cv47[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m12, cv45);
  emlrtAssign(&e_y, m12);
  i78 = b_u->size[0];
  b_u->size[0] = r->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_u, i78, (int32_T)sizeof(real_T),
                    &jb_emlrtRTEI);
  i = r->size[0];
  for (i78 = 0; i78 < i; i78++) {
    b_u->data[i78] = r->data[i78];
  }

  f_y = NULL;
  m12 = emlrtCreateNumericArray(1, *(int32_T (*)[2])b_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m12);
  i78 = 0;
  for (i = 0; i < b_u->size[0]; i++) {
    pData[i78] = b_u->data[i];
    i78++;
  }

  emlrtAssign(&f_y, m12);
  g_y = NULL;
  m12 = emlrtCreateCharArray(2, iv33);
  for (i = 0; i < 11; i++) {
    cv48[i] = cv49[i];
  }

  emlrtInitCharArrayR2013a(sp, 11, m12, cv48);
  emlrtAssign(&g_y, m12);
  h_y = NULL;
  m12 = emlrtCreateCharArray(2, iv34);
  for (i = 0; i < 6; i++) {
    cv39[i] = cv50[i];
  }

  emlrtInitCharArrayR2013a(sp, 6, m12, cv39);
  emlrtAssign(&h_y, m12);
  i_y = NULL;
  m12 = emlrtCreateCharArray(2, iv35);
  for (i = 0; i < 5; i++) {
    cv45[i] = cv51[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m12, cv45);
  emlrtAssign(&i_y, m12);
  j_y = NULL;
  m12 = emlrtCreateString1('r');
  emlrtAssign(&j_y, m12);
  k_y = NULL;
  m12 = emlrtCreateCharArray(2, iv36);
  for (i = 0; i < 6; i++) {
    cv39[i] = cv40[i];
  }

  emlrtInitCharArrayR2013a(sp, 6, m12, cv39);
  emlrtAssign(&k_y, m12);
  st.site = &rg_emlrtRSI;
  line(&st, d_y, b_emlrt_marshallOut(t), e_y, f_y, g_y, h_y, i_y, j_y, k_y,
       emlrtAlias(ax), &x_emlrtMCI);
  l_y = NULL;
  m12 = emlrtCreateCharArray(2, iv37);
  for (i = 0; i < 5; i++) {
    cv45[i] = cv46[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m12, cv45);
  emlrtAssign(&l_y, m12);
  m_y = NULL;
  m12 = emlrtCreateCharArray(2, iv38);
  for (i = 0; i < 5; i++) {
    cv45[i] = cv47[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m12, cv45);
  emlrtAssign(&m_y, m12);
  n_y = NULL;
  m12 = emlrtCreateCharArray(2, iv39);
  for (i = 0; i < 11; i++) {
    cv48[i] = cv49[i];
  }

  emlrtInitCharArrayR2013a(sp, 11, m12, cv48);
  emlrtAssign(&n_y, m12);
  o_y = NULL;
  m12 = emlrtCreateCharArray(2, iv40);
  for (i = 0; i < 11; i++) {
    cv48[i] = cv52[i];
  }

  emlrtInitCharArrayR2013a(sp, 11, m12, cv48);
  emlrtAssign(&o_y, m12);
  p_y = NULL;
  m12 = emlrtCreateCharArray(2, iv41);
  for (i = 0; i < 5; i++) {
    cv45[i] = cv51[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m12, cv45);
  emlrtAssign(&p_y, m12);
  q_y = NULL;
  m12 = emlrtCreateString1('b');
  emlrtAssign(&q_y, m12);
  r_y = NULL;
  m12 = emlrtCreateCharArray(2, iv42);
  for (i = 0; i < 6; i++) {
    cv39[i] = cv53[i];
  }

  emlrtInitCharArrayR2013a(sp, 6, m12, cv39);
  emlrtAssign(&r_y, m12);
  st.site = &qg_emlrtRSI;
  line(&st, l_y, b_emlrt_marshallOut(t), m_y, b_emlrt_marshallOut(sigIn), n_y,
       o_y, p_y, q_y, r_y, emlrtAlias(ax), &y_emlrtMCI);

  /*  legend(get(ax,'Children')); */
  i78 = u->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i78, &ye_emlrtBCI, sp);
  s_y = NULL;
  m12 = emlrtCreateCharArray(2, iv43);
  for (i = 0; i < 5; i++) {
    cv45[i] = cv46[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m12, cv45);
  emlrtAssign(&s_y, m12);
  t_y = NULL;
  m12 = emlrtCreateCharArray(2, iv44);
  for (i = 0; i < 5; i++) {
    cv45[i] = cv47[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m12, cv45);
  emlrtAssign(&t_y, m12);
  i = u->size[0];
  i78 = c_u->size[0];
  c_u->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)c_u, i78, (int32_T)sizeof(real_T),
                    &jb_emlrtRTEI);
  for (i78 = 0; i78 < i; i78++) {
    c_u->data[i78] = u->data[i78];
  }

  u_y = NULL;
  m12 = emlrtCreateNumericArray(1, *(int32_T (*)[2])c_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m12);
  i78 = 0;
  for (i = 0; i < c_u->size[0]; i++) {
    pData[i78] = c_u->data[i];
    i78++;
  }

  emlrtAssign(&u_y, m12);
  st.site = &pg_emlrtRSI;
  b_line(&st, s_y, b_emlrt_marshallOut(t), t_y, u_y, &ab_emlrtMCI);

  /* ceil(size(u,2)/2)),'DisplayName','u(t)','Color','g','parent',ax); */
  /*  legend(get(ax,'Children')); */
  emlrtDestroyArray(&fig);
  emlrtDestroyArray(&ax);
  emxFree_real_T(&c_u);
  emxFree_real_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (PlotResults.c) */
