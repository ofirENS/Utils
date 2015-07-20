/*
 * SpringForce.cpp
 *
 * Code generation for function 'SpringForce'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SpringForce.h"
#include "SpringForce_emxutil.h"
#include "eml_int_forloop_overflow_check.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 11, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtRSInfo b_emlrtRSI = { 15, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtRSInfo c_emlrtRSI = { 16, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtRSInfo d_emlrtRSI = { 74, "diag",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtRSInfo e_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo f_emlrtRSI = { 13, "sum",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo g_emlrtRSI = { 46, "sumprod",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/private/sumprod.m"
};

static emlrtRSInfo h_emlrtRSI = { 47, "combine_vector_elements",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRSInfo i_emlrtRSI = { 51, "combine_vector_elements",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 18, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtRTEInfo b_emlrtRTEI = { 14, 1, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtRTEInfo c_emlrtRTEI = { 15, 1, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtRTEInfo d_emlrtRTEI = { 1, 55, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtECInfo emlrtECI = { 2, 11, 19, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtECInfo b_emlrtECI = { 2, 14, 30, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtECInfo c_emlrtECI = { 2, 14, 29, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtECInfo d_emlrtECI = { 2, 16, 34, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

static emlrtECInfo e_emlrtECI = { 2, 16, 29, "SpringForce",
  "/home/ofir/Work/ENS/Utils/Forces/SpringForce.m" };

/* Function Definitions */
void SpringForce(const emlrtStack *sp, emxArray_real_T *particleDist, real_T
                 springConst, const emxArray_boolean_T *connectivityMap, real_T
                 minParticleDist, emxArray_real_T *force)
{
  emxArray_real_T *b_connectivityMap;
  int32_T vstride;
  int32_T j;
  emxArray_real_T *v;
  emxArray_real_T *r0;
  int32_T vlen;
  boolean_T overflow;
  int32_T b_particleDist[2];
  int32_T iv0[2];
  uint32_T sz[2];
  uint32_T uv0[2];
  emxArray_real_T *L;
  int32_T b_sz[2];
  int32_T c_sz[2];
  emxArray_real_T *sumForces;
  int32_T iy;
  int32_T ixstart;
  int32_T ix;
  real_T s;
  boolean_T b0;
  int32_T k;
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
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_connectivityMap, 2, &d_emlrtRTEI, true);

  /* ,fixedParticleNum) */
  /*  Calculate the spring force between N particles in any dimension M. */
  /*  particleDist    - NxN matrix of pairwise particle distances */
  /*  springConst     - NxN double matrix of spring constants */
  /*  connectivityMap - NxN binary matrix which defines the connectivity between particles */
  /*  minParticleDist - minimal distance between particles */
  /*  fixedParticleNum - particles in the system which do not move */
  vstride = b_connectivityMap->size[0] * b_connectivityMap->size[1];
  b_connectivityMap->size[0] = connectivityMap->size[0];
  b_connectivityMap->size[1] = connectivityMap->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_connectivityMap, vstride, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  j = connectivityMap->size[0] * connectivityMap->size[1];
  for (vstride = 0; vstride < j; vstride++) {
    b_connectivityMap->data[vstride] = connectivityMap->data[vstride];
  }

  emxInit_real_T(sp, &v, 2, &emlrtRTEI, true);

  /*  force              = springConst.*particleDist.*connectivityMap; */
  vstride = v->size[0] * v->size[1];
  v->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)v, vstride, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  j = particleDist->size[0];
  vstride = v->size[0] * v->size[1];
  v->size[1] = j;
  emxEnsureCapacity(sp, (emxArray__common *)v, vstride, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  j = particleDist->size[0];
  for (vstride = 0; vstride < j; vstride++) {
    v->data[vstride] = rtInf;
  }

  emxInit_real_T(sp, &r0, 2, &emlrtRTEI, true);
  st.site = &emlrtRSI;
  vlen = v->size[1];
  j = v->size[1];
  vstride = r0->size[0] * r0->size[1];
  r0->size[0] = vlen;
  emxEnsureCapacity(&st, (emxArray__common *)r0, vstride, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  vstride = r0->size[0] * r0->size[1];
  r0->size[1] = j;
  emxEnsureCapacity(&st, (emxArray__common *)r0, vstride, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  j *= vlen;
  for (vstride = 0; vstride < j; vstride++) {
    r0->data[vstride] = 0.0;
  }

  b_st.site = &d_emlrtRSI;
  if (1 > v->size[1]) {
    overflow = false;
  } else {
    overflow = (v->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &e_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (j = 0; j + 1 <= v->size[1]; j++) {
    r0->data[j + r0->size[0] * j] = rtInf;
  }

  emxFree_real_T(&v);
  for (vstride = 0; vstride < 2; vstride++) {
    b_particleDist[vstride] = particleDist->size[vstride];
  }

  for (vstride = 0; vstride < 2; vstride++) {
    iv0[vstride] = r0->size[vstride];
  }

  if ((b_particleDist[0] != iv0[0]) || (b_particleDist[1] != iv0[1])) {
    emlrtSizeEqCheckNDR2012b(b_particleDist, iv0, (emlrtECInfo *)&emlrtECI, sp);
  }

  vstride = particleDist->size[0] * particleDist->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)particleDist, vstride, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  j = particleDist->size[0];
  vlen = particleDist->size[1];
  j *= vlen;
  for (vstride = 0; vstride < j; vstride++) {
    particleDist->data[vstride] += r0->data[vstride];
  }

  for (vstride = 0; vstride < 2; vstride++) {
    sz[vstride] = (uint32_T)particleDist->size[vstride];
  }

  for (vstride = 0; vstride < 2; vstride++) {
    uv0[vstride] = (uint32_T)particleDist->size[vstride];
  }

  vstride = force->size[0] * force->size[1];
  force->size[0] = (int32_T)uv0[0];
  emxEnsureCapacity(sp, (emxArray__common *)force, vstride, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  vstride = force->size[0] * force->size[1];
  force->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(sp, (emxArray__common *)force, vstride, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  j = (int32_T)uv0[0] * (int32_T)uv0[1];
  for (vstride = 0; vstride < j; vstride++) {
    force->data[vstride] = springConst;
  }

  emxInit_real_T(sp, &L, 2, &b_emlrtRTEI, true);
  vstride = L->size[0] * L->size[1];
  L->size[0] = particleDist->size[0];
  L->size[1] = particleDist->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)L, vstride, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  j = particleDist->size[0] * particleDist->size[1];
  for (vstride = 0; vstride < j; vstride++) {
    L->data[vstride] = minParticleDist / particleDist->data[vstride];
  }

  b_sz[0] = (int32_T)sz[0];
  b_sz[1] = (int32_T)sz[1];
  for (vstride = 0; vstride < 2; vstride++) {
    b_particleDist[vstride] = L->size[vstride];
  }

  if ((b_sz[0] != b_particleDist[0]) || (b_sz[1] != b_particleDist[1])) {
    emlrtSizeEqCheckNDR2012b(b_sz, b_particleDist, (emlrtECInfo *)&b_emlrtECI,
      sp);
  }

  c_sz[0] = (int32_T)sz[0];
  c_sz[1] = (int32_T)sz[1];
  for (vstride = 0; vstride < 2; vstride++) {
    b_particleDist[vstride] = b_connectivityMap->size[vstride];
  }

  if ((c_sz[0] != b_particleDist[0]) || (c_sz[1] != b_particleDist[1])) {
    emlrtSizeEqCheckNDR2012b(c_sz, b_particleDist, (emlrtECInfo *)&c_emlrtECI,
      sp);
  }

  vstride = L->size[0] * L->size[1];
  L->size[0] = (int32_T)sz[0];
  emxEnsureCapacity(sp, (emxArray__common *)L, vstride, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  vstride = L->size[0] * L->size[1];
  L->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(sp, (emxArray__common *)L, vstride, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  j = (int32_T)sz[0] * (int32_T)sz[1];
  for (vstride = 0; vstride < j; vstride++) {
    L->data[vstride] = (0.0 - L->data[vstride]) * b_connectivityMap->
      data[vstride];
  }

  emxFree_real_T(&b_connectivityMap);
  st.site = &b_emlrtRSI;
  b_st.site = &f_emlrtRSI;
  c_st.site = &g_emlrtRSI;
  for (vstride = 0; vstride < 2; vstride++) {
    sz[vstride] = (uint32_T)L->size[vstride];
  }

  b_emxInit_real_T(&c_st, &sumForces, 1, &c_emlrtRTEI, true);
  vstride = sumForces->size[0];
  sumForces->size[0] = (int32_T)sz[0];
  emxEnsureCapacity(&c_st, (emxArray__common *)sumForces, vstride, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  if ((L->size[0] == 0) || (L->size[1] == 0)) {
    vstride = sumForces->size[0];
    sumForces->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(&c_st, (emxArray__common *)sumForces, vstride, (int32_T)
                      sizeof(real_T), &emlrtRTEI);
    j = (int32_T)sz[0];
    for (vstride = 0; vstride < j; vstride++) {
      sumForces->data[vstride] = 0.0;
    }
  } else {
    vlen = L->size[1];
    vstride = L->size[0];
    iy = -1;
    ixstart = -1;
    d_st.site = &h_emlrtRSI;
    overflow = (L->size[0] > 2147483646);
    if (overflow) {
      e_st.site = &e_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (j = 1; j <= vstride; j++) {
      ixstart++;
      ix = ixstart;
      s = L->data[ixstart];
      d_st.site = &i_emlrtRSI;
      if (2 > vlen) {
        b0 = false;
      } else {
        b0 = (vlen > 2147483646);
      }

      if (b0) {
        e_st.site = &e_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (k = 2; k <= vlen; k++) {
        ix += vstride;
        s += L->data[ix];
      }

      iy++;
      sumForces->data[iy] = s;
    }
  }

  st.site = &c_emlrtRSI;
  vlen = sumForces->size[0];
  j = sumForces->size[0];
  vstride = r0->size[0] * r0->size[1];
  r0->size[0] = vlen;
  emxEnsureCapacity(&st, (emxArray__common *)r0, vstride, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  vstride = r0->size[0] * r0->size[1];
  r0->size[1] = j;
  emxEnsureCapacity(&st, (emxArray__common *)r0, vstride, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  j *= vlen;
  for (vstride = 0; vstride < j; vstride++) {
    r0->data[vstride] = 0.0;
  }

  b_st.site = &d_emlrtRSI;
  if (1 > sumForces->size[0]) {
    overflow = false;
  } else {
    overflow = (sumForces->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &e_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (j = 0; j + 1 <= sumForces->size[0]; j++) {
    r0->data[j + r0->size[0] * j] = sumForces->data[j];
  }

  emxFree_real_T(&sumForces);
  for (vstride = 0; vstride < 2; vstride++) {
    iv0[vstride] = r0->size[vstride];
  }

  for (vstride = 0; vstride < 2; vstride++) {
    b_particleDist[vstride] = L->size[vstride];
  }

  if ((iv0[0] != b_particleDist[0]) || (iv0[1] != b_particleDist[1])) {
    emlrtSizeEqCheckNDR2012b(iv0, b_particleDist, (emlrtECInfo *)&d_emlrtECI, sp);
  }

  for (vstride = 0; vstride < 2; vstride++) {
    b_particleDist[vstride] = force->size[vstride];
  }

  for (vstride = 0; vstride < 2; vstride++) {
    iv0[vstride] = r0->size[vstride];
  }

  if ((b_particleDist[0] != iv0[0]) || (b_particleDist[1] != iv0[1])) {
    emlrtSizeEqCheckNDR2012b(b_particleDist, iv0, (emlrtECInfo *)&e_emlrtECI, sp);
  }

  vstride = force->size[0] * force->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)force, vstride, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  j = force->size[0];
  vlen = force->size[1];
  j *= vlen;
  for (vstride = 0; vstride < j; vstride++) {
    force->data[vstride] *= r0->data[vstride] - L->data[vstride];
  }

  emxFree_real_T(&r0);
  emxFree_real_T(&L);

  /*  set the maindiagonal */
  /*  force(fixedParticleNum,:) = 0;% zero out forces for fixed particles */
  /*  force(:,fixedParticleNum) = 0;% zero out forces for fixed particles */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (SpringForce.cpp) */
