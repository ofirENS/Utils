/*
 * CalculateA1B1B1Star.c
 *
 * Code generation for function 'CalculateA1B1B1Star'
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
static emlrtRSInfo j_emlrtRSI = { 9, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m"
};

static emlrtRSInfo k_emlrtRSI = { 10, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m"
};

static emlrtRSInfo l_emlrtRSI = { 13, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m"
};

static emlrtRSInfo m_emlrtRSI = { 15, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 26, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m"
};

static emlrtBCInfo w_emlrtBCI = { -1, -1, 9, 13, "a1k", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 15, 13, "b1k", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 18, 13, "b1s", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 3, 13, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  1 };

static emlrtDCInfo d_emlrtDCI = { 3, 13, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  4 };

static emlrtDCInfo e_emlrtDCI = { 3, 15, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  1 };

static emlrtDCInfo f_emlrtDCI = { 3, 15, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  4 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 9, 42, "x", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 9, 42, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  1 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 10, 40, "x", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtDCInfo h_emlrtDCI = { 10, 40, "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  1 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 9, 15, "a1k", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 13, 27, "x", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 15, 42, "x", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 15, 15, "b1k", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 18, 15, "b1s", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 9, 47, "t", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 10, 45, "t", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 13, 32, "t", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 15, 47, "t", "CalculateA1B1B1Star",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateA1B1B1Star.m",
  0 };

/* Function Definitions */
void CalculateA1B1B1Star(const emlrtStack *sp, real_T k, const emxArray_real_T
  *x, real_T t, const emxArray_real_T *gridT, real_T N, emxArray_real_T *a1k,
  emxArray_real_T *b1k, emxArray_real_T *b1s)
{
  int32_T i2;
  real_T d0;
  real_T b1ki;
  int32_T loop_ub;
  int32_T i3;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  i2 = a1k->size[0] * a1k->size[1];
  d0 = emlrtNonNegativeCheckFastR2012b(N, &d_emlrtDCI, sp);
  a1k->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(d0, &c_emlrtDCI, sp);
  d0 = 2.0 * N;
  d0 = emlrtNonNegativeCheckFastR2012b(d0, &f_emlrtDCI, sp);
  a1k->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(d0, &e_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)a1k, i2, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  d0 = emlrtNonNegativeCheckFastR2012b(N, &d_emlrtDCI, sp);
  b1ki = 2.0 * N;
  b1ki = emlrtNonNegativeCheckFastR2012b(b1ki, &f_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(d0, &c_emlrtDCI, sp) * (int32_T)
    emlrtIntegerCheckFastR2012b(b1ki, &e_emlrtDCI, sp);
  for (i2 = 0; i2 < loop_ub; i2++) {
    a1k->data[i2] = 0.0;
  }

  i2 = b1k->size[0] * b1k->size[1];
  b1k->size[0] = (int32_T)N;
  b1k->size[1] = (int32_T)(2.0 * N);
  emxEnsureCapacity(sp, (emxArray__common *)b1k, i2, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = (int32_T)N * (int32_T)(2.0 * N);
  for (i2 = 0; i2 < loop_ub; i2++) {
    b1k->data[i2] = 0.0;
  }

  i2 = b1s->size[0] * b1s->size[1];
  b1s->size[0] = (int32_T)N;
  b1s->size[1] = (int32_T)(2.0 * N);
  emxEnsureCapacity(sp, (emxArray__common *)b1s, i2, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = (int32_T)N * (int32_T)(2.0 * N);
  for (i2 = 0; i2 < loop_ub; i2++) {
    b1s->data[i2] = 0.0;
  }

  /*  Calcualte A1 */
  i2 = (int32_T)N;
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i2, &w_emlrtBCI, sp);
  loop_ub = (int32_T)(2.0 * N);
  i2 = x->size[1];
  i3 = (int32_T)emlrtIntegerCheckFastR2012b(k, &g_emlrtDCI, sp);
  st.site = &j_emlrtRSI;
  d0 = Acoeff(&st, 0.0, 1.0, x->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
    &ab_emlrtBCI, sp) - 1], t, gridT);
  i2 = x->size[1];
  i3 = (int32_T)emlrtIntegerCheckFastR2012b(k, &h_emlrtDCI, sp);
  st.site = &k_emlrtRSI;
  b1ki = Acoeff(&st, 1.0, 1.0, x->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1,
    i2, &bb_emlrtBCI, sp) - 1], t, gridT);
  a1k->data[a1k->size[0] * (emlrtDynamicBoundsCheckFastR2012b(1, 1, loop_ub,
    &cb_emlrtBCI, sp) - 1)] = d0;
  a1k->data[a1k->size[0] * (emlrtDynamicBoundsCheckFastR2012b(2, 1, loop_ub,
    &cb_emlrtBCI, sp) - 1)] = b1ki;

  /*  Temp b1 */
  i2 = x->size[1];
  i3 = (int32_T)k;
  st.site = &l_emlrtRSI;
  b1ki = Bcoeff(&st, 1.0, 1.0, x->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1,
    i2, &db_emlrtBCI, sp) - 1], t, gridT);

  /*  calculate B1 */
  i2 = (int32_T)N;
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i2, &x_emlrtBCI, sp);
  loop_ub = (int32_T)(2.0 * N);
  i2 = x->size[1];
  i3 = (int32_T)k;
  st.site = &m_emlrtRSI;
  d0 = Bcoeff(&st, 0.0, 1.0, x->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
    &eb_emlrtBCI, sp) - 1], t, gridT);
  b1k->data[b1k->size[0] * (emlrtDynamicBoundsCheckFastR2012b(1, 1, loop_ub,
    &fb_emlrtBCI, sp) - 1)] = d0;
  b1k->data[b1k->size[0] * (emlrtDynamicBoundsCheckFastR2012b(2, 1, loop_ub,
    &fb_emlrtBCI, sp) - 1)] = b1ki;

  /*  Calculate B1* */
  i2 = (int32_T)N;
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i2, &y_emlrtBCI, sp);
  loop_ub = (int32_T)(2.0 * N);
  b1s->data[b1s->size[0] * (emlrtDynamicBoundsCheckFastR2012b(1, 1, loop_ub,
    &gb_emlrtBCI, sp) - 1)] = b1ki;
  b1s->data[b1s->size[0] * (emlrtDynamicBoundsCheckFastR2012b(2, 1, loop_ub,
    &gb_emlrtBCI, sp) - 1)] = -b1ki;
}

void b_CalculateA1B1B1Star(const emlrtStack *sp, real_T k, const emxArray_real_T
  *x, const emxArray_real_T *t, const emxArray_real_T *gridT, real_T N,
  emxArray_real_T *a1k, emxArray_real_T *b1k, emxArray_real_T *b1s)
{
  int32_T i35;
  int32_T loop_ub;
  int32_T i;
  int32_T j;
  real_T d9;
  int32_T b_a1k;
  int32_T i36;
  real_T d10;
  real_T b1ki;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  i35 = a1k->size[0] * a1k->size[1];
  a1k->size[0] = (int32_T)N;
  a1k->size[1] = (int32_T)(2.0 * N);
  emxEnsureCapacity(sp, (emxArray__common *)a1k, i35, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = (int32_T)N * (int32_T)(2.0 * N);
  for (i35 = 0; i35 < loop_ub; i35++) {
    a1k->data[i35] = 0.0;
  }

  i35 = b1k->size[0] * b1k->size[1];
  b1k->size[0] = (int32_T)N;
  b1k->size[1] = (int32_T)(2.0 * N);
  emxEnsureCapacity(sp, (emxArray__common *)b1k, i35, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = (int32_T)N * (int32_T)(2.0 * N);
  for (i35 = 0; i35 < loop_ub; i35++) {
    b1k->data[i35] = 0.0;
  }

  i35 = b1s->size[0] * b1s->size[1];
  b1s->size[0] = (int32_T)N;
  b1s->size[1] = (int32_T)(2.0 * N);
  emxEnsureCapacity(sp, (emxArray__common *)b1s, i35, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = (int32_T)N * (int32_T)(2.0 * N);
  for (i35 = 0; i35 < loop_ub; i35++) {
    b1s->data[i35] = 0.0;
  }

  i = 1;
  while (i - 1 <= t->size[1] - 1) {
    j = 0;
    while (j <= t->size[1] - 1) {
      /*  Calcualte A1 */
      loop_ub = a1k->size[0];
      d9 = 2.0 * (1.0 + (real_T)j);
      b_a1k = a1k->size[1];
      emlrtDynamicBoundsCheckFastR2012b(i, 1, loop_ub, &w_emlrtBCI, sp);
      i35 = x->size[1];
      loop_ub = (int32_T)k;
      i36 = t->size[1];
      st.site = &j_emlrtRSI;
      d10 = Acoeff(&st, 0.0, 1.0 + (real_T)j, x->
                   data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i35,
        &ab_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
        i36, &ud_emlrtBCI, sp) - 1], gridT);
      i35 = x->size[1];
      loop_ub = (int32_T)k;
      i36 = t->size[1];
      st.site = &k_emlrtRSI;
      b1ki = Acoeff(&st, 1.0, 1.0 + (real_T)j, x->
                    data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i35,
        &bb_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
        i36, &vd_emlrtBCI, sp) - 1], gridT);
      i35 = (int32_T)(d9 + -1.0);
      a1k->data[(i + a1k->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i35, 1,
        b_a1k, &cb_emlrtBCI, sp) - 1)) - 1] = d10;
      i35 = (int32_T)d9;
      a1k->data[(i + a1k->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i35, 1,
        b_a1k, &cb_emlrtBCI, sp) - 1)) - 1] = b1ki;

      /*  Temp b1 */
      i35 = x->size[1];
      loop_ub = (int32_T)k;
      i36 = t->size[1];
      st.site = &l_emlrtRSI;
      b1ki = Bcoeff(&st, 1.0, 1.0 + (real_T)j, x->
                    data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i35,
        &db_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
        i36, &wd_emlrtBCI, sp) - 1], gridT);

      /*  calculate B1 */
      loop_ub = b1k->size[0];
      d9 = 2.0 * (1.0 + (real_T)j);
      b_a1k = b1k->size[1];
      emlrtDynamicBoundsCheckFastR2012b(i, 1, loop_ub, &x_emlrtBCI, sp);
      i35 = x->size[1];
      loop_ub = (int32_T)k;
      i36 = t->size[1];
      st.site = &m_emlrtRSI;
      d10 = Bcoeff(&st, 0.0, 1.0 + (real_T)j, x->
                   data[emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i35,
        &eb_emlrtBCI, sp) - 1], t->data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
        i36, &xd_emlrtBCI, sp) - 1], gridT);
      i35 = (int32_T)(d9 + -1.0);
      b1k->data[(i + b1k->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i35, 1,
        b_a1k, &fb_emlrtBCI, sp) - 1)) - 1] = d10;
      i35 = (int32_T)d9;
      b1k->data[(i + b1k->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i35, 1,
        b_a1k, &fb_emlrtBCI, sp) - 1)) - 1] = b1ki;

      /*  Calculate B1* */
      loop_ub = b1s->size[0];
      d9 = 2.0 * (1.0 + (real_T)j);
      b_a1k = b1s->size[1];
      emlrtDynamicBoundsCheckFastR2012b(i, 1, loop_ub, &y_emlrtBCI, sp);
      i35 = (int32_T)(d9 + -1.0);
      b1s->data[(i + b1s->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i35, 1,
        b_a1k, &gb_emlrtBCI, sp) - 1)) - 1] = b1ki;
      i35 = (int32_T)d9;
      b1s->data[(i + b1s->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i35, 1,
        b_a1k, &gb_emlrtBCI, sp) - 1)) - 1] = -b1ki;
      j++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (CalculateA1B1B1Star.c) */
