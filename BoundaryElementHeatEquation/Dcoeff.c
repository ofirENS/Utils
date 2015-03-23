/*
 * Dcoeff.c
 *
 * Code generation for function 'Dcoeff'
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
static emlrtRTEInfo g_emlrtRTEI = { 1, 17, "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m" };

static emlrtECInfo k_emlrtECI = { -1, 7, 1, "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m" };

static emlrtBCInfo pe_emlrtBCI = { -1, -1, 7, 1,
  "a(1) = Acoeff(y(1),j,x,t,gridT)", "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m", 0 };

static emlrtECInfo l_emlrtECI = { -1, 10, 5, "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m" };

static emlrtBCInfo qe_emlrtBCI = { -1, -1, 10, 5,
  "a(aIdx) = Acoeff(y(aIdx),j,x,t,gridT)", "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m", 0 };

/* Function Definitions */
real_T Dcoeff(const emlrtStack *sp, const emxArray_real_T *y, real_T j, const
              emxArray_real_T *x, real_T t, const emxArray_real_T *gridT, const
              emxArray_real_T *f)
{
  real_T vals;
  emxArray_real_T *a;
  int32_T i57;
  int32_T unnamed_idx_1;
  emxArray_real_T *r7;
  int32_T i58;
  int32_T i59;
  int32_T i60;
  int32_T i61;
  int32_T i62;
  int32_T i63;
  int32_T i64;
  int32_T i65;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &a, 2, &c_emlrtRTEI, true);

  /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
  /*  integration rule */
  /*  the spatial integration of all points y at time t_j */
  i57 = a->size[0] * a->size[1];
  a->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)a, i57, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  unnamed_idx_1 = y->size[1];
  i57 = a->size[0] * a->size[1];
  a->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)a, i57, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  unnamed_idx_1 = y->size[1];
  for (i57 = 0; i57 < unnamed_idx_1; i57++) {
    a->data[i57] = 0.0;
  }

  emxInit_real_T(sp, &r7, 2, &g_emlrtRTEI, true);
  vals = 0.0;
  i57 = y->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i57, &kb_emlrtBCI, sp);
  st.site = &v_emlrtRSI;
  b_Acoeff(&st, y->data[0], j, x, t, gridT, r7);
  i57 = r7->size[1];
  emlrtSizeEqCheck1DFastR2012b(1, i57, &k_emlrtECI, sp);
  unnamed_idx_1 = y->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, unnamed_idx_1, &jb_emlrtBCI, sp);
  i57 = r7->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i57, &pe_emlrtBCI, sp);
  a->data[0] = r7->data[0];

  /*  y = 0:1/(numel(y)-2):1; */
  unnamed_idx_1 = 2;
  while (unnamed_idx_1 - 2 <= f->size[1] - 2) {
    i57 = y->size[1];
    st.site = &w_emlrtRSI;
    b_Acoeff(&st, y->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1,
              i57, &hc_emlrtBCI, sp) - 1], j, x, t, gridT, r7);
    i57 = r7->size[1];
    emlrtSizeEqCheck1DFastR2012b(1, i57, &l_emlrtECI, sp);
    i57 = r7->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i57, &qe_emlrtBCI, sp);
    i57 = a->size[1];
    a->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i57,
      &gc_emlrtBCI, sp) - 1] = r7->data[0];
    i57 = a->size[1];
    i58 = f->size[1];
    i59 = a->size[1];
    i60 = unnamed_idx_1 - 1;
    i61 = f->size[1];
    i62 = unnamed_idx_1 - 1;
    i63 = y->size[1];
    i64 = y->size[1];
    i65 = unnamed_idx_1 - 1;
    vals += 0.5 * (a->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1,
      i57, &ic_emlrtBCI, sp) - 1] * f->data[emlrtDynamicBoundsCheckFastR2012b
                   (unnamed_idx_1, 1, i58, &ib_emlrtBCI, sp) - 1] + a->
                   data[emlrtDynamicBoundsCheckFastR2012b(i60, 1, i59,
      &jc_emlrtBCI, sp) - 1] * f->data[emlrtDynamicBoundsCheckFastR2012b(i62, 1,
      i61, &hb_emlrtBCI, sp) - 1]) * (y->data[emlrtDynamicBoundsCheckFastR2012b
      (unnamed_idx_1, 1, i63, &kc_emlrtBCI, sp) - 1] - y->
      data[emlrtDynamicBoundsCheckFastR2012b(i65, 1, i64, &lc_emlrtBCI, sp) - 1]);
    unnamed_idx_1++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&r7);
  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return vals;
}

real_T b_Dcoeff(const emlrtStack *sp, const emxArray_real_T *y, real_T j, real_T
                x, real_T t, const emxArray_real_T *gridT, const emxArray_real_T
                *f)
{
  real_T vals;
  emxArray_real_T *a;
  int32_T i25;
  int32_T unnamed_idx_1;
  int32_T i26;
  int32_T i27;
  int32_T i28;
  int32_T i29;
  int32_T i30;
  int32_T i31;
  int32_T i32;
  int32_T i33;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &a, 2, &c_emlrtRTEI, true);

  /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
  /*  integration rule */
  /*  the spatial integration of all points y at time t_j */
  i25 = a->size[0] * a->size[1];
  a->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)a, i25, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  unnamed_idx_1 = y->size[1];
  i25 = a->size[0] * a->size[1];
  a->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)a, i25, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  unnamed_idx_1 = y->size[1];
  for (i25 = 0; i25 < unnamed_idx_1; i25++) {
    a->data[i25] = 0.0;
  }

  vals = 0.0;
  unnamed_idx_1 = y->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, unnamed_idx_1, &jb_emlrtBCI, sp);
  i25 = y->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i25, &kb_emlrtBCI, sp);
  st.site = &v_emlrtRSI;
  a->data[0] = Acoeff(&st, y->data[0], j, x, t, gridT);

  /*  y = 0:1/(numel(y)-2):1; */
  unnamed_idx_1 = 2;
  while (unnamed_idx_1 - 2 <= f->size[1] - 2) {
    i25 = a->size[1];
    i26 = y->size[1];
    st.site = &w_emlrtRSI;
    a->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i25,
      &gc_emlrtBCI, sp) - 1] = Acoeff(&st, y->
      data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i26, &hc_emlrtBCI,
      sp) - 1], j, x, t, gridT);
    i25 = a->size[1];
    i26 = f->size[1];
    i27 = a->size[1];
    i28 = unnamed_idx_1 - 1;
    i29 = f->size[1];
    i30 = unnamed_idx_1 - 1;
    i31 = y->size[1];
    i32 = y->size[1];
    i33 = unnamed_idx_1 - 1;
    vals += 0.5 * (a->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1,
      i25, &ic_emlrtBCI, sp) - 1] * f->data[emlrtDynamicBoundsCheckFastR2012b
                   (unnamed_idx_1, 1, i26, &ib_emlrtBCI, sp) - 1] + a->
                   data[emlrtDynamicBoundsCheckFastR2012b(i28, 1, i27,
      &jc_emlrtBCI, sp) - 1] * f->data[emlrtDynamicBoundsCheckFastR2012b(i30, 1,
      i29, &hb_emlrtBCI, sp) - 1]) * (y->data[emlrtDynamicBoundsCheckFastR2012b
      (unnamed_idx_1, 1, i31, &kc_emlrtBCI, sp) - 1] - y->
      data[emlrtDynamicBoundsCheckFastR2012b(i33, 1, i32, &lc_emlrtBCI, sp) - 1]);
    unnamed_idx_1++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return vals;
}

/* End of code generation (Dcoeff.c) */
