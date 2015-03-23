/*
 * Done.c
 *
 * Code generation for function 'Done'
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
static emlrtRSInfo ke_emlrtRSI = { 6, "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m" };

static emlrtRTEInfo u_emlrtRTEI = { 1, 17, "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m" };

static emlrtBCInfo ee_emlrtBCI = { -1, -1, 6, 50, "f", "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m", 0 };

static emlrtBCInfo fe_emlrtBCI = { -1, -1, 6, 14, "vals", "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m", 0 };

static emlrtBCInfo ge_emlrtBCI = { -1, -1, 6, 16, "vals", "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m", 0 };

static emlrtBCInfo he_emlrtBCI = { -1, -1, 6, 32, "x", "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m", 0 };

static emlrtBCInfo ie_emlrtBCI = { -1, -1, 6, 37, "t", "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m", 0 };

static emlrtDCInfo pb_emlrtDCI = { 6, 32, "Done",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Done.m", 1 };

/* Function Definitions */
real_T Done(const emlrtStack *sp, real_T k, const emxArray_real_T *x, const
            emxArray_real_T *gridX, real_T t, const emxArray_real_T *gridT,
            const emxArray_real_T *f)
{
  real_T vals;
  emxArray_real_T *a;
  int32_T i68;
  int32_T unnamed_idx_1;
  int32_T aIdx;
  int32_T i69;
  int32_T i70;
  int32_T i71;
  int32_T i72;
  int32_T i73;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &a, 2, &c_emlrtRTEI, true);

  /*  linspace(0,1,numel(x)); */
  i68 = f->size[0];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i68, &ee_emlrtBCI, sp);
  st.site = &ke_emlrtRSI;
  i68 = x->size[1];
  unnamed_idx_1 = (int32_T)emlrtIntegerCheckFastR2012b(k, &pb_emlrtDCI, &st);
  emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i68, &he_emlrtBCI, &st);

  /*  Calculate the integral int_0^1(f(y,t_j)*A_{yj}(x,t)dy) by midpoint */
  /*  integration rule */
  /*  the spatial integration of all points y at time t_j */
  i68 = a->size[0] * a->size[1];
  a->size[0] = 1;
  emxEnsureCapacity(&st, (emxArray__common *)a, i68, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  unnamed_idx_1 = gridX->size[1];
  i68 = a->size[0] * a->size[1];
  a->size[1] = unnamed_idx_1;
  emxEnsureCapacity(&st, (emxArray__common *)a, i68, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  unnamed_idx_1 = gridX->size[1];
  for (i68 = 0; i68 < unnamed_idx_1; i68++) {
    a->data[i68] = 0.0;
  }

  vals = 0.0;
  unnamed_idx_1 = gridX->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, unnamed_idx_1, &jb_emlrtBCI, &st);
  i68 = gridX->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i68, &kb_emlrtBCI, &st);
  b_st.site = &v_emlrtRSI;
  a->data[0] = Acoeff(&b_st, gridX->data[0], 1.0, x->data[(int32_T)k - 1], t,
                      gridT);

  /*  y = 0:1/(numel(y)-2):1; */
  i68 = f->size[1];
  aIdx = 2;
  while (aIdx - 2 <= i68 - 2) {
    unnamed_idx_1 = a->size[1];
    i69 = gridX->size[1];
    b_st.site = &w_emlrtRSI;
    a->data[emlrtDynamicBoundsCheckFastR2012b(aIdx, 1, unnamed_idx_1,
      &gc_emlrtBCI, &st) - 1] = Acoeff(&b_st, gridX->
      data[emlrtDynamicBoundsCheckFastR2012b(aIdx, 1, i69, &hc_emlrtBCI, &st) -
      1], 1.0, x->data[(int32_T)k - 1], t, gridT);
    unnamed_idx_1 = f->size[1];
    emlrtDynamicBoundsCheckFastR2012b(aIdx, 1, unnamed_idx_1, &ib_emlrtBCI, &st);
    unnamed_idx_1 = f->size[1];
    i69 = aIdx - 1;
    emlrtDynamicBoundsCheckFastR2012b(i69, 1, unnamed_idx_1, &hb_emlrtBCI, &st);
    unnamed_idx_1 = a->size[1];
    i69 = a->size[1];
    i70 = aIdx - 1;
    i71 = gridX->size[1];
    i72 = gridX->size[1];
    i73 = aIdx - 1;
    vals += 0.5 * (a->data[emlrtDynamicBoundsCheckFastR2012b(aIdx, 1,
      unnamed_idx_1, &ic_emlrtBCI, &st) - 1] * f->data[f->size[0] * (aIdx - 1)]
                   + a->data[emlrtDynamicBoundsCheckFastR2012b(i70, 1, i69,
      &jc_emlrtBCI, &st) - 1] * f->data[f->size[0] * (aIdx - 2)]) * (gridX->
      data[emlrtDynamicBoundsCheckFastR2012b(aIdx, 1, i71, &kc_emlrtBCI, &st) -
      1] - gridX->data[emlrtDynamicBoundsCheckFastR2012b(i73, 1, i72,
      &lc_emlrtBCI, &st) - 1]);
    aIdx++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
  }

  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return vals;
}

void b_Done(const emlrtStack *sp, real_T k, const emxArray_real_T *x, const
            emxArray_real_T *gridX, const emxArray_real_T *t, const
            emxArray_real_T *gridT, const emxArray_real_T *f, emxArray_real_T
            *vals)
{
  int32_T t_idx_0;
  int32_T i45;
  int32_T i;
  emxArray_real_T *b_f;
  int32_T j;
  int32_T b_i;
  int32_T i46;
  int32_T i47;
  int32_T i48;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  t_idx_0 = t->size[1];
  i45 = vals->size[0] * vals->size[1];
  vals->size[0] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i45, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  t_idx_0 = t->size[1];
  i45 = vals->size[0] * vals->size[1];
  vals->size[1] = t_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vals, i45, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  t_idx_0 = t->size[1] * t->size[1];
  for (i45 = 0; i45 < t_idx_0; i45++) {
    vals->data[i45] = 0.0;
  }

  /*  linspace(0,1,numel(x)); */
  i = 1;
  emxInit_real_T(sp, &b_f, 2, &u_emlrtRTEI, true);
  while (i - 1 <= t->size[1] - 1) {
    j = 0;
    while (j <= t->size[1] - 1) {
      t_idx_0 = f->size[1];
      i45 = f->size[0];
      b_i = emlrtDynamicBoundsCheckFastR2012b(i, 1, i45, &ee_emlrtBCI, sp);
      i45 = b_f->size[0] * b_f->size[1];
      b_f->size[0] = 1;
      b_f->size[1] = t_idx_0;
      emxEnsureCapacity(sp, (emxArray__common *)b_f, i45, (int32_T)sizeof(real_T),
                        &u_emlrtRTEI);
      for (i45 = 0; i45 < t_idx_0; i45++) {
        b_f->data[b_f->size[0] * i45] = f->data[(b_i + f->size[0] * i45) - 1];
      }

      i45 = vals->size[0];
      t_idx_0 = vals->size[1];
      b_i = 1 + j;
      i46 = x->size[1];
      i47 = (int32_T)k;
      i48 = t->size[1];
      st.site = &ke_emlrtRSI;
      vals->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i45, &fe_emlrtBCI, sp)
                  + vals->size[0] * (emlrtDynamicBoundsCheckFastR2012b(b_i, 1,
        t_idx_0, &ge_emlrtBCI, sp) - 1)) - 1] = b_Dcoeff(&st, gridX, 1.0 +
        (real_T)j, x->data[emlrtDynamicBoundsCheckFastR2012b(i47, 1, i46,
        &he_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
        i48, &ie_emlrtBCI, sp) - 1], gridT, b_f);
      j++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&b_f);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (Done.c) */
