/*
 * CalculateABBStarD.c
 *
 * Code generation for function 'CalculateABBStarD'
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
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 16, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m"
};

static emlrtRSInfo o_emlrtRSI = { 17, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m"
};

static emlrtRSInfo p_emlrtRSI = { 19, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m"
};

static emlrtRSInfo q_emlrtRSI = { 20, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m"
};

static emlrtRSInfo r_emlrtRSI = { 22, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m"
};

static emlrtRSInfo s_emlrtRSI = { 23, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m"
};

static emlrtRSInfo t_emlrtRSI = { 28, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m"
};

static emlrtRSInfo u_emlrtRSI = { 29, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 1, 26, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m"
};

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 28, 23, "D", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 29, 54, "f", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 29, 41, "t", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 28, 54, "f", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 28, 41, "t", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtRTEInfo cc_emlrtRTEI = { 13, 5, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m"
};

static emlrtRTEInfo dc_emlrtRTEI = { 12, 1, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m"
};

static emlrtDCInfo i_emlrtDCI = { 8, 16, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  1 };

static emlrtDCInfo j_emlrtDCI = { 8, 16, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  4 };

static emlrtDCInfo k_emlrtDCI = { 8, 20, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  1 };

static emlrtDCInfo l_emlrtDCI = { 8, 20, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  4 };

static emlrtDCInfo m_emlrtDCI = { 9, 16, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  1 };

static emlrtDCInfo n_emlrtDCI = { 9, 16, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  4 };

static emlrtDCInfo o_emlrtDCI = { 9, 20, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  1 };

static emlrtDCInfo p_emlrtDCI = { 9, 20, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  4 };

static emlrtDCInfo q_emlrtDCI = { 10, 16, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  1 };

static emlrtDCInfo r_emlrtDCI = { 10, 16, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  4 };

static emlrtDCInfo s_emlrtDCI = { 10, 20, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  1 };

static emlrtDCInfo t_emlrtDCI = { 10, 20, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  4 };

static emlrtDCInfo u_emlrtDCI = { 11, 16, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  1 };

static emlrtDCInfo v_emlrtDCI = { 11, 16, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  4 };

static emlrtDCInfo w_emlrtDCI = { 11, 20, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  1 };

static emlrtDCInfo x_emlrtDCI = { 11, 20, "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  4 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 16, 52, "t", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 16, 78, "t", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 17, 52, "t", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 17, 78, "t", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 16, 11, "A", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 16, 23, "A", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 19, 30, "t", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 20, 30, "t", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 22, 52, "t", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 23, 52, "t", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 22, 11, "B", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 22, 23, "B", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 25, 15, "Bstar", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 25, 27, "Bstar", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 28, 11, "D", "CalculateABBStarD",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateABBStarD.m",
  0 };

/* Function Definitions */
void CalculateABBStarD(const emlrtStack *sp, real_T N, const emxArray_real_T *t,
  const emxArray_real_T *gridT, const emxArray_real_T *x, const emxArray_real_T *
  f, emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *Bstar,
  emxArray_real_T *D)
{
  int32_T i4;
  real_T d1;
  real_T d2;
  int32_T loop_ub;
  int32_T i;
  emxArray_real_T *a;
  int32_T j;
  int32_T deltaij;
  int32_T b_A;
  real_T d3;
  real_T d4;
  real_T b1j0i;
  real_T b1j1i;
  int32_T i5;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Calculate A and B, B*, and D */
  /*  N is the number of time points */
  /*  grid T is the time points grid on which the solution is calculated  */
  /*  f is the multiplicative function for the source f(x,t)*r(t), size [N, */
  /*  N0], with N0 the number of space points */
  i4 = A->size[0] * A->size[1];
  d1 = 2.0 * N;
  d1 = emlrtNonNegativeCheckFastR2012b(d1, &j_emlrtDCI, sp);
  A->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(d1, &i_emlrtDCI, sp);
  d1 = 2.0 * N;
  d1 = emlrtNonNegativeCheckFastR2012b(d1, &l_emlrtDCI, sp);
  A->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(d1, &k_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)A, i4, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  d1 = 2.0 * N;
  d1 = emlrtNonNegativeCheckFastR2012b(d1, &j_emlrtDCI, sp);
  d2 = 2.0 * N;
  d2 = emlrtNonNegativeCheckFastR2012b(d2, &l_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(d1, &i_emlrtDCI, sp) * (int32_T)
    emlrtIntegerCheckFastR2012b(d2, &k_emlrtDCI, sp);
  for (i4 = 0; i4 < loop_ub; i4++) {
    A->data[i4] = 0.0;
  }

  i4 = B->size[0] * B->size[1];
  d1 = 2.0 * N;
  d1 = emlrtNonNegativeCheckFastR2012b(d1, &n_emlrtDCI, sp);
  B->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(d1, &m_emlrtDCI, sp);
  d1 = 2.0 * N;
  d1 = emlrtNonNegativeCheckFastR2012b(d1, &p_emlrtDCI, sp);
  B->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(d1, &o_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)B, i4, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  d1 = 2.0 * N;
  d1 = emlrtNonNegativeCheckFastR2012b(d1, &n_emlrtDCI, sp);
  d2 = 2.0 * N;
  d2 = emlrtNonNegativeCheckFastR2012b(d2, &p_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(d1, &m_emlrtDCI, sp) * (int32_T)
    emlrtIntegerCheckFastR2012b(d2, &o_emlrtDCI, sp);
  for (i4 = 0; i4 < loop_ub; i4++) {
    B->data[i4] = 0.0;
  }

  i4 = Bstar->size[0] * Bstar->size[1];
  d1 = 2.0 * N;
  d1 = emlrtNonNegativeCheckFastR2012b(d1, &r_emlrtDCI, sp);
  Bstar->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(d1, &q_emlrtDCI, sp);
  d1 = 2.0 * N;
  d1 = emlrtNonNegativeCheckFastR2012b(d1, &t_emlrtDCI, sp);
  Bstar->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(d1, &s_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)Bstar, i4, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  d1 = 2.0 * N;
  d1 = emlrtNonNegativeCheckFastR2012b(d1, &r_emlrtDCI, sp);
  d2 = 2.0 * N;
  d2 = emlrtNonNegativeCheckFastR2012b(d2, &t_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(d1, &q_emlrtDCI, sp) * (int32_T)
    emlrtIntegerCheckFastR2012b(d2, &s_emlrtDCI, sp);
  for (i4 = 0; i4 < loop_ub; i4++) {
    Bstar->data[i4] = 0.0;
  }

  i4 = D->size[0] * D->size[1];
  d1 = 2.0 * N;
  d1 = emlrtNonNegativeCheckFastR2012b(d1, &v_emlrtDCI, sp);
  D->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(d1, &u_emlrtDCI, sp);
  d1 = emlrtNonNegativeCheckFastR2012b(N, &x_emlrtDCI, sp);
  D->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(d1, &w_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)D, i4, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  d1 = 2.0 * N;
  d1 = emlrtNonNegativeCheckFastR2012b(d1, &v_emlrtDCI, sp);
  d2 = emlrtNonNegativeCheckFastR2012b(N, &x_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(d1, &u_emlrtDCI, sp) * (int32_T)
    emlrtIntegerCheckFastR2012b(d2, &w_emlrtDCI, sp);
  for (i4 = 0; i4 < loop_ub; i4++) {
    D->data[i4] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, N, mxDOUBLE_CLASS, (int32_T)N,
    &dc_emlrtRTEI, sp);
  i = 0;
  emxInit_real_T(sp, &a, 2, &c_emlrtRTEI, true);
  while (i <= (int32_T)N - 1) {
    /*  time */
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, N, mxDOUBLE_CLASS, (int32_T)N,
      &cc_emlrtRTEI, sp);
    j = 0;
    while (j <= (int32_T)N - 1) {
      /*  time */
      deltaij = (1.0 + (real_T)i == 1.0 + (real_T)j);
      d1 = 2.0 * (1.0 + (real_T)i);
      loop_ub = A->size[0];
      d2 = 2.0 * (1.0 + (real_T)j);
      b_A = A->size[1];
      i4 = t->size[1];
      st.site = &n_emlrtRSI;
      d3 = Acoeff(&st, 0.0, 1.0 + (real_T)j, 0.0, t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i4,
        &qb_emlrtBCI, sp) - 1], gridT);
      i4 = t->size[1];
      st.site = &n_emlrtRSI;
      d4 = Acoeff(&st, 1.0, 1.0 + (real_T)j, 0.0, t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i4,
        &rb_emlrtBCI, sp) - 1], gridT);
      i4 = t->size[1];
      st.site = &o_emlrtRSI;
      b1j0i = Acoeff(&st, 0.0, 1.0 + (real_T)j, 1.0, t->
                     data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i4,
        &sb_emlrtBCI, sp) - 1], gridT);
      i4 = t->size[1];
      st.site = &o_emlrtRSI;
      b1j1i = Acoeff(&st, 1.0, 1.0 + (real_T)j, 1.0, t->
                     data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i4,
        &tb_emlrtBCI, sp) - 1], gridT);
      i4 = (int32_T)(d1 + -1.0);
      i5 = (int32_T)(d2 + -1.0);
      A->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub, &ub_emlrtBCI,
                sp) + A->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i5, 1, b_A,
                 &vb_emlrtBCI, sp) - 1)) - 1] = d3;
      i4 = (int32_T)(d1 + -1.0);
      i5 = (int32_T)d2;
      A->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub, &ub_emlrtBCI,
                sp) + A->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i5, 1, b_A,
                 &vb_emlrtBCI, sp) - 1)) - 1] = d4;
      i4 = (int32_T)d1;
      i5 = (int32_T)(d2 + -1.0);
      A->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub, &ub_emlrtBCI,
                sp) + A->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i5, 1, b_A,
                 &vb_emlrtBCI, sp) - 1)) - 1] = b1j0i;
      i4 = (int32_T)d1;
      i5 = (int32_T)d2;
      A->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub, &ub_emlrtBCI,
                sp) + A->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i5, 1, b_A,
                 &vb_emlrtBCI, sp) - 1)) - 1] = b1j1i;

      /*  temp terms */
      i4 = t->size[1];
      st.site = &p_emlrtRSI;
      b1j0i = Bcoeff(&st, 1.0, 1.0 + (real_T)j, 0.0, t->
                     data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i4,
        &wb_emlrtBCI, sp) - 1], gridT);
      i4 = t->size[1];
      st.site = &q_emlrtRSI;
      b1j1i = Bcoeff(&st, 1.0, 1.0 + (real_T)j, 1.0, t->
                     data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i4,
        &xb_emlrtBCI, sp) - 1], gridT);
      d1 = 2.0 * (1.0 + (real_T)i);
      loop_ub = B->size[0];
      d2 = 2.0 * (1.0 + (real_T)j);
      b_A = B->size[1];
      i4 = t->size[1];
      st.site = &r_emlrtRSI;
      d3 = Bcoeff(&st, 0.0, 1.0 + (real_T)j, 0.0, t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i4,
        &yb_emlrtBCI, sp) - 1], gridT);
      i4 = t->size[1];
      st.site = &s_emlrtRSI;
      d4 = Bcoeff(&st, 0.0, 1.0 + (real_T)j, 1.0, t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, i4,
        &ac_emlrtBCI, sp) - 1], gridT);
      i4 = (int32_T)(d1 + -1.0);
      i5 = (int32_T)(d2 + -1.0);
      B->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub, &bc_emlrtBCI,
                sp) + B->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i5, 1, b_A,
                 &cc_emlrtBCI, sp) - 1)) - 1] = d3 + 0.5 * (real_T)deltaij;
      i4 = (int32_T)(d1 + -1.0);
      i5 = (int32_T)d2;
      B->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub, &bc_emlrtBCI,
                sp) + B->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i5, 1, b_A,
                 &cc_emlrtBCI, sp) - 1)) - 1] = b1j0i;
      i4 = (int32_T)d1;
      i5 = (int32_T)(d2 + -1.0);
      B->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub, &bc_emlrtBCI,
                sp) + B->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i5, 1, b_A,
                 &cc_emlrtBCI, sp) - 1)) - 1] = d4;
      i4 = (int32_T)d1;
      i5 = (int32_T)d2;
      B->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub, &bc_emlrtBCI,
                sp) + B->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i5, 1, b_A,
                 &cc_emlrtBCI, sp) - 1)) - 1] = b1j1i + 0.5 * (real_T)deltaij;
      d1 = 2.0 * (1.0 + (real_T)i);
      loop_ub = Bstar->size[0];
      d2 = 2.0 * (1.0 + (real_T)j);
      b_A = Bstar->size[1];
      i4 = (int32_T)(d1 + -1.0);
      i5 = (int32_T)(d2 + -1.0);
      Bstar->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub,
        &dc_emlrtBCI, sp) + Bstar->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i5, 1, b_A, &ec_emlrtBCI, sp) - 1)) - 1] = b1j0i;
      i4 = (int32_T)(d1 + -1.0);
      i5 = (int32_T)d2;
      Bstar->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub,
        &dc_emlrtBCI, sp) + Bstar->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i5, 1, b_A, &ec_emlrtBCI, sp) - 1)) - 1] = -b1j0i;
      i4 = (int32_T)d1;
      i5 = (int32_T)(d2 + -1.0);
      Bstar->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub,
        &dc_emlrtBCI, sp) + Bstar->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i5, 1, b_A, &ec_emlrtBCI, sp) - 1)) - 1] = b1j1i + (real_T)deltaij /
        2.0;
      i4 = (int32_T)d1;
      i5 = (int32_T)d2;
      Bstar->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, loop_ub,
        &dc_emlrtBCI, sp) + Bstar->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i5, 1, b_A, &ec_emlrtBCI, sp) - 1)) - 1] = -b1j1i - 0.5 * (real_T)
        deltaij;
      st.site = &t_emlrtRSI;
      i4 = t->size[1];
      i5 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &pb_emlrtBCI, &st);
      i4 = f->size[0];
      i5 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &ob_emlrtBCI, &st);

      /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
      /*  integration rule */
      /*  the spatial integration of all points y at time t_j */
      i4 = a->size[0] * a->size[1];
      a->size[0] = 1;
      emxEnsureCapacity(&st, (emxArray__common *)a, i4, (int32_T)sizeof(real_T),
                        &b_emlrtRTEI);
      loop_ub = x->size[1];
      i4 = a->size[0] * a->size[1];
      a->size[1] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)a, i4, (int32_T)sizeof(real_T),
                        &b_emlrtRTEI);
      loop_ub = x->size[1];
      for (i4 = 0; i4 < loop_ub; i4++) {
        a->data[i4] = 0.0;
      }

      b1j0i = 0.0;
      loop_ub = x->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, loop_ub, &jb_emlrtBCI, &st);
      i4 = x->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i4, &kb_emlrtBCI, &st);
      b_st.site = &v_emlrtRSI;
      a->data[0] = Acoeff(&b_st, x->data[0], 1.0 + (real_T)j, 0.0, t->data[i],
                          gridT);

      /*  y = 0:1/(numel(y)-2):1; */
      i4 = f->size[1];
      loop_ub = 2;
      while (loop_ub - 2 <= i4 - 2) {
        i5 = a->size[1];
        b_A = x->size[1];
        b_st.site = &w_emlrtRSI;
        a->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i5, &gc_emlrtBCI,
          &st) - 1] = Acoeff(&b_st, x->data[emlrtDynamicBoundsCheckFastR2012b
                             (loop_ub, 1, b_A, &hc_emlrtBCI, &st) - 1], 1.0 +
                             (real_T)j, 0.0, t->data[i], gridT);
        i5 = f->size[1];
        emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i5, &ib_emlrtBCI, &st);
        i5 = f->size[1];
        b_A = loop_ub - 1;
        emlrtDynamicBoundsCheckFastR2012b(b_A, 1, i5, &hb_emlrtBCI, &st);
        i5 = a->size[1];
        b_A = a->size[1];
        deltaij = loop_ub - 1;
        i6 = x->size[1];
        i7 = x->size[1];
        i8 = loop_ub - 1;
        b1j0i += 0.5 * (a->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i5,
          &ic_emlrtBCI, &st) - 1] * f->data[i + f->size[0] * (loop_ub - 1)] +
                        a->data[emlrtDynamicBoundsCheckFastR2012b(deltaij, 1,
          b_A, &jc_emlrtBCI, &st) - 1] * f->data[i + f->size[0] * (loop_ub - 2)])
          * (x->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i6,
              &kc_emlrtBCI, &st) - 1] - x->
             data[emlrtDynamicBoundsCheckFastR2012b(i8, 1, i7, &lc_emlrtBCI, &st)
             - 1]);
        loop_ub++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      }

      st.site = &u_emlrtRSI;
      i4 = t->size[1];
      i5 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &nb_emlrtBCI, &st);
      i4 = f->size[0];
      i5 = i + 1;
      emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &mb_emlrtBCI, &st);

      /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
      /*  integration rule */
      /*  the spatial integration of all points y at time t_j */
      i4 = a->size[0] * a->size[1];
      a->size[0] = 1;
      emxEnsureCapacity(&st, (emxArray__common *)a, i4, (int32_T)sizeof(real_T),
                        &b_emlrtRTEI);
      loop_ub = x->size[1];
      i4 = a->size[0] * a->size[1];
      a->size[1] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)a, i4, (int32_T)sizeof(real_T),
                        &b_emlrtRTEI);
      loop_ub = x->size[1];
      for (i4 = 0; i4 < loop_ub; i4++) {
        a->data[i4] = 0.0;
      }

      b1j1i = 0.0;
      loop_ub = x->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, loop_ub, &jb_emlrtBCI, &st);
      i4 = x->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i4, &kb_emlrtBCI, &st);
      b_st.site = &v_emlrtRSI;
      a->data[0] = Acoeff(&b_st, x->data[0], 1.0 + (real_T)j, 1.0, t->data[i],
                          gridT);

      /*  y = 0:1/(numel(y)-2):1; */
      i4 = f->size[1];
      loop_ub = 2;
      while (loop_ub - 2 <= i4 - 2) {
        i5 = a->size[1];
        b_A = x->size[1];
        b_st.site = &w_emlrtRSI;
        a->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i5, &gc_emlrtBCI,
          &st) - 1] = Acoeff(&b_st, x->data[emlrtDynamicBoundsCheckFastR2012b
                             (loop_ub, 1, b_A, &hc_emlrtBCI, &st) - 1], 1.0 +
                             (real_T)j, 1.0, t->data[i], gridT);
        i5 = f->size[1];
        emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i5, &ib_emlrtBCI, &st);
        i5 = f->size[1];
        b_A = loop_ub - 1;
        emlrtDynamicBoundsCheckFastR2012b(b_A, 1, i5, &hb_emlrtBCI, &st);
        i5 = a->size[1];
        b_A = a->size[1];
        deltaij = loop_ub - 1;
        i6 = x->size[1];
        i7 = x->size[1];
        i8 = loop_ub - 1;
        b1j1i += 0.5 * (a->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i5,
          &ic_emlrtBCI, &st) - 1] * f->data[i + f->size[0] * (loop_ub - 1)] +
                        a->data[emlrtDynamicBoundsCheckFastR2012b(deltaij, 1,
          b_A, &jc_emlrtBCI, &st) - 1] * f->data[i + f->size[0] * (loop_ub - 2)])
          * (x->data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i6,
              &kc_emlrtBCI, &st) - 1] - x->
             data[emlrtDynamicBoundsCheckFastR2012b(i8, 1, i7, &lc_emlrtBCI, &st)
             - 1]);
        loop_ub++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      }

      d1 = 2.0 * (1.0 + (real_T)i);
      b_A = D->size[0];
      loop_ub = D->size[1];
      emlrtDynamicBoundsCheckFastR2012b(j + 1, 1, loop_ub, &lb_emlrtBCI, sp);
      i4 = (int32_T)(d1 + -1.0);
      D->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, b_A, &fc_emlrtBCI, sp) +
               D->size[0] * j) - 1] = b1j0i;
      i4 = (int32_T)d1;
      D->data[(emlrtDynamicBoundsCheckFastR2012b(i4, 1, b_A, &fc_emlrtBCI, sp) +
               D->size[0] * j) - 1] = b1j1i;
      j++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (CalculateABBStarD.c) */
