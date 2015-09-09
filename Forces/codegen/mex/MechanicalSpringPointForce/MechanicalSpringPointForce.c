/*
 * MechanicalSpringPointForce.c
 *
 * Code generation for function 'MechanicalSpringPointForce'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MechanicalSpringPointForce.h"
#include "MechanicalSpringPointForce_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "scalexpAlloc.h"
#include "bsxfun.h"
#include "MechanicalSpringPointForce_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 8, "MechanicalSpringPointForce",
  "/home/ofir/Work/ENS/Utils/Forces/MechanicalSpringPointForce.m" };

static emlrtRSInfo b_emlrtRSI = { 9, "MechanicalSpringPointForce",
  "/home/ofir/Work/ENS/Utils/Forces/MechanicalSpringPointForce.m" };

static emlrtRSInfo c_emlrtRSI = { 11, "MechanicalSpringPointForce",
  "/home/ofir/Work/ENS/Utils/Forces/MechanicalSpringPointForce.m" };

static emlrtRSInfo d_emlrtRSI = { 18, "MechanicalSpringPointForce",
  "/home/ofir/Work/ENS/Utils/Forces/MechanicalSpringPointForce.m" };

static emlrtRSInfo i_emlrtRSI = { 42, "power",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo j_emlrtRSI = { 51, "power",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo k_emlrtRSI = { 11, "eml_scalexp_alloc",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"
};

static emlrtRSInfo l_emlrtRSI = { 13, "sum",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo m_emlrtRSI = { 46, "sumprod",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/private/sumprod.m"
};

static emlrtRSInfo n_emlrtRSI = { 47, "combine_vector_elements",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRSInfo o_emlrtRSI = { 51, "combine_vector_elements",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRSInfo p_emlrtRSI = { 91, "bsxfun",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

static emlrtMCInfo emlrtMCI = { 20, 5, "error",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 18, "MechanicalSpringPointForce",
  "/home/ofir/Work/ENS/Utils/Forces/MechanicalSpringPointForce.m" };

static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"
};

static emlrtRTEInfo c_emlrtRTEI = { 8, 7, "MechanicalSpringPointForce",
  "/home/ofir/Work/ENS/Utils/Forces/MechanicalSpringPointForce.m" };

static emlrtRTEInfo d_emlrtRTEI = { 9, 7, "MechanicalSpringPointForce",
  "/home/ofir/Work/ENS/Utils/Forces/MechanicalSpringPointForce.m" };

static emlrtRTEInfo f_emlrtRTEI = { 76, 1, "bsxfun",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

static emlrtECInfo emlrtECI = { 2, 11, 16, "MechanicalSpringPointForce",
  "/home/ofir/Work/ENS/Utils/Forces/MechanicalSpringPointForce.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 8, 75, "pointSourcePosition",
  "MechanicalSpringPointForce",
  "/home/ofir/Work/ENS/Utils/Forces/MechanicalSpringPointForce.m", 0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 10, 7, "distToSource",
  "MechanicalSpringPointForce",
  "/home/ofir/Work/ENS/Utils/Forces/MechanicalSpringPointForce.m", 0 };

static emlrtRSInfo q_emlrtRSI = { 20, "error",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/lang/error.m" };

/* Function Declarations */
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void MechanicalSpringPointForce(const emlrtStack *sp, const emxArray_real_T
  *particlePosition, const emxArray_real_T *pointSourcePosition, real_T
  forceDirection, real_T forceMagnitude, real_T cutoff, emxArray_real_T *force)
{
  int32_T vlen;
  int32_T i0;
  int32_T vstride;
  int32_T sIdx;
  emxArray_real_T *forceDir;
  emxArray_real_T *distToSource;
  emxArray_real_T *x;
  emxArray_real_T *av;
  emxArray_real_T *bv;
  emxArray_real_T *cv;
  emxArray_real_T *b_pointSourcePosition;
  uint32_T sz[2];
  int32_T k;
  real_T c;
  int32_T iy;
  int32_T ixstart;
  boolean_T overflow;
  int32_T bk;
  int32_T ix;
  real_T s;
  boolean_T b0;
  int32_T b_vstride;
  int32_T nb1;
  int32_T b_c;
  boolean_T b1;
  boolean_T b2;
  int32_T b_force[2];
  int32_T b_x[2];
  static const char_T varargin_1[28] = { 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r',
    't', 'e', 'd', ' ', 'd', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', ' ', 'o',
    'p', 't', 'i', 'o', 'n' };

  char_T u[28];
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 28 };

  const mxArray *m0;
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

  /*  Apply an harmonic pushing force for particles around force sources.  */
  /*  Calculate the distance betwen each particle and the point source position */
  vlen = particlePosition->size[0];
  i0 = force->size[0] * force->size[1];
  force->size[0] = vlen;
  force->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  vstride = particlePosition->size[0] * 3;
  for (i0 = 0; i0 < vstride; i0++) {
    force->data[i0] = 0.0;
  }

  sIdx = 0;
  emxInit_real_T(sp, &forceDir, 2, &c_emlrtRTEI, true);
  b_emxInit_real_T(sp, &distToSource, 1, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &x, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &av, 1, &e_emlrtRTEI, true);
  b_emxInit_real_T(sp, &bv, 1, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &cv, 1, &g_emlrtRTEI, true);
  emxInit_real_T(sp, &b_pointSourcePosition, 2, &emlrtRTEI, true);
  while (sIdx <= pointSourcePosition->size[0] - 1) {
    vstride = pointSourcePosition->size[1];
    i0 = pointSourcePosition->size[0];
    if ((sIdx + 1 >= 1) && (sIdx + 1 < i0)) {
      vlen = sIdx + 1;
    } else {
      vlen = emlrtDynamicBoundsCheckR2012b(sIdx + 1, 1, i0, &emlrtBCI, sp);
    }

    i0 = b_pointSourcePosition->size[0] * b_pointSourcePosition->size[1];
    b_pointSourcePosition->size[0] = 1;
    b_pointSourcePosition->size[1] = vstride;
    emxEnsureCapacity(sp, (emxArray__common *)b_pointSourcePosition, i0,
                      (int32_T)sizeof(real_T), &emlrtRTEI);
    for (i0 = 0; i0 < vstride; i0++) {
      b_pointSourcePosition->data[b_pointSourcePosition->size[0] * i0] =
        pointSourcePosition->data[(vlen + pointSourcePosition->size[0] * i0) - 1];
    }

    st.site = &emlrtRSI;
    bsxfun(&st, particlePosition, b_pointSourcePosition, forceDir);
    i0 = forceDir->size[0] * forceDir->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)forceDir, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    vlen = forceDir->size[0];
    vstride = forceDir->size[1];
    vstride *= vlen;
    for (i0 = 0; i0 < vstride; i0++) {
      forceDir->data[i0] *= 2.0;
    }

    st.site = &b_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    c_st.site = &j_emlrtRSI;
    d_st.site = &k_emlrtRSI;
    for (i0 = 0; i0 < 2; i0++) {
      sz[i0] = (uint32_T)forceDir->size[i0];
    }

    i0 = x->size[0] * x->size[1];
    x->size[0] = (int32_T)sz[0];
    x->size[1] = (int32_T)sz[1];
    emxEnsureCapacity(&d_st, (emxArray__common *)x, i0, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    if (dimagree(x, forceDir)) {
    } else {
      emlrtErrorWithMessageIdR2012b(&d_st, &b_emlrtRTEI, "MATLAB:dimagree", 0);
    }

    i0 = (int32_T)sz[0] * (int32_T)sz[1];
    for (k = 0; k < i0; k++) {
      x->data[k] = forceDir->data[k] * forceDir->data[k];
    }

    c = cutoff * cutoff;
    st.site = &b_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    c_st.site = &m_emlrtRSI;
    for (i0 = 0; i0 < 2; i0++) {
      sz[i0] = (uint32_T)x->size[i0];
    }

    i0 = distToSource->size[0];
    distToSource->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(&c_st, (emxArray__common *)distToSource, i0, (int32_T)
                      sizeof(real_T), &emlrtRTEI);
    if ((x->size[0] == 0) || (x->size[1] == 0)) {
      i0 = distToSource->size[0];
      distToSource->size[0] = (int32_T)sz[0];
      emxEnsureCapacity(&c_st, (emxArray__common *)distToSource, i0, (int32_T)
                        sizeof(real_T), &emlrtRTEI);
      vstride = (int32_T)sz[0];
      for (i0 = 0; i0 < vstride; i0++) {
        distToSource->data[i0] = 0.0;
      }
    } else {
      vlen = x->size[1];
      vstride = x->size[0];
      iy = -1;
      ixstart = -1;
      d_st.site = &n_emlrtRSI;
      overflow = (x->size[0] > 2147483646);
      if (overflow) {
        e_st.site = &h_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (bk = 1; bk <= vstride; bk++) {
        ixstart++;
        ix = ixstart;
        s = x->data[ixstart];
        d_st.site = &o_emlrtRSI;
        if (2 > vlen) {
          b0 = false;
        } else {
          b0 = (vlen > 2147483646);
        }

        if (b0) {
          e_st.site = &h_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        for (k = 2; k <= vlen; k++) {
          ix += vstride;
          s += x->data[ix];
        }

        iy++;
        distToSource->data[iy] = s;
      }
    }

    i0 = distToSource->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)distToSource, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    vstride = distToSource->size[0];
    for (i0 = 0; i0 < vstride; i0++) {
      distToSource->data[i0] = c - distToSource->data[i0];
    }

    vlen = distToSource->size[0];
    for (vstride = 0; vstride < vlen; vstride++) {
      if (distToSource->data[vstride] < 0.0) {
        i0 = distToSource->size[0];
        if ((vstride + 1 >= 1) && (vstride + 1 < i0)) {
          b_vstride = vstride + 1;
        } else {
          b_vstride = emlrtDynamicBoundsCheckR2012b(vstride + 1, 1, i0,
            &b_emlrtBCI, sp);
        }

        distToSource->data[b_vstride - 1] = 0.0;
      }
    }

    st.site = &c_emlrtRSI;
    ix = distToSource->size[0];
    nb1 = forceDir->size[0];
    if ((distToSource->size[0] != 1) && (forceDir->size[0] != 1) &&
        (distToSource->size[0] != forceDir->size[0])) {
      overflow = false;
    } else {
      overflow = true;
    }

    if (overflow) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &j_emlrtRTEI,
        "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
    }

    overflow = !(distToSource->size[0] != forceDir->size[0]);
    if (overflow) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &k_emlrtRTEI,
        "Coder:toolbox:bsxfun_dynamicExpansion", 0);
    }

    if (distToSource->size[0] <= forceDir->size[0]) {
      b_c = distToSource->size[0];
    } else {
      b_c = forceDir->size[0];
    }

    i0 = x->size[0] * x->size[1];
    x->size[0] = b_c;
    x->size[1] = forceDir->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)x, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    vlen = forceDir->size[1];
    if ((b_c == 0) || (vlen == 0)) {
    } else {
      vlen = distToSource->size[0];
      i0 = av->size[0];
      av->size[0] = vlen;
      emxEnsureCapacity(&st, (emxArray__common *)av, i0, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      vlen = forceDir->size[0];
      i0 = bv->size[0];
      bv->size[0] = vlen;
      emxEnsureCapacity(&st, (emxArray__common *)bv, i0, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      ixstart = 1;
      bk = 0;
      vlen = forceDir->size[1];
      vlen = b_c * vlen - b_c;
      b_st.site = &e_emlrtRSI;
      if ((b_c == 0) || (0 > vlen)) {
        overflow = false;
      } else {
        overflow = (vlen > MAX_int32_T - b_c);
      }

      if (overflow) {
        c_st.site = &h_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      iy = 0;
      while ((b_c > 0) && (iy <= vlen)) {
        b_st.site = &f_emlrtRSI;
        if (1 > ix) {
          b1 = false;
        } else {
          b1 = (ix > 2147483646);
        }

        if (b1) {
          c_st.site = &h_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (k = 0; k + 1 <= ix; k++) {
          av->data[k] = distToSource->data[k];
        }

        b_st.site = &p_emlrtRSI;
        if (1 > nb1) {
          b2 = false;
        } else {
          b2 = (nb1 > 2147483646);
        }

        if (b2) {
          c_st.site = &h_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (k = 0; k + 1 <= nb1; k++) {
          bv->data[k] = forceDir->data[bk + k];
        }

        i0 = cv->size[0];
        cv->size[0] = av->size[0];
        emxEnsureCapacity(&st, (emxArray__common *)cv, i0, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        vstride = av->size[0];
        for (i0 = 0; i0 < vstride; i0++) {
          cv->data[i0] = av->data[i0] * bv->data[i0];
        }

        b_st.site = &g_emlrtRSI;
        if (b_c > 2147483646) {
          c_st.site = &h_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (k = 0; k + 1 <= b_c; k++) {
          x->data[iy + k] = cv->data[k];
        }

        if (ixstart < forceDir->size[1]) {
          bk += nb1;
          ixstart++;
        } else {
          ixstart = 1;
        }

        iy += b_c;
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_force[i0] = force->size[i0];
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_x[i0] = x->size[i0];
    }

    if ((b_force[0] != b_x[0]) || (b_force[1] != b_x[1])) {
      emlrtSizeEqCheckNDR2012b(b_force, b_x, &emlrtECI, sp);
    }

    i0 = force->size[0] * force->size[1];
    force->size[1] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    vlen = force->size[0];
    vstride = force->size[1];
    vstride *= vlen;
    for (i0 = 0; i0 < vstride; i0++) {
      force->data[i0] += x->data[i0];
    }

    sIdx++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_pointSourcePosition);
  emxFree_real_T(&cv);
  emxFree_real_T(&bv);
  emxFree_real_T(&av);
  emxFree_real_T(&x);
  emxFree_real_T(&distToSource);
  emxFree_real_T(&forceDir);
  if (forceDirection == -1.0) {
    i0 = force->size[0] * force->size[1];
    force->size[1] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    vlen = force->size[0];
    vstride = force->size[1];
    vstride *= vlen;
    for (i0 = 0; i0 < vstride; i0++) {
      force->data[i0] *= -forceMagnitude;
    }
  } else if (forceDirection == 1.0) {
    i0 = force->size[0] * force->size[1];
    force->size[1] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    vlen = force->size[0];
    vstride = force->size[1];
    vstride *= vlen;
    for (i0 = 0; i0 < vstride; i0++) {
      force->data[i0] *= forceMagnitude;
    }
  } else {
    st.site = &d_emlrtRSI;
    for (i0 = 0; i0 < 28; i0++) {
      u[i0] = varargin_1[i0];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(&st, 28, m0, &u[0]);
    emlrtAssign(&y, m0);
    b_st.site = &q_emlrtRSI;
    error(&b_st, y, &emlrtMCI);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (MechanicalSpringPointForce.c) */
