/*
 * SpringForce.c
 *
 * Code generation for function 'SpringForce'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SpringForce.h"
#include "SpringForce_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "SpringForce_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 11, "SpringForce",
  "D:\\Ofir\\ENS\\Utils\\Forces\\SpringForce.m" };

static emlrtRSInfo b_emlrtRSI = { 13, "SpringForce",
  "D:\\Ofir\\ENS\\Utils\\Forces\\SpringForce.m" };

static emlrtRSInfo c_emlrtRSI = { 14, "SpringForce",
  "D:\\Ofir\\ENS\\Utils\\Forces\\SpringForce.m" };

static emlrtRSInfo d_emlrtRSI = { 16, "SpringForce",
  "D:\\Ofir\\ENS\\Utils\\Forces\\SpringForce.m" };

static emlrtRSInfo e_emlrtRSI = { 17, "SpringForce",
  "D:\\Ofir\\ENS\\Utils\\Forces\\SpringForce.m" };

static emlrtRSInfo f_emlrtRSI = { 74, "diag",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

static emlrtRSInfo g_emlrtRSI = { 22, "eml_int_forloop_overflow_check",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo h_emlrtRSI = { 68, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo i_emlrtRSI = { 21, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo j_emlrtRSI = { 54, "eml_xgemm",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgemm.m"
};

static emlrtRSInfo k_emlrtRSI = { 1, "xgemm",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemm.p"
};

static emlrtRSInfo l_emlrtRSI = { 15, "rdivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRSInfo m_emlrtRSI = { 9, "eml_div",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_div.m"
};

static emlrtRSInfo n_emlrtRSI = { 72, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo o_emlrtRSI = { 76, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtMCInfo c_emlrtMCI = { 99, 13, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtMCInfo d_emlrtMCI = { 98, 23, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtMCInfo e_emlrtMCI = { 104, 13, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtMCInfo f_emlrtMCI = { 103, 23, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtMCInfo g_emlrtMCI = { 14, 5, "rdivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtMCInfo h_emlrtMCI = { 13, 15, "rdivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 18, "SpringForce",
  "D:\\Ofir\\ENS\\Utils\\Forces\\SpringForce.m" };

static emlrtRTEInfo b_emlrtRTEI = { 55, 1, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 14, 1, "SpringForce",
  "D:\\Ofir\\ENS\\Utils\\Forces\\SpringForce.m" };

static emlrtRTEInfo d_emlrtRTEI = { 16, 1, "SpringForce",
  "D:\\Ofir\\ENS\\Utils\\Forces\\SpringForce.m" };

static emlrtRTEInfo e_emlrtRTEI = { 1, 55, "SpringForce",
  "D:\\Ofir\\ENS\\Utils\\Forces\\SpringForce.m" };

static emlrtECInfo emlrtECI = { 2, 1, 1, "div",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\div.p"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 1, 1, "", "xgemm",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemm.p",
  0 };

static emlrtECInfo b_emlrtECI = { 2, 17, 19, "SpringForce",
  "D:\\Ofir\\ENS\\Utils\\Forces\\SpringForce.m" };

static emlrtECInfo c_emlrtECI = { 2, 17, 25, "SpringForce",
  "D:\\Ofir\\ENS\\Utils\\Forces\\SpringForce.m" };

static emlrtECInfo d_emlrtECI = { 2, 14, 19, "SpringForce",
  "D:\\Ofir\\ENS\\Utils\\Forces\\SpringForce.m" };

static emlrtECInfo e_emlrtECI = { 2, 14, 20, "SpringForce",
  "D:\\Ofir\\ENS\\Utils\\Forces\\SpringForce.m" };

static emlrtECInfo f_emlrtECI = { 2, 11, 19, "SpringForce",
  "D:\\Ofir\\ENS\\Utils\\Forces\\SpringForce.m" };

static emlrtRSInfo q_emlrtRSI = { 13, "rdivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRSInfo r_emlrtRSI = { 98, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo s_emlrtRSI = { 103, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo u_emlrtRSI = { 14, "rdivide",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRSInfo v_emlrtRSI = { 99, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo w_emlrtRSI = { 104, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

/* Function Declarations */
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m4;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m4, 1, &pArray, "message", true, location);
}

void SpringForce(const emlrtStack *sp, emxArray_real_T *particleDist, const
                 emxArray_real_T *springConst, const emxArray_boolean_T
                 *connectivityMap, const emxArray_real_T *minParticleDist,
                 emxArray_real_T *force)
{
  emxArray_real_T *b_connectivityMap;
  int32_T i0;
  int32_T i;
  emxArray_real_T *v;
  emxArray_real_T *r0;
  int32_T unnamed_idx_0;
  boolean_T overflow;
  int32_T b_particleDist[2];
  int32_T iv0[2];
  uint32_T uv0[2];
  uint32_T sz[2];
  emxArray_real_T *L;
  const mxArray *y;
  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv0[45];
  static const char_T cv1[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 21 };

  char_T cv2[21];
  static const char_T cv3[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  int32_T iy;
  int32_T ixstart;
  int32_T ix;
  uint32_T varargin_2[2];
  real_T s;
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
  boolean_T p;
  boolean_T exitg1;
  const mxArray *c_y;
  static const int32_T iv3[2] = { 1, 15 };

  char_T cv4[15];
  static const char_T cv5[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  int32_T b_minParticleDist[2];
  int32_T iv4[2];
  int32_T iv5[2];
  emxArray_real_T *sumForces;
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
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &st;
  f_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_connectivityMap, 2, &e_emlrtRTEI, true);

  /* ,fixedParticleNum) */
  /*  Calculate the spring force between N particles in any dimension M. */
  /*  particleDist    - NxN matrix of pairwise particle distances */
  /*  springConst     - NxN double matrix of spring constants */
  /*  connectivityMap - NxN binary matrix which defines the connectivity between particles */
  /*  minParticleDist - minimal distance between particles */
  /*  fixedParticleNum - particles in the system which do not move */
  i0 = b_connectivityMap->size[0] * b_connectivityMap->size[1];
  b_connectivityMap->size[0] = connectivityMap->size[0];
  b_connectivityMap->size[1] = connectivityMap->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_connectivityMap, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  i = connectivityMap->size[0] * connectivityMap->size[1];
  for (i0 = 0; i0 < i; i0++) {
    b_connectivityMap->data[i0] = connectivityMap->data[i0];
  }

  emxInit_real_T(sp, &v, 2, &emlrtRTEI, true);

  /*  force              = springConst.*particleDist.*connectivityMap; */
  i0 = v->size[0] * v->size[1];
  v->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)v, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = particleDist->size[0];
  i0 = v->size[0] * v->size[1];
  v->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)v, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = particleDist->size[0];
  for (i0 = 0; i0 < i; i0++) {
    v->data[i0] = rtInf;
  }

  emxInit_real_T(sp, &r0, 2, &emlrtRTEI, true);
  st.site = &emlrtRSI;
  unnamed_idx_0 = v->size[1];
  i = v->size[1];
  i0 = r0->size[0] * r0->size[1];
  r0->size[0] = unnamed_idx_0;
  emxEnsureCapacity(&st, (emxArray__common *)r0, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = r0->size[0] * r0->size[1];
  r0->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)r0, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i *= unnamed_idx_0;
  for (i0 = 0; i0 < i; i0++) {
    r0->data[i0] = 0.0;
  }

  b_st.site = &f_emlrtRSI;
  if (1 > v->size[1]) {
    overflow = false;
  } else {
    overflow = (v->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &g_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 0; i + 1 <= v->size[1]; i++) {
    r0->data[i + r0->size[0] * i] = rtInf;
  }

  emxFree_real_T(&v);
  for (i0 = 0; i0 < 2; i0++) {
    b_particleDist[i0] = particleDist->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    iv0[i0] = r0->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(b_particleDist, iv0, &f_emlrtECI, sp);
  i0 = particleDist->size[0] * particleDist->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)particleDist, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  i = particleDist->size[0];
  unnamed_idx_0 = particleDist->size[1];
  i *= unnamed_idx_0;
  for (i0 = 0; i0 < i; i0++) {
    particleDist->data[i0] += r0->data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    uv0[i0] = (uint32_T)particleDist->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    sz[i0] = (uint32_T)particleDist->size[i0];
  }

  emxInit_real_T(sp, &L, 2, &c_emlrtRTEI, true);
  st.site = &b_emlrtRSI;
  i0 = L->size[0] * L->size[1];
  L->size[0] = (int32_T)sz[0];
  emxEnsureCapacity(&st, (emxArray__common *)L, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = L->size[0] * L->size[1];
  L->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(&st, (emxArray__common *)L, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = (int32_T)sz[0] * (int32_T)sz[1];
  for (i0 = 0; i0 < i; i0++) {
    L->data[i0] = 1.0;
  }

  b_st.site = &i_emlrtRSI;
  if (!(springConst->size[1] == (int32_T)sz[0])) {
    if (((springConst->size[0] == 1) && (springConst->size[1] == 1)) ||
        (((int32_T)sz[0] == 1) && ((int32_T)sz[1] == 1))) {
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv1);
      for (i = 0; i < 45; i++) {
        cv0[i] = cv1[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
      emlrtAssign(&y, m0);
      c_st.site = &r_emlrtRSI;
      d_st.site = &v_emlrtRSI;
      error(&c_st, b_message(&d_st, y, &c_emlrtMCI), &d_emlrtMCI);
    } else {
      b_y = NULL;
      m0 = emlrtCreateCharArray(2, iv2);
      for (i = 0; i < 21; i++) {
        cv2[i] = cv3[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
      emlrtAssign(&b_y, m0);
      c_st.site = &s_emlrtRSI;
      d_st.site = &w_emlrtRSI;
      error(&c_st, b_message(&d_st, b_y, &e_emlrtMCI), &f_emlrtMCI);
    }
  }

  if ((springConst->size[1] == 1) || ((int32_T)sz[0] == 1)) {
    i0 = force->size[0] * force->size[1];
    force->size[0] = springConst->size[0];
    force->size[1] = (int32_T)sz[1];
    emxEnsureCapacity(&st, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    i = springConst->size[0];
    for (i0 = 0; i0 < i; i0++) {
      unnamed_idx_0 = (int32_T)sz[1];
      for (iy = 0; iy < unnamed_idx_0; iy++) {
        force->data[i0 + force->size[0] * iy] = 0.0;
        ixstart = springConst->size[1];
        for (ix = 0; ix < ixstart; ix++) {
          force->data[i0 + force->size[0] * iy] += springConst->data[i0 +
            springConst->size[0] * ix];
        }
      }
    }
  } else {
    varargin_2[0] = (uint32_T)springConst->size[0];
    i0 = r0->size[0] * r0->size[1];
    r0->size[0] = (int32_T)varargin_2[0];
    emxEnsureCapacity(&st, (emxArray__common *)r0, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    i0 = r0->size[0] * r0->size[1];
    r0->size[1] = (int32_T)sz[1];
    emxEnsureCapacity(&st, (emxArray__common *)r0, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    i = (int32_T)varargin_2[0] * (int32_T)sz[1];
    for (i0 = 0; i0 < i; i0++) {
      r0->data[i0] = 0.0;
    }

    b_st.site = &h_emlrtRSI;
    c_st.site = &j_emlrtRSI;
    i0 = force->size[0] * force->size[1];
    force->size[0] = (int32_T)varargin_2[0];
    emxEnsureCapacity(&c_st, (emxArray__common *)force, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    i0 = force->size[0] * force->size[1];
    force->size[1] = (int32_T)sz[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)force, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    i = (int32_T)varargin_2[0] * (int32_T)sz[1];
    for (i0 = 0; i0 < i; i0++) {
      force->data[i0] = 0.0;
    }

    if ((springConst->size[0] < 1) || ((int32_T)sz[1] < 1) || (springConst->
         size[1] < 1)) {
    } else {
      e_st.site = &k_emlrtRSI;
      s = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(springConst->size[0]);
      n_t = (ptrdiff_t)((int32_T)sz[1]);
      k_t = (ptrdiff_t)(springConst->size[1]);
      lda_t = (ptrdiff_t)(springConst->size[0]);
      ldb_t = (ptrdiff_t)(springConst->size[1]);
      ldc_t = (ptrdiff_t)(springConst->size[0]);
      alpha1_t = (double *)(&s);
      i0 = springConst->size[0] * springConst->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &emlrtBCI, &e_st);
      Aia0_t = (double *)(&springConst->data[0]);
      i0 = (int32_T)sz[0] * (int32_T)sz[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &emlrtBCI, &e_st);
      Bib0_t = (double *)(&L->data[0]);
      beta1_t = (double *)(&beta1);
      i0 = r0->size[0] * r0->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &emlrtBCI, &e_st);
      Cic0_t = (double *)(&force->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  st.site = &c_emlrtRSI;
  for (i0 = 0; i0 < 2; i0++) {
    sz[i0] = (uint32_T)minParticleDist->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    varargin_2[i0] = (uint32_T)particleDist->size[i0];
  }

  overflow = false;
  p = true;
  unnamed_idx_0 = 0;
  exitg1 = false;
  while ((!exitg1) && (unnamed_idx_0 < 2)) {
    if (!(sz[unnamed_idx_0] == varargin_2[unnamed_idx_0])) {
      p = false;
      exitg1 = true;
    } else {
      unnamed_idx_0++;
    }
  }

  if (!p) {
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    c_y = NULL;
    m0 = emlrtCreateCharArray(2, iv3);
    for (i = 0; i < 15; i++) {
      cv4[i] = cv5[i];
    }

    emlrtInitCharArrayR2013a(&st, 15, m0, cv4);
    emlrtAssign(&c_y, m0);
    b_st.site = &q_emlrtRSI;
    f_st.site = &u_emlrtRSI;
    error(&b_st, b_message(&f_st, c_y, &g_emlrtMCI), &h_emlrtMCI);
  }

  b_st.site = &l_emlrtRSI;
  c_st.site = &m_emlrtRSI;
  for (i0 = 0; i0 < 2; i0++) {
    b_minParticleDist[i0] = minParticleDist->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_particleDist[i0] = particleDist->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(b_minParticleDist, b_particleDist, &emlrtECI,
    &c_st);
  i0 = L->size[0] * L->size[1];
  L->size[0] = minParticleDist->size[0];
  L->size[1] = minParticleDist->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)L, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = minParticleDist->size[0] * minParticleDist->size[1];
  for (i0 = 0; i0 < i; i0++) {
    L->data[i0] = minParticleDist->data[i0] / particleDist->data[i0];
  }

  iv4[0] = (int32_T)uv0[0];
  iv4[1] = (int32_T)uv0[1];
  for (i0 = 0; i0 < 2; i0++) {
    b_minParticleDist[i0] = L->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(iv4, b_minParticleDist, &e_emlrtECI, sp);
  iv5[0] = (int32_T)uv0[0];
  iv5[1] = (int32_T)uv0[1];
  for (i0 = 0; i0 < 2; i0++) {
    b_minParticleDist[i0] = b_connectivityMap->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(iv5, b_minParticleDist, &d_emlrtECI, sp);
  i0 = L->size[0] * L->size[1];
  L->size[0] = (int32_T)uv0[0];
  emxEnsureCapacity(sp, (emxArray__common *)L, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = L->size[0] * L->size[1];
  L->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(sp, (emxArray__common *)L, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = (int32_T)uv0[0] * (int32_T)uv0[1];
  for (i0 = 0; i0 < i; i0++) {
    L->data[i0] = (1.0 - L->data[i0]) * b_connectivityMap->data[i0];
  }

  emxFree_real_T(&b_connectivityMap);

  /*  L(~connectivityMap) = 0; */
  st.site = &d_emlrtRSI;
  for (i0 = 0; i0 < 2; i0++) {
    sz[i0] = (uint32_T)L->size[i0];
  }

  b_emxInit_real_T(&st, &sumForces, 1, &d_emlrtRTEI, true);
  i0 = sumForces->size[0];
  sumForces->size[0] = (int32_T)sz[0];
  emxEnsureCapacity(&st, (emxArray__common *)sumForces, i0, (int32_T)sizeof
                    (real_T), &b_emlrtRTEI);
  if ((L->size[0] == 0) || (L->size[1] == 0)) {
    i0 = sumForces->size[0];
    sumForces->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(&st, (emxArray__common *)sumForces, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    i = (int32_T)sz[0];
    for (i0 = 0; i0 < i; i0++) {
      sumForces->data[i0] = 0.0;
    }
  } else {
    iy = -1;
    ixstart = -1;
    b_st.site = &n_emlrtRSI;
    overflow = (L->size[0] > 2147483646);
    if (overflow) {
      c_st.site = &g_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 1; i <= L->size[0]; i++) {
      ixstart++;
      ix = ixstart;
      s = L->data[ixstart];
      b_st.site = &o_emlrtRSI;
      if (2 > L->size[1]) {
        overflow = false;
      } else {
        overflow = (L->size[1] > 2147483646);
      }

      if (overflow) {
        c_st.site = &g_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (unnamed_idx_0 = 2; unnamed_idx_0 <= L->size[1]; unnamed_idx_0++) {
        ix += L->size[0];
        s += L->data[ix];
      }

      iy++;
      sumForces->data[iy] = s;
    }
  }

  st.site = &e_emlrtRSI;
  unnamed_idx_0 = sumForces->size[0];
  i = sumForces->size[0];
  i0 = r0->size[0] * r0->size[1];
  r0->size[0] = unnamed_idx_0;
  emxEnsureCapacity(&st, (emxArray__common *)r0, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = r0->size[0] * r0->size[1];
  r0->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)r0, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i *= unnamed_idx_0;
  for (i0 = 0; i0 < i; i0++) {
    r0->data[i0] = 0.0;
  }

  b_st.site = &f_emlrtRSI;
  if (1 > sumForces->size[0]) {
    overflow = false;
  } else {
    overflow = (sumForces->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &g_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 0; i + 1 <= sumForces->size[0]; i++) {
    r0->data[i + r0->size[0] * i] = sumForces->data[i];
  }

  emxFree_real_T(&sumForces);
  for (i0 = 0; i0 < 2; i0++) {
    iv0[i0] = r0->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_minParticleDist[i0] = L->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(iv0, b_minParticleDist, &c_emlrtECI, sp);
  i0 = force->size[0] * force->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = force->size[0];
  unnamed_idx_0 = force->size[1];
  i *= unnamed_idx_0;
  for (i0 = 0; i0 < i; i0++) {
    force->data[i0] = -force->data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_minParticleDist[i0] = force->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    iv0[i0] = r0->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(b_minParticleDist, iv0, &b_emlrtECI, sp);
  i0 = force->size[0] * force->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = force->size[0];
  unnamed_idx_0 = force->size[1];
  i *= unnamed_idx_0;
  for (i0 = 0; i0 < i; i0++) {
    force->data[i0] *= r0->data[i0] - L->data[i0];
  }

  emxFree_real_T(&r0);
  emxFree_real_T(&L);

  /*  set the maindiagonal */
  /*  force(fixedParticleNum,:) = 0;% zero out forces for fixed particles */
  /*  force(:,fixedParticleNum) = 0;% zero out forces for fixed particles */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (SpringForce.c) */
