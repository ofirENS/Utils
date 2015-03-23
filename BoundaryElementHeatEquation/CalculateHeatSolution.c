/*
 * CalculateHeatSolution.c
 *
 * Code generation for function 'CalculateHeatSolution'
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
static emlrtRTEInfo e_emlrtRTEI = { 1, 16, "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 15, 1, "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m"
};

static emlrtRTEInfo gc_emlrtRTEI = { 20, 5, "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m"
};

static emlrtRTEInfo hc_emlrtRTEI = { 24, 9, "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m"
};

static emlrtDCInfo db_emlrtDCI = { 15, 18, "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  1 };

static emlrtDCInfo eb_emlrtDCI = { 15, 18, "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  4 };

static emlrtDCInfo fb_emlrtDCI = { 18, 17, "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  1 };

static emlrtDCInfo gb_emlrtDCI = { 18, 17, "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  4 };

/* Function Definitions */
void CalculateHeatSolution(const emlrtStack *sp, real_T N0, real_T N, const
  emxArray_real_T *t, const emxArray_real_T *gridT, const emxArray_real_T *x,
  const emxArray_real_T *u0, const emxArray_real_T *q0j, const emxArray_real_T
  *q1j, const emxArray_real_T *h0j, const emxArray_real_T *h1j, const
  emxArray_real_T *f, const emxArray_real_T *r, emxArray_real_T *u)
{
  emxArray_real_T *eta;
  int32_T i12;
  real_T sTime;
  int32_T loop_ub;
  int32_T i13;
  int32_T j;
  emxArray_real_T *b_f;
  int32_T i;
  real_T sSpace;
  int32_T tIdx;
  int32_T b_i;
  int32_T i14;
  int32_T i15;
  int32_T i16;
  int32_T i17;
  int32_T i18;
  int32_T i19;
  int32_T i20;
  int32_T i21;
  int32_T i22;
  int32_T i23;
  int32_T i24;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = sp;
  c_st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &eta, 2, &f_emlrtRTEI, true);

  /*  get the solution for the inverse heat source, u(x,t),  */
  /*  N0 - number of space points */
  /*  N  - number of time points */
  /*  t  - time points */
  /*  gridT - time points grid */
  /*  x space points */
  /*  q0j flux at x=0 du/dn */
  /*  q1j flux at x=1 du/dn */
  /*  h0j boundary condition u(0,t) */
  /*  u1j boundary condition u(1,t) */
  /*  f multiplier of the source f(x,t)r(t) size[N N0] */
  /*  r calculated source term size [N,1] */
  i12 = eta->size[0] * eta->size[1];
  eta->size[0] = 1;
  sTime = emlrtNonNegativeCheckFastR2012b(N0, &eb_emlrtDCI, sp);
  eta->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(sTime, &db_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)eta, i12, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  sTime = emlrtNonNegativeCheckFastR2012b(N0, &eb_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(sTime, &db_emlrtDCI, sp);
  for (i12 = 0; i12 < loop_ub; i12++) {
    eta->data[i12] = 1.0;
  }

  i12 = (int32_T)N0;
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i12, &tc_emlrtBCI, sp);
  eta->data[0] = 0.5;
  i12 = (int32_T)N0;
  i13 = (int32_T)N0;
  eta->data[emlrtDynamicBoundsCheckFastR2012b(i13, 1, i12, &uc_emlrtBCI, sp) - 1]
    = 0.5;
  i12 = u->size[0] * u->size[1];
  sTime = emlrtNonNegativeCheckFastR2012b(N, &gb_emlrtDCI, sp);
  u->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(sTime, &fb_emlrtDCI, sp);
  u->size[1] = (int32_T)N0;
  emxEnsureCapacity(sp, (emxArray__common *)u, i12, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  sTime = emlrtNonNegativeCheckFastR2012b(N, &gb_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(sTime, &fb_emlrtDCI, sp) *
    (int32_T)N0;
  for (i12 = 0; i12 < loop_ub; i12++) {
    u->data[i12] = 0.0;
  }

  j = 1;
  emxInit_real_T(sp, &b_f, 2, &e_emlrtRTEI, true);
  while (j - 1 <= (int32_T)N0 - 1) {
    /*  space index */
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, N, mxDOUBLE_CLASS, (int32_T)N,
      &gc_emlrtRTEI, sp);
    i = 1;
    while (i - 1 <= (int32_T)N - 1) {
      /*  time index */
      sTime = 0.0;

      /*  cumulative sums */
      sSpace = 0.0;
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, N, mxDOUBLE_CLASS, (int32_T)N,
        &hc_emlrtRTEI, sp);
      tIdx = 0;
      while (tIdx <= (int32_T)N - 1) {
        /*  time index */
        loop_ub = f->size[1];
        i12 = f->size[0];
        b_i = emlrtDynamicBoundsCheckFastR2012b(i, 1, i12, &sc_emlrtBCI, sp);
        i12 = b_f->size[0] * b_f->size[1];
        b_f->size[0] = 1;
        b_f->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)b_f, i12, (int32_T)sizeof
                          (real_T), &e_emlrtRTEI);
        for (i12 = 0; i12 < loop_ub; i12++) {
          b_f->data[b_f->size[0] * i12] = f->data[(b_i + f->size[0] * i12) - 1];
        }

        i12 = x->size[1];
        i13 = t->size[1];
        i14 = q0j->size[0];
        i15 = x->size[1];
        loop_ub = t->size[1];
        b_i = q1j->size[0];
        i16 = x->size[1];
        i17 = t->size[1];
        i18 = h0j->size[0];
        i19 = x->size[1];
        i20 = t->size[1];
        i21 = h1j->size[0];
        i22 = x->size[1];
        i23 = t->size[1];
        i24 = r->size[0];
        st.site = &bb_emlrtRSI;
        b_st.site = &cb_emlrtRSI;
        c_st.site = &db_emlrtRSI;
        sTime = ((((sTime + Acoeff(&st, 0.0, 1.0 + (real_T)tIdx, x->
          data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i12, &cd_emlrtBCI, sp) -
          1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i13, &dd_emlrtBCI,
          sp) - 1], gridT) * q0j->data[emlrtDynamicBoundsCheckFastR2012b(tIdx +
          1, 1, i14, &ed_emlrtBCI, sp) - 1]) + Acoeff(&st, 1.0, 1.0 + (real_T)
                    tIdx, x->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i15,
          &fd_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
          loop_ub, &gd_emlrtBCI, sp) - 1], gridT) * q1j->
                   data[emlrtDynamicBoundsCheckFastR2012b(tIdx + 1, 1, b_i,
                    &hd_emlrtBCI, sp) - 1]) - Bcoeff(&b_st, 0.0, 1.0 + (real_T)
                   tIdx, x->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i16,
                    &id_emlrtBCI, sp) - 1], t->
                   data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i17,
                    &jd_emlrtBCI, sp) - 1], gridT) * h0j->
                  data[emlrtDynamicBoundsCheckFastR2012b(tIdx + 1, 1, i18,
                   &kd_emlrtBCI, sp) - 1]) - Bcoeff(&b_st, 1.0, 1.0 + (real_T)
                  tIdx, x->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i19,
                   &ld_emlrtBCI, sp) - 1], t->
                  data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i20, &md_emlrtBCI,
                   sp) - 1], gridT) * h1j->
                 data[emlrtDynamicBoundsCheckFastR2012b(tIdx + 1, 1, i21,
                  &nd_emlrtBCI, sp) - 1]) + b_Dcoeff(&c_st, x, 1.0 + (real_T)
          tIdx, x->data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i22,
          &od_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
          i23, &pd_emlrtBCI, sp) - 1], gridT, b_f) * r->
          data[emlrtDynamicBoundsCheckFastR2012b(tIdx + 1, 1, i24, &qd_emlrtBCI,
          sp) - 1];
        tIdx++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      loop_ub = 0;
      while (loop_ub <= (int32_T)N0 - 1) {
        /*  space index */
        i12 = x->size[1];
        i13 = t->size[1];
        i14 = u0->size[1];
        i15 = 1 + loop_ub;
        st.site = &eb_emlrtRSI;
        sSpace += b_Ccoeff(&st, 1.0 + (real_T)loop_ub, x->
                           data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i12,
          &yc_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
          i13, &ad_emlrtBCI, sp) - 1], gridT) * u0->
          data[emlrtDynamicBoundsCheckFastR2012b(i15, 1, i14, &bd_emlrtBCI, sp)
          - 1];
        loop_ub++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      i12 = u->size[0];
      i13 = u->size[1];
      i14 = eta->size[1];
      u->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i12, &vc_emlrtBCI, sp) +
               u->size[0] * (emlrtDynamicBoundsCheckFastR2012b(j, 1, i13,
                 &wc_emlrtBCI, sp) - 1)) - 1] = (sTime + sSpace) * eta->
        data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i14, &xc_emlrtBCI, sp) - 1];
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&b_f);
  emxFree_real_T(&eta);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (CalculateHeatSolution.c) */
