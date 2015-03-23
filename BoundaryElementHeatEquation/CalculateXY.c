/*
 * CalculateXY.c
 *
 * Code generation for function 'CalculateXY'
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
#include "mrdivide.h"
#include "sum.h"
#include "eml_int_forloop_overflow_check.h"
#include "BoundaryElementHeatEquation_mexutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo fb_emlrtRSI = { 21, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtRSInfo gb_emlrtRSI = { 22, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtRSInfo hb_emlrtRSI = { 24, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtRSInfo ib_emlrtRSI = { 29, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtRSInfo jb_emlrtRSI = { 32, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtRSInfo kb_emlrtRSI = { 34, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtRSInfo me_emlrtRSI = { 70, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 1, 17, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 17, 1, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 18, 1, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 22, 5, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtRTEInfo ic_emlrtRTEI = { 19, 1, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtECInfo emlrtECI = { 2, 22, 27, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtECInfo b_emlrtECI = { 2, 22, 12, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtECInfo c_emlrtECI = { 2, 23, 25, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtECInfo d_emlrtECI = { 2, 23, 12, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtECInfo e_emlrtECI = { 2, 24, 18, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtECInfo f_emlrtECI = { 2, 29, 16, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 24, 12, "s1", "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m",
  0 };

static emlrtECInfo g_emlrtECI = { -1, 24, 5, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 29, 10, "s2", "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m",
  0 };

static emlrtECInfo h_emlrtECI = { -1, 29, 5, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtECInfo i_emlrtECI = { -1, 34, 5, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m"
};

static emlrtDCInfo hb_emlrtDCI = { 17, 12, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m",
  1 };

static emlrtDCInfo ib_emlrtDCI = { 17, 12, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m",
  4 };

static emlrtDCInfo jb_emlrtDCI = { 17, 14, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m",
  1 };

static emlrtDCInfo kb_emlrtDCI = { 17, 14, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m",
  4 };

static emlrtDCInfo lb_emlrtDCI = { 17, 16, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m",
  1 };

static emlrtDCInfo mb_emlrtDCI = { 17, 16, "CalculateXY",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateXY.m",
  4 };

/* Function Definitions */
void CalculateXY(const emlrtStack *sp, real_T N, real_T N0, const
                 emxArray_real_T *t, const emxArray_real_T *gridT, const
                 emxArray_real_T *x, const emxArray_real_T *gridX, const
                 emxArray_real_T *E, const emxArray_real_T *A, const
                 emxArray_real_T *B, const emxArray_real_T *Bstar, const
                 emxArray_real_T *C, const emxArray_real_T *D, const
                 emxArray_real_T *u0, const emxArray_real_T *f, real_T alpha,
                 emxArray_real_T *X, emxArray_real_T *Y)
{
  emxArray_real_T *s1;
  int32_T vstride;
  real_T y;
  real_T s;
  real_T d8;
  int32_T iy;
  emxArray_real_T *s2;
  int32_T k;
  emxArray_real_T *ax;
  emxArray_real_T *a1k;
  emxArray_real_T *b1k;
  emxArray_real_T *r0;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *b_C;
  emxArray_real_T *b;
  emxArray_real_T *r3;
  emxArray_real_T *b_a1k;
  emxArray_real_T *b_A;
  int32_T b_b1k[2];
  int32_T b_ax[2];
  int32_T b_Bstar[2];
  const mxArray *b_y;
  static const int32_T iv0[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv1[45];
  static const char_T cv2[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *c_y;
  static const int32_T iv1[2] = { 1, 21 };

  char_T cv3[21];
  static const char_T cv4[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  int32_T j;
  int32_T ixstart;
  int32_T ix;
  int32_T i34;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  int32_T iv2[2];
  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 45 };

  const mxArray *e_y;
  static const int32_T iv4[2] = { 1, 21 };

  const mxArray *f_y;
  static const int32_T iv5[2] = { 1, 45 };

  const mxArray *g_y;
  static const int32_T iv6[2] = { 1, 21 };

  int32_T iv7[1];
  uint32_T sz[3];
  boolean_T b0;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_real_T(sp, &s1, 3, &j_emlrtRTEI, true);

  /*  N - number pf time points */
  /*  N0 - number of space points */
  /*  t - time points */
  /*  gridT - grid for time points */
  /*  x - space points */
  /*  gridX - grid for space points */
  /*  A- the calculated A matrix  */
  /*  B - the calculated B matrix  */
  /*  BStar- the calculated Bstar matrix  */
  /*  C - the calculated C matrix  */
  /*  D - the calculated D matrix  */
  /*  u0 - initial data u(x,0)  */
  /*  f - multiplicative function for the source f(x,t)r(t) */
  /*  alpha- constant for the boundary vcondition u_x-alpha*u = 0 */
  vstride = s1->size[0] * s1->size[1] * s1->size[2];
  y = emlrtNonNegativeCheckFastR2012b(N, &ib_emlrtDCI, sp);
  s1->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(y, &hb_emlrtDCI, sp);
  y = emlrtNonNegativeCheckFastR2012b(N, &kb_emlrtDCI, sp);
  s1->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(y, &jb_emlrtDCI, sp);
  y = emlrtNonNegativeCheckFastR2012b(N0, &mb_emlrtDCI, sp);
  s1->size[2] = (int32_T)emlrtIntegerCheckFastR2012b(y, &lb_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)s1, vstride, (int32_T)sizeof(real_T),
                    &h_emlrtRTEI);
  y = emlrtNonNegativeCheckFastR2012b(N, &ib_emlrtDCI, sp);
  s = emlrtNonNegativeCheckFastR2012b(N, &kb_emlrtDCI, sp);
  d8 = emlrtNonNegativeCheckFastR2012b(N0, &mb_emlrtDCI, sp);
  iy = (int32_T)emlrtIntegerCheckFastR2012b(y, &hb_emlrtDCI, sp) * (int32_T)
    emlrtIntegerCheckFastR2012b(s, &jb_emlrtDCI, sp) * (int32_T)
    emlrtIntegerCheckFastR2012b(d8, &lb_emlrtDCI, sp);
  for (vstride = 0; vstride < iy; vstride++) {
    s1->data[vstride] = 0.0;
  }

  emxInit_real_T(sp, &s2, 2, &k_emlrtRTEI, true);
  vstride = s2->size[0] * s2->size[1];
  s2->size[0] = (int32_T)N;
  s2->size[1] = (int32_T)N0;
  emxEnsureCapacity(sp, (emxArray__common *)s2, vstride, (int32_T)sizeof(real_T),
                    &h_emlrtRTEI);
  iy = (int32_T)N * (int32_T)N0;
  for (vstride = 0; vstride < iy; vstride++) {
    s2->data[vstride] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, N0, mxDOUBLE_CLASS, (int32_T)N0,
    &ic_emlrtRTEI, sp);
  k = 0;
  emxInit_real_T(sp, &ax, 2, &l_emlrtRTEI, true);
  emxInit_real_T(sp, &a1k, 2, &h_emlrtRTEI, true);
  emxInit_real_T(sp, &b1k, 2, &h_emlrtRTEI, true);
  emxInit_real_T(sp, &r0, 2, &h_emlrtRTEI, true);
  emxInit_int32_T(sp, &r1, 1, &h_emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 1, &h_emlrtRTEI, true);
  c_emxInit_real_T(sp, &b_C, 1, &h_emlrtRTEI, true);
  c_emxInit_real_T(sp, &b, 1, &h_emlrtRTEI, true);
  c_emxInit_real_T(sp, &r3, 1, &h_emlrtRTEI, true);
  emxInit_real_T(sp, &b_a1k, 2, &h_emlrtRTEI, true);
  emxInit_real_T(sp, &b_A, 2, &h_emlrtRTEI, true);
  while (k <= (int32_T)N0 - 1) {
    /*  space variable */
    /*  components of X */
    st.site = &fb_emlrtRSI;
    b_CalculateA1B1B1Star(&st, 1.0 + (real_T)k, x, t, gridT, N, a1k, b1k, ax);

    /*  %(a1k-(1/alpha)*(b1k-b1s)) */
    for (vstride = 0; vstride < 2; vstride++) {
      b_b1k[vstride] = b1k->size[vstride];
    }

    for (vstride = 0; vstride < 2; vstride++) {
      b_ax[vstride] = ax->size[vstride];
    }

    emlrtSizeEqCheck2DFastR2012b(b_b1k, b_ax, &emlrtECI, sp);
    y = 1.0 / alpha;
    vstride = b1k->size[0] * b1k->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b1k, vstride, (int32_T)sizeof
                      (real_T), &h_emlrtRTEI);
    vstride = b1k->size[0];
    iy = b1k->size[1];
    iy *= vstride;
    for (vstride = 0; vstride < iy; vstride++) {
      b1k->data[vstride] = y * (b1k->data[vstride] + ax->data[vstride]);
    }

    for (vstride = 0; vstride < 2; vstride++) {
      b_ax[vstride] = a1k->size[vstride];
    }

    for (vstride = 0; vstride < 2; vstride++) {
      b_b1k[vstride] = b1k->size[vstride];
    }

    emlrtSizeEqCheck2DFastR2012b(b_ax, b_b1k, &b_emlrtECI, sp);
    for (vstride = 0; vstride < 2; vstride++) {
      b_ax[vstride] = B->size[vstride];
    }

    for (vstride = 0; vstride < 2; vstride++) {
      b_Bstar[vstride] = Bstar->size[vstride];
    }

    emlrtSizeEqCheck2DFastR2012b(b_ax, b_Bstar, &c_emlrtECI, sp);
    y = 1.0 / alpha;
    vstride = r0->size[0] * r0->size[1];
    r0->size[0] = B->size[0];
    r0->size[1] = B->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)r0, vstride, (int32_T)sizeof
                      (real_T), &h_emlrtRTEI);
    iy = B->size[0] * B->size[1];
    for (vstride = 0; vstride < iy; vstride++) {
      r0->data[vstride] = y * (B->data[vstride] + Bstar->data[vstride]);
    }

    for (vstride = 0; vstride < 2; vstride++) {
      b_ax[vstride] = A->size[vstride];
    }

    for (vstride = 0; vstride < 2; vstride++) {
      b_Bstar[vstride] = r0->size[vstride];
    }

    emlrtSizeEqCheck2DFastR2012b(b_ax, b_Bstar, &d_emlrtECI, sp);
    vstride = b_a1k->size[0] * b_a1k->size[1];
    b_a1k->size[0] = a1k->size[0];
    b_a1k->size[1] = a1k->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_a1k, vstride, (int32_T)sizeof
                      (real_T), &h_emlrtRTEI);
    iy = a1k->size[0] * a1k->size[1];
    for (vstride = 0; vstride < iy; vstride++) {
      b_a1k->data[vstride] = a1k->data[vstride] - b1k->data[vstride];
    }

    vstride = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_A, vstride, (int32_T)sizeof
                      (real_T), &h_emlrtRTEI);
    iy = A->size[0] * A->size[1];
    for (vstride = 0; vstride < iy; vstride++) {
      b_A->data[vstride] = A->data[vstride] - r0->data[vstride];
    }

    st.site = &gb_emlrtRSI;
    mrdivide(&st, b_a1k, b_A, ax);
    st.site = &hb_emlrtRSI;
    vstride = a1k->size[0] * a1k->size[1];
    a1k->size[0] = ax->size[0];
    a1k->size[1] = ax->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)a1k, vstride, (int32_T)sizeof
                      (real_T), &h_emlrtRTEI);
    iy = ax->size[0] * ax->size[1];
    for (vstride = 0; vstride < iy; vstride++) {
      a1k->data[vstride] = -ax->data[vstride];
    }

    b_st.site = &he_emlrtRSI;
    if (!(a1k->size[1] == D->size[0])) {
      if (((a1k->size[0] == 1) && (a1k->size[1] == 1)) || ((D->size[0] == 1) &&
           (D->size[1] == 1))) {
        b_y = NULL;
        m0 = emlrtCreateCharArray(2, iv0);
        for (iy = 0; iy < 45; iy++) {
          cv1[iy] = cv2[iy];
        }

        emlrtInitCharArrayR2013a(&b_st, 45, m0, cv1);
        emlrtAssign(&b_y, m0);
        c_st.site = &fh_emlrtRSI;
        d_st.site = &vg_emlrtRSI;
        b_error(&c_st, message(&d_st, b_y, &j_emlrtMCI), &k_emlrtMCI);
      } else {
        c_y = NULL;
        m0 = emlrtCreateCharArray(2, iv1);
        for (iy = 0; iy < 21; iy++) {
          cv3[iy] = cv4[iy];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m0, cv3);
        emlrtAssign(&c_y, m0);
        c_st.site = &gh_emlrtRSI;
        d_st.site = &wg_emlrtRSI;
        b_error(&c_st, message(&d_st, c_y, &l_emlrtMCI), &m_emlrtMCI);
      }
    }

    if ((a1k->size[1] == 1) || (D->size[0] == 1)) {
      vstride = b1k->size[0] * b1k->size[1];
      b1k->size[0] = a1k->size[0];
      b1k->size[1] = D->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)b1k, vstride, (int32_T)sizeof
                        (real_T), &h_emlrtRTEI);
      iy = a1k->size[0];
      for (vstride = 0; vstride < iy; vstride++) {
        j = D->size[1];
        for (ixstart = 0; ixstart < j; ixstart++) {
          b1k->data[vstride + b1k->size[0] * ixstart] = 0.0;
          ix = a1k->size[1];
          for (i34 = 0; i34 < ix; i34++) {
            b1k->data[vstride + b1k->size[0] * ixstart] += a1k->data[vstride +
              a1k->size[0] * i34] * D->data[i34 + D->size[0] * ixstart];
          }
        }
      }
    } else {
      unnamed_idx_0 = (uint32_T)a1k->size[0];
      unnamed_idx_1 = (uint32_T)D->size[1];
      vstride = r0->size[0] * r0->size[1];
      r0->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)r0, vstride, (int32_T)sizeof
                        (real_T), &h_emlrtRTEI);
      vstride = r0->size[0] * r0->size[1];
      r0->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity(&st, (emxArray__common *)r0, vstride, (int32_T)sizeof
                        (real_T), &h_emlrtRTEI);
      iy = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
      for (vstride = 0; vstride < iy; vstride++) {
        r0->data[vstride] = 0.0;
      }

      b_st.site = &ge_emlrtRSI;
      c_st.site = &ie_emlrtRSI;
      vstride = b1k->size[0] * b1k->size[1];
      b1k->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)b1k, vstride, (int32_T)sizeof
                        (real_T), &h_emlrtRTEI);
      vstride = b1k->size[0] * b1k->size[1];
      b1k->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity(&c_st, (emxArray__common *)b1k, vstride, (int32_T)sizeof
                        (real_T), &h_emlrtRTEI);
      iy = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
      for (vstride = 0; vstride < iy; vstride++) {
        b1k->data[vstride] = 0.0;
      }

      if ((a1k->size[0] < 1) || (D->size[1] < 1) || (a1k->size[1] < 1)) {
      } else {
        e_st.site = &je_emlrtRSI;
        y = 1.0;
        s = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        m_t = (ptrdiff_t)(a1k->size[0]);
        n_t = (ptrdiff_t)(D->size[1]);
        k_t = (ptrdiff_t)(a1k->size[1]);
        lda_t = (ptrdiff_t)(a1k->size[0]);
        ldb_t = (ptrdiff_t)(a1k->size[1]);
        ldc_t = (ptrdiff_t)(a1k->size[0]);
        alpha1_t = (double *)(&y);
        vstride = a1k->size[0] * a1k->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, vstride, &td_emlrtBCI, &e_st);
        Aia0_t = (double *)(&a1k->data[0]);
        vstride = D->size[0] * D->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, vstride, &td_emlrtBCI, &e_st);
        Bib0_t = (double *)(&D->data[0]);
        beta1_t = (double *)(&s);
        vstride = r0->size[0] * r0->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, vstride, &td_emlrtBCI, &e_st);
        Cic0_t = (double *)(&b1k->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }

    st.site = &hb_emlrtRSI;
    b_Done(&st, 1.0 + (real_T)k, x, gridX, t, gridT, f, r0);
    for (vstride = 0; vstride < 2; vstride++) {
      b_b1k[vstride] = b1k->size[vstride];
    }

    for (vstride = 0; vstride < 2; vstride++) {
      b_Bstar[vstride] = r0->size[vstride];
    }

    emlrtSizeEqCheck2DFastR2012b(b_b1k, b_Bstar, &e_emlrtECI, sp);
    iy = s1->size[0];
    vstride = r1->size[0];
    r1->size[0] = iy;
    emxEnsureCapacity(sp, (emxArray__common *)r1, vstride, (int32_T)sizeof
                      (int32_T), &h_emlrtRTEI);
    for (vstride = 0; vstride < iy; vstride++) {
      r1->data[vstride] = vstride;
    }

    iy = s1->size[1];
    vstride = r2->size[0];
    r2->size[0] = iy;
    emxEnsureCapacity(sp, (emxArray__common *)r2, vstride, (int32_T)sizeof
                      (int32_T), &h_emlrtRTEI);
    for (vstride = 0; vstride < iy; vstride++) {
      r2->data[vstride] = vstride;
    }

    vstride = s1->size[2];
    ixstart = k + 1;
    emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, vstride, &rd_emlrtBCI, sp);
    iv2[0] = r1->size[0];
    iv2[1] = r2->size[0];
    emlrtSubAssignSizeCheckR2012b(iv2, 2, *(int32_T (*)[2])b1k->size, 2,
      &g_emlrtECI, sp);
    iy = b1k->size[1];
    for (vstride = 0; vstride < iy; vstride++) {
      j = b1k->size[0];
      for (ixstart = 0; ixstart < j; ixstart++) {
        s1->data[(r1->data[ixstart] + s1->size[0] * r2->data[vstride]) +
          s1->size[0] * s1->size[1] * k] = b1k->data[ixstart + b1k->size[0] *
          vstride] + r0->data[ixstart + r0->size[0] * vstride];
      }
    }

    /*  components of Y */
    /*  it is the same calculation as ax (a1k-(1/alpha)*(b1k+b1s))/... */
    /*           (A-(1/alpha)*(B+Bstar)); */
    st.site = &ib_emlrtRSI;
    b_st.site = &he_emlrtRSI;
    if (!(ax->size[1] == C->size[0])) {
      if (((ax->size[0] == 1) && (ax->size[1] == 1)) || ((C->size[0] == 1) &&
           (C->size[1] == 1))) {
        d_y = NULL;
        m0 = emlrtCreateCharArray(2, iv3);
        for (iy = 0; iy < 45; iy++) {
          cv1[iy] = cv2[iy];
        }

        emlrtInitCharArrayR2013a(&b_st, 45, m0, cv1);
        emlrtAssign(&d_y, m0);
        c_st.site = &fh_emlrtRSI;
        d_st.site = &vg_emlrtRSI;
        b_error(&c_st, message(&d_st, d_y, &j_emlrtMCI), &k_emlrtMCI);
      } else {
        e_y = NULL;
        m0 = emlrtCreateCharArray(2, iv4);
        for (iy = 0; iy < 21; iy++) {
          cv3[iy] = cv4[iy];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m0, cv3);
        emlrtAssign(&e_y, m0);
        c_st.site = &gh_emlrtRSI;
        d_st.site = &wg_emlrtRSI;
        b_error(&c_st, message(&d_st, e_y, &l_emlrtMCI), &m_emlrtMCI);
      }
    }

    if ((ax->size[1] == 1) || (C->size[0] == 1)) {
      vstride = b1k->size[0] * b1k->size[1];
      b1k->size[0] = ax->size[0];
      b1k->size[1] = C->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)b1k, vstride, (int32_T)sizeof
                        (real_T), &h_emlrtRTEI);
      iy = ax->size[0];
      for (vstride = 0; vstride < iy; vstride++) {
        j = C->size[1];
        for (ixstart = 0; ixstart < j; ixstart++) {
          b1k->data[vstride + b1k->size[0] * ixstart] = 0.0;
          ix = ax->size[1];
          for (i34 = 0; i34 < ix; i34++) {
            b1k->data[vstride + b1k->size[0] * ixstart] += ax->data[vstride +
              ax->size[0] * i34] * C->data[i34 + C->size[0] * ixstart];
          }
        }
      }
    } else {
      unnamed_idx_0 = (uint32_T)ax->size[0];
      unnamed_idx_1 = (uint32_T)C->size[1];
      vstride = r0->size[0] * r0->size[1];
      r0->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)r0, vstride, (int32_T)sizeof
                        (real_T), &h_emlrtRTEI);
      vstride = r0->size[0] * r0->size[1];
      r0->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity(&st, (emxArray__common *)r0, vstride, (int32_T)sizeof
                        (real_T), &h_emlrtRTEI);
      iy = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
      for (vstride = 0; vstride < iy; vstride++) {
        r0->data[vstride] = 0.0;
      }

      b_st.site = &ge_emlrtRSI;
      c_st.site = &ie_emlrtRSI;
      vstride = b1k->size[0] * b1k->size[1];
      b1k->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)b1k, vstride, (int32_T)sizeof
                        (real_T), &h_emlrtRTEI);
      vstride = b1k->size[0] * b1k->size[1];
      b1k->size[1] = (int32_T)unnamed_idx_1;
      emxEnsureCapacity(&c_st, (emxArray__common *)b1k, vstride, (int32_T)sizeof
                        (real_T), &h_emlrtRTEI);
      iy = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
      for (vstride = 0; vstride < iy; vstride++) {
        b1k->data[vstride] = 0.0;
      }

      if ((ax->size[0] < 1) || (C->size[1] < 1) || (ax->size[1] < 1)) {
      } else {
        e_st.site = &je_emlrtRSI;
        y = 1.0;
        s = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        m_t = (ptrdiff_t)(ax->size[0]);
        n_t = (ptrdiff_t)(C->size[1]);
        k_t = (ptrdiff_t)(ax->size[1]);
        lda_t = (ptrdiff_t)(ax->size[0]);
        ldb_t = (ptrdiff_t)(ax->size[1]);
        ldc_t = (ptrdiff_t)(ax->size[0]);
        alpha1_t = (double *)(&y);
        vstride = ax->size[0] * ax->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, vstride, &td_emlrtBCI, &e_st);
        Aia0_t = (double *)(&ax->data[0]);
        vstride = C->size[0] * C->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, vstride, &td_emlrtBCI, &e_st);
        Bib0_t = (double *)(&C->data[0]);
        beta1_t = (double *)(&s);
        vstride = r0->size[0] * r0->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, vstride, &td_emlrtBCI, &e_st);
        Cic0_t = (double *)(&b1k->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }

    st.site = &ib_emlrtRSI;
    Cone(&st, 1.0 + (real_T)k, x, gridX, t, r0);
    for (vstride = 0; vstride < 2; vstride++) {
      b_b1k[vstride] = b1k->size[vstride];
    }

    for (vstride = 0; vstride < 2; vstride++) {
      b_Bstar[vstride] = r0->size[vstride];
    }

    emlrtSizeEqCheck2DFastR2012b(b_b1k, b_Bstar, &f_emlrtECI, sp);
    iy = s2->size[0];
    vstride = r1->size[0];
    r1->size[0] = iy;
    emxEnsureCapacity(sp, (emxArray__common *)r1, vstride, (int32_T)sizeof
                      (int32_T), &h_emlrtRTEI);
    for (vstride = 0; vstride < iy; vstride++) {
      r1->data[vstride] = vstride;
    }

    vstride = s2->size[1];
    ixstart = k + 1;
    emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, vstride, &sd_emlrtBCI, sp);
    st.site = &ib_emlrtRSI;
    vstride = b1k->size[0] * b1k->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b1k, vstride, (int32_T)sizeof
                      (real_T), &h_emlrtRTEI);
    vstride = b1k->size[0];
    iy = b1k->size[1];
    iy *= vstride;
    for (vstride = 0; vstride < iy; vstride++) {
      b1k->data[vstride] -= r0->data[vstride];
    }

    vstride = b->size[0];
    b->size[0] = u0->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b, vstride, (int32_T)sizeof
                      (real_T), &h_emlrtRTEI);
    iy = u0->size[1];
    for (vstride = 0; vstride < iy; vstride++) {
      b->data[vstride] = u0->data[u0->size[0] * vstride];
    }

    b_st.site = &he_emlrtRSI;
    if (!(b1k->size[1] == b->size[0])) {
      if (((b1k->size[0] == 1) && (b1k->size[1] == 1)) || (b->size[0] == 1)) {
        f_y = NULL;
        m0 = emlrtCreateCharArray(2, iv5);
        for (iy = 0; iy < 45; iy++) {
          cv1[iy] = cv2[iy];
        }

        emlrtInitCharArrayR2013a(&b_st, 45, m0, cv1);
        emlrtAssign(&f_y, m0);
        c_st.site = &fh_emlrtRSI;
        d_st.site = &vg_emlrtRSI;
        b_error(&c_st, message(&d_st, f_y, &j_emlrtMCI), &k_emlrtMCI);
      } else {
        g_y = NULL;
        m0 = emlrtCreateCharArray(2, iv6);
        for (iy = 0; iy < 21; iy++) {
          cv3[iy] = cv4[iy];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m0, cv3);
        emlrtAssign(&g_y, m0);
        c_st.site = &gh_emlrtRSI;
        d_st.site = &wg_emlrtRSI;
        b_error(&c_st, message(&d_st, g_y, &l_emlrtMCI), &m_emlrtMCI);
      }
    }

    if ((b1k->size[1] == 1) || (b->size[0] == 1)) {
      vstride = b_C->size[0];
      b_C->size[0] = b1k->size[0];
      emxEnsureCapacity(&st, (emxArray__common *)b_C, vstride, (int32_T)sizeof
                        (real_T), &h_emlrtRTEI);
      iy = b1k->size[0];
      for (vstride = 0; vstride < iy; vstride++) {
        b_C->data[vstride] = 0.0;
        j = b1k->size[1];
        for (ixstart = 0; ixstart < j; ixstart++) {
          b_C->data[vstride] += b1k->data[vstride + b1k->size[0] * ixstart] *
            b->data[ixstart];
        }
      }
    } else {
      unnamed_idx_0 = (uint32_T)b1k->size[0];
      vstride = r3->size[0];
      r3->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)r3, vstride, (int32_T)sizeof
                        (real_T), &h_emlrtRTEI);
      iy = (int32_T)unnamed_idx_0;
      for (vstride = 0; vstride < iy; vstride++) {
        r3->data[vstride] = 0.0;
      }

      b_st.site = &ge_emlrtRSI;
      c_st.site = &ie_emlrtRSI;
      vstride = b_C->size[0];
      b_C->size[0] = (int32_T)unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)b_C, vstride, (int32_T)sizeof
                        (real_T), &h_emlrtRTEI);
      iy = (int32_T)unnamed_idx_0;
      for (vstride = 0; vstride < iy; vstride++) {
        b_C->data[vstride] = 0.0;
      }

      if ((b1k->size[0] < 1) || (b1k->size[1] < 1)) {
      } else {
        e_st.site = &je_emlrtRSI;
        y = 1.0;
        s = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        m_t = (ptrdiff_t)(b1k->size[0]);
        n_t = (ptrdiff_t)(1);
        k_t = (ptrdiff_t)(b1k->size[1]);
        lda_t = (ptrdiff_t)(b1k->size[0]);
        ldb_t = (ptrdiff_t)(b1k->size[1]);
        ldc_t = (ptrdiff_t)(b1k->size[0]);
        alpha1_t = (double *)(&y);
        vstride = b1k->size[0] * b1k->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, vstride, &td_emlrtBCI, &e_st);
        Aia0_t = (double *)(&b1k->data[0]);
        vstride = b->size[0];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, vstride, &td_emlrtBCI, &e_st);
        Bib0_t = (double *)(&b->data[0]);
        beta1_t = (double *)(&s);
        vstride = r3->size[0];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, vstride, &td_emlrtBCI, &e_st);
        Cic0_t = (double *)(&b_C->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }

    iv7[0] = r1->size[0];
    emlrtSubAssignSizeCheckR2012b(iv7, 1, *(int32_T (*)[1])b_C->size, 1,
      &h_emlrtECI, sp);
    iy = b_C->size[0];
    for (vstride = 0; vstride < iy; vstride++) {
      s2->data[r1->data[vstride] + s2->size[0] * k] = b_C->data[vstride];
    }

    k++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&b_A);
  emxFree_real_T(&b_a1k);
  emxFree_real_T(&r3);
  emxFree_real_T(&b_C);
  emxFree_int32_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_real_T(&r0);
  emxFree_real_T(&b1k);
  emxFree_real_T(&a1k);
  emxFree_real_T(&ax);
  y = 1.0 / N0;
  st.site = &jb_emlrtRSI;
  for (vstride = 0; vstride < 3; vstride++) {
    sz[vstride] = (uint32_T)s1->size[vstride];
  }

  vstride = X->size[0] * X->size[1];
  X->size[0] = (int32_T)sz[0];
  X->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(&st, (emxArray__common *)X, vstride, (int32_T)sizeof(real_T),
                    &i_emlrtRTEI);
  if ((s1->size[0] == 0) || (s1->size[1] == 0) || (s1->size[2] == 0)) {
    vstride = X->size[0] * X->size[1];
    X->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(&st, (emxArray__common *)X, vstride, (int32_T)sizeof
                      (real_T), &h_emlrtRTEI);
    vstride = X->size[0] * X->size[1];
    X->size[1] = (int32_T)sz[1];
    emxEnsureCapacity(&st, (emxArray__common *)X, vstride, (int32_T)sizeof
                      (real_T), &h_emlrtRTEI);
    iy = (int32_T)sz[0] * (int32_T)sz[1];
    for (vstride = 0; vstride < iy; vstride++) {
      X->data[vstride] = 0.0;
    }
  } else {
    k = 3;
    while ((k > 2) && (s1->size[2] == 1)) {
      k = 2;
    }

    if (3 > k) {
      vstride = s1->size[0] * s1->size[1] * s1->size[2];
    } else {
      vstride = 1;
      for (k = 0; k < 2; k++) {
        vstride *= s1->size[k];
      }
    }

    iy = -1;
    b_st.site = &me_emlrtRSI;
    ixstart = -1;
    b_st.site = &ne_emlrtRSI;
    if (1 > vstride) {
      b0 = false;
    } else {
      b0 = (vstride > 2147483646);
    }

    if (b0) {
      c_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (j = 1; j <= vstride; j++) {
      ixstart++;
      ix = ixstart;
      s = s1->data[ixstart];
      b_st.site = &oe_emlrtRSI;
      if (2 > s1->size[2]) {
        overflow = false;
      } else {
        overflow = (s1->size[2] > 2147483646);
      }

      if (overflow) {
        c_st.site = &ic_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (k = 2; k <= s1->size[2]; k++) {
        ix += vstride;
        s += s1->data[ix];
      }

      iy++;
      X->data[iy] = s;
    }
  }

  emxFree_real_T(&s1);
  vstride = X->size[0] * X->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)X, vstride, (int32_T)sizeof(real_T),
                    &h_emlrtRTEI);
  iy = X->size[0];
  vstride = X->size[1];
  iy *= vstride;
  for (vstride = 0; vstride < iy; vstride++) {
    X->data[vstride] *= y;
  }

  vstride = Y->size[0];
  Y->size[0] = E->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Y, vstride, (int32_T)sizeof(real_T),
                    &h_emlrtRTEI);
  iy = E->size[1];
  for (vstride = 0; vstride < iy; vstride++) {
    Y->data[vstride] = E->data[E->size[0] * vstride];
  }

  y = 1.0 / N0;
  st.site = &kb_emlrtRSI;
  sum(&st, s2, b);
  vstride = b->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b, vstride, (int32_T)sizeof(real_T),
                    &h_emlrtRTEI);
  iy = b->size[0];
  emxFree_real_T(&s2);
  for (vstride = 0; vstride < iy; vstride++) {
    b->data[vstride] *= y;
  }

  vstride = Y->size[0];
  ixstart = b->size[0];
  emlrtSizeEqCheck1DFastR2012b(vstride, ixstart, &i_emlrtECI, sp);
  vstride = Y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)Y, vstride, (int32_T)sizeof(real_T),
                    &h_emlrtRTEI);
  iy = Y->size[0];
  for (vstride = 0; vstride < iy; vstride++) {
    Y->data[vstride] += b->data[vstride];
  }

  emxFree_real_T(&b);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (CalculateXY.c) */
