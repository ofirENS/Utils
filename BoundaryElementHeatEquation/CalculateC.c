/*
 * CalculateC.c
 *
 * Code generation for function 'CalculateC'
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
static emlrtRSInfo x_emlrtRSI = { 10, "CalculateC",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateC.m" };

static emlrtRSInfo y_emlrtRSI = { 11, "CalculateC",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateC.m" };

static emlrtRTEInfo d_emlrtRTEI = { 1, 16, "CalculateC",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateC.m" };

static emlrtRTEInfo ec_emlrtRTEI = { 8, 1, "CalculateC",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateC.m" };

static emlrtRTEInfo fc_emlrtRTEI = { 9, 5, "CalculateC",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateC.m" };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 10, 23, "C", "CalculateC",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateC.m",
  0 };

static emlrtDCInfo y_emlrtDCI = { 7, 11, "CalculateC",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateC.m",
  1 };

static emlrtDCInfo ab_emlrtDCI = { 7, 11, "CalculateC",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateC.m",
  4 };

static emlrtDCInfo bb_emlrtDCI = { 7, 15, "CalculateC",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateC.m",
  1 };

static emlrtDCInfo cb_emlrtDCI = { 7, 15, "CalculateC",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateC.m",
  4 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 10, 40, "t", "CalculateC",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateC.m",
  0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 11, 40, "t", "CalculateC",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateC.m",
  0 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 10, 11, "C", "CalculateC",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateC.m",
  0 };

/* Function Definitions */
void CalculateC(const emlrtStack *sp, real_T N, real_T N0, const emxArray_real_T
                *t, const emxArray_real_T *gridX, emxArray_real_T *C)
{
  int32_T i9;
  real_T d5;
  real_T d6;
  int32_T loop_ub;
  int32_T i;
  int32_T k;
  int32_T b_C;
  real_T d7;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  calculate the C matrix */
  /*  N- number of time points */
  /*  N0- number of space points */
  /*  t- time points */
  /*  gridX - grid for the space points */
  i9 = C->size[0] * C->size[1];
  d5 = 2.0 * N;
  d5 = emlrtNonNegativeCheckFastR2012b(d5, &ab_emlrtDCI, sp);
  C->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(d5, &y_emlrtDCI, sp);
  d5 = emlrtNonNegativeCheckFastR2012b(N0, &cb_emlrtDCI, sp);
  C->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(d5, &bb_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)C, i9, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  d5 = 2.0 * N;
  d5 = emlrtNonNegativeCheckFastR2012b(d5, &ab_emlrtDCI, sp);
  d6 = emlrtNonNegativeCheckFastR2012b(N0, &cb_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(d5, &y_emlrtDCI, sp) * (int32_T)
    emlrtIntegerCheckFastR2012b(d6, &bb_emlrtDCI, sp);
  for (i9 = 0; i9 < loop_ub; i9++) {
    C->data[i9] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, N, mxDOUBLE_CLASS, (int32_T)N,
    &ec_emlrtRTEI, sp);
  i = 1;
  while (i - 1 <= (int32_T)N - 1) {
    /*  space */
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, N0, mxDOUBLE_CLASS, (int32_T)N0,
      &fc_emlrtRTEI, sp);
    k = 0;
    while (k <= (int32_T)N0 - 1) {
      /*  time */
      d5 = 2.0 * (1.0 + (real_T)(i - 1));
      b_C = C->size[0];
      loop_ub = C->size[1];
      emlrtDynamicBoundsCheckFastR2012b(k + 1, 1, loop_ub, &mc_emlrtBCI, sp);
      i9 = t->size[1];
      st.site = &x_emlrtRSI;
      d6 = b_Ccoeff(&st, 1.0 + (real_T)k, 0.0, t->
                    data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i9,
        &nc_emlrtBCI, sp) - 1], gridX);
      i9 = t->size[1];
      st.site = &y_emlrtRSI;
      d7 = b_Ccoeff(&st, 1.0 + (real_T)k, 1.0, t->
                    data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i9,
        &oc_emlrtBCI, sp) - 1], gridX);
      i9 = (int32_T)(d5 + -1.0);
      C->data[(emlrtDynamicBoundsCheckFastR2012b(i9, 1, b_C, &pc_emlrtBCI, sp) +
               C->size[0] * k) - 1] = d6;
      i9 = (int32_T)d5;
      C->data[(emlrtDynamicBoundsCheckFastR2012b(i9, 1, b_C, &pc_emlrtBCI, sp) +
               C->size[0] * k) - 1] = d7;
      k++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (CalculateC.c) */
