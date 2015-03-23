/*
 * Bcoeff.c
 *
 * Code generation for function 'Bcoeff'
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
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo g_emlrtRSI = { 12, "Bcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Bcoeff.m" };

static emlrtRSInfo h_emlrtRSI = { 15, "Bcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Bcoeff.m" };

static emlrtRSInfo i_emlrtRSI = { 16, "Bcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Bcoeff.m" };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 7, 7, "gridT", "Bcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Bcoeff.m", 0 };

static emlrtDCInfo b_emlrtDCI = { 7, 7, "Bcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Bcoeff.m", 1 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 9, 15, "gridT", "Bcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Bcoeff.m", 0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 9, 29, "gridT", "Bcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Bcoeff.m", 0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 11, 15, "gridT", "Bcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Bcoeff.m", 0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 11, 28, "gridT", "Bcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Bcoeff.m", 0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 14, 10, "gridT", "Bcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Bcoeff.m", 0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 15, 33, "gridT", "Bcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Bcoeff.m", 0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 16, 33, "gridT", "Bcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Bcoeff.m", 0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 12, 33, "gridT", "Bcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Bcoeff.m", 0 };

/* Function Definitions */
real_T Bcoeff(const emlrtStack *sp, real_T ksi, real_T j, real_T x, real_T t,
              const emxArray_real_T *gridT)
{
  real_T vals;
  int32_T k;
  int32_T i1;
  boolean_T b_x[3];
  boolean_T y;
  boolean_T exitg2;
  boolean_T exitg1;
  real_T c_x;
  real_T d_x;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  evaluate the coefficient B at the  boundary ksi=0 or ksi=1; */
  /*  for the index j which describes the time steps timePoints_j, at time t and space */
  /*  point x */
  /*  timePoints is a vector describing the time descritized domain */
  k = gridT->size[1];
  i1 = (int32_T)emlrtIntegerCheckFastR2012b(j, &b_emlrtDCI, sp);
  if (t <= gridT->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, k, &n_emlrtBCI,
       sp) - 1]) {
    vals = 0.0;
  } else {
    k = gridT->size[1];
    i1 = (int32_T)j;
    b_x[0] = (t > gridT->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, k,
               &o_emlrtBCI, sp) - 1]);
    k = gridT->size[1];
    i1 = (int32_T)((uint32_T)j + 1U);
    b_x[1] = (t <= gridT->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, k,
               &p_emlrtBCI, sp) - 1]);
    b_x[2] = (x == ksi);
    y = true;
    k = 0;
    exitg2 = false;
    while ((!exitg2) && (k < 3)) {
      if (b_x[k] == 0) {
        y = false;
        exitg2 = true;
      } else {
        k++;
      }
    }

    if (y) {
      vals = 0.0;
    } else {
      k = gridT->size[1];
      i1 = (int32_T)j;
      b_x[0] = (t > gridT->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, k,
                 &q_emlrtBCI, sp) - 1]);
      k = gridT->size[1];
      i1 = (int32_T)((uint32_T)j + 1U);
      b_x[1] = (t <= gridT->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, k,
                 &r_emlrtBCI, sp) - 1]);
      b_x[2] = (x != ksi);
      y = true;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k < 3)) {
        if (b_x[k] == 0) {
          y = false;
          exitg1 = true;
        } else {
          k++;
        }
      }

      if (y) {
        st.site = &g_emlrtRSI;
        k = gridT->size[1];
        i1 = (int32_T)j;
        c_x = t - gridT->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, k,
          &v_emlrtBCI, &st) - 1];
        if (c_x < 0.0) {
          b_st.site = &f_emlrtRSI;
          eml_error(&b_st);
        }

        vals = -scalar_erf(muDoubleScalarAbs(x - ksi) / (2.0 *
          muDoubleScalarSqrt(c_x))) / 2.0;
      } else {
        k = gridT->size[1];
        i1 = (int32_T)((uint32_T)j + 1U);
        if (t > gridT->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, k,
             &s_emlrtBCI, sp) - 1]) {
          st.site = &h_emlrtRSI;
          k = gridT->size[1];
          i1 = (int32_T)j;
          c_x = t - gridT->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, k,
            &t_emlrtBCI, &st) - 1];
          if (c_x < 0.0) {
            b_st.site = &f_emlrtRSI;
            eml_error(&b_st);
          }

          st.site = &i_emlrtRSI;
          k = gridT->size[1];
          i1 = (int32_T)((uint32_T)j + 1U);
          d_x = t - gridT->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, k,
            &u_emlrtBCI, &st) - 1];
          if (d_x < 0.0) {
            b_st.site = &f_emlrtRSI;
            eml_error(&b_st);
          }

          vals = (b_scalar_erf(muDoubleScalarAbs(x - ksi) / (2.0 *
                    muDoubleScalarSqrt(c_x))) - b_scalar_erf(muDoubleScalarAbs(x
                    - ksi) / (2.0 * muDoubleScalarSqrt(d_x)))) / 2.0;
        } else {
          vals = 0.0;
        }
      }
    }
  }

  return vals;
}

/* End of code generation (Bcoeff.c) */
