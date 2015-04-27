/*
 * LennardJones.c
 *
 * Code generation for function 'LennardJones'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "LennardJones.h"
#include "power.h"
#include "LennardJones_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "LennardJones_mexutil.h"
#include "LennardJones_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 12, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRSInfo b_emlrtRSI = { 16, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRSInfo c_emlrtRSI = { 36, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRSInfo d_emlrtRSI = { 49, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRSInfo e_emlrtRSI = { 90, "diag",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/diag.m"
};

static emlrtRSInfo f_emlrtRSI = { 22, "eml_int_forloop_overflow_check",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo g_emlrtRSI = { 74, "diag",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/diag.m"
};

static emlrtRSInfo h_emlrtRSI = { 37, "dec2bin",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/strfun/dec2bin.m"
};

static emlrtRSInfo i_emlrtRSI = { 178, "dec2bin",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/strfun/dec2bin.m"
};

static emlrtRSInfo k_emlrtRSI = { 11, "eml_li_find",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/eml/eml_li_find.m"
};

static emlrtRSInfo l_emlrtRSI = { 26, "eml_li_find",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/eml/eml_li_find.m"
};

static emlrtRSInfo m_emlrtRSI = { 39, "eml_li_find",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/eml/eml_li_find.m"
};

static emlrtRSInfo n_emlrtRSI = { 70, "sum",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/datafun/sum.m"
};

static emlrtRSInfo o_emlrtRSI = { 76, "sum",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/datafun/sum.m"
};

static emlrtMCInfo emlrtMCI = { 87, 9, "diag",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/diag.m"
};

static emlrtMCInfo b_emlrtMCI = { 86, 19, "diag",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/diag.m"
};

static emlrtMCInfo e_emlrtMCI = { 14, 5, "eml_li_find",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/eml/eml_li_find.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 36, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRTEInfo b_emlrtRTEI = { 89, 5, "diag",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/diag.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 20, 9, "eml_li_find",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/eml/eml_li_find.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 55, 1, "sum",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/datafun/sum.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 10, 5, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRTEInfo f_emlrtRTEI = { 19, 9, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRTEInfo g_emlrtRTEI = { 43, 9, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRTEInfo h_emlrtRTEI = { 32, 5, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtDCInfo emlrtDCI = { 20, 34, "eml_li_find",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/eml/eml_li_find.m",
  4 };

static emlrtECInfo emlrtECI = { -1, 49, 9, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 49, 17, "force", "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtECInfo b_emlrtECI = { 2, 49, 30, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 49, 49, "forceDirection",
  "LennardJones", "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtECInfo c_emlrtECI = { -1, 48, 9, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 48, 28, "forceDirection",
  "LennardJones", "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtECInfo d_emlrtECI = { 2, 48, 37, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 41, 35, "particlePosition",
  "LennardJones", "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtECInfo e_emlrtECI = { 2, 28, 17, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 27, 12, "inds", "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 24, 12, "nb", "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtECInfo f_emlrtECI = { 2, 12, 14, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 18, 8, "nb", "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 36, 5, "forceValue", "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtRSInfo q_emlrtRSI = { 14, "eml_li_find",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/eml/eml_li_find.m"
};

static emlrtRSInfo r_emlrtRSI = { 86, "diag",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/diag.m"
};

static emlrtRSInfo t_emlrtRSI = { 87, "diag",
  "/home/ofir/Work/ProgramFiles/Matlab2014a/toolbox/eml/lib/matlab/elmat/diag.m"
};

/* Function Declarations */
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

/* Function Definitions */
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(0, sp);
  } else {
    if (numerator >= 0) {
      absNumerator = (uint32_T)numerator;
    } else {
      absNumerator = (uint32_T)-numerator;
    }

    if (denominator >= 0) {
      absDenominator = (uint32_T)denominator;
    } else {
      absDenominator = (uint32_T)-denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
    }

    if (quotientNeedsNegation) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m4;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m4, 1, &pArray, "message", true, location);
}

void LennardJones(const emlrtStack *sp, const emxArray_real_T *particlePosition,
                  const emxArray_real_T *particleDist, real_T LJPotentialWidth,
                  real_T LJPotentialDepth, emxArray_real_T *force,
                  emxArray_real_T *forceDirection)
{
  int32_T di;
  int32_T i0;
  int32_T loop_ub;
  emxArray_real_T *bdmInv;
  emxArray_real_T *A;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 39 };

  const mxArray *m0;
  char_T cv0[39];
  int32_T i;
  static const char_T cv1[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'd', 'i', 'a', 'g', '_', 'v', 'a', 'r', 's', 'i',
    'z', 'e', 'd', 'M', 'a', 't', 'r', 'i', 'x', 'V', 'e', 'c', 't', 'o', 'r' };

  int32_T olddi;
  boolean_T b0;
  int32_T k;
  emxArray_real_T *B1;
  boolean_T overflow;
  int32_T b_bdmInv[2];
  int32_T b_B1[2];
  int32_T iy;
  char_T s_data[52];
  boolean_T exitg2;
  boolean_T exitg1;
  char_T b_s_data[52];
  int8_T nb_data[52];
  emxArray_real_T *t;
  uint32_T siz[2];
  int32_T i1;
  real_T s;
  real_T d0;
  emxArray_boolean_T *x;
  boolean_T b1;
  const mxArray *b_y;
  emxArray_int32_T *r0;
  int32_T dIdx;
  emxArray_real_T *b_A;
  emxArray_int32_T *r1;
  emxArray_real_T *c_A;
  emxArray_real_T *d_A;
  emxArray_real_T *b_forceDirection;
  int32_T iv1[2];
  int32_T iv2[1];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Calculate the lennard jones potential between beads and its derivative */
  /*   */
  di = particlePosition->size[0];
  i0 = force->size[0] * force->size[1];
  force->size[0] = di;
  emxEnsureCapacity(sp, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  di = particlePosition->size[1];
  i0 = force->size[0] * force->size[1];
  force->size[1] = di;
  emxEnsureCapacity(sp, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = particlePosition->size[0] * particlePosition->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    force->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &bdmInv, 2, &e_emlrtRTEI, true);

  /*  the distance in which the potential is minimal */
  power(sp, particleDist, bdmInv);

  /*  one over the bead distance matrix */
  /*  remove the diagonal  */
  st.site = &emlrtRSI;
  b_emxInit_real_T(&st, &A, 1, &h_emlrtRTEI, true);
  if ((bdmInv->size[0] == 1) && (bdmInv->size[1] == 1)) {
    i0 = A->size[0];
    A->size[0] = 1;
    emxEnsureCapacity(&st, (emxArray__common *)A, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    A->data[0] = bdmInv->data[0];
  } else {
    if (!((bdmInv->size[0] == 1) || (bdmInv->size[1] == 1))) {
    } else {
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv0);
      for (i = 0; i < 39; i++) {
        cv0[i] = cv1[i];
      }

      emlrtInitCharArrayR2013a(&st, 39, m0, cv0);
      emlrtAssign(&y, m0);
      b_st.site = &r_emlrtRSI;
      c_st.site = &t_emlrtRSI;
      error(&b_st, message(&c_st, y, &emlrtMCI), &b_emlrtMCI);
    }

    if (0 < bdmInv->size[1]) {
      di = muIntScalarMin_sint32(bdmInv->size[0], bdmInv->size[1]);
      olddi = bdmInv->size[0] + 1;
    } else {
      di = 0;
      olddi = 0;
    }

    i0 = A->size[0];
    A->size[0] = di;
    emxEnsureCapacity(&st, (emxArray__common *)A, i0, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    b_st.site = &e_emlrtRSI;
    if (1 > di) {
      b0 = false;
    } else {
      b0 = (di > 2147483646);
    }

    if (b0) {
      d_st.site = &f_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (k = 0; k + 1 <= di; k++) {
      A->data[k] = bdmInv->data[k * olddi];
    }
  }

  emxInit_real_T(&st, &B1, 2, &g_emlrtRTEI, true);
  st.site = &emlrtRSI;
  di = A->size[0];
  olddi = A->size[0];
  i0 = B1->size[0] * B1->size[1];
  B1->size[0] = di;
  emxEnsureCapacity(&st, (emxArray__common *)B1, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = B1->size[0] * B1->size[1];
  B1->size[1] = olddi;
  emxEnsureCapacity(&st, (emxArray__common *)B1, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = di * olddi;
  for (i0 = 0; i0 < loop_ub; i0++) {
    B1->data[i0] = 0.0;
  }

  b_st.site = &g_emlrtRSI;
  if (1 > A->size[0]) {
    overflow = false;
  } else {
    overflow = (A->size[0] > 2147483646);
  }

  if (overflow) {
    d_st.site = &f_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k + 1 <= A->size[0]; k++) {
    B1->data[k + B1->size[0] * k] = A->data[k];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_bdmInv[i0] = bdmInv->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_B1[i0] = B1->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(b_bdmInv, b_B1, &f_emlrtECI, sp);
  i0 = bdmInv->size[0] * bdmInv->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)bdmInv, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  di = bdmInv->size[0];
  olddi = bdmInv->size[1];
  loop_ub = di * olddi;
  for (i0 = 0; i0 < loop_ub; i0++) {
    bdmInv->data[i0] -= B1->data[i0];
  }

  /*  d            = MatIntPower(bdmInv, 6); % matrix integer power (mex form Utils) */
  /*  Raise bdInv to the sixt power */
  st.site = &b_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  iy = 52;
  for (i0 = 0; i0 < 52; i0++) {
    s_data[i0] = '0';
  }

  di = 6;
  k = 52;
  exitg2 = false;
  while ((!exitg2) && (k > 0)) {
    olddi = di;
    di = (int32_T)muDoubleScalarFloor((real_T)di / 2.0);
    if ((di << 1) < olddi) {
      s_data[k - 1] = '1';
    }

    if (di > 0) {
      k--;
    } else {
      exitg2 = true;
    }
  }

  d_st.site = &i_emlrtRSI;
  di = 52;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k <= 51)) {
    overflow = false;
    if (s_data[k - 1] != '0') {
      overflow = true;
    }

    if (overflow) {
      di = k;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (di > 1) {
    for (k = di; k < 53; k++) {
      s_data[k - di] = s_data[k - 1];
    }

    loop_ub = 53 - di;
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_s_data[i0] = s_data[i0];
    }

    iy = 53 - di;
    loop_ub = 53 - di;
    for (i0 = 0; i0 < loop_ub; i0++) {
      s_data[i0] = b_s_data[i0];
    }
  }

  loop_ub = iy;
  for (i0 = 0; i0 < loop_ub; i0++) {
    nb_data[i0] = (int8_T)(s_data[i0] - 48);
  }

  emxInit_real_T(sp, &t, 2, &f_emlrtRTEI, true);
  if (nb_data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, iy, &g_emlrtBCI, sp) - 1]
      != 0) {
    i0 = t->size[0] * t->size[1];
    t->size[0] = bdmInv->size[0];
    t->size[1] = bdmInv->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)t, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = bdmInv->size[0] * bdmInv->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      t->data[i0] = bdmInv->data[i0];
    }
  } else {
    for (i0 = 0; i0 < 2; i0++) {
      siz[i0] = (uint32_T)bdmInv->size[i0];
    }

    i0 = t->size[0] * t->size[1];
    t->size[0] = (int32_T)siz[0];
    emxEnsureCapacity(sp, (emxArray__common *)t, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    i0 = t->size[0] * t->size[1];
    t->size[1] = (int32_T)siz[1];
    emxEnsureCapacity(sp, (emxArray__common *)t, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = (int32_T)siz[0] * (int32_T)siz[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      t->data[i0] = 1.0;
    }
  }

  if (1 > iy - 1) {
    i0 = 1;
    i1 = 1;
    iy = 0;
  } else {
    i0 = iy - 1;
    i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, iy, &f_emlrtBCI, sp);
    i1 = -1;
    iy = 1;
  }

  k = div_s32_floor(sp, iy - i0, i1);
  i = 0;
  while (i <= k) {
    di = bdmInv->size[0] * bdmInv->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)bdmInv, di, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    di = bdmInv->size[0];
    olddi = bdmInv->size[1];
    loop_ub = di * olddi;
    for (di = 0; di < loop_ub; di++) {
      bdmInv->data[di] *= bdmInv->data[di];
    }

    di = div_s32_floor(sp, iy - i0, i1) + 1;
    emlrtDynamicBoundsCheckFastR2012b(i + 1, 1, di, &e_emlrtBCI, sp);
    if (nb_data[(i0 + i1 * i) - 1] != 0) {
      for (di = 0; di < 2; di++) {
        b_B1[di] = t->size[di];
      }

      for (di = 0; di < 2; di++) {
        b_bdmInv[di] = bdmInv->size[di];
      }

      emlrtSizeEqCheck2DFastR2012b(b_B1, b_bdmInv, &e_emlrtECI, sp);
      di = t->size[0] * t->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)t, di, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      di = t->size[0];
      olddi = t->size[1];
      loop_ub = di * olddi;
      for (di = 0; di < loop_ub; di++) {
        t->data[di] *= bdmInv->data[di];
      }
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&bdmInv);
  s = muDoubleScalarPower(LJPotentialWidth, 6.0);

  /*      forceValue   = 24*(epsilon*bdmInv).*(-2*t.*t +t); % derivative of LJ function */
  i0 = t->size[0] * t->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)t, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  d0 = 2.0 * LJPotentialDepth * muDoubleScalarPower(LJPotentialWidth, 6.0);
  di = t->size[0];
  olddi = t->size[1];
  loop_ub = di * olddi;
  for (i0 = 0; i0 < loop_ub; i0++) {
    t->data[i0] = d0 * (s * t->data[i0] - 1.0);
  }

  emxInit_boolean_T(sp, &x, 2, &emlrtRTEI, true);
  i0 = x->size[0] * x->size[1];
  x->size[0] = t->size[0];
  x->size[1] = t->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)x, i0, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  loop_ub = t->size[0] * t->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    x->data[i0] = muDoubleScalarIsNaN(t->data[i0]);
  }

  st.site = &c_emlrtRSI;
  di = x->size[0] * x->size[1];
  b_st.site = &k_emlrtRSI;
  k = 0;
  d_st.site = &m_emlrtRSI;
  if (1 > di) {
    b1 = false;
  } else {
    b1 = (di > 2147483646);
  }

  if (b1) {
    e_st.site = &f_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (i = 1; i <= di; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  if (k <= di) {
  } else {
    b_y = NULL;
    m0 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m0);
    b_st.site = &q_emlrtRSI;
    error(&b_st, b_y, &e_emlrtMCI);
  }

  emxInit_int32_T(&st, &r0, 1, &emlrtRTEI, true);
  emlrtNonNegativeCheckFastR2012b(k, &emlrtDCI, &st);
  i0 = r0->size[0];
  r0->size[0] = k;
  emxEnsureCapacity(&st, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &c_emlrtRTEI);
  k = 0;
  b_st.site = &l_emlrtRSI;
  for (i = 1; i <= di; i++) {
    if (x->data[i - 1]) {
      r0->data[k] = i;
      k++;
    }
  }

  emxFree_boolean_T(&x);
  di = t->size[0];
  olddi = t->size[1];
  loop_ub = r0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    i1 = di * olddi;
    iy = r0->data[i0];
    t->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i1, &h_emlrtBCI, sp) - 1] =
      0.0;
  }

  di = particlePosition->size[0];
  i0 = forceDirection->size[0] * forceDirection->size[1] * forceDirection->size
    [2];
  forceDirection->size[0] = di;
  emxEnsureCapacity(sp, (emxArray__common *)forceDirection, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  di = particlePosition->size[0];
  i0 = forceDirection->size[0] * forceDirection->size[1] * forceDirection->size
    [2];
  forceDirection->size[1] = di;
  emxEnsureCapacity(sp, (emxArray__common *)forceDirection, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  di = particlePosition->size[1];
  i0 = forceDirection->size[0] * forceDirection->size[1] * forceDirection->size
    [2];
  forceDirection->size[2] = di;
  emxEnsureCapacity(sp, (emxArray__common *)forceDirection, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = particlePosition->size[0] * particlePosition->size[0] *
    particlePosition->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    forceDirection->data[i0] = 0.0;
  }

  /*  sum the contribution from all particles */
  dIdx = 0;
  emxInit_real_T(sp, &b_A, 2, &h_emlrtRTEI, true);
  emxInit_int32_T(sp, &r1, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &c_A, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &d_A, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &b_forceDirection, 2, &emlrtRTEI, true);
  while (dIdx <= particlePosition->size[1] - 1) {
    /*  replicate the position vector */
    loop_ub = particlePosition->size[0];
    i0 = particlePosition->size[1];
    i1 = 1 + dIdx;
    i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &d_emlrtBCI, sp);
    i1 = A->size[0];
    A->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)A, i1, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      A->data[i1] = particlePosition->data[i1 + particlePosition->size[0] * (i0
        - 1)];
    }

    siz[1] = (uint32_T)particlePosition->size[0];
    loop_ub = particlePosition->size[0];
    di = (int32_T)siz[1];
    i0 = B1->size[0] * B1->size[1];
    B1->size[0] = loop_ub;
    B1->size[1] = di;
    emxEnsureCapacity(sp, (emxArray__common *)B1, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < di; i0++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        B1->data[i1 + B1->size[0] * i0] = A->data[i1];
      }
    }

    siz[0] = (uint32_T)particlePosition->size[0];
    i0 = b_A->size[0] * b_A->size[1];
    b_A->size[0] = 1;
    b_A->size[1] = A->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_A, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = A->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_A->data[b_A->size[0] * i0] = A->data[i0];
    }

    /*  Subtract positions to get the direction vectors */
    di = (int32_T)siz[0];
    loop_ub = b_A->size[1];
    i0 = c_A->size[0] * c_A->size[1];
    c_A->size[0] = di;
    c_A->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)c_A, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      for (i1 = 0; i1 < di; i1++) {
        c_A->data[i1 + c_A->size[0] * i0] = b_A->data[b_A->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_bdmInv[i0] = c_A->size[i0];
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_B1[i0] = B1->size[i0];
    }

    emlrtSizeEqCheck2DFastR2012b(b_bdmInv, b_B1, &d_emlrtECI, sp);
    loop_ub = forceDirection->size[0];
    i0 = r0->size[0];
    r0->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r0->data[i0] = i0;
    }

    loop_ub = forceDirection->size[1];
    i0 = r1->size[0];
    r1->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r1->data[i0] = i0;
    }

    i0 = forceDirection->size[2];
    i1 = dIdx + 1;
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &c_emlrtBCI, sp);
    iv1[0] = r0->size[0];
    iv1[1] = r1->size[0];
    di = (int32_T)siz[0];
    loop_ub = b_A->size[1];
    i0 = d_A->size[0] * d_A->size[1];
    d_A->size[0] = di;
    d_A->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)d_A, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      for (i1 = 0; i1 < di; i1++) {
        d_A->data[i1 + d_A->size[0] * i0] = b_A->data[b_A->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_bdmInv[i0] = d_A->size[i0];
    }

    emlrtSubAssignSizeCheckR2012b(iv1, 2, b_bdmInv, 2, &c_emlrtECI, sp);
    di = (int32_T)siz[0];
    loop_ub = b_A->size[1] - 1;
    for (i0 = 0; i0 <= loop_ub; i0++) {
      for (i1 = 0; i1 < di; i1++) {
        forceDirection->data[(r0->data[i1] + forceDirection->size[0] * r1->
                              data[i0]) + forceDirection->size[0] *
          forceDirection->size[1] * dIdx] = b_A->data[b_A->size[0] * i0] -
          B1->data[i1 + B1->size[0] * i0];
      }
    }

    i0 = forceDirection->size[2];
    i1 = dIdx + 1;
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &b_emlrtBCI, sp);
    loop_ub = forceDirection->size[0];
    di = forceDirection->size[1];
    i0 = b_forceDirection->size[0] * b_forceDirection->size[1];
    b_forceDirection->size[0] = loop_ub;
    b_forceDirection->size[1] = di;
    emxEnsureCapacity(sp, (emxArray__common *)b_forceDirection, i0, (int32_T)
                      sizeof(real_T), &emlrtRTEI);
    for (i0 = 0; i0 < di; i0++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_forceDirection->data[i1 + b_forceDirection->size[0] * i0] =
          forceDirection->data[(i1 + forceDirection->size[0] * i0) +
          forceDirection->size[0] * forceDirection->size[1] * dIdx];
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_bdmInv[i0] = b_forceDirection->size[i0];
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_B1[i0] = t->size[i0];
    }

    emlrtSizeEqCheck2DFastR2012b(b_bdmInv, b_B1, &b_emlrtECI, sp);
    loop_ub = force->size[0];
    i0 = r0->size[0];
    r0->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r0->data[i0] = i0;
    }

    i0 = force->size[1];
    i1 = dIdx + 1;
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &emlrtBCI, sp);
    st.site = &d_emlrtRSI;
    loop_ub = forceDirection->size[0];
    di = forceDirection->size[1];
    i0 = B1->size[0] * B1->size[1];
    B1->size[0] = loop_ub;
    B1->size[1] = di;
    emxEnsureCapacity(&st, (emxArray__common *)B1, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < di; i0++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        B1->data[i1 + B1->size[0] * i0] = forceDirection->data[(i1 +
          forceDirection->size[0] * i0) + forceDirection->size[0] *
          forceDirection->size[1] * dIdx] * t->data[i1 + t->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      siz[i0] = (uint32_T)B1->size[i0];
    }

    i0 = b_A->size[0] * b_A->size[1];
    b_A->size[0] = 1;
    b_A->size[1] = (int32_T)siz[1];
    emxEnsureCapacity(&st, (emxArray__common *)b_A, i0, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    if ((B1->size[0] == 0) || (B1->size[1] == 0)) {
      i0 = b_A->size[0] * b_A->size[1];
      b_A->size[0] = 1;
      emxEnsureCapacity(&st, (emxArray__common *)b_A, i0, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      i0 = b_A->size[0] * b_A->size[1];
      b_A->size[1] = (int32_T)siz[1];
      emxEnsureCapacity(&st, (emxArray__common *)b_A, i0, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      loop_ub = (int32_T)siz[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        b_A->data[i0] = 0.0;
      }
    } else {
      olddi = -1;
      iy = -1;
      b_st.site = &n_emlrtRSI;
      overflow = (B1->size[1] > 2147483646);
      if (overflow) {
        d_st.site = &f_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (i = 1; i <= B1->size[1]; i++) {
        di = olddi + 1;
        olddi++;
        s = B1->data[di];
        b_st.site = &o_emlrtRSI;
        if (2 > B1->size[0]) {
          overflow = false;
        } else {
          overflow = (B1->size[0] > 2147483646);
        }

        if (overflow) {
          d_st.site = &f_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (k = 2; k <= B1->size[0]; k++) {
          olddi++;
          s += B1->data[olddi];
        }

        iy++;
        b_A->data[iy] = s;
      }
    }

    i0 = A->size[0];
    A->size[0] = b_A->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)A, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = b_A->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      A->data[i0] = b_A->data[b_A->size[0] * i0];
    }

    iv2[0] = r0->size[0];
    emlrtSubAssignSizeCheckR2012b(iv2, 1, *(int32_T (*)[1])A->size, 1, &emlrtECI,
      sp);
    loop_ub = A->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      force->data[r0->data[i0] + force->size[0] * dIdx] = A->data[i0];
    }

    dIdx++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&b_forceDirection);
  emxFree_real_T(&d_A);
  emxFree_real_T(&c_A);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r0);
  emxFree_real_T(&b_A);
  emxFree_real_T(&A);
  emxFree_real_T(&B1);
  emxFree_real_T(&t);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (LennardJones.c) */
