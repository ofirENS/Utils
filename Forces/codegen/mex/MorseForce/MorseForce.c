/*
 * MorseForce.c
 *
 * Code generation for function 'MorseForce'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MorseForce.h"
#include "power.h"
#include "MorseForce_emxutil.h"
#include "eml_error.h"
#include "sum.h"
#include "rdivide.h"
#include "eml_int_forloop_overflow_check.h"
#include "strcmpi.h"
#include "MorseForce_mexutil.h"
#include "MorseForce_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 29, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRSInfo b_emlrtRSI = { 31, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRSInfo c_emlrtRSI = { 33, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRSInfo d_emlrtRSI = { 34, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRSInfo e_emlrtRSI = { 36, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRSInfo f_emlrtRSI = { 42, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRSInfo g_emlrtRSI = { 43, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRSInfo h_emlrtRSI = { 44, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRSInfo i_emlrtRSI = { 45, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRSInfo j_emlrtRSI = { 46, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRSInfo k_emlrtRSI = { 59, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRSInfo l_emlrtRSI = { 60, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRSInfo m_emlrtRSI = { 61, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRSInfo r_emlrtRSI = { 68, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo s_emlrtRSI = { 21, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo t_emlrtRSI = { 54, "eml_xgemm",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m" };

static emlrtRSInfo u_emlrtRSI = { 1, "xgemm",
  "/usr/local/MATLAB/R2014a/toolbox/coder/coder/+coder/+internal/+blas/xgemm.p"
};

static emlrtRSInfo w_emlrtRSI = { 14, "sqrt",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/elfun/sqrt.m" };

static emlrtRSInfo x_emlrtRSI = { 34, "eye",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/elmat/eye.m" };

static emlrtRSInfo y_emlrtRSI = { 80, "eye",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/elmat/eye.m" };

static emlrtMCInfo c_emlrtMCI = { 99, 13, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtMCInfo d_emlrtMCI = { 98, 23, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtMCInfo e_emlrtMCI = { 104, 13, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtMCInfo f_emlrtMCI = { 103, 23, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtMCInfo i_emlrtMCI = { 16, 1, "error",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 20, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRTEInfo b_emlrtRTEI = { 27, 1, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRTEInfo c_emlrtRTEI = { 28, 1, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRTEInfo d_emlrtRTEI = { 30, 5, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRTEInfo e_emlrtRTEI = { 42, 1, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRTEInfo f_emlrtRTEI = { 45, 1, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 1, 1, "", "xgemm",
  "/usr/local/MATLAB/R2014a/toolbox/coder/coder/+coder/+internal/+blas/xgemm.p",
  0 };

static emlrtECInfo emlrtECI = { -1, 61, 1, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtECInfo b_emlrtECI = { -1, 60, 1, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtECInfo c_emlrtECI = { -1, 59, 1, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtECInfo d_emlrtECI = { 2, 53, 14, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtECInfo e_emlrtECI = { 2, 52, 14, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtECInfo f_emlrtECI = { 2, 51, 14, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtECInfo g_emlrtECI = { 2, 43, 11, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtECInfo h_emlrtECI = { 2, 42, 16, "MorseForce",
  "/home/ofir/Work/ENS/Utils/Forces/MorseForce.m" };

static emlrtRSInfo hb_emlrtRSI = { 98, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo ib_emlrtRSI = { 103, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo jb_emlrtRSI = { 16, "error",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtRSInfo nb_emlrtRSI = { 99, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo ob_emlrtRSI = { 104, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

/* Function Definitions */
void MorseForce(const emlrtStack *sp, real_T De, real_T alpha, real_T re, const
                emxArray_real_T *edgesX, const emxArray_real_T *edgesY, const
                emxArray_real_T *edgesZ, const emxArray_real_T *particleDistance,
                const emxArray_char_T *forceType, emxArray_real_T *force)
{
  emxArray_real_T *repulse;
  int32_T i0;
  int32_T i;
  emxArray_real_T *attract;
  emxArray_real_T *forceMag;
  emxArray_real_T *dirVecY;
  real_T a;
  int32_T b_attract;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv0[45];
  static const char_T cv1[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 21 };

  char_T cv2[21];
  static const char_T cv3[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  int32_T i1;
  int32_T loop_ub;
  int32_T i2;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  real_T beta1;
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
  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 23 };

  char_T cv4[23];
  static const char_T cv5[23] = { 'f', 'o', 'r', 'c', 'e', 'T', 'y', 'p', 'e',
    ' ', 'n', 'o', 't', ' ', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd' };

  emxArray_real_T *dirNorm;
  int32_T b_dirNorm[2];
  int32_T b_dirVecY[2];
  boolean_T overflow;
  int32_T b_forceMag[2];
  emxArray_int32_T *r0;
  emxArray_real_T *c_forceMag;
  emxArray_real_T *r1;
  int32_T iv3[1];
  emxArray_real_T *d_forceMag;
  int32_T iv4[1];
  emxArray_real_T *e_forceMag;
  int32_T iv5[1];
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
  emxInit_real_T(sp, &repulse, 2, &b_emlrtRTEI, true);

  /*  calculate the Morse force, derived from the Morse potential */
  /*  u = De*(exp(-2*a(r-re)) -2*exp(-a*(r-re))) */
  /*  The force is given by  */
  /*  F = dv/dr = De*(-2*a*exp(-2*a*(r-re)) +2*a*exp(-a*(r-re))) */
  /*  Input parameters: */
  /*  re - the equilibrium bond distance  */
  /*  De - the well depth */
  /*  alpha - the width of the potential */
  /*  edgesX, edgesY, edgesZ -  are numPartXnumPart matrices representing the vectors */
  /*  between particles in the X YT and Z respectively. */
  /*  particleDistance -  a numPartXnumPart matrix of pairwise distances  */
  /*  forceType is a string [attractive |repuslsive |full] indicating whether */
  /*  to use the attractive repulsive part of the Morse force or both */
  /*  For forces in 1 or 2D set the position of the particle in 2-3 dimension */
  /*  to be constant (preferably 0) prior to using this function  */
  /*  edgesVector(:,:,1)  = edgesX; */
  /*  edgesVector(:,:,2)  = edgesY; */
  /*  edgesVector(:,:,3)  = edgesZ; */
  /*  dim                 = size(edgesVector,3); */
  /*  Calculate the force magnitude */
  i0 = repulse->size[0] * repulse->size[1];
  repulse->size[0] = particleDistance->size[0];
  repulse->size[1] = particleDistance->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)repulse, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = particleDistance->size[0] * particleDistance->size[1];
  for (i0 = 0; i0 < i; i0++) {
    repulse->data[i0] = -alpha * (particleDistance->data[i0] - re);
  }

  i0 = repulse->size[0] * repulse->size[1];
  for (i = 0; i < i0; i++) {
    repulse->data[i] = muDoubleScalarExp(repulse->data[i]);
  }

  emxInit_real_T(sp, &attract, 2, &c_emlrtRTEI, true);

  /*  repulsive term */
  i0 = attract->size[0] * attract->size[1];
  attract->size[0] = repulse->size[0];
  attract->size[1] = repulse->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)attract, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = repulse->size[0] * repulse->size[1];
  for (i0 = 0; i0 < i; i0++) {
    attract->data[i0] = 1.0 - repulse->data[i0];
  }

  /*  attractive term  */
  emxInit_real_T(sp, &forceMag, 2, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &dirVecY, 2, &f_emlrtRTEI, true);
  st.site = &emlrtRSI;
  if (b_strcmpi(&st, forceType)) {
    a = 2.0 * alpha * De;
    i0 = forceMag->size[0] * forceMag->size[1];
    forceMag->size[0] = attract->size[0];
    forceMag->size[1] = attract->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)forceMag, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    i = attract->size[0] * attract->size[1];
    for (i0 = 0; i0 < i; i0++) {
      forceMag->data[i0] = a * attract->data[i0];
    }
  } else {
    st.site = &b_emlrtRSI;
    if (c_strcmpi(&st, forceType)) {
      a = 2.0 * alpha * De;
      i0 = forceMag->size[0] * forceMag->size[1];
      forceMag->size[0] = repulse->size[0];
      forceMag->size[1] = repulse->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)forceMag, i0, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i = repulse->size[0] * repulse->size[1];
      for (i0 = 0; i0 < i; i0++) {
        forceMag->data[i0] = a * repulse->data[i0];
      }
    } else {
      st.site = &c_emlrtRSI;
      if (d_strcmpi(&st, forceType)) {
        a = 2.0 * De * alpha;
        i0 = attract->size[0] * attract->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)attract, i0, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        i = attract->size[0];
        b_attract = attract->size[1];
        i *= b_attract;
        for (i0 = 0; i0 < i; i0++) {
          attract->data[i0] *= a;
        }

        st.site = &d_emlrtRSI;
        b_st.site = &s_emlrtRSI;
        if (!(attract->size[1] == repulse->size[0])) {
          if (((attract->size[0] == 1) && (attract->size[1] == 1)) ||
              ((repulse->size[0] == 1) && (repulse->size[1] == 1))) {
            y = NULL;
            m0 = emlrtCreateCharArray(2, iv0);
            for (i = 0; i < 45; i++) {
              cv0[i] = cv1[i];
            }

            emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
            emlrtAssign(&y, m0);
            c_st.site = &hb_emlrtRSI;
            d_st.site = &nb_emlrtRSI;
            error(&c_st, b_message(&d_st, y, &c_emlrtMCI), &d_emlrtMCI);
          } else {
            b_y = NULL;
            m0 = emlrtCreateCharArray(2, iv1);
            for (i = 0; i < 21; i++) {
              cv2[i] = cv3[i];
            }

            emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
            emlrtAssign(&b_y, m0);
            c_st.site = &ib_emlrtRSI;
            d_st.site = &ob_emlrtRSI;
            error(&c_st, b_message(&d_st, b_y, &e_emlrtMCI), &f_emlrtMCI);
          }
        }

        if ((attract->size[1] == 1) || (repulse->size[0] == 1)) {
          i0 = forceMag->size[0] * forceMag->size[1];
          forceMag->size[0] = attract->size[0];
          forceMag->size[1] = repulse->size[1];
          emxEnsureCapacity(&st, (emxArray__common *)forceMag, i0, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          i = attract->size[0];
          for (i0 = 0; i0 < i; i0++) {
            b_attract = repulse->size[1];
            for (i1 = 0; i1 < b_attract; i1++) {
              forceMag->data[i0 + forceMag->size[0] * i1] = 0.0;
              loop_ub = attract->size[1];
              for (i2 = 0; i2 < loop_ub; i2++) {
                forceMag->data[i0 + forceMag->size[0] * i1] += attract->data[i0
                  + attract->size[0] * i2] * repulse->data[i2 + repulse->size[0]
                  * i1];
              }
            }
          }
        } else {
          unnamed_idx_0 = (uint32_T)attract->size[0];
          unnamed_idx_1 = (uint32_T)repulse->size[1];
          i0 = dirVecY->size[0] * dirVecY->size[1];
          dirVecY->size[0] = (int32_T)unnamed_idx_0;
          emxEnsureCapacity(&st, (emxArray__common *)dirVecY, i0, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          i0 = dirVecY->size[0] * dirVecY->size[1];
          dirVecY->size[1] = (int32_T)unnamed_idx_1;
          emxEnsureCapacity(&st, (emxArray__common *)dirVecY, i0, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
          for (i0 = 0; i0 < i; i0++) {
            dirVecY->data[i0] = 0.0;
          }

          b_st.site = &r_emlrtRSI;
          c_st.site = &t_emlrtRSI;
          i0 = forceMag->size[0] * forceMag->size[1];
          forceMag->size[0] = (int32_T)unnamed_idx_0;
          emxEnsureCapacity(&c_st, (emxArray__common *)forceMag, i0, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          i0 = forceMag->size[0] * forceMag->size[1];
          forceMag->size[1] = (int32_T)unnamed_idx_1;
          emxEnsureCapacity(&c_st, (emxArray__common *)forceMag, i0, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
          for (i0 = 0; i0 < i; i0++) {
            forceMag->data[i0] = 0.0;
          }

          if ((attract->size[0] < 1) || (repulse->size[1] < 1) || (attract->
               size[1] < 1)) {
          } else {
            e_st.site = &u_emlrtRSI;
            a = 1.0;
            beta1 = 0.0;
            TRANSB = 'N';
            TRANSA = 'N';
            m_t = (ptrdiff_t)(attract->size[0]);
            n_t = (ptrdiff_t)(repulse->size[1]);
            k_t = (ptrdiff_t)(attract->size[1]);
            lda_t = (ptrdiff_t)(attract->size[0]);
            ldb_t = (ptrdiff_t)(attract->size[1]);
            ldc_t = (ptrdiff_t)(attract->size[0]);
            alpha1_t = (double *)(&a);
            i0 = attract->size[0] * attract->size[1];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &emlrtBCI, &e_st);
            Aia0_t = (double *)(&attract->data[0]);
            i0 = repulse->size[0] * repulse->size[1];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &emlrtBCI, &e_st);
            Bib0_t = (double *)(&repulse->data[0]);
            beta1_t = (double *)(&beta1);
            i0 = dirVecY->size[0] * dirVecY->size[1];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &emlrtBCI, &e_st);
            Cic0_t = (double *)(&forceMag->data[0]);
            dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
                  Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
          }
        }
      } else {
        st.site = &e_emlrtRSI;
        c_y = NULL;
        m0 = emlrtCreateCharArray(2, iv2);
        for (i = 0; i < 23; i++) {
          cv4[i] = cv5[i];
        }

        emlrtInitCharArrayR2013a(&st, 23, m0, cv4);
        emlrtAssign(&c_y, m0);
        b_st.site = &jb_emlrtRSI;
        error(&b_st, c_y, &i_emlrtMCI);
      }
    }
  }

  emxInit_real_T(sp, &dirNorm, 2, &e_emlrtRTEI, true);

  /*  remove the diagonal  */
  /*  Normalize the mean direction vectors to unit vectors */
  power(sp, edgesX, dirNorm);
  power(sp, edgesY, dirVecY);
  for (i0 = 0; i0 < 2; i0++) {
    b_dirNorm[i0] = dirNorm->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_dirVecY[i0] = dirVecY->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(b_dirNorm, b_dirVecY, &h_emlrtECI, sp);
  power(sp, edgesZ, repulse);
  for (i0 = 0; i0 < 2; i0++) {
    b_dirNorm[i0] = dirNorm->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_dirVecY[i0] = repulse->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(b_dirNorm, b_dirVecY, &h_emlrtECI, sp);
  st.site = &f_emlrtRSI;
  i0 = dirNorm->size[0] * dirNorm->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)dirNorm, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = dirNorm->size[0];
  b_attract = dirNorm->size[1];
  i *= b_attract;
  for (i0 = 0; i0 < i; i0++) {
    dirNorm->data[i0] = (dirNorm->data[i0] + dirVecY->data[i0]) + repulse->
      data[i0];
  }

  i0 = dirNorm->size[0] * dirNorm->size[1];
  for (i = 0; i < i0; i++) {
    if (dirNorm->data[i] < 0.0) {
      b_st.site = &w_emlrtRSI;
      eml_error(&b_st);
    }
  }

  i0 = dirNorm->size[0] * dirNorm->size[1];
  for (i = 0; i < i0; i++) {
    dirNorm->data[i] = muDoubleScalarSqrt(dirNorm->data[i]);
  }

  st.site = &g_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  i = particleDistance->size[0];
  i0 = dirVecY->size[0] * dirVecY->size[1];
  dirVecY->size[0] = i;
  emxEnsureCapacity(&st, (emxArray__common *)dirVecY, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = particleDistance->size[0];
  i0 = dirVecY->size[0] * dirVecY->size[1];
  dirVecY->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)dirVecY, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = particleDistance->size[0] * particleDistance->size[0];
  for (i0 = 0; i0 < i; i0++) {
    dirVecY->data[i0] = 0.0;
  }

  if (particleDistance->size[0] > 0) {
    b_st.site = &y_emlrtRSI;
    overflow = (particleDistance->size[0] > 2147483646);
    if (overflow) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 0; i + 1 <= particleDistance->size[0]; i++) {
      dirVecY->data[i + dirVecY->size[0] * i] = 1.0;
    }
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_dirNorm[i0] = dirNorm->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_dirVecY[i0] = dirVecY->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(b_dirNorm, b_dirVecY, &g_emlrtECI, sp);
  i0 = dirNorm->size[0] * dirNorm->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)dirNorm, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = dirNorm->size[0];
  b_attract = dirNorm->size[1];
  i *= b_attract;
  for (i0 = 0; i0 < i; i0++) {
    dirNorm->data[i0] += dirVecY->data[i0];
  }

  /*  put ones in the diagonal to prevent dividing by zeros */
  st.site = &h_emlrtRSI;
  rdivide(&st, edgesX, dirNorm, attract);
  st.site = &i_emlrtRSI;
  rdivide(&st, edgesY, dirNorm, dirVecY);
  st.site = &j_emlrtRSI;
  rdivide(&st, edgesZ, dirNorm, repulse);

  /*  dirVec  = bsxfun(@rdivide, edgesVector,dirNorm); */
  /*  Multiply by the force magnitude */
  emxFree_real_T(&dirNorm);
  for (i0 = 0; i0 < 2; i0++) {
    b_forceMag[i0] = forceMag->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_dirNorm[i0] = attract->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(b_forceMag, b_dirNorm, &f_emlrtECI, sp);
  for (i0 = 0; i0 < 2; i0++) {
    b_forceMag[i0] = forceMag->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_dirVecY[i0] = dirVecY->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(b_forceMag, b_dirVecY, &e_emlrtECI, sp);
  for (i0 = 0; i0 < 2; i0++) {
    b_forceMag[i0] = forceMag->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_dirVecY[i0] = repulse->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(b_forceMag, b_dirVecY, &d_emlrtECI, sp);

  /*  bsxfun(@times,forceMag,dirVec); */
  /*  Calculate the mean force direction and assign it to each particle */
  i = particleDistance->size[0];
  i0 = force->size[0] * force->size[1];
  force->size[0] = i;
  force->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = particleDistance->size[0] * 3;
  for (i0 = 0; i0 < i; i0++) {
    force->data[i0] = 0.0;
  }

  emxInit_int32_T(sp, &r0, 1, &emlrtRTEI, true);
  i = particleDistance->size[0];
  i0 = r0->size[0];
  r0->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  for (i0 = 0; i0 < i; i0++) {
    r0->data[i0] = i0;
  }

  emxInit_real_T(sp, &c_forceMag, 2, &emlrtRTEI, true);
  i0 = c_forceMag->size[0] * c_forceMag->size[1];
  c_forceMag->size[0] = forceMag->size[0];
  c_forceMag->size[1] = forceMag->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_forceMag, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  i = forceMag->size[0] * forceMag->size[1];
  for (i0 = 0; i0 < i; i0++) {
    c_forceMag->data[i0] = forceMag->data[i0] * attract->data[i0];
  }

  emxFree_real_T(&attract);
  b_emxInit_real_T(sp, &r1, 1, &emlrtRTEI, true);
  st.site = &k_emlrtRSI;
  sum(&st, c_forceMag, r1);
  i0 = r1->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = r1->size[0];
  emxFree_real_T(&c_forceMag);
  for (i0 = 0; i0 < i; i0++) {
    r1->data[i0] = -r1->data[i0];
  }

  iv3[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv3, 1, *(int32_T (*)[1])r1->size, 1,
    &c_emlrtECI, sp);
  i = r1->size[0];
  for (i0 = 0; i0 < i; i0++) {
    force->data[r0->data[i0]] = r1->data[i0];
  }

  i = force->size[0];
  i0 = r0->size[0];
  r0->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  for (i0 = 0; i0 < i; i0++) {
    r0->data[i0] = i0;
  }

  emxInit_real_T(sp, &d_forceMag, 2, &emlrtRTEI, true);
  i0 = d_forceMag->size[0] * d_forceMag->size[1];
  d_forceMag->size[0] = forceMag->size[0];
  d_forceMag->size[1] = forceMag->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_forceMag, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  i = forceMag->size[0] * forceMag->size[1];
  for (i0 = 0; i0 < i; i0++) {
    d_forceMag->data[i0] = forceMag->data[i0] * dirVecY->data[i0];
  }

  emxFree_real_T(&dirVecY);
  st.site = &l_emlrtRSI;
  sum(&st, d_forceMag, r1);
  i0 = r1->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = r1->size[0];
  emxFree_real_T(&d_forceMag);
  for (i0 = 0; i0 < i; i0++) {
    r1->data[i0] = -r1->data[i0];
  }

  iv4[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv4, 1, *(int32_T (*)[1])r1->size, 1,
    &b_emlrtECI, sp);
  i = r1->size[0];
  for (i0 = 0; i0 < i; i0++) {
    force->data[r0->data[i0] + force->size[0]] = r1->data[i0];
  }

  i = force->size[0];
  i0 = r0->size[0];
  r0->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  for (i0 = 0; i0 < i; i0++) {
    r0->data[i0] = i0;
  }

  emxInit_real_T(sp, &e_forceMag, 2, &emlrtRTEI, true);
  i0 = e_forceMag->size[0] * e_forceMag->size[1];
  e_forceMag->size[0] = forceMag->size[0];
  e_forceMag->size[1] = forceMag->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)e_forceMag, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  i = forceMag->size[0] * forceMag->size[1];
  for (i0 = 0; i0 < i; i0++) {
    e_forceMag->data[i0] = forceMag->data[i0] * repulse->data[i0];
  }

  emxFree_real_T(&forceMag);
  emxFree_real_T(&repulse);
  st.site = &m_emlrtRSI;
  sum(&st, e_forceMag, r1);
  i0 = r1->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = r1->size[0];
  emxFree_real_T(&e_forceMag);
  for (i0 = 0; i0 < i; i0++) {
    r1->data[i0] = -r1->data[i0];
  }

  iv5[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(iv5, 1, *(int32_T (*)[1])r1->size, 1, &emlrtECI,
    sp);
  i = r1->size[0];
  for (i0 = 0; i0 < i; i0++) {
    force->data[r0->data[i0] + (force->size[0] << 1)] = r1->data[i0];
  }

  emxFree_real_T(&r1);
  emxFree_int32_T(&r0);

  /*  for dIdx = 1:dim */
  /*   force(:,dIdx) = -sum(forceVec(:,:,dIdx),2); */
  /*  end */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (MorseForce.c) */
