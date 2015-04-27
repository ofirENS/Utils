/*
 * GetEdgesVectors.c
 *
 * Code generation for function 'GetEdgesVectors'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "GetEdgesVectors.h"
#include "GetEdgesVectors_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "GetEdgesVectors_mexutil.h"
#include "GetEdgesVectors_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 7, "GetEdgesVectors",
  "/home/ofir/Work/ENS/Utils/GetEdgesVectors.m" };

static emlrtRSInfo b_emlrtRSI = { 87, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtRSInfo c_emlrtRSI = { 81, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtRSInfo d_emlrtRSI = { 77, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtRSInfo e_emlrtRSI = { 75, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtRSInfo f_emlrtRSI = { 22, "eml_int_forloop_overflow_check",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo emlrtMCI = { 22, 5, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtMCInfo b_emlrtMCI = { 21, 15, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtMCInfo c_emlrtMCI = { 24, 5, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtMCInfo d_emlrtMCI = { 23, 15, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 23, "GetEdgesVectors",
  "/home/ofir/Work/ENS/Utils/GetEdgesVectors.m" };

static emlrtRTEInfo b_emlrtRTEI = { 41, 1, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 65, 1, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 66, 1, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 7, 9, "GetEdgesVectors",
  "/home/ofir/Work/ENS/Utils/GetEdgesVectors.m" };

static emlrtRTEInfo f_emlrtRTEI = { 85, 5, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 7, 46, "particlePosition",
  "GetEdgesVectors", "/home/ofir/Work/ENS/Utils/GetEdgesVectors.m", 0 };

static emlrtECInfo emlrtECI = { 2, 8, 30, "GetEdgesVectors",
  "/home/ofir/Work/ENS/Utils/GetEdgesVectors.m" };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 8, 22, "edgesVec", "GetEdgesVectors",
  "/home/ofir/Work/ENS/Utils/GetEdgesVectors.m", 0 };

static emlrtECInfo b_emlrtECI = { -1, 8, 9, "GetEdgesVectors",
  "/home/ofir/Work/ENS/Utils/GetEdgesVectors.m" };

static emlrtRSInfo h_emlrtRSI = { 23, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtRSInfo i_emlrtRSI = { 21, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtRSInfo k_emlrtRSI = { 24, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

static emlrtRSInfo l_emlrtRSI = { 22, "bsxfun",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/bsxfun.m"
};

/* Function Declarations */
static const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m3;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m3, 1, &pArray, "message", true, location);
}

void GetEdgesVectors(const emlrtStack *sp, const emxArray_real_T
                     *particlePosition, const emxArray_boolean_T
                     *connectivityMap, emxArray_real_T *edgesVec)
{
  int32_T i;
  int32_T i0;
  int32_T loop_ub;
  int32_T dIdx;
  emxArray_real_T *a;
  emxArray_real_T *r0;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *av;
  emxArray_boolean_T *bv;
  emxArray_real_T *cv;
  int32_T b;
  boolean_T guard1 = false;
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 44 };

  const mxArray *m0;
  char_T cv0[44];
  static const char_T cv1[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'a', 'r', 'r', 'a',
    'y', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 37 };

  char_T cv2[37];
  static const char_T cv3[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'd', 'y', 'n',
    'a', 'm', 'i', 'c', 'E', 'x', 'p', 'a', 'n', 's', 'i', 'o', 'n' };

  int32_T bsub;
  int32_T bk;
  int32_T ck;
  int32_T exitg1;
  int32_T exitg3;
  int32_T exitg2;
  int32_T b_a[2];
  int32_T iv2[2];
  int32_T iv3[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Calculate the edges vectors between connected particles */
  /*  particlePosition is an NxDim vector of position */
  /*  connectivityMat is an NxN logical matrix of particle connectivity */
  i = particlePosition->size[0];
  i0 = edgesVec->size[0] * edgesVec->size[1] * edgesVec->size[2];
  edgesVec->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)edgesVec, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = particlePosition->size[0];
  i0 = edgesVec->size[0] * edgesVec->size[1] * edgesVec->size[2];
  edgesVec->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)edgesVec, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = particlePosition->size[1];
  i0 = edgesVec->size[0] * edgesVec->size[1] * edgesVec->size[2];
  edgesVec->size[2] = i;
  emxEnsureCapacity(sp, (emxArray__common *)edgesVec, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = particlePosition->size[0] * particlePosition->size[0] *
    particlePosition->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    edgesVec->data[i0] = 0.0;
  }

  dIdx = 0;
  emxInit_real_T(sp, &a, 2, &e_emlrtRTEI, true);
  emxInit_real_T(sp, &r0, 2, &emlrtRTEI, true);
  emxInit_int32_T(sp, &r1, 1, &emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 1, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &av, 1, &c_emlrtRTEI, true);
  emxInit_boolean_T(sp, &bv, 1, &d_emlrtRTEI, true);
  b_emxInit_real_T(sp, &cv, 1, &f_emlrtRTEI, true);
  while (dIdx <= particlePosition->size[1] - 1) {
    st.site = &emlrtRSI;
    i0 = particlePosition->size[1];
    b = dIdx + 1;
    emlrtDynamicBoundsCheckFastR2012b(b, 1, i0, &emlrtBCI, &st);
    i0 = particlePosition->size[0];
    guard1 = false;
    if ((i0 != 1) && (connectivityMap->size[0] != 1)) {
      i0 = particlePosition->size[0];
      if (i0 != connectivityMap->size[0]) {
        overflow = false;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      overflow = true;
    }

    if (overflow) {
    } else {
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv0);
      for (i = 0; i < 44; i++) {
        cv0[i] = cv1[i];
      }

      emlrtInitCharArrayR2013a(&st, 44, m0, cv0);
      emlrtAssign(&y, m0);
      b_st.site = &i_emlrtRSI;
      c_st.site = &l_emlrtRSI;
      error(&b_st, message(&c_st, y, &emlrtMCI), &b_emlrtMCI);
    }

    i0 = particlePosition->size[0];
    if (i0 != connectivityMap->size[0]) {
      overflow = false;
    } else {
      overflow = true;
    }

    if (overflow) {
    } else {
      b_y = NULL;
      m0 = emlrtCreateCharArray(2, iv1);
      for (i = 0; i < 37; i++) {
        cv2[i] = cv3[i];
      }

      emlrtInitCharArrayR2013a(&st, 37, m0, cv2);
      emlrtAssign(&b_y, m0);
      b_st.site = &h_emlrtRSI;
      c_st.site = &k_emlrtRSI;
      error(&b_st, message(&c_st, b_y, &c_emlrtMCI), &d_emlrtMCI);
    }

    i0 = particlePosition->size[0];
    b = a->size[0] * a->size[1];
    a->size[0] = i0;
    a->size[1] = connectivityMap->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)a, b, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    i = connectivityMap->size[1];
    if ((i0 == 0) || (i == 0)) {
    } else {
      b = particlePosition->size[0];
      i = av->size[0];
      av->size[0] = b;
      emxEnsureCapacity(&st, (emxArray__common *)av, i, (int32_T)sizeof(real_T),
                        &c_emlrtRTEI);
      i = connectivityMap->size[0];
      b = bv->size[0];
      bv->size[0] = i;
      emxEnsureCapacity(&st, (emxArray__common *)bv, b, (int32_T)sizeof
                        (boolean_T), &d_emlrtRTEI);
      bsub = 1;
      bk = 0;
      b = particlePosition->size[0];
      i = connectivityMap->size[1];
      b = b * i - i0;
      b_st.site = &e_emlrtRSI;
      if ((i0 == 0) || (0 > b)) {
        overflow = false;
      } else {
        overflow = (b > MAX_int32_T - i0);
      }

      if (overflow) {
        d_st.site = &f_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      ck = 0;
      do {
        exitg1 = 0;
        i0 = particlePosition->size[0];
        if ((i0 > 0) && (ck <= b)) {
          b_st.site = &d_emlrtRSI;
          i0 = particlePosition->size[0];
          if (1 > i0) {
            overflow = false;
          } else {
            i0 = particlePosition->size[0];
            overflow = (i0 > 2147483646);
          }

          if (overflow) {
            d_st.site = &f_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }

          i = 0;
          do {
            exitg3 = 0;
            i0 = particlePosition->size[0];
            if (i + 1 <= i0) {
              av->data[i] = particlePosition->data[i + particlePosition->size[0]
                * dIdx];
              i++;
            } else {
              exitg3 = 1;
            }
          } while (exitg3 == 0);

          b_st.site = &c_emlrtRSI;
          if (1 > connectivityMap->size[0]) {
            overflow = false;
          } else {
            overflow = (connectivityMap->size[0] > 2147483646);
          }

          if (overflow) {
            d_st.site = &f_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }

          for (i = 0; i + 1 <= connectivityMap->size[0]; i++) {
            bv->data[i] = connectivityMap->data[bk + i];
          }

          i0 = cv->size[0];
          cv->size[0] = av->size[0];
          emxEnsureCapacity(&st, (emxArray__common *)cv, i0, (int32_T)sizeof
                            (real_T), &emlrtRTEI);
          loop_ub = av->size[0];
          for (i0 = 0; i0 < loop_ub; i0++) {
            cv->data[i0] = av->data[i0] * (real_T)bv->data[i0];
          }

          b_st.site = &b_emlrtRSI;
          i0 = particlePosition->size[0];
          if (1 > i0) {
            overflow = false;
          } else {
            i0 = particlePosition->size[0];
            overflow = (i0 > 2147483646);
          }

          if (overflow) {
            d_st.site = &f_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }

          i = 0;
          do {
            exitg2 = 0;
            i0 = particlePosition->size[0];
            if (i + 1 <= i0) {
              a->data[ck + i] = cv->data[i];
              i++;
            } else {
              exitg2 = 1;
            }
          } while (exitg2 == 0);

          if (bsub < connectivityMap->size[1]) {
            bk += connectivityMap->size[0];
            bsub++;
          } else {
            bsub = 1;
          }

          i0 = particlePosition->size[0];
          ck += i0;
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    i0 = r0->size[0] * r0->size[1];
    r0->size[0] = a->size[1];
    r0->size[1] = a->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = a->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      i = a->size[1];
      for (b = 0; b < i; b++) {
        r0->data[b + r0->size[0] * i0] = a->data[i0 + a->size[0] * b];
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_a[i0] = a->size[i0];
    }

    for (i0 = 0; i0 < 2; i0++) {
      iv2[i0] = r0->size[i0];
    }

    emlrtSizeEqCheck2DFastR2012b(b_a, iv2, &emlrtECI, sp);
    loop_ub = edgesVec->size[0];
    i0 = r1->size[0];
    r1->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r1->data[i0] = i0;
    }

    loop_ub = edgesVec->size[1];
    i0 = r2->size[0];
    r2->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r2, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r2->data[i0] = i0;
    }

    i0 = edgesVec->size[2];
    b = dIdx + 1;
    emlrtDynamicBoundsCheckFastR2012b(b, 1, i0, &b_emlrtBCI, sp);
    iv3[0] = r1->size[0];
    iv3[1] = r2->size[0];
    emlrtSubAssignSizeCheckR2012b(iv3, 2, *(int32_T (*)[2])a->size, 2,
      &b_emlrtECI, sp);
    loop_ub = a->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      i = a->size[0];
      for (b = 0; b < i; b++) {
        edgesVec->data[(r1->data[b] + edgesVec->size[0] * r2->data[i0]) +
          edgesVec->size[0] * edgesVec->size[1] * dIdx] = a->data[b + a->size[0]
          * i0] - r0->data[b + r0->size[0] * i0];
      }
    }

    /*              bsxfun(@times,particlePosition(:,dIdx)',connectivityMap); */
    dIdx++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&cv);
  emxFree_boolean_T(&bv);
  emxFree_real_T(&av);
  emxFree_int32_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_real_T(&r0);
  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (GetEdgesVectors.c) */
