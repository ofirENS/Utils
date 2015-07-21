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
  "/home/ofir/Work/ENS/EpigenomeIntegrity/Code/../../Utils/Forces/SpringForce.m"
};

static emlrtRSInfo b_emlrtRSI = { 16, "SpringForce",
  "/home/ofir/Work/ENS/EpigenomeIntegrity/Code/../../Utils/Forces/SpringForce.m"
};

static emlrtRSInfo c_emlrtRSI = { 17, "SpringForce",
  "/home/ofir/Work/ENS/EpigenomeIntegrity/Code/../../Utils/Forces/SpringForce.m"
};

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
  "/home/ofir/Work/ENS/EpigenomeIntegrity/Code/../../Utils/Forces/SpringForce.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 14, 1, "SpringForce",
  "/home/ofir/Work/ENS/EpigenomeIntegrity/Code/../../Utils/Forces/SpringForce.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 16, 1, "SpringForce",
  "/home/ofir/Work/ENS/EpigenomeIntegrity/Code/../../Utils/Forces/SpringForce.m"
};

static emlrtECInfo emlrtECI = { 2, 11, 19, "SpringForce",
  "/home/ofir/Work/ENS/EpigenomeIntegrity/Code/../../Utils/Forces/SpringForce.m"
};

static emlrtECInfo b_emlrtECI = { 2, 14, 20, "SpringForce",
  "/home/ofir/Work/ENS/EpigenomeIntegrity/Code/../../Utils/Forces/SpringForce.m"
};

static emlrtECInfo c_emlrtECI = { 2, 14, 19, "SpringForce",
  "/home/ofir/Work/ENS/EpigenomeIntegrity/Code/../../Utils/Forces/SpringForce.m"
};

static emlrtECInfo d_emlrtECI = { 2, 17, 25, "SpringForce",
  "/home/ofir/Work/ENS/EpigenomeIntegrity/Code/../../Utils/Forces/SpringForce.m"
};

static emlrtECInfo e_emlrtECI = { 2, 17, 19, "SpringForce",
  "/home/ofir/Work/ENS/EpigenomeIntegrity/Code/../../Utils/Forces/SpringForce.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 15, 1, "L", "SpringForce",
  "/home/ofir/Work/ENS/EpigenomeIntegrity/Code/../../Utils/Forces/SpringForce.m",
  0 };

/* Function Definitions */
void SpringForce(const emlrtStack *sp, emxArray_real_T *particleDist, real_T
                 springConst, const emxArray_boolean_T *connectivityMap, real_T
                 minParticleDist, emxArray_real_T *force)
{
  emxArray_real_T *v;
  int32_T ix;
  int32_T j;
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
  emxArray_int32_T *r1;
  emxArray_boolean_T *r2;
  int32_T vstride;
  int32_T iy;
  int32_T ixstart;
  int32_T b_ixstart;
  emxArray_real_T *sumForces;
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
  emxInit_real_T(sp, &v, 2, &emlrtRTEI, true);

  /* ,fixedParticleNum) */
  /*  Calculate the spring force between N particles in any dimension M. */
  /*  particleDist    - NxN matrix of pairwise particle distances */
  /*  springConst     - NxN double matrix of spring constants */
  /*  connectivityMap - NxN binary matrix which defines the connectivity between particles */
  /*  minParticleDist - minimal distance between particles */
  /*  fixedParticleNum - particles in the system which do not move */
  /*  force              = springConst.*particleDist.*connectivityMap; */
  ix = v->size[0] * v->size[1];
  v->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)v, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  j = particleDist->size[0];
  ix = v->size[0] * v->size[1];
  v->size[1] = j;
  emxEnsureCapacity(sp, (emxArray__common *)v, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  j = particleDist->size[0];
  for (ix = 0; ix < j; ix++) {
    v->data[ix] = rtInf;
  }

  emxInit_real_T(sp, &r0, 2, &emlrtRTEI, true);
  st.site = &emlrtRSI;
  vlen = v->size[1];
  j = v->size[1];
  ix = r0->size[0] * r0->size[1];
  r0->size[0] = vlen;
  emxEnsureCapacity(&st, (emxArray__common *)r0, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ix = r0->size[0] * r0->size[1];
  r0->size[1] = j;
  emxEnsureCapacity(&st, (emxArray__common *)r0, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  j *= vlen;
  for (ix = 0; ix < j; ix++) {
    r0->data[ix] = 0.0;
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
  for (ix = 0; ix < 2; ix++) {
    b_particleDist[ix] = particleDist->size[ix];
  }

  for (ix = 0; ix < 2; ix++) {
    iv0[ix] = r0->size[ix];
  }

  if ((b_particleDist[0] != iv0[0]) || (b_particleDist[1] != iv0[1])) {
    emlrtSizeEqCheckNDR2012b(b_particleDist, iv0, (emlrtECInfo *)&emlrtECI, sp);
  }

  ix = particleDist->size[0] * particleDist->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)particleDist, ix, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  j = particleDist->size[0];
  vlen = particleDist->size[1];
  j *= vlen;
  for (ix = 0; ix < j; ix++) {
    particleDist->data[ix] += r0->data[ix];
  }

  for (ix = 0; ix < 2; ix++) {
    sz[ix] = (uint32_T)particleDist->size[ix];
  }

  for (ix = 0; ix < 2; ix++) {
    uv0[ix] = (uint32_T)particleDist->size[ix];
  }

  emxInit_real_T(sp, &L, 2, &b_emlrtRTEI, true);
  ix = L->size[0] * L->size[1];
  L->size[0] = particleDist->size[0];
  L->size[1] = particleDist->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)L, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  j = particleDist->size[0] * particleDist->size[1];
  for (ix = 0; ix < j; ix++) {
    L->data[ix] = minParticleDist / particleDist->data[ix];
  }

  b_sz[0] = (int32_T)sz[0];
  b_sz[1] = (int32_T)sz[1];
  for (ix = 0; ix < 2; ix++) {
    b_particleDist[ix] = L->size[ix];
  }

  if ((b_sz[0] != b_particleDist[0]) || (b_sz[1] != b_particleDist[1])) {
    emlrtSizeEqCheckNDR2012b(b_sz, b_particleDist, (emlrtECInfo *)&b_emlrtECI,
      sp);
  }

  c_sz[0] = (int32_T)sz[0];
  c_sz[1] = (int32_T)sz[1];
  for (ix = 0; ix < 2; ix++) {
    b_particleDist[ix] = connectivityMap->size[ix];
  }

  if ((c_sz[0] != b_particleDist[0]) || (c_sz[1] != b_particleDist[1])) {
    emlrtSizeEqCheckNDR2012b(c_sz, b_particleDist, (emlrtECInfo *)&c_emlrtECI,
      sp);
  }

  ix = L->size[0] * L->size[1];
  L->size[0] = (int32_T)sz[0];
  emxEnsureCapacity(sp, (emxArray__common *)L, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ix = L->size[0] * L->size[1];
  L->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(sp, (emxArray__common *)L, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  j = (int32_T)sz[0] * (int32_T)sz[1];
  for (ix = 0; ix < j; ix++) {
    L->data[ix] = (1.0 - L->data[ix]) * (real_T)connectivityMap->data[ix];
  }

  emxInit_int32_T(sp, &r1, 1, &emlrtRTEI, true);
  emxInit_boolean_T(sp, &r2, 2, &emlrtRTEI, true);
  ix = r2->size[0] * r2->size[1];
  r2->size[0] = connectivityMap->size[0];
  r2->size[1] = connectivityMap->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r2, ix, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  j = connectivityMap->size[0] * connectivityMap->size[1];
  for (ix = 0; ix < j; ix++) {
    r2->data[ix] = !connectivityMap->data[ix];
  }

  vstride = r2->size[0] * r2->size[1] - 1;
  j = 0;
  emxFree_boolean_T(&r2);
  for (vlen = 0; vlen <= vstride; vlen++) {
    if (!connectivityMap->data[vlen]) {
      j++;
    }
  }

  ix = r1->size[0];
  r1->size[0] = j;
  emxEnsureCapacity(sp, (emxArray__common *)r1, ix, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  j = 0;
  for (vlen = 0; vlen <= vstride; vlen++) {
    if (!connectivityMap->data[vlen]) {
      r1->data[j] = vlen + 1;
      j++;
    }
  }

  vlen = L->size[0];
  vstride = L->size[1];
  j = r1->size[0];
  for (ix = 0; ix < j; ix++) {
    iy = vlen * vstride;
    ixstart = r1->data[ix];
    if ((ixstart >= 1) && (ixstart < iy)) {
      b_ixstart = ixstart;
    } else {
      b_ixstart = emlrtDynamicBoundsCheckR2012b(ixstart, 1, iy, (emlrtBCInfo *)
        &emlrtBCI, sp);
    }

    L->data[b_ixstart - 1] = 0.0;
  }

  emxFree_int32_T(&r1);
  st.site = &b_emlrtRSI;
  b_st.site = &f_emlrtRSI;
  c_st.site = &g_emlrtRSI;
  for (ix = 0; ix < 2; ix++) {
    sz[ix] = (uint32_T)L->size[ix];
  }

  b_emxInit_real_T(&c_st, &sumForces, 1, &c_emlrtRTEI, true);
  ix = sumForces->size[0];
  sumForces->size[0] = (int32_T)sz[0];
  emxEnsureCapacity(&c_st, (emxArray__common *)sumForces, ix, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  if ((L->size[0] == 0) || (L->size[1] == 0)) {
    ix = sumForces->size[0];
    sumForces->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(&c_st, (emxArray__common *)sumForces, ix, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    j = (int32_T)sz[0];
    for (ix = 0; ix < j; ix++) {
      sumForces->data[ix] = 0.0;
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
  ix = r0->size[0] * r0->size[1];
  r0->size[0] = vlen;
  emxEnsureCapacity(&st, (emxArray__common *)r0, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ix = r0->size[0] * r0->size[1];
  r0->size[1] = j;
  emxEnsureCapacity(&st, (emxArray__common *)r0, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  j *= vlen;
  for (ix = 0; ix < j; ix++) {
    r0->data[ix] = 0.0;
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
  for (ix = 0; ix < 2; ix++) {
    iv0[ix] = r0->size[ix];
  }

  for (ix = 0; ix < 2; ix++) {
    b_particleDist[ix] = L->size[ix];
  }

  if ((iv0[0] != b_particleDist[0]) || (iv0[1] != b_particleDist[1])) {
    emlrtSizeEqCheckNDR2012b(iv0, b_particleDist, (emlrtECInfo *)&d_emlrtECI, sp);
  }

  ix = force->size[0] * force->size[1];
  force->size[0] = (int32_T)uv0[0];
  emxEnsureCapacity(sp, (emxArray__common *)force, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ix = force->size[0] * force->size[1];
  force->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(sp, (emxArray__common *)force, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  j = (int32_T)uv0[0] * (int32_T)uv0[1];
  for (ix = 0; ix < j; ix++) {
    force->data[ix] = -springConst;
  }

  for (ix = 0; ix < 2; ix++) {
    b_particleDist[ix] = force->size[ix];
  }

  for (ix = 0; ix < 2; ix++) {
    iv0[ix] = r0->size[ix];
  }

  if ((b_particleDist[0] != iv0[0]) || (b_particleDist[1] != iv0[1])) {
    emlrtSizeEqCheckNDR2012b(b_particleDist, iv0, (emlrtECInfo *)&e_emlrtECI, sp);
  }

  ix = force->size[0] * force->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)force, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  j = force->size[0];
  vlen = force->size[1];
  j *= vlen;
  for (ix = 0; ix < j; ix++) {
    force->data[ix] *= r0->data[ix] - L->data[ix];
  }

  emxFree_real_T(&r0);
  emxFree_real_T(&L);

  /*  set the maindiagonal */
  /*  force(fixedParticleNum,:) = 0;% zero out forces for fixed particles */
  /*  force(:,fixedParticleNum) = 0;% zero out forces for fixed particles */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (SpringForce.cpp) */
