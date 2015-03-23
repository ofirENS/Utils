/*
 * Ccoeff.c
 *
 * Code generation for function 'Ccoeff'
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
#include "eml_error.h"
#include "erf.h"
#include "rdivide.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo ab_emlrtRSI = { 4, "Ccoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Ccoeff.m" };

static emlrtRTEInfo x_emlrtRTEI = { 1, 17, "Ccoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Ccoeff.m" };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 4, 20, "gridX", "Ccoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Ccoeff.m", 0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 4, 50, "gridX", "Ccoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Ccoeff.m", 0 };

static emlrtECInfo j_emlrtECI = { 2, 4, 13, "Ccoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Ccoeff.m" };

static emlrtBCInfo ne_emlrtBCI = { 1, 1, 4, 50, "gridX", "Ccoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Ccoeff.m", 0 };

static emlrtBCInfo oe_emlrtBCI = { 1, 1, 4, 20, "gridX", "Ccoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Ccoeff.m", 0 };

static emlrtDCInfo ob_emlrtDCI = { 4, 20, "Ccoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Ccoeff.m", 1 };

/* Function Definitions */
void Ccoeff(const emlrtStack *sp, real_T k, const emxArray_real_T *x, real_T t,
            real_T gridX, emxArray_real_T *vals)
{
  int32_T b_vals;
  emxArray_real_T *b_x;
  int32_T loop_ub;
  emxArray_real_T *r5;
  emxArray_real_T *c_x;
  emxArray_real_T *r6;
  int32_T c_vals[2];
  int32_T iv15[2];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  evaluate the coefficient C for index k which describes the discretization */
  /*  of the space variable spacePoints in [0 1], at time t */
  b_vals = (int32_T)emlrtIntegerCheckFastR2012b(k, &ob_emlrtDCI, sp);
  emlrtDynamicBoundsCheckFastR2012b(b_vals, 1, 1, &oe_emlrtBCI, sp);
  emlrtDynamicBoundsCheckFastR2012b(2, 1, 1, &ne_emlrtBCI, sp);
  st.site = &ab_emlrtRSI;
  if (t < 0.0) {
    b_st.site = &f_emlrtRSI;
    eml_error(&b_st);
  }

  emxInit_real_T(&st, &b_x, 2, &x_emlrtRTEI, true);
  b_vals = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_x, b_vals, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (b_vals = 0; b_vals < loop_ub; b_vals++) {
    b_x->data[b_vals] = x->data[b_vals] - gridX;
  }

  emxInit_real_T(sp, &r5, 2, &x_emlrtRTEI, true);
  emxInit_real_T(sp, &c_x, 2, &x_emlrtRTEI, true);
  rdivide(sp, b_x, 2.0 * muDoubleScalarSqrt(t), r5);
  b_erf(sp, r5, vals);
  st.site = &ab_emlrtRSI;
  b_vals = c_x->size[0] * c_x->size[1];
  c_x->size[0] = 1;
  c_x->size[1] = x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_x, b_vals, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  emxFree_real_T(&b_x);
  for (b_vals = 0; b_vals < loop_ub; b_vals++) {
    c_x->data[b_vals] = x->data[b_vals] - gridX;
  }

  emxInit_real_T(sp, &r6, 2, &x_emlrtRTEI, true);
  rdivide(sp, c_x, 2.0 * muDoubleScalarSqrt(t), r5);
  b_vals = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = r5->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r6, b_vals, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  loop_ub = r5->size[0] * r5->size[1];
  emxFree_real_T(&c_x);
  for (b_vals = 0; b_vals < loop_ub; b_vals++) {
    r6->data[b_vals] = r5->data[b_vals];
  }

  b_erf(sp, r6, r5);
  emxFree_real_T(&r6);
  for (b_vals = 0; b_vals < 2; b_vals++) {
    c_vals[b_vals] = vals->size[b_vals];
  }

  for (b_vals = 0; b_vals < 2; b_vals++) {
    iv15[b_vals] = r5->size[b_vals];
  }

  emlrtSizeEqCheck2DFastR2012b(c_vals, iv15, &j_emlrtECI, sp);
  b_vals = vals->size[0] * vals->size[1];
  vals->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)vals, b_vals, (int32_T)sizeof(real_T),
                    &x_emlrtRTEI);
  b_vals = vals->size[0];
  loop_ub = vals->size[1];
  loop_ub *= b_vals;
  for (b_vals = 0; b_vals < loop_ub; b_vals++) {
    vals->data[b_vals] = 0.5 * (vals->data[b_vals] - r5->data[b_vals]);
  }

  emxFree_real_T(&r5);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

real_T b_Ccoeff(const emlrtStack *sp, real_T k, real_T x, real_T t, const
                emxArray_real_T *gridX)
{
  int32_T i10;
  int32_T i11;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  evaluate the coefficient C for index k which describes the discretization */
  /*  of the space variable spacePoints in [0 1], at time t */
  st.site = &ab_emlrtRSI;
  if (t < 0.0) {
    b_st.site = &f_emlrtRSI;
    eml_error(&b_st);
  }

  i10 = gridX->size[1];
  i11 = (int32_T)k;
  emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &qc_emlrtBCI, sp);
  st.site = &ab_emlrtRSI;
  i10 = gridX->size[1];
  i11 = (int32_T)(k + 1.0);
  emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &rc_emlrtBCI, sp);
  return 0.5 * (b_scalar_erf((x - gridX->data[(int32_T)k - 1]) / (2.0 *
    muDoubleScalarSqrt(t))) - b_scalar_erf((x - gridX->data[(int32_T)(k + 1.0) -
    1]) / (2.0 * muDoubleScalarSqrt(t))));
}

/* End of code generation (Ccoeff.c) */
