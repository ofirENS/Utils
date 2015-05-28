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
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtRSInfo b_emlrtRSI = { 12, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtRSInfo c_emlrtRSI = { 13, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtRSInfo d_emlrtRSI = { 14, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtRSInfo e_emlrtRSI = { 74, "diag",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtRSInfo f_emlrtRSI = { 22, "eml_int_forloop_overflow_check",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo g_emlrtRSI = { 15, "rdivide",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRSInfo h_emlrtRSI = { 9, "eml_div",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/eml/eml_div.m" };

static emlrtRSInfo i_emlrtRSI = { 72, "sum",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo j_emlrtRSI = { 76, "sum",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo c_emlrtMCI = { 14, 5, "rdivide",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtMCInfo d_emlrtMCI = { 13, 15, "rdivide",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 18, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtRTEInfo b_emlrtRTEI = { 55, 1, "sum",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRTEInfo c_emlrtRTEI = { 12, 1, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtRTEInfo d_emlrtRTEI = { 13, 1, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtECInfo emlrtECI = { 2, 11, 16, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtECInfo b_emlrtECI = { 2, 12, 29, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtECInfo c_emlrtECI = { 2, 14, 43, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtECInfo d_emlrtECI = { 2, 14, 29, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtECInfo e_emlrtECI = { 2, 1, 1, "div",
  "/usr/local/MATLAB/R2014a/toolbox/coder/coder/+coder/+internal/div.p" };

static emlrtBCInfo emlrtBCI = { -1, -1, 15, 7, "force", "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m", 0 };

static emlrtDCInfo emlrtDCI = { 15, 7, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m", 1 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 16, 9, "force", "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m", 0 };

static emlrtRSInfo l_emlrtRSI = { 13, "rdivide",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRSInfo n_emlrtRSI = { 14, "rdivide",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/rdivide.m" };

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
                 emxArray_real_T *springConst, const emxArray_real_T
                 *connectivityMap, const emxArray_real_T *minParticleDist, const
                 emxArray_real_T *fixedParticleNum, emxArray_real_T *force)
{
  emxArray_real_T *v;
  int32_T iy;
  int32_T i;
  int32_T ixstart;
  emxArray_real_T *L;
  int32_T unnamed_idx_0;
  boolean_T overflow;
  int32_T b_particleDist[2];
  int32_T b_L[2];
  uint32_T sz[2];
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 15 };

  const mxArray *m0;
  char_T cv0[15];
  static const char_T cv1[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  int32_T b_minParticleDist[2];
  emxArray_real_T *sumForces;
  int32_T ix;
  real_T s;
  emxArray_int32_T *r0;
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
  d_st.prev = &st;
  d_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &v, 2, &emlrtRTEI, true);

  /*  Calculate the spring force between N particles in any dimension M. */
  /*  particleDist    - NxN matrix of pairwise particle distances */
  /*  springConst     - NxN double matrix of spring constants */
  /*  connectivityMap - NxN binary matrix which defines the connectivity between particles */
  /*  minParticleDist - minimal distance between particles */
  /*  fixedParticleNum - particles in the system which do not move */
  /*  force              = springConst.*particleDist.*connectivityMap; */
  iy = v->size[0] * v->size[1];
  v->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)v, iy, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = particleDist->size[0];
  iy = v->size[0] * v->size[1];
  v->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)v, iy, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ixstart = particleDist->size[0];
  for (iy = 0; iy < ixstart; iy++) {
    v->data[iy] = rtInf;
  }

  emxInit_real_T(sp, &L, 2, &c_emlrtRTEI, true);
  st.site = &emlrtRSI;
  unnamed_idx_0 = v->size[1];
  i = v->size[1];
  iy = L->size[0] * L->size[1];
  L->size[0] = unnamed_idx_0;
  emxEnsureCapacity(&st, (emxArray__common *)L, iy, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  iy = L->size[0] * L->size[1];
  L->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)L, iy, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ixstart = unnamed_idx_0 * i;
  for (iy = 0; iy < ixstart; iy++) {
    L->data[iy] = 0.0;
  }

  b_st.site = &e_emlrtRSI;
  if (1 > v->size[1]) {
    overflow = false;
  } else {
    overflow = (v->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &f_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 0; i + 1 <= v->size[1]; i++) {
    L->data[i + L->size[0] * i] = rtInf;
  }

  emxFree_real_T(&v);
  for (iy = 0; iy < 2; iy++) {
    b_particleDist[iy] = particleDist->size[iy];
  }

  for (iy = 0; iy < 2; iy++) {
    b_L[iy] = L->size[iy];
  }

  emlrtSizeEqCheck2DFastR2012b(b_particleDist, b_L, &emlrtECI, sp);
  iy = particleDist->size[0] * particleDist->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)particleDist, iy, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  i = particleDist->size[0];
  unnamed_idx_0 = particleDist->size[1];
  ixstart = i * unnamed_idx_0;
  for (iy = 0; iy < ixstart; iy++) {
    particleDist->data[iy] += L->data[iy];
  }

  st.site = &b_emlrtRSI;
  for (iy = 0; iy < 2; iy++) {
    sz[iy] = (uint32_T)minParticleDist->size[iy];
  }

  for (iy = 0; iy < 2; iy++) {
    varargin_2[iy] = (uint32_T)particleDist->size[iy];
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
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    for (i = 0; i < 15; i++) {
      cv0[i] = cv1[i];
    }

    emlrtInitCharArrayR2013a(&st, 15, m0, cv0);
    emlrtAssign(&y, m0);
    b_st.site = &l_emlrtRSI;
    d_st.site = &n_emlrtRSI;
    error(&b_st, b_message(&d_st, y, &c_emlrtMCI), &d_emlrtMCI);
  }

  b_st.site = &g_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  for (iy = 0; iy < 2; iy++) {
    b_minParticleDist[iy] = minParticleDist->size[iy];
  }

  for (iy = 0; iy < 2; iy++) {
    b_particleDist[iy] = particleDist->size[iy];
  }

  emlrtSizeEqCheck2DFastR2012b(b_minParticleDist, b_particleDist, &e_emlrtECI,
    &c_st);
  iy = L->size[0] * L->size[1];
  L->size[0] = minParticleDist->size[0];
  L->size[1] = minParticleDist->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)L, iy, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ixstart = minParticleDist->size[0] * minParticleDist->size[1];
  for (iy = 0; iy < ixstart; iy++) {
    L->data[iy] = minParticleDist->data[iy] / particleDist->data[iy];
  }

  for (iy = 0; iy < 2; iy++) {
    b_L[iy] = L->size[iy];
  }

  for (iy = 0; iy < 2; iy++) {
    b_minParticleDist[iy] = connectivityMap->size[iy];
  }

  emlrtSizeEqCheck2DFastR2012b(b_L, b_minParticleDist, &b_emlrtECI, sp);
  iy = L->size[0] * L->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)L, iy, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = L->size[0];
  unnamed_idx_0 = L->size[1];
  ixstart = i * unnamed_idx_0;
  for (iy = 0; iy < ixstart; iy++) {
    L->data[iy] = (1.0 - L->data[iy]) * connectivityMap->data[iy];
  }

  st.site = &c_emlrtRSI;
  for (iy = 0; iy < 2; iy++) {
    sz[iy] = (uint32_T)L->size[iy];
  }

  b_emxInit_real_T(&st, &sumForces, 1, &d_emlrtRTEI, true);
  iy = sumForces->size[0];
  sumForces->size[0] = (int32_T)sz[0];
  emxEnsureCapacity(&st, (emxArray__common *)sumForces, iy, (int32_T)sizeof
                    (real_T), &b_emlrtRTEI);
  if ((L->size[0] == 0) || (L->size[1] == 0)) {
    iy = sumForces->size[0];
    sumForces->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(&st, (emxArray__common *)sumForces, iy, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    ixstart = (int32_T)sz[0];
    for (iy = 0; iy < ixstart; iy++) {
      sumForces->data[iy] = 0.0;
    }
  } else {
    iy = -1;
    ixstart = -1;
    b_st.site = &i_emlrtRSI;
    overflow = (L->size[0] > 2147483646);
    if (overflow) {
      c_st.site = &f_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 1; i <= L->size[0]; i++) {
      ixstart++;
      ix = ixstart;
      s = L->data[ixstart];
      b_st.site = &j_emlrtRSI;
      if (2 > L->size[1]) {
        overflow = false;
      } else {
        overflow = (L->size[1] > 2147483646);
      }

      if (overflow) {
        c_st.site = &f_emlrtRSI;
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

  st.site = &d_emlrtRSI;
  unnamed_idx_0 = sumForces->size[0];
  i = sumForces->size[0];
  iy = force->size[0] * force->size[1];
  force->size[0] = unnamed_idx_0;
  emxEnsureCapacity(&st, (emxArray__common *)force, iy, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  iy = force->size[0] * force->size[1];
  force->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)force, iy, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ixstart = unnamed_idx_0 * i;
  for (iy = 0; iy < ixstart; iy++) {
    force->data[iy] = 0.0;
  }

  b_st.site = &e_emlrtRSI;
  if (1 > sumForces->size[0]) {
    overflow = false;
  } else {
    overflow = (sumForces->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &f_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 0; i + 1 <= sumForces->size[0]; i++) {
    force->data[i + force->size[0] * i] = sumForces->data[i];
  }

  emxFree_real_T(&sumForces);
  for (iy = 0; iy < 2; iy++) {
    b_particleDist[iy] = force->size[iy];
  }

  for (iy = 0; iy < 2; iy++) {
    b_L[iy] = L->size[iy];
  }

  emlrtSizeEqCheck2DFastR2012b(b_particleDist, b_L, &c_emlrtECI, sp);
  for (iy = 0; iy < 2; iy++) {
    b_minParticleDist[iy] = springConst->size[iy];
  }

  for (iy = 0; iy < 2; iy++) {
    b_particleDist[iy] = force->size[iy];
  }

  emlrtSizeEqCheck2DFastR2012b(b_minParticleDist, b_particleDist, &d_emlrtECI,
    sp);
  iy = force->size[0] * force->size[1];
  force->size[0] = springConst->size[0];
  force->size[1] = springConst->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)force, iy, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ixstart = springConst->size[0] * springConst->size[1];
  for (iy = 0; iy < ixstart; iy++) {
    force->data[iy] = springConst->data[iy] * (force->data[iy] - L->data[iy]);
  }

  emxFree_real_T(&L);
  emxInit_int32_T(sp, &r0, 1, &emlrtRTEI, true);

  /*  set the maindiagonal */
  iy = r0->size[0];
  r0->size[0] = fixedParticleNum->size[0] * fixedParticleNum->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r0, iy, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  ixstart = fixedParticleNum->size[0] * fixedParticleNum->size[1];
  for (iy = 0; iy < ixstart; iy++) {
    ix = force->size[0];
    s = fixedParticleNum->data[iy];
    i = (int32_T)emlrtIntegerCheckFastR2012b(s, &emlrtDCI, sp);
    r0->data[iy] = emlrtDynamicBoundsCheckFastR2012b(i, 1, ix, &emlrtBCI, sp);
  }

  ixstart = force->size[1];
  unnamed_idx_0 = r0->size[0];
  for (iy = 0; iy < ixstart; iy++) {
    for (ix = 0; ix < unnamed_idx_0; ix++) {
      force->data[(r0->data[ix] + force->size[0] * iy) - 1] = 0.0;
    }
  }

  /*  zero out forces for fixed particles */
  iy = r0->size[0];
  r0->size[0] = fixedParticleNum->size[0] * fixedParticleNum->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r0, iy, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  ixstart = fixedParticleNum->size[0] * fixedParticleNum->size[1];
  for (iy = 0; iy < ixstart; iy++) {
    ix = force->size[1];
    i = (int32_T)fixedParticleNum->data[iy];
    r0->data[iy] = emlrtDynamicBoundsCheckFastR2012b(i, 1, ix, &b_emlrtBCI, sp);
  }

  ixstart = force->size[0];
  i = r0->size[0];
  for (iy = 0; iy < i; iy++) {
    for (ix = 0; ix < ixstart; ix++) {
      force->data[ix + force->size[0] * (r0->data[iy] - 1)] = 0.0;
    }
  }

  emxFree_int32_T(&r0);

  /*  zero out forces for fixed particles */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (SpringForce.c) */
