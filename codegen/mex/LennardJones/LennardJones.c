/*
 * LennardJones.c
 *
 * Code generation for function 'LennardJones'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "LennardJones.h"
#include "LennardJones_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "LennardJones_mexutil.h"
#include "LennardJones_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 12, "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m" };

static emlrtRSInfo b_emlrtRSI = { 31, "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m" };

static emlrtRSInfo c_emlrtRSI = { 42, "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m" };

static emlrtRSInfo d_emlrtRSI = { 37, "dec2bin",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\dec2bin.m"
};

static emlrtRSInfo e_emlrtRSI = { 178, "dec2bin",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\dec2bin.m"
};

static emlrtRSInfo g_emlrtRSI = { 22, "eml_int_forloop_overflow_check",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo h_emlrtRSI = { 11, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo i_emlrtRSI = { 26, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo j_emlrtRSI = { 39, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo k_emlrtRSI = { 70, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo l_emlrtRSI = { 76, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtMCInfo c_emlrtMCI = { 14, 5, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 18, "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m" };

static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\scalexpAlloc.p"
};

static emlrtRTEInfo c_emlrtRTEI = { 20, 9, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 55, 1, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 8, 5, "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m" };

static emlrtRTEInfo f_emlrtRTEI = { 13, 5, "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m" };

static emlrtRTEInfo g_emlrtRTEI = { 15, 9, "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m" };

static emlrtRTEInfo h_emlrtRTEI = { 34, 9, "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m" };

static emlrtDCInfo emlrtDCI = { 20, 34, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m",
  4 };

static emlrtECInfo emlrtECI = { -1, 42, 9, "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 42, 17, "force", "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m", 0 };

static emlrtECInfo b_emlrtECI = { 2, 42, 30, "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m" };

static emlrtECInfo c_emlrtECI = { 2, 41, 15, "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m" };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 34, 35, "particlePosition",
  "LennardJones", "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m", 0 };

static emlrtECInfo d_emlrtECI = { 2, 29, 20, "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m" };

static emlrtECInfo e_emlrtECI = { 2, 29, 42, "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m" };

static emlrtECInfo f_emlrtECI = { 2, 24, 17, "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m" };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 23, 12, "inds", "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m", 0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 20, 12, "nb", "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 14, 8, "nb", "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 31, 5, "forceValue", "LennardJones",
  "D:\\Ofir\\Work\\ENS\\Utils\\LennardJones.m", 0 };

static emlrtRSInfo n_emlrtRSI = { 14, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

/* Function Declarations */
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);

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

void LennardJones(const emlrtStack *sp, const emxArray_real_T *particlePosition,
                  const emxArray_real_T *particleDist, real_T LJPotentialWidth,
                  real_T LJPotentialDepth, emxArray_real_T *force)
{
  int32_T di;
  int32_T i0;
  int32_T loop_ub;
  uint32_T siz[2];
  emxArray_real_T *bdmInv;
  int32_T k;
  int32_T iy;
  char_T s_data[52];
  boolean_T exitg2;
  int32_T olddi;
  boolean_T exitg1;
  boolean_T overflow;
  char_T b_s_data[52];
  int8_T nb_data[52];
  emxArray_real_T *ak;
  emxArray_real_T *d;
  int32_T i1;
  int32_T i;
  int32_T b_d[2];
  int32_T b_ak[2];
  real_T s;
  int32_T b_bdmInv[2];
  emxArray_boolean_T *x;
  boolean_T b0;
  const mxArray *y;
  const mxArray *m0;
  emxArray_int32_T *r0;
  int32_T dIdx;
  emxArray_real_T *A;
  emxArray_real_T *b_A;
  emxArray_real_T *c_A;
  int32_T iv0[1];
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
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

  for (i0 = 0; i0 < 2; i0++) {
    siz[i0] = (uint32_T)particleDist->size[i0];
  }

  emxInit_real_T(sp, &bdmInv, 2, &e_emlrtRTEI, true);
  i0 = bdmInv->size[0] * bdmInv->size[1];
  bdmInv->size[0] = (int32_T)siz[0];
  bdmInv->size[1] = (int32_T)siz[1];
  emxEnsureCapacity(sp, (emxArray__common *)bdmInv, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  i0 = (int32_T)siz[0] * (int32_T)siz[1];
  for (k = 0; k < i0; k++) {
    bdmInv->data[k] = 1.0 / particleDist->data[k];
  }

  /*  one over the bead distance matrix */
  /*                  d            = MatIntPower(bdmInv, 6); % matrix integer power (mex form Utils) */
  st.site = &emlrtRSI;
  b_st.site = &d_emlrtRSI;
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

  c_st.site = &e_emlrtRSI;
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

  emxInit_real_T(sp, &ak, 2, &f_emlrtRTEI, true);
  i0 = ak->size[0] * ak->size[1];
  ak->size[0] = bdmInv->size[0];
  ak->size[1] = bdmInv->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)ak, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = bdmInv->size[0] * bdmInv->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    ak->data[i0] = bdmInv->data[i0];
  }

  emxInit_real_T(sp, &d, 2, &g_emlrtRTEI, true);
  if (nb_data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, iy, &e_emlrtBCI, sp) - 1]
      != 0) {
    i0 = d->size[0] * d->size[1];
    d->size[0] = bdmInv->size[0];
    d->size[1] = bdmInv->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)d, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = bdmInv->size[0] * bdmInv->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      d->data[i0] = bdmInv->data[i0];
    }
  } else {
    for (i0 = 0; i0 < 2; i0++) {
      siz[i0] = (uint32_T)bdmInv->size[i0];
    }

    i0 = d->size[0] * d->size[1];
    d->size[0] = (int32_T)siz[0];
    emxEnsureCapacity(sp, (emxArray__common *)d, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    i0 = d->size[0] * d->size[1];
    d->size[1] = (int32_T)siz[1];
    emxEnsureCapacity(sp, (emxArray__common *)d, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = (int32_T)siz[0] * (int32_T)siz[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      d->data[i0] = 1.0;
    }
  }

  if (1 > iy - 1) {
    i0 = 1;
    i1 = 1;
    i = 0;
  } else {
    i0 = iy - 1;
    i0 = emlrtDynamicBoundsCheckFastR2012b(i0, 1, iy, &d_emlrtBCI, sp);
    i1 = -1;
    i = 1;
  }

  iy = div_s32_floor(sp, i - i0, i1);
  k = 0;
  while (k <= iy) {
    di = ak->size[0] * ak->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)ak, di, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    di = ak->size[0];
    olddi = ak->size[1];
    loop_ub = di * olddi;
    for (di = 0; di < loop_ub; di++) {
      ak->data[di] *= ak->data[di];
    }

    di = div_s32_floor(sp, i - i0, i1) + 1;
    emlrtDynamicBoundsCheckFastR2012b(k + 1, 1, di, &c_emlrtBCI, sp);
    if (nb_data[(i0 + i1 * k) - 1] != 0) {
      for (di = 0; di < 2; di++) {
        b_d[di] = d->size[di];
      }

      for (di = 0; di < 2; di++) {
        b_ak[di] = ak->size[di];
      }

      emlrtSizeEqCheck2DFastR2012b(b_d, b_ak, &f_emlrtECI, sp);
      di = d->size[0] * d->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)d, di, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      di = d->size[0];
      olddi = d->size[1];
      loop_ub = di * olddi;
      for (di = 0; di < loop_ub; di++) {
        d->data[di] *= ak->data[di];
      }
    }

    k++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  s = muDoubleScalarPower(LJPotentialWidth, 6.0);
  i0 = d->size[0] * d->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  di = d->size[0];
  olddi = d->size[1];
  loop_ub = di * olddi;
  for (i0 = 0; i0 < loop_ub; i0++) {
    d->data[i0] *= s;
  }

  i0 = ak->size[0] * ak->size[1];
  ak->size[0] = d->size[0];
  ak->size[1] = d->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)ak, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = d->size[0] * d->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    ak->data[i0] = -2.0 * d->data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_ak[i0] = ak->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_d[i0] = d->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(b_ak, b_d, &e_emlrtECI, sp);
  i0 = ak->size[0] * ak->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)ak, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  di = ak->size[0];
  olddi = ak->size[1];
  loop_ub = di * olddi;
  for (i0 = 0; i0 < loop_ub; i0++) {
    ak->data[i0] *= d->data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_ak[i0] = ak->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_d[i0] = d->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(b_ak, b_d, &e_emlrtECI, sp);
  i0 = bdmInv->size[0] * bdmInv->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)bdmInv, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  di = bdmInv->size[0];
  olddi = bdmInv->size[1];
  loop_ub = di * olddi;
  for (i0 = 0; i0 < loop_ub; i0++) {
    bdmInv->data[i0] = 24.0 * (LJPotentialDepth * bdmInv->data[i0]);
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_bdmInv[i0] = bdmInv->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_ak[i0] = ak->size[i0];
  }

  emlrtSizeEqCheck2DFastR2012b(b_bdmInv, b_ak, &d_emlrtECI, sp);
  i0 = bdmInv->size[0] * bdmInv->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)bdmInv, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  di = bdmInv->size[0];
  olddi = bdmInv->size[1];
  loop_ub = di * olddi;
  for (i0 = 0; i0 < loop_ub; i0++) {
    bdmInv->data[i0] *= ak->data[i0] + d->data[i0];
  }

  emxInit_boolean_T(sp, &x, 2, &emlrtRTEI, true);

  /*  derivative of LJ function */
  i0 = x->size[0] * x->size[1];
  x->size[0] = bdmInv->size[0];
  x->size[1] = bdmInv->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)x, i0, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  loop_ub = bdmInv->size[0] * bdmInv->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    x->data[i0] = muDoubleScalarIsNaN(bdmInv->data[i0]);
  }

  st.site = &b_emlrtRSI;
  di = x->size[0] * x->size[1];
  b_st.site = &h_emlrtRSI;
  k = 0;
  c_st.site = &j_emlrtRSI;
  if (1 > di) {
    b0 = false;
  } else {
    b0 = (di > 2147483646);
  }

  if (b0) {
    d_st.site = &g_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (i = 1; i <= di; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  if (k <= di) {
  } else {
    y = NULL;
    m0 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&y, m0);
    b_st.site = &n_emlrtRSI;
    error(&b_st, y, &c_emlrtMCI);
  }

  emxInit_int32_T(&st, &r0, 1, &emlrtRTEI, true);
  emlrtNonNegativeCheckFastR2012b(k, &emlrtDCI, &st);
  i0 = r0->size[0];
  r0->size[0] = k;
  emxEnsureCapacity(&st, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &c_emlrtRTEI);
  k = 0;
  b_st.site = &i_emlrtRSI;
  for (i = 1; i <= di; i++) {
    if (x->data[i - 1]) {
      r0->data[k] = i;
      k++;
    }
  }

  emxFree_boolean_T(&x);
  di = bdmInv->size[0];
  olddi = bdmInv->size[1];
  loop_ub = r0->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    i1 = di * olddi;
    i = r0->data[i0];
    bdmInv->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i1, &f_emlrtBCI, sp) -
      1] = 0.0;
  }

  dIdx = 0;
  b_emxInit_real_T(sp, &A, 1, &h_emlrtRTEI, true);
  emxInit_real_T(sp, &b_A, 2, &h_emlrtRTEI, true);
  emxInit_real_T(sp, &c_A, 2, &emlrtRTEI, true);
  while (dIdx <= particlePosition->size[1] - 1) {
    /*  replicate the position vector */
    loop_ub = particlePosition->size[0];
    i0 = particlePosition->size[1];
    i1 = 1 + dIdx;
    i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &b_emlrtBCI, sp);
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
    i0 = ak->size[0] * ak->size[1];
    ak->size[0] = loop_ub;
    ak->size[1] = di;
    emxEnsureCapacity(sp, (emxArray__common *)ak, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < di; i0++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        ak->data[i1 + ak->size[0] * i0] = A->data[i1];
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
    for (i0 = 0; i0 < 2; i0++) {
      b_ak[i0] = ak->size[i0];
    }

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
      b_d[i0] = c_A->size[i0];
    }

    emlrtSizeEqCheck2DFastR2012b(b_ak, b_d, &c_emlrtECI, sp);
    i0 = d->size[0] * d->size[1];
    d->size[0] = ak->size[0];
    d->size[1] = ak->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)d, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = ak->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      di = ak->size[0];
      for (i1 = 0; i1 < di; i1++) {
        d->data[i1 + d->size[0] * i0] = ak->data[i1 + ak->size[0] * i0] -
          b_A->data[b_A->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_d[i0] = d->size[i0];
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_bdmInv[i0] = bdmInv->size[i0];
    }

    emlrtSizeEqCheck2DFastR2012b(b_d, b_bdmInv, &b_emlrtECI, sp);
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
    st.site = &c_emlrtRSI;
    i0 = d->size[0] * d->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)d, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    di = d->size[0];
    olddi = d->size[1];
    loop_ub = di * olddi;
    for (i0 = 0; i0 < loop_ub; i0++) {
      d->data[i0] *= bdmInv->data[i0];
    }

    for (i0 = 0; i0 < 2; i0++) {
      siz[i0] = (uint32_T)d->size[i0];
    }

    i0 = b_A->size[0] * b_A->size[1];
    b_A->size[0] = 1;
    b_A->size[1] = (int32_T)siz[1];
    emxEnsureCapacity(&st, (emxArray__common *)b_A, i0, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    if ((d->size[0] == 0) || (d->size[1] == 0)) {
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
      b_st.site = &k_emlrtRSI;
      overflow = (d->size[1] > 2147483646);
      if (overflow) {
        c_st.site = &g_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (i = 1; i <= d->size[1]; i++) {
        di = olddi + 1;
        olddi++;
        s = d->data[di];
        b_st.site = &l_emlrtRSI;
        if (2 > d->size[0]) {
          overflow = false;
        } else {
          overflow = (d->size[0] > 2147483646);
        }

        if (overflow) {
          c_st.site = &g_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (k = 2; k <= d->size[0]; k++) {
          olddi++;
          s += d->data[olddi];
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

    iv0[0] = r0->size[0];
    emlrtSubAssignSizeCheckR2012b(iv0, 1, *(int32_T (*)[1])A->size, 1, &emlrtECI,
      sp);
    loop_ub = A->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      force->data[r0->data[i0] + force->size[0] * dIdx] = A->data[i0];
    }

    dIdx++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&c_A);
  emxFree_int32_T(&r0);
  emxFree_real_T(&b_A);
  emxFree_real_T(&A);
  emxFree_real_T(&d);
  emxFree_real_T(&ak);
  emxFree_real_T(&bdmInv);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (LennardJones.c) */
