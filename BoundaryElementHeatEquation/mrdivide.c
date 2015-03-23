/*
 * mrdivide.c
 *
 * Code generation for function 'mrdivide'
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
#include "mrdivide.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_warning.h"
#include "colon.h"
#include "BoundaryElementHeatEquation_mexutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo lb_emlrtRSI = { 1, "mrdivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mrdivide.p"
};

static emlrtRSInfo pb_emlrtRSI = { 100, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo qb_emlrtRSI = { 102, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo rb_emlrtRSI = { 107, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo rc_emlrtRSI = { 76, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo vd_emlrtRSI = { 28, "eml_xscal",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xscal.m"
};

static emlrtRSInfo wd_emlrtRSI = { 1, "xscal",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xscal.p"
};

static emlrtRSInfo xd_emlrtRSI = { 103, "eml_matlab_zlarf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarf.m"
};

static emlrtRSInfo yd_emlrtRSI = { 50, "eml_matlab_zlarf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarf.m"
};

static emlrtRSInfo ae_emlrtRSI = { 68, "eml_matlab_zlarf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarf.m"
};

static emlrtRSInfo be_emlrtRSI = { 75, "eml_matlab_zlarf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarf.m"
};

static emlrtRSInfo ce_emlrtRSI = { 52, "eml_xgemv",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgemv.m"
};

static emlrtRSInfo de_emlrtRSI = { 1, "xgemv",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemv.p"
};

static emlrtRSInfo ee_emlrtRSI = { 41, "eml_xgerc",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgerc.m"
};

static emlrtRSInfo fe_emlrtRSI = { 1, "xgerc",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgerc.p"
};

static emlrtMCInfo emlrtMCI = { 1, 1, "mrdivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mrdivide.p"
};

static emlrtRTEInfo m_emlrtRTEI = { 1, 2, "mrdivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mrdivide.p"
};

static emlrtBCInfo of_emlrtBCI = { -1, -1, 1, 1, "", "xscal",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xscal.p",
  0 };

static emlrtBCInfo pf_emlrtBCI = { -1, -1, 1, 1, "", "xgemv",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemv.p",
  0 };

/* Function Declarations */
static real_T b_eml_qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *B);
static real_T b_eml_xnrm2(const emlrtStack *sp, int32_T n, const emxArray_real_T
  *x, int32_T ix0);
static void b_eml_xscal(const emlrtStack *sp, int32_T n, real_T a,
  emxArray_real_T *x);
static void eml_lusolve(const emlrtStack *sp, const emxArray_real_T *A, const
  emxArray_real_T *B, emxArray_real_T *X);
static void eml_qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *B, emxArray_real_T *Y);

/* Function Definitions */
static real_T b_eml_qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *B)
{
  real_T Y;
  emxArray_real_T *b_A;
  int32_T mn;
  int32_T i;
  int32_T knt;
  int32_T b_mn;
  real_T atmp;
  real_T tau_data_idx_0;
  real_T xnorm;
  real_T beta1;
  boolean_T b6;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv24[2] = { 1, 8 };

  const mxArray *m9;
  char_T cv30[8];
  static const char_T cv31[8] = { '%', '%', '%', 'd', '.', '%', 'd', 'e' };

  char_T cv32[14];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  c_emxInit_real_T(sp, &b_A, 1, &p_emlrtRTEI, true);
  mn = (int32_T)muDoubleScalarMin(A->size[0], 1.0);
  st.site = &uc_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  c_st.site = &yc_emlrtRSI;
  i = b_A->size[0];
  b_A->size[0] = A->size[0];
  emxEnsureCapacity(&c_st, (emxArray__common *)b_A, i, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  knt = A->size[0];
  for (i = 0; i < knt; i++) {
    b_A->data[i] = A->data[i];
  }

  b_mn = muIntScalarMin_sint32(A->size[0], 1);
  if (A->size[0] == 0) {
  } else {
    d_st.site = &bd_emlrtRSI;
    d_st.site = &dd_emlrtRSI;
    b_eml_xnrm2(&d_st, A->size[0], A, 1);
    d_st.site = &ed_emlrtRSI;
    i = 1;
    while (i <= b_mn) {
      if (1 < A->size[0]) {
        d_st.site = &hd_emlrtRSI;
        atmp = b_A->data[0];
        tau_data_idx_0 = 0.0;
        e_st.site = &pd_emlrtRSI;
        xnorm = b_eml_xnrm2(&e_st, A->size[0] - 1, b_A, 2);
        if (xnorm != 0.0) {
          beta1 = muDoubleScalarHypot(b_A->data[0], xnorm);
          if (b_A->data[0] >= 0.0) {
            beta1 = -beta1;
          }

          if (muDoubleScalarAbs(beta1) < 1.0020841800044864E-292) {
            knt = 0;
            do {
              knt++;
              e_st.site = &qd_emlrtRSI;
              b_eml_xscal(&e_st, A->size[0] - 1, 9.9792015476736E+291, b_A);
              beta1 *= 9.9792015476736E+291;
              atmp *= 9.9792015476736E+291;
            } while (!(muDoubleScalarAbs(beta1) >= 1.0020841800044864E-292));

            e_st.site = &rd_emlrtRSI;
            xnorm = b_eml_xnrm2(&e_st, A->size[0] - 1, b_A, 2);
            beta1 = muDoubleScalarHypot(atmp, xnorm);
            if (atmp >= 0.0) {
              beta1 = -beta1;
            }

            tau_data_idx_0 = (beta1 - atmp) / beta1;
            e_st.site = &sd_emlrtRSI;
            b_eml_xscal(&e_st, A->size[0] - 1, 1.0 / (atmp - beta1), b_A);
            e_st.site = &td_emlrtRSI;
            if (1 > knt) {
              b6 = false;
            } else {
              b6 = (knt > 2147483646);
            }

            if (b6) {
              f_st.site = &ic_emlrtRSI;
              check_forloop_overflow_error(&f_st);
            }

            for (i = 1; i <= knt; i++) {
              beta1 *= 1.0020841800044864E-292;
            }

            atmp = beta1;
          } else {
            tau_data_idx_0 = (beta1 - b_A->data[0]) / beta1;
            xnorm = 1.0 / (b_A->data[0] - beta1);
            e_st.site = &ud_emlrtRSI;
            b_eml_xscal(&e_st, A->size[0] - 1, xnorm, b_A);
            atmp = beta1;
          }
        }
      } else {
        atmp = b_A->data[0];
        d_st.site = &id_emlrtRSI;
        tau_data_idx_0 = eml_matlab_zlarfg();
      }

      b_A->data[0] = atmp;
      i = 2;
    }
  }

  atmp = 0.0;
  if (mn > 0) {
    xnorm = muDoubleScalarMax(A->size[0], 1.0) * muDoubleScalarAbs(b_A->data[0])
      * 2.2204460492503131E-16;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i <= 0)) {
      if (muDoubleScalarAbs(b_A->data[0]) <= xnorm) {
        st.site = &vc_emlrtRSI;
        y = NULL;
        m9 = emlrtCreateCharArray(2, iv24);
        for (i = 0; i < 8; i++) {
          cv30[i] = cv31[i];
        }

        emlrtInitCharArrayR2013a(&st, 8, m9, cv30);
        emlrtAssign(&y, m9);
        b_st.site = &qh_emlrtRSI;
        emlrt_marshallIn(&b_st, c_sprintf(&b_st, b_sprintf(&b_st, y,
          emlrt_marshallOut(14.0), emlrt_marshallOut(6.0), &h_emlrtMCI),
          emlrt_marshallOut(xnorm), &i_emlrtMCI), "sprintf", cv32);
        st.site = &wc_emlrtRSI;
        b_eml_warning(&st, atmp, cv32);
        exitg1 = true;
      } else {
        atmp++;
        i = 1;
      }
    }
  }

  Y = 0.0;
  i = 0;
  while (i <= mn - 1) {
    if (tau_data_idx_0 != 0.0) {
      xnorm = B->data[0];
      for (i = 1; i - 1 <= A->size[0] - 2; i++) {
        xnorm += b_A->data[i] * B->data[i];
      }

      xnorm *= tau_data_idx_0;
      if (xnorm != 0.0) {
        B->data[0] -= xnorm;
        for (i = 1; i - 1 <= A->size[0] - 2; i++) {
          B->data[i] -= b_A->data[i] * xnorm;
        }
      }
    }

    i = 1;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, atmp, mxDOUBLE_CLASS, (int32_T)atmp,
    &kc_emlrtRTEI, sp);
  for (i = 0; i < (int32_T)atmp; i++) {
    Y = B->data[0];
  }

  emlrtForLoopVectorCheckR2012b(atmp, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)-(1.0
    + (-1.0 - atmp)), &jc_emlrtRTEI, sp);
  for (i = 0; i < (int32_T)-(1.0 + (-1.0 - atmp)); i++) {
    Y /= b_A->data[0];
  }

  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return Y;
}

static real_T b_eml_xnrm2(const emlrtStack *sp, int32_T n, const emxArray_real_T
  *x, int32_T ix0)
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i67;
  double * xix0_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &nd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
    y = 0.0;
  } else {
    b_st.site = &od_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    i67 = x->size[0];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i67,
      &de_emlrtBCI, &b_st) - 1]);
    y = dnrm2(&n_t, xix0_t, &incx_t);
  }

  return y;
}

static void b_eml_xscal(const emlrtStack *sp, int32_T n, real_T a,
  emxArray_real_T *x)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i96;
  double * xix0_t;
  double * a_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
  } else {
    b_st.site = &wd_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    i96 = x->size[0];
    emlrtDynamicBoundsCheckFastR2012b(2, 1, i96, &of_emlrtBCI, &b_st);
    xix0_t = (double *)(&x->data[1]);
    a_t = (double *)(&a);
    dscal(&n_t, a_t, xix0_t, &incx_t);
  }
}

static void eml_lusolve(const emlrtStack *sp, const emxArray_real_T *A, const
  emxArray_real_T *B, emxArray_real_T *X)
{
  emxArray_real_T *b_A;
  int32_T i38;
  int32_T iy;
  emxArray_int32_T *ipiv;
  int32_T info;
  int32_T i39;
  int32_T b;
  int32_T j;
  int32_T mmj;
  int32_T c;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  int32_T ix;
  boolean_T overflow;
  int32_T k;
  real_T temp;
  int32_T i40;
  boolean_T b_c;
  ptrdiff_t m_t;
  ptrdiff_t incy_t;
  ptrdiff_t lda_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Aiy0_t;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_A, 2, &n_emlrtRTEI, true);
  st.site = &mb_emlrtRSI;
  b_st.site = &ob_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  d_st.site = &tb_emlrtRSI;
  i38 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&d_st, (emxArray__common *)b_A, i38, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  iy = A->size[0] * A->size[1];
  for (i38 = 0; i38 < iy; i38++) {
    b_A->data[i38] = A->data[i38];
  }

  b_emxInit_int32_T(&d_st, &ipiv, 2, &n_emlrtRTEI, true);
  e_st.site = &ub_emlrtRSI;
  f_st.site = &bc_emlrtRSI;
  g_st.site = &cc_emlrtRSI;
  h_st.site = &dc_emlrtRSI;
  eml_signed_integer_colon(&h_st, muIntScalarMin_sint32(A->size[1], A->size[1]),
    ipiv);
  info = 0;
  if (A->size[1] < 1) {
  } else {
    i39 = A->size[1] - 1;
    b = muIntScalarMin_sint32(i39, A->size[1]);
    e_st.site = &vb_emlrtRSI;
    for (j = 1; j <= b; j++) {
      mmj = A->size[1] - j;
      c = (j - 1) * (A->size[1] + 1) + 1;
      e_st.site = &wb_emlrtRSI;
      f_st.site = &jc_emlrtRSI;
      if (mmj + 1 < 1) {
        iy = -1;
      } else {
        g_st.site = &kc_emlrtRSI;
        h_st.site = &kc_emlrtRSI;
        n_t = (ptrdiff_t)(mmj + 1);
        h_st.site = &kc_emlrtRSI;
        incx_t = (ptrdiff_t)(1);
        i38 = b_A->size[0] * b_A->size[1];
        xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(c, 1,
          i38, &ae_emlrtBCI, &g_st) - 1]);
        incx_t = idamax(&n_t, xix0_t, &incx_t);
        iy = (int32_T)incx_t - 1;
      }

      if (b_A->data[(c + iy) - 1] != 0.0) {
        if (iy != 0) {
          ipiv->data[j - 1] = j + iy;
          e_st.site = &xb_emlrtRSI;
          f_st.site = &lc_emlrtRSI;
          g_st.site = &mc_emlrtRSI;
          ix = j;
          iy += j;
          h_st.site = &nc_emlrtRSI;
          overflow = (A->size[1] > 2147483646);
          if (overflow) {
            i_st.site = &ic_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (k = 1; k <= A->size[1]; k++) {
            i38 = b_A->size[0] * b_A->size[1];
            temp = b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i38,
              &ce_emlrtBCI, &g_st) - 1];
            i38 = b_A->size[0] * b_A->size[1];
            i40 = b_A->size[0] * b_A->size[1];
            b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i38, &ce_emlrtBCI,
              &g_st) - 1] = b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1,
              i40, &ce_emlrtBCI, &g_st) - 1];
            i38 = b_A->size[0] * b_A->size[1];
            b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i38, &ce_emlrtBCI,
              &g_st) - 1] = temp;
            ix += A->size[1];
            iy += A->size[1];
          }
        }

        iy = c + mmj;
        e_st.site = &yb_emlrtRSI;
        if (c + 1 > iy) {
          b_c = false;
        } else {
          b_c = (iy > 2147483646);
        }

        if (b_c) {
          f_st.site = &ic_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (k = c; k + 1 <= iy; k++) {
          b_A->data[k] /= b_A->data[c - 1];
        }
      } else {
        info = j;
      }

      iy = A->size[1] - j;
      e_st.site = &ac_emlrtRSI;
      f_st.site = &oc_emlrtRSI;
      g_st.site = &pc_emlrtRSI;
      if ((mmj < 1) || (iy < 1)) {
      } else {
        h_st.site = &qc_emlrtRSI;
        temp = -1.0;
        m_t = (ptrdiff_t)(mmj);
        n_t = (ptrdiff_t)(iy);
        incx_t = (ptrdiff_t)(1);
        incy_t = (ptrdiff_t)(A->size[1]);
        lda_t = (ptrdiff_t)(A->size[1]);
        alpha1_t = (double *)(&temp);
        i38 = b_A->size[0] * b_A->size[1];
        i40 = (c + A->size[1]) + 1;
        Aia0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(i40, 1,
          i38, &be_emlrtBCI, &h_st) - 1]);
        i38 = b_A->size[0] * b_A->size[1];
        xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(c + 1,
          1, i38, &be_emlrtBCI, &h_st) - 1]);
        i38 = b_A->size[0] * b_A->size[1];
        i40 = c + A->size[1];
        Aiy0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(i40, 1,
          i38, &be_emlrtBCI, &h_st) - 1]);
        dger(&m_t, &n_t, alpha1_t, xix0_t, &incx_t, Aiy0_t, &incy_t, Aia0_t,
             &lda_t);
      }
    }

    if ((info == 0) && (!(b_A->data[(A->size[1] + b_A->size[0] * (A->size[1] - 1))
                          - 1] != 0.0))) {
      info = A->size[1];
    }
  }

  if (info > 0) {
    b_st.site = &nb_emlrtRSI;
    warn_singular(&b_st);
  }

  b_st.site = &pb_emlrtRSI;
  c_st.site = &sc_emlrtRSI;
  i38 = X->size[0] * X->size[1];
  X->size[0] = B->size[0];
  X->size[1] = B->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)X, i38, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  iy = B->size[0] * B->size[1];
  for (i38 = 0; i38 < iy; i38++) {
    X->data[i38] = B->data[i38];
  }

  if ((B->size[0] < 1) || (A->size[1] < 1)) {
  } else {
    d_st.site = &tc_emlrtRSI;
    temp = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'R';
    e_st.site = &tc_emlrtRSI;
    m_t = (ptrdiff_t)(B->size[0]);
    e_st.site = &tc_emlrtRSI;
    n_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &tc_emlrtRSI;
    lda_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &tc_emlrtRSI;
    incx_t = (ptrdiff_t)(B->size[0]);
    i38 = b_A->size[0] * b_A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i38, &yd_emlrtBCI, &d_st);
    Aia0_t = (double *)(&b_A->data[0]);
    i38 = B->size[0] * B->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i38, &yd_emlrtBCI, &d_st);
    xix0_t = (double *)(&X->data[0]);
    alpha1_t = (double *)(&temp);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          xix0_t, &incx_t);
  }

  b_st.site = &qb_emlrtRSI;
  c_st.site = &sc_emlrtRSI;
  if ((B->size[0] < 1) || (A->size[1] < 1)) {
  } else {
    d_st.site = &tc_emlrtRSI;
    temp = 1.0;
    DIAGA = 'U';
    TRANSA = 'N';
    UPLO = 'L';
    SIDE = 'R';
    e_st.site = &tc_emlrtRSI;
    m_t = (ptrdiff_t)(B->size[0]);
    e_st.site = &tc_emlrtRSI;
    n_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &tc_emlrtRSI;
    lda_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &tc_emlrtRSI;
    incx_t = (ptrdiff_t)(B->size[0]);
    i38 = b_A->size[0] * b_A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i38, &yd_emlrtBCI, &d_st);
    Aia0_t = (double *)(&b_A->data[0]);
    i38 = X->size[0] * X->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i38, &yd_emlrtBCI, &d_st);
    xix0_t = (double *)(&X->data[0]);
    alpha1_t = (double *)(&temp);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          xix0_t, &incx_t);
  }

  emxFree_real_T(&b_A);
  for (iy = A->size[1] - 2; iy + 1 > 0; iy--) {
    if (ipiv->data[iy] != iy + 1) {
      b_st.site = &rb_emlrtRSI;
      if (1 > B->size[0]) {
        overflow = false;
      } else {
        overflow = (B->size[0] > 2147483646);
      }

      if (overflow) {
        c_st.site = &ic_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (k = 0; k + 1 <= B->size[0]; k++) {
        temp = X->data[k + X->size[0] * iy];
        X->data[k + X->size[0] * iy] = X->data[k + X->size[0] * (ipiv->data[iy]
          - 1)];
        X->data[k + X->size[0] * (ipiv->data[iy] - 1)] = temp;
      }
    }
  }

  emxFree_int32_T(&ipiv);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void eml_qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *B, emxArray_real_T *Y)
{
  emxArray_real_T *b_A;
  emxArray_real_T *work;
  int32_T nb;
  int32_T mn;
  int32_T i41;
  int32_T ix;
  emxArray_real_T *tau;
  emxArray_int32_T *jpvt;
  int32_T m;
  int32_T n;
  int32_T b_mn;
  emxArray_real_T *vn1;
  emxArray_real_T *vn2;
  int32_T k;
  boolean_T overflow;
  boolean_T b2;
  int32_T i;
  int32_T i_i;
  int32_T nmi;
  int32_T mmi;
  int32_T pvt;
  int32_T iy;
  boolean_T b3;
  real_T xnorm;
  int32_T i42;
  real_T atmp;
  real_T d11;
  boolean_T b4;
  boolean_T b_i;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv12[2] = { 1, 8 };

  const mxArray *m4;
  char_T cv13[8];
  static const char_T cv14[8] = { '%', '%', '%', 'd', '.', '%', 'd', 'e' };

  char_T cv15[14];
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_A, 2, &p_emlrtRTEI, true);
  c_emxInit_real_T(sp, &work, 1, &t_emlrtRTEI, true);
  nb = B->size[1] - 1;
  mn = (int32_T)muDoubleScalarMin(A->size[0], A->size[1]);
  st.site = &uc_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  c_st.site = &yc_emlrtRSI;
  i41 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)b_A, i41, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  ix = A->size[0] * A->size[1];
  for (i41 = 0; i41 < ix; i41++) {
    b_A->data[i41] = A->data[i41];
  }

  c_emxInit_real_T(&c_st, &tau, 1, &p_emlrtRTEI, true);
  b_emxInit_int32_T(&c_st, &jpvt, 2, &p_emlrtRTEI, true);
  m = b_A->size[0];
  n = b_A->size[1];
  b_mn = muIntScalarMin_sint32(b_A->size[0], b_A->size[1]);
  i41 = tau->size[0];
  tau->size[0] = b_mn;
  emxEnsureCapacity(&c_st, (emxArray__common *)tau, i41, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  d_st.site = &ad_emlrtRSI;
  e_st.site = &bc_emlrtRSI;
  f_st.site = &cc_emlrtRSI;
  g_st.site = &dc_emlrtRSI;
  eml_signed_integer_colon(&g_st, b_A->size[1], jpvt);
  if ((b_A->size[0] == 0) || (b_A->size[1] == 0)) {
  } else {
    ix = b_A->size[1];
    i41 = work->size[0];
    work->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)work, i41, (int32_T)sizeof
                      (real_T), &p_emlrtRTEI);
    for (i41 = 0; i41 < ix; i41++) {
      work->data[i41] = 0.0;
    }

    c_emxInit_real_T(&c_st, &vn1, 1, &r_emlrtRTEI, true);
    c_emxInit_real_T(&c_st, &vn2, 1, &s_emlrtRTEI, true);
    d_st.site = &bd_emlrtRSI;
    ix = b_A->size[1];
    i41 = vn1->size[0];
    vn1->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)vn1, i41, (int32_T)sizeof
                      (real_T), &r_emlrtRTEI);
    i41 = vn2->size[0];
    vn2->size[0] = ix;
    emxEnsureCapacity(&c_st, (emxArray__common *)vn2, i41, (int32_T)sizeof
                      (real_T), &s_emlrtRTEI);
    k = 1;
    d_st.site = &cd_emlrtRSI;
    overflow = (b_A->size[1] > 2147483646);
    if (overflow) {
      e_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (ix = 0; ix + 1 <= b_A->size[1]; ix++) {
      d_st.site = &dd_emlrtRSI;
      vn1->data[ix] = eml_xnrm2(&d_st, b_A->size[0], b_A, k);
      vn2->data[ix] = vn1->data[ix];
      k += b_A->size[0];
    }

    d_st.site = &ed_emlrtRSI;
    if (1 > b_mn) {
      b2 = false;
    } else {
      b2 = (b_mn > 2147483646);
    }

    if (b2) {
      e_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (i = 1; i <= b_mn; i++) {
      i_i = (i + (i - 1) * m) - 1;
      nmi = n - i;
      mmi = m - i;
      d_st.site = &fd_emlrtRSI;
      ix = eml_ixamax(&d_st, 1 + nmi, vn1, i);
      pvt = (i + ix) - 2;
      if (pvt + 1 != i) {
        d_st.site = &gd_emlrtRSI;
        e_st.site = &lc_emlrtRSI;
        f_st.site = &mc_emlrtRSI;
        ix = 1 + m * pvt;
        iy = 1 + m * (i - 1);
        g_st.site = &nc_emlrtRSI;
        if (1 > m) {
          b3 = false;
        } else {
          b3 = (m > 2147483646);
        }

        if (b3) {
          h_st.site = &ic_emlrtRSI;
          check_forloop_overflow_error(&h_st);
        }

        for (k = 1; k <= m; k++) {
          i41 = b_A->size[0] * b_A->size[1];
          xnorm = b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i41,
            &ce_emlrtBCI, &f_st) - 1];
          i41 = b_A->size[0] * b_A->size[1];
          i42 = b_A->size[0] * b_A->size[1];
          b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i41, &ce_emlrtBCI,
            &f_st) - 1] = b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i42,
            &ce_emlrtBCI, &f_st) - 1];
          i41 = b_A->size[0] * b_A->size[1];
          b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i41, &ce_emlrtBCI,
            &f_st) - 1] = xnorm;
          ix++;
          iy++;
        }

        ix = jpvt->data[pvt];
        jpvt->data[pvt] = jpvt->data[i - 1];
        jpvt->data[i - 1] = ix;
        vn1->data[pvt] = vn1->data[i - 1];
        vn2->data[pvt] = vn2->data[i - 1];
      }

      if (i < m) {
        d_st.site = &hd_emlrtRSI;
        atmp = b_A->data[i_i];
        d11 = 0.0;
        if (1 + mmi <= 0) {
        } else {
          e_st.site = &pd_emlrtRSI;
          xnorm = eml_xnrm2(&e_st, mmi, b_A, i_i + 2);
          if (xnorm != 0.0) {
            xnorm = muDoubleScalarHypot(b_A->data[i_i], xnorm);
            if (b_A->data[i_i] >= 0.0) {
              xnorm = -xnorm;
            }

            if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
              ix = 0;
              do {
                ix++;
                e_st.site = &qd_emlrtRSI;
                eml_xscal(&e_st, mmi, 9.9792015476736E+291, b_A, i_i + 2);
                xnorm *= 9.9792015476736E+291;
                atmp *= 9.9792015476736E+291;
              } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

              e_st.site = &rd_emlrtRSI;
              xnorm = eml_xnrm2(&e_st, mmi, b_A, i_i + 2);
              xnorm = muDoubleScalarHypot(atmp, xnorm);
              if (atmp >= 0.0) {
                xnorm = -xnorm;
              }

              d11 = (xnorm - atmp) / xnorm;
              e_st.site = &sd_emlrtRSI;
              eml_xscal(&e_st, mmi, 1.0 / (atmp - xnorm), b_A, i_i + 2);
              e_st.site = &td_emlrtRSI;
              if (1 > ix) {
                b4 = false;
              } else {
                b4 = (ix > 2147483646);
              }

              if (b4) {
                f_st.site = &ic_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (k = 1; k <= ix; k++) {
                xnorm *= 1.0020841800044864E-292;
              }

              atmp = xnorm;
            } else {
              d11 = (xnorm - b_A->data[i_i]) / xnorm;
              atmp = 1.0 / (b_A->data[i_i] - xnorm);
              e_st.site = &ud_emlrtRSI;
              eml_xscal(&e_st, mmi, atmp, b_A, i_i + 2);
              atmp = xnorm;
            }
          }
        }

        tau->data[i - 1] = d11;
      } else {
        atmp = b_A->data[i_i];
        d_st.site = &id_emlrtRSI;
        tau->data[i - 1] = eml_matlab_zlarfg();
      }

      b_A->data[i_i] = atmp;
      if (i < n) {
        atmp = b_A->data[i_i];
        b_A->data[i_i] = 1.0;
        d_st.site = &jd_emlrtRSI;
        eml_matlab_zlarf(&d_st, mmi + 1, nmi, i_i + 1, tau->data[i - 1], b_A, i
                         + i * m, m, work);
        b_A->data[i_i] = atmp;
      }

      d_st.site = &kd_emlrtRSI;
      if (i + 1 > n) {
        b_i = false;
      } else {
        b_i = (n > 2147483646);
      }

      if (b_i) {
        e_st.site = &ic_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (ix = i; ix + 1 <= n; ix++) {
        if (vn1->data[ix] != 0.0) {
          xnorm = muDoubleScalarAbs(b_A->data[(i + b_A->size[0] * ix) - 1]) /
            vn1->data[ix];
          xnorm = 1.0 - xnorm * xnorm;
          if (xnorm < 0.0) {
            xnorm = 0.0;
          }

          atmp = vn1->data[ix] / vn2->data[ix];
          atmp = xnorm * (atmp * atmp);
          if (atmp <= 1.4901161193847656E-8) {
            if (i < m) {
              d_st.site = &ld_emlrtRSI;
              e_st.site = &nd_emlrtRSI;
              if (mmi < 1) {
                xnorm = 0.0;
              } else {
                f_st.site = &od_emlrtRSI;
                g_st.site = &od_emlrtRSI;
                n_t = (ptrdiff_t)(mmi);
                g_st.site = &od_emlrtRSI;
                incx_t = (ptrdiff_t)(1);
                i41 = b_A->size[0] * b_A->size[1];
                i42 = (i + m * ix) + 1;
                xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b
                                    (i42, 1, i41, &de_emlrtBCI, &f_st) - 1]);
                xnorm = dnrm2(&n_t, xix0_t, &incx_t);
              }

              vn1->data[ix] = xnorm;
              vn2->data[ix] = vn1->data[ix];
            } else {
              vn1->data[ix] = 0.0;
              vn2->data[ix] = 0.0;
            }
          } else {
            d_st.site = &md_emlrtRSI;
            vn1->data[ix] *= muDoubleScalarSqrt(xnorm);
          }
        }
      }
    }

    emxFree_real_T(&vn2);
    emxFree_real_T(&vn1);
  }

  atmp = 0.0;
  if (mn > 0) {
    xnorm = muDoubleScalarMax(A->size[0], A->size[1]) * muDoubleScalarAbs
      (b_A->data[0]) * 2.2204460492503131E-16;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= mn - 1)) {
      if (muDoubleScalarAbs(b_A->data[k + b_A->size[0] * k]) <= xnorm) {
        st.site = &vc_emlrtRSI;
        y = NULL;
        m4 = emlrtCreateCharArray(2, iv12);
        for (i = 0; i < 8; i++) {
          cv13[i] = cv14[i];
        }

        emlrtInitCharArrayR2013a(&st, 8, m4, cv13);
        emlrtAssign(&y, m4);
        b_st.site = &qh_emlrtRSI;
        emlrt_marshallIn(&b_st, c_sprintf(&b_st, b_sprintf(&b_st, y,
          emlrt_marshallOut(14.0), emlrt_marshallOut(6.0), &h_emlrtMCI),
          emlrt_marshallOut(xnorm), &i_emlrtMCI), "sprintf", cv15);
        st.site = &wc_emlrtRSI;
        b_eml_warning(&st, atmp, cv15);
        exitg1 = true;
      } else {
        atmp++;
        k++;
      }
    }
  }

  unnamed_idx_0 = (uint32_T)A->size[1];
  unnamed_idx_1 = (uint32_T)B->size[1];
  i41 = Y->size[0] * Y->size[1];
  Y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)Y, i41, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  i41 = Y->size[0] * Y->size[1];
  Y->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)Y, i41, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  ix = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
  for (i41 = 0; i41 < ix; i41++) {
    Y->data[i41] = 0.0;
  }

  for (ix = 0; ix < mn; ix++) {
    if (tau->data[ix] != 0.0) {
      for (k = 0; k <= nb; k++) {
        xnorm = B->data[ix + B->size[0] * k];
        i41 = A->size[0] + (int32_T)(1.0 - ((1.0 + (real_T)ix) + 1.0));
        emlrtForLoopVectorCheckR2012b((1.0 + (real_T)ix) + 1.0, 1.0, A->size[0],
          mxDOUBLE_CLASS, i41, &mc_emlrtRTEI, sp);
        for (i = 0; i < i41; i++) {
          unnamed_idx_0 = ((uint32_T)ix + i) + 2U;
          xnorm += b_A->data[((int32_T)unnamed_idx_0 + b_A->size[0] * ix) - 1] *
            B->data[((int32_T)unnamed_idx_0 + B->size[0] * k) - 1];
        }

        xnorm *= tau->data[ix];
        if (xnorm != 0.0) {
          B->data[ix + B->size[0] * k] -= xnorm;
          i41 = A->size[0] + (int32_T)(1.0 - ((1.0 + (real_T)ix) + 1.0));
          emlrtForLoopVectorCheckR2012b((1.0 + (real_T)ix) + 1.0, 1.0, A->size[0],
            mxDOUBLE_CLASS, i41, &lc_emlrtRTEI, sp);
          for (i = 0; i < i41; i++) {
            unnamed_idx_0 = ((uint32_T)ix + i) + 2U;
            B->data[((int32_T)unnamed_idx_0 + B->size[0] * k) - 1] -= b_A->data
              [((int32_T)unnamed_idx_0 + b_A->size[0] * ix) - 1] * xnorm;
          }
        }
      }
    }
  }

  emxFree_real_T(&tau);
  for (k = 0; k <= nb; k++) {
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, atmp, mxDOUBLE_CLASS, (int32_T)atmp,
      &kc_emlrtRTEI, sp);
    for (i = 0; i < (int32_T)atmp; i++) {
      Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] = B->data[i + B->size[0] * k];
    }

    emlrtForLoopVectorCheckR2012b(atmp, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)
      -(1.0 + (-1.0 - atmp)), &jc_emlrtRTEI, sp);
    for (ix = 0; ix < (int32_T)-(1.0 + (-1.0 - atmp)); ix++) {
      xnorm = atmp + -(real_T)ix;
      Y->data[(jpvt->data[(int32_T)xnorm - 1] + Y->size[0] * k) - 1] = eml_div
        (Y->data[(jpvt->data[(int32_T)xnorm - 1] + Y->size[0] * k) - 1],
         b_A->data[((int32_T)xnorm + b_A->size[0] * ((int32_T)xnorm - 1)) - 1]);
      for (i = 0; i < (int32_T)(xnorm - 1.0); i++) {
        Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] -= Y->data[(jpvt->data
          [(int32_T)xnorm - 1] + Y->size[0] * k) - 1] * b_A->data[i + b_A->size
          [0] * ((int32_T)xnorm - 1)];
      }
    }
  }

  emxFree_int32_T(&jpvt);
  emxFree_real_T(&work);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_mrdivide(const emlrtStack *sp, emxArray_real_T *A, const emxArray_real_T *
                B)
{
  const mxArray *y;
  static const int32_T iv70[2] = { 1, 21 };

  const mxArray *m28;
  char_T cv69[21];
  int32_T i;
  static const char_T cv70[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'd', 'i', 'm', 'a', 'g', 'r', 'e', 'e' };

  emxArray_real_T *b_B;
  emxArray_real_T *b_A;
  emxArray_int32_T *rh_emlrtRSI;
  int32_T loop_ub;
  real_T A_data[1];
  real_T alpha1;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  double * Aia0_t;
  double * Bib0_t;
  double * alpha1_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (B->size[1] == A->size[1]) {
  } else {
    y = NULL;
    m28 = emlrtCreateCharArray(2, iv70);
    for (i = 0; i < 21; i++) {
      cv69[i] = cv70[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m28, cv69);
    emlrtAssign(&y, m28);
    st.site = &lb_emlrtRSI;
    b_error(&st, message(&st, y, &emlrtMCI), &emlrtMCI);
  }

  c_emxInit_real_T(sp, &b_B, 1, &m_emlrtRTEI, true);
  c_emxInit_real_T(sp, &b_A, 1, &m_emlrtRTEI, true);
  b_emxInit_int32_T(sp, &rh_emlrtRSI, 2, &m_emlrtRTEI, true);
  if ((A->size[1] == 0) || (B->size[1] == 0)) {
    i = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)A, i, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    A->data[0] = 0.0;
  } else if (1 == B->size[1]) {
    st.site = &lb_emlrtRSI;
    loop_ub = B->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      A_data[i] = B->data[i];
    }

    b_st.site = &mb_emlrtRSI;
    c_st.site = &ob_emlrtRSI;
    d_st.site = &sb_emlrtRSI;
    e_st.site = &tb_emlrtRSI;
    f_st.site = &ub_emlrtRSI;
    g_st.site = &bc_emlrtRSI;
    h_st.site = &cc_emlrtRSI;
    i_st.site = &dc_emlrtRSI;
    eml_signed_integer_colon(&i_st, 1, rh_emlrtRSI);
    i = 0;
    f_st.site = &vb_emlrtRSI;
    if (!(B->data[0] != 0.0)) {
      i = 1;
    }

    if (i > 0) {
      c_st.site = &nb_emlrtRSI;
      d_st.site = &rc_emlrtRSI;
      eml_warning(&d_st);
    }

    c_st.site = &pb_emlrtRSI;
    d_st.site = &sc_emlrtRSI;
    e_st.site = &tc_emlrtRSI;
    alpha1 = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'R';
    f_st.site = &tc_emlrtRSI;
    m_t = (ptrdiff_t)(1);
    f_st.site = &tc_emlrtRSI;
    n_t = (ptrdiff_t)(1);
    f_st.site = &tc_emlrtRSI;
    lda_t = (ptrdiff_t)(1);
    f_st.site = &tc_emlrtRSI;
    ldb_t = (ptrdiff_t)(1);
    Aia0_t = (double *)(&A_data[0]);
    i = A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i, &yd_emlrtBCI, &e_st);
    Bib0_t = (double *)(&A->data[0]);
    alpha1_t = (double *)(&alpha1);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          Bib0_t, &ldb_t);
    c_st.site = &qb_emlrtRSI;
    d_st.site = &sc_emlrtRSI;
    e_st.site = &tc_emlrtRSI;
    alpha1 = 1.0;
    DIAGA = 'U';
    TRANSA = 'N';
    UPLO = 'L';
    SIDE = 'R';
    f_st.site = &tc_emlrtRSI;
    m_t = (ptrdiff_t)(1);
    f_st.site = &tc_emlrtRSI;
    n_t = (ptrdiff_t)(1);
    f_st.site = &tc_emlrtRSI;
    lda_t = (ptrdiff_t)(1);
    f_st.site = &tc_emlrtRSI;
    ldb_t = (ptrdiff_t)(1);
    Aia0_t = (double *)(&A_data[0]);
    i = A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i, &yd_emlrtBCI, &e_st);
    Bib0_t = (double *)(&A->data[0]);
    alpha1_t = (double *)(&alpha1);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          Bib0_t, &ldb_t);
  } else {
    i = b_B->size[0];
    b_B->size[0] = B->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_B, i, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    loop_ub = B->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_B->data[i] = B->data[B->size[0] * i];
    }

    i = b_A->size[0];
    b_A->size[0] = A->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_A, i, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_A->data[i] = A->data[A->size[0] * i];
    }

    st.site = &lb_emlrtRSI;
    alpha1 = b_eml_qrsolve(&st, b_B, b_A);
    i = A->size[0] * A->size[1];
    A->size[0] = 1;
    A->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)A, i, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    A->data[0] = alpha1;
  }

  emxFree_int32_T(&rh_emlrtRSI);
  emxFree_real_T(&b_A);
  emxFree_real_T(&b_B);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

real_T eml_div(real_T x, real_T y)
{
  return x / y;
}

int32_T eml_ixamax(const emlrtStack *sp, int32_T n, const emxArray_real_T *x,
                   int32_T ix0)
{
  int32_T idxmax;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i44;
  double * xix0_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
    idxmax = 0;
  } else {
    b_st.site = &kc_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    i44 = x->size[0];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i44,
      &ae_emlrtBCI, &b_st) - 1]);
    n_t = idamax(&n_t, xix0_t, &incx_t);
    idxmax = (int32_T)n_t;
  }

  return idxmax;
}

void eml_matlab_zlarf(const emlrtStack *sp, int32_T m, int32_T n, int32_T iv0,
                      real_T tau, emxArray_real_T *C, int32_T ic0, int32_T ldc,
                      emxArray_real_T *work)
{
  int32_T lastv;
  int32_T i;
  int32_T lastc;
  boolean_T exitg2;
  int32_T colbottom;
  boolean_T b_i;
  int32_T exitg1;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * alpha1_t;
  double * beta1_t;
  double * yiy0_t;
  double * Aia0_t;
  double * xix0_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (tau != 0.0) {
    lastv = m;
    i = iv0 + m;
    while ((lastv > 0) && (C->data[i - 2] == 0.0)) {
      lastv--;
      i--;
    }

    st.site = &yd_emlrtRSI;
    lastc = n;
    exitg2 = false;
    while ((!exitg2) && (lastc > 0)) {
      i = ic0 + (lastc - 1) * ldc;
      colbottom = (i + lastv) - 1;
      b_st.site = &xd_emlrtRSI;
      if (i > colbottom) {
        b_i = false;
      } else {
        b_i = (colbottom > 2147483646);
      }

      if (b_i) {
        c_st.site = &ic_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      do {
        exitg1 = 0;
        if (i <= colbottom) {
          if (C->data[i - 1] != 0.0) {
            exitg1 = 1;
          } else {
            i++;
          }
        } else {
          lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    st.site = &ae_emlrtRSI;
    b_st.site = &ce_emlrtRSI;
    if (lastc < 1) {
    } else {
      c_st.site = &de_emlrtRSI;
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSA = 'C';
      d_st.site = &de_emlrtRSI;
      m_t = (ptrdiff_t)(lastv);
      d_st.site = &de_emlrtRSI;
      n_t = (ptrdiff_t)(lastc);
      d_st.site = &de_emlrtRSI;
      lda_t = (ptrdiff_t)(ldc);
      d_st.site = &de_emlrtRSI;
      incx_t = (ptrdiff_t)(1);
      d_st.site = &de_emlrtRSI;
      incy_t = (ptrdiff_t)(1);
      alpha1_t = (double *)(&alpha1);
      beta1_t = (double *)(&beta1);
      i = work->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i, &pf_emlrtBCI, &c_st);
      yiy0_t = (double *)(&work->data[0]);
      i = C->size[0] * C->size[1];
      Aia0_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(ic0, 1, i,
        &pf_emlrtBCI, &c_st) - 1]);
      i = C->size[0] * C->size[1];
      xix0_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(iv0, 1, i,
        &pf_emlrtBCI, &c_st) - 1]);
      dgemv(&TRANSA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t, xix0_t, &incx_t,
            beta1_t, yiy0_t, &incy_t);
    }

    st.site = &be_emlrtRSI;
    alpha1 = -tau;
    b_st.site = &ee_emlrtRSI;
    c_st.site = &fe_emlrtRSI;
    if (lastc < 1) {
    } else {
      d_st.site = &qc_emlrtRSI;
      m_t = (ptrdiff_t)(lastv);
      n_t = (ptrdiff_t)(lastc);
      incx_t = (ptrdiff_t)(1);
      incy_t = (ptrdiff_t)(1);
      lda_t = (ptrdiff_t)(ldc);
      alpha1_t = (double *)(&alpha1);
      i = C->size[0] * C->size[1];
      Aia0_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(ic0, 1, i,
        &be_emlrtBCI, &d_st) - 1]);
      i = C->size[0] * C->size[1];
      beta1_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(iv0, 1, i,
        &be_emlrtBCI, &d_st) - 1]);
      i = work->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i, &be_emlrtBCI, &d_st);
      yiy0_t = (double *)(&work->data[0]);
      dger(&m_t, &n_t, alpha1_t, beta1_t, &incx_t, yiy0_t, &incy_t, Aia0_t,
           &lda_t);
    }
  }
}

real_T eml_matlab_zlarfg(void)
{
  return 0.0;
}

real_T eml_xnrm2(const emlrtStack *sp, int32_T n, const emxArray_real_T *x,
                 int32_T ix0)
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i43;
  double * xix0_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &nd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
    y = 0.0;
  } else {
    b_st.site = &od_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    i43 = x->size[0] * x->size[1];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i43,
      &de_emlrtBCI, &b_st) - 1]);
    y = dnrm2(&n_t, xix0_t, &incx_t);
  }

  return y;
}

void eml_xscal(const emlrtStack *sp, int32_T n, real_T a, emxArray_real_T *x,
               int32_T ix0)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i95;
  double * xix0_t;
  double * a_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
  } else {
    b_st.site = &wd_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    i95 = x->size[0] * x->size[1];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i95,
      &of_emlrtBCI, &b_st) - 1]);
    a_t = (double *)(&a);
    dscal(&n_t, a_t, xix0_t, &incx_t);
  }
}

void mrdivide(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *y)
{
  const mxArray *b_y;
  static const int32_T iv8[2] = { 1, 21 };

  const mxArray *m1;
  char_T cv5[21];
  int32_T i;
  static const char_T cv6[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'd', 'i', 'm', 'a', 'g', 'r', 'e', 'e' };

  emxArray_real_T *r4;
  emxArray_real_T *b_B;
  emxArray_real_T *b_A;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T i37;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (B->size[1] == A->size[1]) {
  } else {
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv8);
    for (i = 0; i < 21; i++) {
      cv5[i] = cv6[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m1, cv5);
    emlrtAssign(&b_y, m1);
    st.site = &lb_emlrtRSI;
    b_error(&st, message(&st, b_y, &emlrtMCI), &emlrtMCI);
  }

  emxInit_real_T(sp, &r4, 2, &m_emlrtRTEI, true);
  emxInit_real_T(sp, &b_B, 2, &m_emlrtRTEI, true);
  emxInit_real_T(sp, &b_A, 2, &m_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0) || ((B->size[0] == 0) || (B->size[1]
        == 0))) {
    unnamed_idx_0 = (uint32_T)A->size[0];
    unnamed_idx_1 = (uint32_T)B->size[0];
    i = y->size[0] * y->size[1];
    y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(sp, (emxArray__common *)y, i, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    i = y->size[0] * y->size[1];
    y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(sp, (emxArray__common *)y, i, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i = 0; i < loop_ub; i++) {
      y->data[i] = 0.0;
    }
  } else if (B->size[0] == B->size[1]) {
    st.site = &lb_emlrtRSI;
    eml_lusolve(&st, B, A, y);
  } else {
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[1];
    b_B->size[1] = B->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_B, i, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = B->size[1];
      for (i37 = 0; i37 < b_loop_ub; i37++) {
        b_B->data[i37 + b_B->size[0] * i] = B->data[i + B->size[0] * i37];
      }
    }

    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[1];
    b_A->size[1] = A->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_A, i, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = A->size[1];
      for (i37 = 0; i37 < b_loop_ub; i37++) {
        b_A->data[i37 + b_A->size[0] * i] = A->data[i + A->size[0] * i37];
      }
    }

    st.site = &lb_emlrtRSI;
    eml_qrsolve(&st, b_B, b_A, r4);
    i = y->size[0] * y->size[1];
    y->size[0] = r4->size[1];
    y->size[1] = r4->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)y, i, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    loop_ub = r4->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = r4->size[1];
      for (i37 = 0; i37 < b_loop_ub; i37++) {
        y->data[i37 + y->size[0] * i] = r4->data[i + r4->size[0] * i37];
      }
    }
  }

  emxFree_real_T(&b_A);
  emxFree_real_T(&b_B);
  emxFree_real_T(&r4);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void warn_singular(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rc_emlrtRSI;
  eml_warning(&st);
}

/* End of code generation (mrdivide.c) */
