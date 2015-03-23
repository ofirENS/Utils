/*
 * GetRegularizationTerm.c
 *
 * Code generation for function 'GetRegularizationTerm'
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
#include "eye.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "sum.h"
#include "BoundaryElementHeatEquation_mexutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo cf_emlrtRSI = { 4, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtRSInfo df_emlrtRSI = { 6, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtRSInfo ef_emlrtRSI = { 7, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtRSInfo ff_emlrtRSI = { 12, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtRSInfo gf_emlrtRSI = { 13, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtRSInfo hf_emlrtRSI = { 17, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtRSInfo if_emlrtRSI = { 19, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtRTEInfo gb_emlrtRTEI = { 1, 20, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtECInfo p_emlrtECI = { 2, 7, 20, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtDCInfo qb_emlrtDCI = { 11, 21, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  4 };

static emlrtDCInfo rb_emlrtDCI = { 11, 21, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  1 };

static emlrtECInfo q_emlrtECI = { 2, 12, 15, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtDCInfo sb_emlrtDCI = { 13, 36, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  4 };

static emlrtECInfo r_emlrtECI = { 2, 13, 15, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtDCInfo tb_emlrtDCI = { 13, 57, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  4 };

static emlrtECInfo s_emlrtECI = { 2, 17, 13, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m"
};

static emlrtDCInfo ub_emlrtDCI = { 12, 37, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  4 };

static emlrtDCInfo vb_emlrtDCI = { 7, 40, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  1 };

static emlrtDCInfo wb_emlrtDCI = { 7, 40, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  4 };

static emlrtDCInfo xb_emlrtDCI = { 7, 61, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  1 };

static emlrtDCInfo yb_emlrtDCI = { 7, 61, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  4 };

static emlrtDCInfo ac_emlrtDCI = { 12, 60, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  4 };

static emlrtBCInfo se_emlrtBCI = { -1, -1, 15, 13, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  0 };

static emlrtBCInfo te_emlrtBCI = { -1, -1, 15, 15, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  0 };

static emlrtBCInfo ue_emlrtBCI = { -1, -1, 15, 34, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  0 };

static emlrtBCInfo ve_emlrtBCI = { -1, -1, 15, 38, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  0 };

static emlrtBCInfo we_emlrtBCI = { -1, -1, 9, 13, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  0 };

static emlrtDCInfo bc_emlrtDCI = { 9, 13, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  1 };

static emlrtBCInfo xe_emlrtBCI = { -1, -1, 9, 15, "regTerm",
  "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  0 };

static emlrtDCInfo cc_emlrtDCI = { 9, 15, "GetRegularizationTerm",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\GetRegularizationTerm.m",
  1 };

/* Function Definitions */
void GetRegularizationTerm(const emlrtStack *sp, real_T N, real_T order,
  emxArray_real_T *regTerm)
{
  emxArray_real_T *r13;
  emxArray_real_T *b;
  int32_T i74;
  int32_T i;
  int32_T b_regTerm;
  emxArray_real_T *r14;
  real_T d12;
  int32_T c_regTerm[2];
  int32_T b_N[2];
  emxArray_real_T *r15;
  int32_T i75;
  emxArray_real_T *r16;
  emxArray_real_T *r17;
  int32_T c_N[2];
  boolean_T b7;
  boolean_T b8;
  emxArray_real_T *v;
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv25[2] = { 1, 19 };

  const mxArray *m10;
  char_T cv33[19];
  static const char_T cv34[19] = { 'o', 'r', 'd', 'e', 'r', ' ', 'n', 'o', 't',
    ' ', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Get regularization term of order = [0,1, or 2] */
  if (order == 0.0) {
    st.site = &cf_emlrtRSI;
    eye(&st, N, regTerm);
  } else {
    emxInit_real_T(sp, &r13, 2, &gb_emlrtRTEI, true);
    emxInit_real_T(sp, &b, 2, &gb_emlrtRTEI, true);
    if (order == 1.0) {
      st.site = &df_emlrtRSI;
      eye(&st, N, regTerm);
      i74 = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, i74, (int32_T)sizeof
                        (real_T), &gb_emlrtRTEI);
      i = regTerm->size[0];
      b_regTerm = regTerm->size[1];
      i *= b_regTerm;
      for (i74 = 0; i74 < i; i74++) {
        regTerm->data[i74] *= 2.0;
      }

      emxInit_real_T(sp, &r14, 2, &gb_emlrtRTEI, true);
      i74 = r14->size[0] * r14->size[1];
      r14->size[0] = 1;
      d12 = N - 1.0;
      d12 = emlrtNonNegativeCheckFastR2012b(d12, &wb_emlrtDCI, sp);
      r14->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(d12, &vb_emlrtDCI, sp);
      emxEnsureCapacity(sp, (emxArray__common *)r14, i74, (int32_T)sizeof(real_T),
                        &gb_emlrtRTEI);
      d12 = N - 1.0;
      d12 = emlrtNonNegativeCheckFastR2012b(d12, &wb_emlrtDCI, sp);
      i = (int32_T)emlrtIntegerCheckFastR2012b(d12, &vb_emlrtDCI, sp);
      for (i74 = 0; i74 < i; i74++) {
        r14->data[i74] = 1.0;
      }

      st.site = &ef_emlrtRSI;
      diag(&st, r14, b);
      emxFree_real_T(&r14);
      for (i74 = 0; i74 < 2; i74++) {
        c_regTerm[i74] = regTerm->size[i74];
      }

      for (i74 = 0; i74 < 2; i74++) {
        b_N[i74] = b->size[i74];
      }

      emxInit_real_T(sp, &r15, 2, &gb_emlrtRTEI, true);
      emlrtSizeEqCheck2DFastR2012b(c_regTerm, b_N, &p_emlrtECI, sp);
      i74 = r15->size[0] * r15->size[1];
      r15->size[0] = 1;
      d12 = N - 1.0;
      d12 = emlrtNonNegativeCheckFastR2012b(d12, &yb_emlrtDCI, sp);
      r15->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(d12, &xb_emlrtDCI, sp);
      emxEnsureCapacity(sp, (emxArray__common *)r15, i74, (int32_T)sizeof(real_T),
                        &gb_emlrtRTEI);
      d12 = N - 1.0;
      d12 = emlrtNonNegativeCheckFastR2012b(d12, &yb_emlrtDCI, sp);
      i = (int32_T)emlrtIntegerCheckFastR2012b(d12, &xb_emlrtDCI, sp);
      for (i74 = 0; i74 < i; i74++) {
        r15->data[i74] = 1.0;
      }

      st.site = &ef_emlrtRSI;
      b_diag(&st, r15, r13);
      emxFree_real_T(&r15);
      for (i74 = 0; i74 < 2; i74++) {
        c_regTerm[i74] = regTerm->size[i74];
      }

      for (i74 = 0; i74 < 2; i74++) {
        b_N[i74] = r13->size[i74];
      }

      emlrtSizeEqCheck2DFastR2012b(c_regTerm, b_N, &p_emlrtECI, sp);
      i74 = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, i74, (int32_T)sizeof
                        (real_T), &gb_emlrtRTEI);
      i = regTerm->size[0];
      b_regTerm = regTerm->size[1];
      i *= b_regTerm;
      for (i74 = 0; i74 < i; i74++) {
        regTerm->data[i74] = (regTerm->data[i74] - b->data[i74]) - r13->data[i74];
      }

      regTerm->data[0] = 1.0;
      i74 = regTerm->size[0];
      i = (int32_T)emlrtIntegerCheckFastR2012b(N, &bc_emlrtDCI, sp);
      b_regTerm = regTerm->size[1];
      i75 = (int32_T)emlrtIntegerCheckFastR2012b(N, &cc_emlrtDCI, sp);
      regTerm->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i74, &we_emlrtBCI,
        sp) + regTerm->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i75, 1,
        b_regTerm, &xe_emlrtBCI, sp) - 1)) - 1] = 1.0;
    } else if (order == 2.0) {
      emxInit_real_T(sp, &r16, 2, &gb_emlrtRTEI, true);
      d12 = emlrtNonNegativeCheckFastR2012b(N, &qb_emlrtDCI, sp);
      emlrtIntegerCheckFastR2012b(d12, &rb_emlrtDCI, sp);
      i74 = r16->size[0] * r16->size[1];
      r16->size[0] = 1;
      d12 = N - 1.0;
      r16->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(d12, &ub_emlrtDCI,
        sp);
      emxEnsureCapacity(sp, (emxArray__common *)r16, i74, (int32_T)sizeof(real_T),
                        &gb_emlrtRTEI);
      d12 = N - 1.0;
      i = (int32_T)emlrtNonNegativeCheckFastR2012b(d12, &ub_emlrtDCI, sp);
      for (i74 = 0; i74 < i; i74++) {
        r16->data[i74] = 1.0;
      }

      st.site = &ff_emlrtRSI;
      diag(&st, r16, regTerm);
      i74 = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, i74, (int32_T)sizeof
                        (real_T), &gb_emlrtRTEI);
      i = regTerm->size[0];
      b_regTerm = regTerm->size[1];
      i *= b_regTerm;
      emxFree_real_T(&r16);
      for (i74 = 0; i74 < i; i74++) {
        regTerm->data[i74] *= 4.0;
      }

      b_N[0] = (int32_T)N;
      b_N[1] = (int32_T)N;
      for (i74 = 0; i74 < 2; i74++) {
        c_regTerm[i74] = regTerm->size[i74];
      }

      emxInit_real_T(sp, &r17, 2, &gb_emlrtRTEI, true);
      emlrtSizeEqCheck2DFastR2012b(b_N, c_regTerm, &q_emlrtECI, sp);
      i74 = r17->size[0] * r17->size[1];
      r17->size[0] = 1;
      d12 = N - 1.0;
      r17->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(d12, &ac_emlrtDCI,
        sp);
      emxEnsureCapacity(sp, (emxArray__common *)r17, i74, (int32_T)sizeof(real_T),
                        &gb_emlrtRTEI);
      d12 = N - 1.0;
      i = (int32_T)emlrtNonNegativeCheckFastR2012b(d12, &ac_emlrtDCI, sp);
      for (i74 = 0; i74 < i; i74++) {
        r17->data[i74] = 1.0;
      }

      st.site = &ff_emlrtRSI;
      b_diag(&st, r17, b);
      i74 = b->size[0] * b->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)b, i74, (int32_T)sizeof(real_T),
                        &gb_emlrtRTEI);
      i = b->size[0];
      b_regTerm = b->size[1];
      i *= b_regTerm;
      emxFree_real_T(&r17);
      for (i74 = 0; i74 < i; i74++) {
        b->data[i74] *= 4.0;
      }

      c_N[0] = (int32_T)N;
      c_N[1] = (int32_T)N;
      for (i74 = 0; i74 < 2; i74++) {
        b_N[i74] = b->size[i74];
      }

      emlrtSizeEqCheck2DFastR2012b(c_N, b_N, &q_emlrtECI, sp);
      i74 = regTerm->size[0] * regTerm->size[1];
      regTerm->size[0] = (int32_T)N;
      regTerm->size[1] = (int32_T)N;
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, i74, (int32_T)sizeof
                        (real_T), &gb_emlrtRTEI);
      i = (int32_T)N * (int32_T)N;
      for (i74 = 0; i74 < i; i74++) {
        regTerm->data[i74] = (0.0 - regTerm->data[i74]) - b->data[i74];
      }

      st.site = &gf_emlrtRSI;
      d12 = N - 2.0;
      emlrtNonNegativeCheckFastR2012b(d12, &sb_emlrtDCI, &st);
      i74 = b->size[0] * b->size[1];
      b->size[0] = (int32_T)(N - 2.0) + 2;
      emxEnsureCapacity(&st, (emxArray__common *)b, i74, (int32_T)sizeof(real_T),
                        &gb_emlrtRTEI);
      i74 = b->size[0] * b->size[1];
      b->size[1] = (int32_T)(N - 2.0) + 2;
      emxEnsureCapacity(&st, (emxArray__common *)b, i74, (int32_T)sizeof(real_T),
                        &gb_emlrtRTEI);
      i = ((int32_T)(N - 2.0) + 2) * ((int32_T)(N - 2.0) + 2);
      for (i74 = 0; i74 < i; i74++) {
        b->data[i74] = 0.0;
      }

      b_st.site = &lf_emlrtRSI;
      if (1 > (int32_T)(N - 2.0)) {
        b7 = false;
      } else {
        b7 = ((int32_T)(N - 2.0) > 2147483646);
      }

      if (b7) {
        c_st.site = &ic_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (i = 1; i <= (int32_T)(N - 2.0); i++) {
        b->data[(i + b->size[0] * (i - 1)) + 1] = 1.0;
      }

      for (i74 = 0; i74 < 2; i74++) {
        c_regTerm[i74] = regTerm->size[i74];
      }

      for (i74 = 0; i74 < 2; i74++) {
        b_N[i74] = b->size[i74];
      }

      emlrtSizeEqCheck2DFastR2012b(c_regTerm, b_N, &r_emlrtECI, sp);
      st.site = &gf_emlrtRSI;
      d12 = N - 2.0;
      emlrtNonNegativeCheckFastR2012b(d12, &tb_emlrtDCI, &st);
      i74 = r13->size[0] * r13->size[1];
      r13->size[0] = (int32_T)(N - 2.0) + 2;
      emxEnsureCapacity(&st, (emxArray__common *)r13, i74, (int32_T)sizeof
                        (real_T), &gb_emlrtRTEI);
      i74 = r13->size[0] * r13->size[1];
      r13->size[1] = (int32_T)(N - 2.0) + 2;
      emxEnsureCapacity(&st, (emxArray__common *)r13, i74, (int32_T)sizeof
                        (real_T), &gb_emlrtRTEI);
      i = ((int32_T)(N - 2.0) + 2) * ((int32_T)(N - 2.0) + 2);
      for (i74 = 0; i74 < i; i74++) {
        r13->data[i74] = 0.0;
      }

      b_st.site = &mf_emlrtRSI;
      if (1 > (int32_T)(N - 2.0)) {
        b8 = false;
      } else {
        b8 = ((int32_T)(N - 2.0) > 2147483646);
      }

      if (b8) {
        c_st.site = &ic_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (i = 1; i <= (int32_T)(N - 2.0); i++) {
        r13->data[(i + r13->size[0] * (i + 1)) - 1] = 1.0;
      }

      for (i74 = 0; i74 < 2; i74++) {
        c_regTerm[i74] = regTerm->size[i74];
      }

      for (i74 = 0; i74 < 2; i74++) {
        b_N[i74] = r13->size[i74];
      }

      emlrtSizeEqCheck2DFastR2012b(c_regTerm, b_N, &r_emlrtECI, sp);
      i74 = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, i74, (int32_T)sizeof
                        (real_T), &gb_emlrtRTEI);
      i = regTerm->size[0];
      b_regTerm = regTerm->size[1];
      i *= b_regTerm;
      for (i74 = 0; i74 < i; i74++) {
        regTerm->data[i74] = (regTerm->data[i74] + b->data[i74]) + r13->data[i74];
      }

      c_emxInit_real_T(sp, &v, 1, &gb_emlrtRTEI, true);
      regTerm->data[regTerm->size[0]] = -2.0;
      regTerm->data[1] = -2.0;
      i74 = regTerm->size[0];
      i = (int32_T)N;
      b_regTerm = regTerm->size[1];
      i75 = (int32_T)(N - 1.0);
      regTerm->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i74, &se_emlrtBCI,
        sp) + regTerm->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i75, 1,
        b_regTerm, &te_emlrtBCI, sp) - 1)) - 1] = -2.0;
      i74 = regTerm->size[0];
      i = (int32_T)N - 1;
      b_regTerm = regTerm->size[1];
      i75 = (int32_T)N;
      regTerm->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i74, &ue_emlrtBCI,
        sp) + regTerm->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i75, 1,
        b_regTerm, &ve_emlrtBCI, sp) - 1)) - 1] = -2.0;
      st.site = &hf_emlrtRSI;
      sum(&st, regTerm, v);
      st.site = &hf_emlrtRSI;
      i = v->size[0];
      b_regTerm = v->size[0];
      i74 = b->size[0] * b->size[1];
      b->size[0] = i;
      emxEnsureCapacity(&st, (emxArray__common *)b, i74, (int32_T)sizeof(real_T),
                        &gb_emlrtRTEI);
      i74 = b->size[0] * b->size[1];
      b->size[1] = b_regTerm;
      emxEnsureCapacity(&st, (emxArray__common *)b, i74, (int32_T)sizeof(real_T),
                        &gb_emlrtRTEI);
      i *= b_regTerm;
      for (i74 = 0; i74 < i; i74++) {
        b->data[i74] = 0.0;
      }

      b_st.site = &mf_emlrtRSI;
      if (1 > v->size[0]) {
        overflow = false;
      } else {
        overflow = (v->size[0] > 2147483646);
      }

      if (overflow) {
        c_st.site = &ic_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (i = 0; i + 1 <= v->size[0]; i++) {
        b->data[i + b->size[0] * i] = v->data[i];
      }

      emxFree_real_T(&v);
      for (i74 = 0; i74 < 2; i74++) {
        c_regTerm[i74] = regTerm->size[i74];
      }

      for (i74 = 0; i74 < 2; i74++) {
        b_N[i74] = b->size[i74];
      }

      emlrtSizeEqCheck2DFastR2012b(c_regTerm, b_N, &s_emlrtECI, sp);
      i74 = regTerm->size[0] * regTerm->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)regTerm, i74, (int32_T)sizeof
                        (real_T), &gb_emlrtRTEI);
      i = regTerm->size[0];
      b_regTerm = regTerm->size[1];
      i *= b_regTerm;
      for (i74 = 0; i74 < i; i74++) {
        regTerm->data[i74] -= b->data[i74];
      }
    } else {
      st.site = &if_emlrtRSI;
      y = NULL;
      m10 = emlrtCreateCharArray(2, iv25);
      for (i = 0; i < 19; i++) {
        cv33[i] = cv34[i];
      }

      emlrtInitCharArrayR2013a(&st, 19, m10, cv33);
      emlrtAssign(&y, m10);
      b_st.site = &eh_emlrtRSI;
      b_error(&b_st, y, &u_emlrtMCI);
    }

    emxFree_real_T(&b);
    emxFree_real_T(&r13);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (GetRegularizationTerm.c) */
