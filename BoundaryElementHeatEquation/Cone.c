/*
 * Cone.c
 *
 * Code generation for function 'Cone'
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
static emlrtRSInfo le_emlrtRSI = { 8, "Cone",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Cone.m" };

static emlrtRTEInfo v_emlrtRTEI = { 1, 17, "Cone",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Cone.m" };

static emlrtBCInfo je_emlrtBCI = { -1, -1, 8, 14, "vals", "Cone",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Cone.m", 0 };

static emlrtBCInfo ke_emlrtBCI = { -1, -1, 8, 16, "vals", "Cone",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Cone.m", 0 };

static emlrtBCInfo le_emlrtBCI = { -1, -1, 8, 30, "x", "Cone",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Cone.m", 0 };

static emlrtDCInfo nb_emlrtDCI = { 8, 30, "Cone",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Cone.m", 1 };

static emlrtBCInfo me_emlrtBCI = { -1, -1, 8, 35, "t", "Cone",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Cone.m", 0 };

/* Function Definitions */
void Cone(const emlrtStack *sp, real_T k, const emxArray_real_T *x, const
          emxArray_real_T *gridX, const emxArray_real_T *t, emxArray_real_T
          *vals)
{
  int32_T t_idx_0;
  int32_T i49;
  int32_T l;
  int32_T i50;
  int32_T i51;
  int32_T i52;
  int32_T i53;
  int32_T i54;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  calculate the matrix Cone for a specific space point x_k, for all times */
  /*  t_i in A */
  /*  points x_k=1:numel(spacePoints) */
  t_idx_0 = t->size[1];
  i49 = vals->size[0] * vals->size[1];
  vals->size[0] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i49, (int32_T)sizeof(real_T),
                    &v_emlrtRTEI);
  t_idx_0 = x->size[1];
  i49 = vals->size[0] * vals->size[1];
  vals->size[1] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i49, (int32_T)sizeof(real_T),
                    &v_emlrtRTEI);
  t_idx_0 = t->size[1] * x->size[1];
  for (i49 = 0; i49 < t_idx_0; i49++) {
    vals->data[i49] = 0.0;
  }

  t_idx_0 = 1;
  while (t_idx_0 - 1 <= t->size[1] - 1) {
    l = 0;
    while (l <= x->size[1] - 1) {
      i49 = vals->size[0];
      i50 = vals->size[1];
      i51 = 1 + l;
      i52 = x->size[1];
      i53 = (int32_T)emlrtIntegerCheckFastR2012b(k, &nb_emlrtDCI, sp);
      i54 = t->size[1];
      st.site = &le_emlrtRSI;
      vals->data[(emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i49,
        &je_emlrtBCI, sp) + vals->size[0] * (emlrtDynamicBoundsCheckFastR2012b
        (i51, 1, i50, &ke_emlrtBCI, sp) - 1)) - 1] = b_Ccoeff(&st, 1.0 + (real_T)
        l, x->data[emlrtDynamicBoundsCheckFastR2012b(i53, 1, i52, &le_emlrtBCI,
        sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(t_idx_0, 1, i54,
        &me_emlrtBCI, sp) - 1], gridX);
      l++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    t_idx_0++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (Cone.c) */
