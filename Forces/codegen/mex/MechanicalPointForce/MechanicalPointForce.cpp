/*
 * MechanicalPointForce.cpp
 *
 * Code generation for function 'MechanicalPointForce'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MechanicalPointForce.h"
#include "MechanicalPointForce_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "rdivide.h"
#include "eml_error.h"
#include "scalexpAlloc.h"
#include "bsxfun.h"
#include "MechanicalPointForce_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 17, "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m"
};

static emlrtRSInfo b_emlrtRSI = { 23, "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m"
};

static emlrtRSInfo c_emlrtRSI = { 27, "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m"
};

static emlrtRSInfo h_emlrtRSI = { 42, "power",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo i_emlrtRSI = { 51, "power",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo j_emlrtRSI = { 11, "eml_scalexp_alloc",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"
};

static emlrtRSInfo k_emlrtRSI = { 13, "sum",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo l_emlrtRSI = { 46, "sumprod",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/private/sumprod.m"
};

static emlrtRSInfo m_emlrtRSI = { 47, "combine_vector_elements",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRSInfo n_emlrtRSI = { 51, "combine_vector_elements",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRSInfo o_emlrtRSI = { 14, "sqrt",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elfun/sqrt.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 18, "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"
};

static emlrtRTEInfo c_emlrtRTEI = { 12, 1, "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 14, 1, "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 17, 9, "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 23, 9, "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 13, 15, "rdivide",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtECInfo emlrtECI = { 2, 43, 44, "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m"
};

static emlrtECInfo b_emlrtECI = { -1, 38, 13, "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 38, 25, "forceTemp",
  "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m",
  0 };

static emlrtECInfo c_emlrtECI = { 2, 38, 33, "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m"
};

static emlrtBCInfo b_emlrtBCI = { -1, -1, 38, 44, "forceDir",
  "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m",
  0 };

static emlrtECInfo d_emlrtECI = { -1, 27, 11, "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m"
};

static emlrtBCInfo c_emlrtBCI = { -1, -1, 27, 22, "forceDir",
  "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 27, 41, "forceDir",
  "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 17, 71, "pointSourcePosition",
  "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 41, 19, "forceTemp",
  "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 42, 9, "forceTemp",
  "MechanicalPointForce",
  "/home/ofir/Work/ENS/TestFiles/code/../../Utils/Forces/MechanicalPointForce.m",
  0 };

/* Function Definitions */
void MechanicalPointForce(const emlrtStack *sp, const emxArray_real_T
  *particlePosition, const emxArray_real_T *pointSourcePosition, real_T
  forceDirection, real_T forceMagnitude, real_T cutoff, emxArray_real_T *force)
{
  uint32_T sz[2];
  int32_T ix;
  emxArray_real_T *forceTemp;
  int32_T loop_ub;
  emxArray_real_T *forceMag;
  int32_T vlen;
  int32_T sIdx;
  emxArray_real_T *forceDir;
  emxArray_real_T *distToSource;
  emxArray_int32_T *r0;
  emxArray_boolean_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *x;
  emxArray_real_T *b_x;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *b_pointSourcePosition;
  emxArray_real_T *b_forceDir;
  emxArray_real_T *c_forceDir;
  int32_T k;
  int32_T vstride;
  int32_T iy;
  int32_T ixstart;
  boolean_T overflow;
  real_T s;
  boolean_T b0;
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T exitg1;
  int32_T iv0[1];
  int32_T iv1[2];
  int32_T b_force[2];
  int32_T iv2[1];
  int32_T b_iy;
  int32_T c_iy;
  int32_T b_forceTemp[2];
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

  /*  apply mechanical (push or pull) force on particles */
  /*  mechanicalForce is a logical flag  */
  /*  particlPosition is a N by 3 vector of particle position */
  /*  pointSourcePosition is the position of force sources  */
  /*  forceDirection is either  -1 for 'in' or 1 for 'out' */
  /*  forceMagnitude is a positive number between 0 and 1 */
  /*  cutoff is the maximal direction the force operates on particle relative */
  /*  to the pointSourcePosition  */
  /*  the output is a vector of N by 3 of delta position to th */
  for (ix = 0; ix < 2; ix++) {
    sz[ix] = (uint32_T)particlePosition->size[ix];
  }

  emxInit_real_T(sp, &forceTemp, 2, &c_emlrtRTEI, true);
  ix = forceTemp->size[0] * forceTemp->size[1];
  forceTemp->size[0] = (int32_T)sz[0];
  emxEnsureCapacity(sp, (emxArray__common *)forceTemp, ix, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  ix = forceTemp->size[0] * forceTemp->size[1];
  forceTemp->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(sp, (emxArray__common *)forceTemp, ix, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = (int32_T)sz[0] * (int32_T)sz[1];
  for (ix = 0; ix < loop_ub; ix++) {
    forceTemp->data[ix] = 0.0;
  }

  for (ix = 0; ix < 2; ix++) {
    sz[ix] = (uint32_T)particlePosition->size[ix];
  }

  ix = force->size[0] * force->size[1];
  force->size[0] = (int32_T)sz[0];
  emxEnsureCapacity(sp, (emxArray__common *)force, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ix = force->size[0] * force->size[1];
  force->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(sp, (emxArray__common *)force, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = (int32_T)sz[0] * (int32_T)sz[1];
  for (ix = 0; ix < loop_ub; ix++) {
    force->data[ix] = 0.0;
  }

  emxInit_real_T(sp, &forceMag, 2, &d_emlrtRTEI, true);
  vlen = particlePosition->size[0];
  ix = forceMag->size[0] * forceMag->size[1];
  forceMag->size[0] = vlen;
  emxEnsureCapacity(sp, (emxArray__common *)forceMag, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  vlen = particlePosition->size[0];
  ix = forceMag->size[0] * forceMag->size[1];
  forceMag->size[1] = vlen;
  emxEnsureCapacity(sp, (emxArray__common *)forceMag, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = particlePosition->size[0] * particlePosition->size[0];
  for (ix = 0; ix < loop_ub; ix++) {
    forceMag->data[ix] = 0.0;
  }

  sIdx = 0;
  emxInit_real_T(sp, &forceDir, 2, &e_emlrtRTEI, true);
  b_emxInit_real_T(sp, &distToSource, 1, &f_emlrtRTEI, true);
  emxInit_int32_T(sp, &r0, 1, &emlrtRTEI, true);
  emxInit_boolean_T(sp, &r1, 2, &emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &x, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_x, 1, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &r3, 1, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &r4, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &b_pointSourcePosition, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_forceDir, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &c_forceDir, 2, &emlrtRTEI, true);
  while (sIdx <= pointSourcePosition->size[0] - 1) {
    loop_ub = pointSourcePosition->size[1];
    ix = pointSourcePosition->size[0];
    if ((sIdx + 1 >= 1) && (sIdx + 1 < ix)) {
      vlen = sIdx + 1;
    } else {
      vlen = emlrtDynamicBoundsCheckR2012b(sIdx + 1, 1, ix, (emlrtBCInfo *)
        &e_emlrtBCI, sp);
    }

    ix = b_pointSourcePosition->size[0] * b_pointSourcePosition->size[1];
    b_pointSourcePosition->size[0] = 1;
    b_pointSourcePosition->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)b_pointSourcePosition, ix,
                      (int32_T)sizeof(real_T), &emlrtRTEI);
    for (ix = 0; ix < loop_ub; ix++) {
      b_pointSourcePosition->data[b_pointSourcePosition->size[0] * ix] =
        pointSourcePosition->data[(vlen + pointSourcePosition->size[0] * ix) - 1];
    }

    st.site = &emlrtRSI;
    bsxfun(&st, particlePosition, b_pointSourcePosition, forceDir);

    /*  Find the distance between the particles and the source */
    st.site = &b_emlrtRSI;
    b_st.site = &h_emlrtRSI;
    c_st.site = &i_emlrtRSI;
    d_st.site = &j_emlrtRSI;
    for (ix = 0; ix < 2; ix++) {
      sz[ix] = (uint32_T)forceDir->size[ix];
    }

    ix = x->size[0] * x->size[1];
    x->size[0] = (int32_T)sz[0];
    x->size[1] = (int32_T)sz[1];
    emxEnsureCapacity(&d_st, (emxArray__common *)x, ix, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    if (dimagree(x, forceDir)) {
    } else {
      emlrtErrorWithMessageIdR2012b(&d_st, &b_emlrtRTEI, "MATLAB:dimagree", 0);
    }

    ix = (int32_T)sz[0] * (int32_T)sz[1];
    for (k = 0; k < ix; k++) {
      x->data[k] = forceDir->data[k] * forceDir->data[k];
    }

    st.site = &b_emlrtRSI;
    b_st.site = &k_emlrtRSI;
    c_st.site = &l_emlrtRSI;
    for (ix = 0; ix < 2; ix++) {
      sz[ix] = (uint32_T)x->size[ix];
    }

    ix = b_x->size[0];
    b_x->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(&c_st, (emxArray__common *)b_x, ix, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    if ((x->size[0] == 0) || (x->size[1] == 0)) {
      ix = b_x->size[0];
      b_x->size[0] = (int32_T)sz[0];
      emxEnsureCapacity(&c_st, (emxArray__common *)b_x, ix, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = (int32_T)sz[0];
      for (ix = 0; ix < loop_ub; ix++) {
        b_x->data[ix] = 0.0;
      }
    } else {
      vlen = x->size[1];
      vstride = x->size[0];
      iy = -1;
      ixstart = -1;
      d_st.site = &m_emlrtRSI;
      overflow = (x->size[0] > 2147483646);
      if (overflow) {
        e_st.site = &g_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (loop_ub = 1; loop_ub <= vstride; loop_ub++) {
        ixstart++;
        ix = ixstart;
        s = x->data[ixstart];
        d_st.site = &n_emlrtRSI;
        if (2 > vlen) {
          b0 = false;
        } else {
          b0 = (vlen > 2147483646);
        }

        if (b0) {
          e_st.site = &g_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        for (k = 2; k <= vlen; k++) {
          ix += vstride;
          s += x->data[ix];
        }

        iy++;
        b_x->data[iy] = s;
      }
    }

    st.site = &b_emlrtRSI;
    ix = distToSource->size[0];
    distToSource->size[0] = b_x->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)distToSource, ix, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    loop_ub = b_x->size[0];
    for (ix = 0; ix < loop_ub; ix++) {
      distToSource->data[ix] = b_x->data[ix];
    }

    for (k = 0; k < b_x->size[0]; k++) {
      if (b_x->data[k] < 0.0) {
        b_st.site = &o_emlrtRSI;
        eml_error(&b_st);
      }
    }

    for (k = 0; k < b_x->size[0]; k++) {
      distToSource->data[k] = muDoubleScalarSqrt(distToSource->data[k]);
    }

    /*  Normalize the forceDirection */
    iy = 0;
    while (iy < 3) {
      loop_ub = forceDir->size[0];
      ix = r2->size[0];
      r2->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)r2, ix, (int32_T)sizeof(int32_T),
                        &emlrtRTEI);
      for (ix = 0; ix < loop_ub; ix++) {
        r2->data[ix] = ix;
      }

      ix = forceDir->size[1];
      ixstart = 1 + iy;
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, (emlrtBCInfo *)&c_emlrtBCI,
        sp);
      st.site = &c_emlrtRSI;
      ix = forceDir->size[1];
      ixstart = 1 + iy;
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, (emlrtBCInfo *)&d_emlrtBCI,
        &st);
      ix = forceDir->size[0];
      sz[0] = (uint32_T)ix;
      sz[1] = 1U;
      varargin_2[0] = (uint32_T)distToSource->size[0];
      varargin_2[1] = 1U;
      overflow = false;
      p = true;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k < 2)) {
        if (!((int32_T)sz[k] == (int32_T)varargin_2[k])) {
          p = false;
          exitg1 = true;
        } else {
          k++;
        }
      }

      if (!p) {
      } else {
        overflow = true;
      }

      if (overflow) {
      } else {
        emlrtErrorWithMessageIdR2012b(&st, &l_emlrtRTEI, "MATLAB:dimagree", 0);
      }

      loop_ub = forceDir->size[0];
      ix = b_x->size[0];
      b_x->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)b_x, ix, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      for (ix = 0; ix < loop_ub; ix++) {
        b_x->data[ix] = forceDir->data[ix + forceDir->size[0] * iy] /
          distToSource->data[ix];
      }

      iv0[0] = r2->size[0];
      emlrtSubAssignSizeCheckR2012b(iv0, 1, *(int32_T (*)[1])b_x->size, 1,
        (emlrtECInfo *)&d_emlrtECI, sp);
      loop_ub = b_x->size[0];
      for (ix = 0; ix < loop_ub; ix++) {
        forceDir->data[r2->data[ix] + forceDir->size[0] * iy] = b_x->data[ix];
      }

      /*  bsxfun(@rdivide,forceDir,distToSource); */
      iy++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /*  Multiply the */
    if (forceDirection == -1.0) {
      ix = r4->size[0];
      r4->size[0] = distToSource->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)r4, ix, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      loop_ub = distToSource->size[0];
      for (ix = 0; ix < loop_ub; ix++) {
        r4->data[ix] = 1.0 + distToSource->data[ix];
      }

      rdivide(sp, forceMagnitude, r4, b_x);
      vlen = b_x->size[0];
      ix = forceMag->size[0] * forceMag->size[1];
      forceMag->size[0] = vlen;
      emxEnsureCapacity(sp, (emxArray__common *)forceMag, ix, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      ix = forceMag->size[0] * forceMag->size[1];
      forceMag->size[1] = 1;
      emxEnsureCapacity(sp, (emxArray__common *)forceMag, ix, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      loop_ub = b_x->size[0];
      for (ix = 0; ix < loop_ub; ix++) {
        forceMag->data[ix] = 1.0 - b_x->data[ix];
      }
    } else {
      if (forceDirection == 1.0) {
        ix = r3->size[0];
        r3->size[0] = distToSource->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)r3, ix, (int32_T)sizeof(real_T),
                          &emlrtRTEI);
        loop_ub = distToSource->size[0];
        for (ix = 0; ix < loop_ub; ix++) {
          r3->data[ix] = 1.0 + distToSource->data[ix];
        }

        rdivide(sp, forceMagnitude, r3, b_x);
        vlen = b_x->size[0];
        ix = forceMag->size[0] * forceMag->size[1];
        forceMag->size[0] = vlen;
        emxEnsureCapacity(sp, (emxArray__common *)forceMag, ix, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        ix = forceMag->size[0] * forceMag->size[1];
        forceMag->size[1] = 1;
        emxEnsureCapacity(sp, (emxArray__common *)forceMag, ix, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        loop_ub = b_x->size[0];
        for (ix = 0; ix < loop_ub; ix++) {
          forceMag->data[ix] = b_x->data[ix];
        }
      }
    }

    iy = 0;
    while (iy < 3) {
      ix = forceDir->size[1];
      ixstart = 1 + iy;
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, (emlrtBCInfo *)&b_emlrtBCI,
        sp);
      ix = forceDir->size[0];
      iv1[0] = ix;
      iv1[1] = 1;
      for (ix = 0; ix < 2; ix++) {
        b_force[ix] = forceMag->size[ix];
      }

      if ((iv1[0] != b_force[0]) || (1 != b_force[1])) {
        emlrtSizeEqCheckNDR2012b(iv1, b_force, (emlrtECInfo *)&c_emlrtECI, sp);
      }

      loop_ub = forceTemp->size[0];
      ix = r2->size[0];
      r2->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)r2, ix, (int32_T)sizeof(int32_T),
                        &emlrtRTEI);
      for (ix = 0; ix < loop_ub; ix++) {
        r2->data[ix] = ix;
      }

      ix = forceTemp->size[1];
      ixstart = 1 + iy;
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, (emlrtBCInfo *)&emlrtBCI, sp);
      loop_ub = forceDir->size[0];
      vlen = forceDir->size[0];
      vstride = forceDir->size[0];
      ix = b_forceDir->size[0];
      b_forceDir->size[0] = vstride;
      emxEnsureCapacity(sp, (emxArray__common *)b_forceDir, ix, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (ix = 0; ix < vstride; ix++) {
        b_forceDir->data[ix] = forceDir->data[ix + forceDir->size[0] * iy];
      }

      ix = c_forceDir->size[0] * c_forceDir->size[1];
      c_forceDir->size[0] = loop_ub;
      c_forceDir->size[1] = 1;
      emxEnsureCapacity(sp, (emxArray__common *)c_forceDir, ix, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (ix = 0; ix < loop_ub; ix++) {
        c_forceDir->data[ix] = b_forceDir->data[ix];
      }

      ix = b_x->size[0];
      b_x->size[0] = vlen;
      emxEnsureCapacity(sp, (emxArray__common *)b_x, ix, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      for (ix = 0; ix < vlen; ix++) {
        b_x->data[ix] = c_forceDir->data[ix] * forceMag->data[ix];
      }

      iv2[0] = r2->size[0];
      emlrtSubAssignSizeCheckR2012b(iv2, 1, *(int32_T (*)[1])b_x->size, 1,
        (emlrtECInfo *)&b_emlrtECI, sp);
      loop_ub = b_x->size[0];
      for (ix = 0; ix < loop_ub; ix++) {
        forceTemp->data[r2->data[ix] + forceTemp->size[0] * iy] = b_x->data[ix];
      }

      /*  bsxfun(@times,forceDir,forceTemp); */
      iy++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    iy = distToSource->size[0] - 1;
    vlen = 0;
    for (vstride = 0; vstride <= iy; vstride++) {
      if (distToSource->data[vstride] > cutoff) {
        vlen++;
      }
    }

    ix = r2->size[0];
    r2->size[0] = vlen;
    emxEnsureCapacity(sp, (emxArray__common *)r2, ix, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    vlen = 0;
    for (vstride = 0; vstride <= iy; vstride++) {
      if (distToSource->data[vstride] > cutoff) {
        r2->data[vlen] = vstride + 1;
        vlen++;
      }
    }

    loop_ub = forceTemp->size[1];
    vstride = forceTemp->size[0];
    vlen = r2->size[0];
    for (ix = 0; ix < loop_ub; ix++) {
      for (ixstart = 0; ixstart < vlen; ixstart++) {
        iy = r2->data[ixstart];
        if ((iy >= 1) && (iy < vstride)) {
          b_iy = iy;
        } else {
          b_iy = emlrtDynamicBoundsCheckR2012b(iy, 1, vstride, (emlrtBCInfo *)
            &f_emlrtBCI, sp);
        }

        forceTemp->data[(b_iy + forceTemp->size[0] * ix) - 1] = 0.0;
      }
    }

    ix = r1->size[0] * r1->size[1];
    r1->size[0] = forceTemp->size[0];
    r1->size[1] = forceTemp->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)r1, ix, (int32_T)sizeof(boolean_T),
                      &emlrtRTEI);
    loop_ub = forceTemp->size[0] * forceTemp->size[1];
    for (ix = 0; ix < loop_ub; ix++) {
      r1->data[ix] = muDoubleScalarIsNaN(forceTemp->data[ix]);
    }

    iy = r1->size[0] * r1->size[1] - 1;
    vlen = 0;
    for (vstride = 0; vstride <= iy; vstride++) {
      if (r1->data[vstride]) {
        vlen++;
      }
    }

    ix = r0->size[0];
    r0->size[0] = vlen;
    emxEnsureCapacity(sp, (emxArray__common *)r0, ix, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    vlen = 0;
    for (vstride = 0; vstride <= iy; vstride++) {
      if (r1->data[vstride]) {
        r0->data[vlen] = vstride + 1;
        vlen++;
      }
    }

    vstride = forceTemp->size[0];
    vlen = forceTemp->size[1];
    loop_ub = r0->size[0];
    for (ix = 0; ix < loop_ub; ix++) {
      ixstart = vstride * vlen;
      iy = r0->data[ix];
      if ((iy >= 1) && (iy < ixstart)) {
        c_iy = iy;
      } else {
        c_iy = emlrtDynamicBoundsCheckR2012b(iy, 1, ixstart, (emlrtBCInfo *)
          &g_emlrtBCI, sp);
      }

      forceTemp->data[c_iy - 1] = 0.0;
    }

    for (ix = 0; ix < 2; ix++) {
      b_force[ix] = force->size[ix];
    }

    for (ix = 0; ix < 2; ix++) {
      b_forceTemp[ix] = forceTemp->size[ix];
    }

    if ((b_force[0] != b_forceTemp[0]) || (b_force[1] != b_forceTemp[1])) {
      emlrtSizeEqCheckNDR2012b(b_force, b_forceTemp, (emlrtECInfo *)&emlrtECI,
        sp);
    }

    ix = force->size[0] * force->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)force, ix, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    vlen = force->size[0];
    vstride = force->size[1];
    loop_ub = vlen * vstride;
    for (ix = 0; ix < loop_ub; ix++) {
      force->data[ix] += forceTemp->data[ix];
    }

    sIdx++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&c_forceDir);
  emxFree_real_T(&b_forceDir);
  emxFree_real_T(&b_pointSourcePosition);
  emxFree_real_T(&r4);
  emxFree_real_T(&r3);
  emxFree_real_T(&b_x);
  emxFree_real_T(&x);
  emxFree_int32_T(&r2);
  emxFree_boolean_T(&r1);
  emxFree_int32_T(&r0);
  emxFree_real_T(&distToSource);
  emxFree_real_T(&forceDir);
  emxFree_real_T(&forceMag);
  emxFree_real_T(&forceTemp);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (MechanicalPointForce.cpp) */
