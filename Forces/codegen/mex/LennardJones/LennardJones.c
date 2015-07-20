/*
 * LennardJones.c
 *
 * Code generation for function 'LennardJones'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "LennardJones.h"
#include "dec2bin.h"
#include "LennardJones_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "diag.h"
#include "power.h"
#include "LennardJones_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 19, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRSInfo b_emlrtRSI = { 21, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRSInfo c_emlrtRSI = { 25, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRSInfo d_emlrtRSI = { 46, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRSInfo e_emlrtRSI = { 48, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRSInfo f_emlrtRSI = { 65, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRSInfo p_emlrtRSI = { 15, "strcmpi",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/strfun/strcmpi.m" };

static emlrtRSInfo q_emlrtRSI = { 22, "strcmpi",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/strfun/strcmpi.m" };

static emlrtRSInfo r_emlrtRSI = { 16, "lower",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/strfun/lower.m" };

static emlrtRSInfo s_emlrtRSI = { 10, "eml_string_transform",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/strfun/eml_string_transform.m"
};

static emlrtRSInfo t_emlrtRSI = { 13, "sum",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo u_emlrtRSI = { 46, "sumprod",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/private/sumprod.m"
};

static emlrtRSInfo v_emlrtRSI = { 45, "combine_vector_elements",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRSInfo w_emlrtRSI = { 51, "combine_vector_elements",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 36, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRTEInfo b_emlrtRTEI = { 19, 5, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRTEInfo c_emlrtRTEI = { 28, 9, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRTEInfo d_emlrtRTEI = { 59, 9, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRTEInfo e_emlrtRTEI = { 41, 5, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtRTEInfo i_emlrtRTEI = { 16, 21, "eml_assert_supported_string",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/strfun/eml_assert_supported_string.m"
};

static emlrtECInfo emlrtECI = { -1, 65, 9, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 65, 17, "force", "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtECInfo b_emlrtECI = { 2, 65, 30, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 65, 49, "forceDirection",
  "LennardJones", "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtECInfo c_emlrtECI = { -1, 64, 9, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 64, 28, "forceDirection",
  "LennardJones", "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtECInfo d_emlrtECI = { 2, 64, 37, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 57, 35, "particlePosition",
  "LennardJones", "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtECInfo e_emlrtECI = { 2, 37, 17, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 36, 12, "inds", "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 33, 12, "nb", "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtECInfo f_emlrtECI = { 2, 21, 14, "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m" };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 27, 8, "nb", "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 49, 9, "forceValue", "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 47, 9, "forceValue", "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 52, 5, "forceValue", "LennardJones",
  "/home/ofir/Work/ENS/Utils/Forces/LennardJones.m", 0 };

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

    emlrtDivisionByZeroErrorR2012b(NULL, sp);
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
                  real_T LJPotentialDepth, const emxArray_char_T *potentialType,
                  emxArray_real_T *force, emxArray_real_T *forceDirection)
{
  int32_T numParticles;
  int32_T n;
  int32_T i0;
  int32_T vlen;
  emxArray_real_T *bdmInv;
  emxArray_real_T *B1;
  emxArray_real_T *A;
  int32_T b_bdmInv[2];
  int32_T b_B1[2];
  int32_T c_bdmInv;
  char_T tmp_data[52];
  int16_T nb_data[52];
  emxArray_real_T *t;
  uint32_T siz[2];
  int32_T i1;
  int32_T ix;
  int32_T iy;
  int32_T nbk;
  real_T s;
  real_T d0;
  boolean_T overflow;
  boolean_T p;
  int32_T exitg2;
  static const char_T cv0[9] = { 'r', 'e', 'p', 'u', 'l', 's', 'i', 'v', 'e' };

  static const char_T cv1[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
    '\x05', '\x06', '\x07', '\x08', '\x09', '\x0a', '\x0b', '\x0c', '\x0d',
    '\x0e', '\x0f', '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16',
    '\x17', '\x18', '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ',
    '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>',
    '?', '@', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\',
    ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
    'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '{', '|', '}', '~', '\x7f' };

  emxArray_int32_T *r0;
  int32_T b_ix;
  emxArray_char_T *s1;
  int32_T exitg1;
  static const char_T cv2[10] = { 'a', 't', 't', 'r', 'a', 'c', 't', 'i', 'v',
    'e' };

  int32_T c_ix;
  emxArray_boolean_T *r1;
  emxArray_int32_T *r2;
  int32_T d_ix;
  int32_T dIdx;
  emxArray_real_T *b_A;
  emxArray_real_T *c_A;
  emxArray_real_T *b_forceDirection;
  int32_T iv0[2];
  boolean_T b0;
  int32_T iv1[1];
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

  /*  Calculate the lennard jones potential between beads and its derivative */
  /*  particlePosition is a 3 by n matrix of particle position in space  */
  /*  particle dist is an n by n pairwise distance matrix  */
  /*  LJpotentialwidth is a scalar width of the LJ */
  /*  LJPotentialepth is a scalar depth of the LJ */
  /*  potentialType is a string stating the type of potential 'attractive' | */
  /*  'repulsive', or 'full' */
  /*     if ~exist('PotentialType','var') */
  /*         potentialType = 'full'; */
  /*     end */
  numParticles = particlePosition->size[0];
  n = particlePosition->size[0];
  i0 = force->size[0] * force->size[1];
  force->size[0] = n;
  emxEnsureCapacity(sp, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  n = particlePosition->size[1];
  i0 = force->size[0] * force->size[1];
  force->size[1] = n;
  emxEnsureCapacity(sp, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  vlen = particlePosition->size[0] * particlePosition->size[1];
  for (i0 = 0; i0 < vlen; i0++) {
    force->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &bdmInv, 2, &b_emlrtRTEI, true);
  emxInit_real_T(sp, &B1, 2, &d_emlrtRTEI, true);
  b_emxInit_real_T(sp, &A, 1, &e_emlrtRTEI, true);

  /*  the distance in which the potential is minimal */
  st.site = &emlrtRSI;
  power(&st, particleDist, bdmInv);

  /*  one over the bead distance matrix */
  /*  remove the diagonal  */
  st.site = &b_emlrtRSI;
  diag(&st, bdmInv, A);
  st.site = &b_emlrtRSI;
  b_diag(&st, A, B1);
  for (i0 = 0; i0 < 2; i0++) {
    b_bdmInv[i0] = bdmInv->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_B1[i0] = B1->size[i0];
  }

  if ((b_bdmInv[0] != b_B1[0]) || (b_bdmInv[1] != b_B1[1])) {
    emlrtSizeEqCheckNDR2012b(b_bdmInv, b_B1, &f_emlrtECI, sp);
  }

  i0 = bdmInv->size[0] * bdmInv->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)bdmInv, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  n = bdmInv->size[0];
  c_bdmInv = bdmInv->size[1];
  vlen = n * c_bdmInv;
  for (i0 = 0; i0 < vlen; i0++) {
    bdmInv->data[i0] -= B1->data[i0];
  }

  /*  d            = MatIntPower(bdmInv, 6); % matrix integer power (mex form Utils) */
  /*  Raise bdInv to the sixt power */
  st.site = &c_emlrtRSI;
  dec2bin(tmp_data, b_bdmInv);
  vlen = b_bdmInv[0] * b_bdmInv[1];
  for (i0 = 0; i0 < vlen; i0++) {
    nb_data[i0] = (int16_T)((uint8_T)tmp_data[i0] - 48);
  }

  emxInit_real_T(sp, &t, 2, &c_emlrtRTEI, true);
  if (nb_data[emlrtDynamicBoundsCheckR2012b(b_bdmInv[1], 1, b_bdmInv[1],
       &g_emlrtBCI, sp) - 1] != 0) {
    i0 = t->size[0] * t->size[1];
    t->size[0] = bdmInv->size[0];
    t->size[1] = bdmInv->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)t, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    vlen = bdmInv->size[0] * bdmInv->size[1];
    for (i0 = 0; i0 < vlen; i0++) {
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
    vlen = (int32_T)siz[0] * (int32_T)siz[1];
    for (i0 = 0; i0 < vlen; i0++) {
      t->data[i0] = 1.0;
    }
  }

  if (1 > b_bdmInv[1] - 1) {
    i0 = 1;
    i1 = 1;
    ix = 0;
  } else {
    i0 = b_bdmInv[1] - 1;
    if ((i0 >= 1) && (i0 < b_bdmInv[1])) {
    } else {
      i0 = emlrtDynamicBoundsCheckR2012b(i0, 1, b_bdmInv[1], &f_emlrtBCI, sp);
    }

    i1 = -1;
    ix = 1;
  }

  iy = div_s32_floor(sp, ix - i0, i1);
  nbk = 0;
  while (nbk <= iy) {
    n = bdmInv->size[0] * bdmInv->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)bdmInv, n, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    n = bdmInv->size[0];
    c_bdmInv = bdmInv->size[1];
    vlen = n * c_bdmInv;
    for (n = 0; n < vlen; n++) {
      bdmInv->data[n] *= bdmInv->data[n];
    }

    n = div_s32_floor(sp, ix - i0, i1) + 1;
    emlrtDynamicBoundsCheckR2012b(nbk + 1, 1, n, &e_emlrtBCI, sp);
    if (nb_data[(i0 + i1 * nbk) - 1] != 0) {
      for (n = 0; n < 2; n++) {
        b_B1[n] = t->size[n];
      }

      for (n = 0; n < 2; n++) {
        b_bdmInv[n] = bdmInv->size[n];
      }

      if ((b_B1[0] != b_bdmInv[0]) || (b_B1[1] != b_bdmInv[1])) {
        emlrtSizeEqCheckNDR2012b(b_B1, b_bdmInv, &e_emlrtECI, sp);
      }

      n = t->size[0] * t->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)t, n, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      n = t->size[0];
      c_bdmInv = t->size[1];
      vlen = n * c_bdmInv;
      for (n = 0; n < vlen; n++) {
        t->data[n] *= bdmInv->data[n];
      }
    }

    nbk++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&bdmInv);
  s = muDoubleScalarPower(LJPotentialWidth, 6.0);

  /*      forceValue   = 24*(epsilon*bdmInv).*(-2*t.*t +t); % derivative of LJ function */
  i0 = t->size[0] * t->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)t, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  d0 = 2.0 * LJPotentialDepth * muDoubleScalarPower(LJPotentialWidth, 6.0);
  n = t->size[0];
  c_bdmInv = t->size[1];
  vlen = n * c_bdmInv;
  for (i0 = 0; i0 < vlen; i0++) {
    t->data[i0] = d0 * (s * t->data[i0] - 1.0);
  }

  st.site = &d_emlrtRSI;
  overflow = false;
  b_st.site = &p_emlrtRSI;
  p = true;
  for (c_bdmInv = 0; c_bdmInv < potentialType->size[1]; c_bdmInv++) {
    p = (p && ((uint8_T)potentialType->data[c_bdmInv] <= 127));
  }

  if (p) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &i_emlrtRTEI,
      "Coder:toolbox:unsupportedString", 2, 12, 127);
  }

  n = (int32_T)muDoubleScalarMin(potentialType->size[1], 9.0);
  if (potentialType->size[1] == 9) {
    c_bdmInv = 0;
    do {
      exitg2 = 0;
      if (c_bdmInv <= n - 1) {
        b_st.site = &q_emlrtRSI;
        c_st.site = &r_emlrtRSI;
        d_st.site = &s_emlrtRSI;
        if ((uint8_T)potentialType->data[c_bdmInv] <= 127) {
        } else {
          emlrtErrorWithMessageIdR2012b(&d_st, &i_emlrtRTEI,
            "Coder:toolbox:unsupportedString", 2, 12, 127);
        }

        b_st.site = &q_emlrtRSI;
        c_st.site = &r_emlrtRSI;
        d_st.site = &s_emlrtRSI;
        if (cv1[(uint8_T)potentialType->data[c_bdmInv] & 127] != cv1[(int32_T)
            cv0[c_bdmInv]]) {
          exitg2 = 1;
        } else {
          c_bdmInv++;
        }
      } else {
        overflow = true;
        exitg2 = 1;
      }
    } while (exitg2 == 0);
  }

  emxInit_int32_T(sp, &r0, 1, &emlrtRTEI, true);
  if (overflow) {
    c_bdmInv = particleDist->size[0] * particleDist->size[1] - 1;
    n = 0;
    for (nbk = 0; nbk <= c_bdmInv; nbk++) {
      if (particleDist->data[nbk] < 2.5 * LJPotentialWidth) {
        n++;
      }
    }

    i0 = r0->size[0];
    r0->size[0] = n;
    emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    n = 0;
    for (nbk = 0; nbk <= c_bdmInv; nbk++) {
      if (particleDist->data[nbk] < 2.5 * LJPotentialWidth) {
        r0->data[n] = nbk + 1;
        n++;
      }
    }

    n = t->size[0];
    c_bdmInv = t->size[1];
    vlen = r0->size[0];
    for (i0 = 0; i0 < vlen; i0++) {
      i1 = n * c_bdmInv;
      ix = r0->data[i0];
      if ((ix >= 1) && (ix < i1)) {
        b_ix = ix;
      } else {
        b_ix = emlrtDynamicBoundsCheckR2012b(ix, 1, i1, &i_emlrtBCI, sp);
      }

      t->data[b_ix - 1] = 0.0;
    }

    /*  truncate */
  } else {
    emxInit_char_T(sp, &s1, 1, &emlrtRTEI, true);
    st.site = &e_emlrtRSI;
    i0 = s1->size[0];
    s1->size[0] = potentialType->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)s1, i0, (int32_T)sizeof(char_T),
                      &emlrtRTEI);
    vlen = potentialType->size[1];
    for (i0 = 0; i0 < vlen; i0++) {
      s1->data[i0] = potentialType->data[potentialType->size[0] * i0];
    }

    overflow = false;
    b_st.site = &p_emlrtRSI;
    p = true;
    for (c_bdmInv = 0; c_bdmInv < s1->size[0]; c_bdmInv++) {
      p = (p && ((uint8_T)s1->data[c_bdmInv] <= 127));
    }

    if (p) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &i_emlrtRTEI,
        "Coder:toolbox:unsupportedString", 2, 12, 127);
    }

    n = (int32_T)muDoubleScalarMin(s1->size[0], 10.0);
    if (s1->size[0] == 10) {
      c_bdmInv = 0;
      do {
        exitg1 = 0;
        if (c_bdmInv <= n - 1) {
          b_st.site = &q_emlrtRSI;
          c_st.site = &r_emlrtRSI;
          d_st.site = &s_emlrtRSI;
          if ((uint8_T)s1->data[c_bdmInv] <= 127) {
          } else {
            emlrtErrorWithMessageIdR2012b(&d_st, &i_emlrtRTEI,
              "Coder:toolbox:unsupportedString", 2, 12, 127);
          }

          b_st.site = &q_emlrtRSI;
          c_st.site = &r_emlrtRSI;
          d_st.site = &s_emlrtRSI;
          if (cv1[(uint8_T)s1->data[c_bdmInv] & 127] != cv1[(int32_T)
              cv2[c_bdmInv]]) {
            exitg1 = 1;
          } else {
            c_bdmInv++;
          }
        } else {
          overflow = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    emxFree_char_T(&s1);
    if (overflow) {
      c_bdmInv = particleDist->size[0] * particleDist->size[1] - 1;
      n = 0;
      for (nbk = 0; nbk <= c_bdmInv; nbk++) {
        if (particleDist->data[nbk] > 2.5 * LJPotentialWidth) {
          n++;
        }
      }

      i0 = r0->size[0];
      r0->size[0] = n;
      emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                        &emlrtRTEI);
      n = 0;
      for (nbk = 0; nbk <= c_bdmInv; nbk++) {
        if (particleDist->data[nbk] > 2.5 * LJPotentialWidth) {
          r0->data[n] = nbk + 1;
          n++;
        }
      }

      n = t->size[0];
      c_bdmInv = t->size[1];
      vlen = r0->size[0];
      for (i0 = 0; i0 < vlen; i0++) {
        i1 = n * c_bdmInv;
        ix = r0->data[i0];
        if ((ix >= 1) && (ix < i1)) {
          c_ix = ix;
        } else {
          c_ix = emlrtDynamicBoundsCheckR2012b(ix, 1, i1, &h_emlrtBCI, sp);
        }

        t->data[c_ix - 1] = 0.0;
      }

      /*  truncate */
    }
  }

  emxInit_boolean_T(sp, &r1, 2, &emlrtRTEI, true);
  i0 = r1->size[0] * r1->size[1];
  r1->size[0] = t->size[0];
  r1->size[1] = t->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  vlen = t->size[0] * t->size[1];
  for (i0 = 0; i0 < vlen; i0++) {
    r1->data[i0] = muDoubleScalarIsNaN(t->data[i0]);
  }

  c_bdmInv = r1->size[0] * r1->size[1] - 1;
  n = 0;
  for (nbk = 0; nbk <= c_bdmInv; nbk++) {
    if (r1->data[nbk]) {
      n++;
    }
  }

  emxInit_int32_T(sp, &r2, 1, &emlrtRTEI, true);
  i0 = r2->size[0];
  r2->size[0] = n;
  emxEnsureCapacity(sp, (emxArray__common *)r2, i0, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  n = 0;
  for (nbk = 0; nbk <= c_bdmInv; nbk++) {
    if (r1->data[nbk]) {
      r2->data[n] = nbk + 1;
      n++;
    }
  }

  emxFree_boolean_T(&r1);
  n = t->size[0];
  c_bdmInv = t->size[1];
  vlen = r2->size[0];
  for (i0 = 0; i0 < vlen; i0++) {
    i1 = n * c_bdmInv;
    ix = r2->data[i0];
    if ((ix >= 1) && (ix < i1)) {
      d_ix = ix;
    } else {
      d_ix = emlrtDynamicBoundsCheckR2012b(ix, 1, i1, &j_emlrtBCI, sp);
    }

    t->data[d_ix - 1] = 0.0;
  }

  n = particlePosition->size[0];
  i0 = forceDirection->size[0] * forceDirection->size[1] * forceDirection->size
    [2];
  forceDirection->size[0] = n;
  emxEnsureCapacity(sp, (emxArray__common *)forceDirection, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  n = particlePosition->size[0];
  i0 = forceDirection->size[0] * forceDirection->size[1] * forceDirection->size
    [2];
  forceDirection->size[1] = n;
  emxEnsureCapacity(sp, (emxArray__common *)forceDirection, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  n = particlePosition->size[1];
  i0 = forceDirection->size[0] * forceDirection->size[1] * forceDirection->size
    [2];
  forceDirection->size[2] = n;
  emxEnsureCapacity(sp, (emxArray__common *)forceDirection, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  vlen = particlePosition->size[0] * particlePosition->size[0] *
    particlePosition->size[1];
  for (i0 = 0; i0 < vlen; i0++) {
    forceDirection->data[i0] = 0.0;
  }

  /*  sum the contribution from all particles */
  dIdx = 0;
  emxInit_real_T(sp, &b_A, 2, &e_emlrtRTEI, true);
  emxInit_real_T(sp, &c_A, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &b_forceDirection, 2, &emlrtRTEI, true);
  while (dIdx <= particlePosition->size[1] - 1) {
    /*  replicate the position vector */
    vlen = particlePosition->size[0];
    i0 = particlePosition->size[1];
    i1 = 1 + dIdx;
    if ((i1 >= 1) && (i1 < i0)) {
      i0 = i1;
    } else {
      i0 = emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &d_emlrtBCI, sp);
    }

    i1 = A->size[0];
    A->size[0] = vlen;
    emxEnsureCapacity(sp, (emxArray__common *)A, i1, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i1 = 0; i1 < vlen; i1++) {
      A->data[i1] = particlePosition->data[i1 + particlePosition->size[0] * (i0
        - 1)];
    }

    vlen = particlePosition->size[0];
    i0 = B1->size[0] * B1->size[1];
    B1->size[0] = vlen;
    B1->size[1] = numParticles;
    emxEnsureCapacity(sp, (emxArray__common *)B1, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    n = numParticles;
    for (i0 = 0; i0 < n; i0++) {
      for (i1 = 0; i1 < vlen; i1++) {
        B1->data[i1 + B1->size[0] * i0] = A->data[i1];
      }
    }

    i0 = b_A->size[0] * b_A->size[1];
    b_A->size[0] = 1;
    b_A->size[1] = A->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_A, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    vlen = A->size[0];
    for (i0 = 0; i0 < vlen; i0++) {
      b_A->data[b_A->size[0] * i0] = A->data[i0];
    }

    /*  Subtract positions to get the direction vectors */
    for (i0 = 0; i0 < 2; i0++) {
      b_B1[i0] = B1->size[i0];
    }

    vlen = b_A->size[1];
    i0 = c_A->size[0] * c_A->size[1];
    c_A->size[0] = numParticles;
    c_A->size[1] = vlen;
    emxEnsureCapacity(sp, (emxArray__common *)c_A, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < vlen; i0++) {
      for (i1 = 0; i1 < n; i1++) {
        c_A->data[i1 + c_A->size[0] * i0] = b_A->data[b_A->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      b_bdmInv[i0] = c_A->size[i0];
    }

    if ((b_B1[0] != b_bdmInv[0]) || (b_B1[1] != b_bdmInv[1])) {
      emlrtSizeEqCheckNDR2012b(b_B1, b_bdmInv, &d_emlrtECI, sp);
    }

    vlen = forceDirection->size[0];
    i0 = r0->size[0];
    r0->size[0] = vlen;
    emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < vlen; i0++) {
      r0->data[i0] = i0;
    }

    vlen = forceDirection->size[1];
    i0 = r2->size[0];
    r2->size[0] = vlen;
    emxEnsureCapacity(sp, (emxArray__common *)r2, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < vlen; i0++) {
      r2->data[i0] = i0;
    }

    i0 = forceDirection->size[2];
    i1 = dIdx + 1;
    emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &c_emlrtBCI, sp);
    iv0[0] = r0->size[0];
    iv0[1] = r2->size[0];
    emlrtSubAssignSizeCheckR2012b(iv0, 2, *(int32_T (*)[2])B1->size, 2,
      &c_emlrtECI, sp);
    vlen = B1->size[1];
    for (i0 = 0; i0 < vlen; i0++) {
      n = B1->size[0];
      for (i1 = 0; i1 < n; i1++) {
        forceDirection->data[(r0->data[i1] + forceDirection->size[0] * r2->
                              data[i0]) + forceDirection->size[0] *
          forceDirection->size[1] * dIdx] = B1->data[i1 + B1->size[0] * i0] -
          b_A->data[b_A->size[0] * i0];
      }
    }

    i0 = forceDirection->size[2];
    i1 = dIdx + 1;
    emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &b_emlrtBCI, sp);
    vlen = forceDirection->size[0];
    n = forceDirection->size[1];
    i0 = b_forceDirection->size[0] * b_forceDirection->size[1];
    b_forceDirection->size[0] = vlen;
    b_forceDirection->size[1] = n;
    emxEnsureCapacity(sp, (emxArray__common *)b_forceDirection, i0, (int32_T)
                      sizeof(real_T), &emlrtRTEI);
    for (i0 = 0; i0 < n; i0++) {
      for (i1 = 0; i1 < vlen; i1++) {
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

    if ((b_bdmInv[0] != b_B1[0]) || (b_bdmInv[1] != b_B1[1])) {
      emlrtSizeEqCheckNDR2012b(b_bdmInv, b_B1, &b_emlrtECI, sp);
    }

    vlen = force->size[0];
    i0 = r0->size[0];
    r0->size[0] = vlen;
    emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < vlen; i0++) {
      r0->data[i0] = i0;
    }

    i0 = force->size[1];
    i1 = dIdx + 1;
    emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &emlrtBCI, sp);
    st.site = &f_emlrtRSI;
    vlen = forceDirection->size[0];
    n = forceDirection->size[1];
    i0 = B1->size[0] * B1->size[1];
    B1->size[0] = vlen;
    B1->size[1] = n;
    emxEnsureCapacity(&st, (emxArray__common *)B1, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < n; i0++) {
      for (i1 = 0; i1 < vlen; i1++) {
        B1->data[i1 + B1->size[0] * i0] = forceDirection->data[(i1 +
          forceDirection->size[0] * i0) + forceDirection->size[0] *
          forceDirection->size[1] * dIdx] * t->data[i1 + t->size[0] * i0];
      }
    }

    b_st.site = &t_emlrtRSI;
    c_st.site = &u_emlrtRSI;
    for (i0 = 0; i0 < 2; i0++) {
      siz[i0] = (uint32_T)B1->size[i0];
    }

    i0 = b_A->size[0] * b_A->size[1];
    b_A->size[0] = 1;
    b_A->size[1] = (int32_T)siz[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)b_A, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    if ((B1->size[0] == 0) || (B1->size[1] == 0)) {
      i0 = b_A->size[0] * b_A->size[1];
      b_A->size[0] = 1;
      emxEnsureCapacity(&c_st, (emxArray__common *)b_A, i0, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      i0 = b_A->size[0] * b_A->size[1];
      b_A->size[1] = (int32_T)siz[1];
      emxEnsureCapacity(&c_st, (emxArray__common *)b_A, i0, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      vlen = (int32_T)siz[1];
      for (i0 = 0; i0 < vlen; i0++) {
        b_A->data[i0] = 0.0;
      }
    } else {
      vlen = B1->size[0];
      ix = -1;
      iy = -1;
      d_st.site = &v_emlrtRSI;
      overflow = (B1->size[1] > 2147483646);
      if (overflow) {
        e_st.site = &k_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (nbk = 1; nbk <= B1->size[1]; nbk++) {
        n = ix + 1;
        ix++;
        s = B1->data[n];
        d_st.site = &w_emlrtRSI;
        if (2 > vlen) {
          b0 = false;
        } else {
          b0 = (vlen > 2147483646);
        }

        if (b0) {
          e_st.site = &k_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        for (c_bdmInv = 2; c_bdmInv <= vlen; c_bdmInv++) {
          ix++;
          s += B1->data[ix];
        }

        iy++;
        b_A->data[iy] = s;
      }
    }

    i0 = A->size[0];
    A->size[0] = b_A->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)A, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    vlen = b_A->size[1];
    for (i0 = 0; i0 < vlen; i0++) {
      A->data[i0] = b_A->data[b_A->size[0] * i0];
    }

    iv1[0] = r0->size[0];
    emlrtSubAssignSizeCheckR2012b(iv1, 1, *(int32_T (*)[1])A->size, 1, &emlrtECI,
      sp);
    vlen = A->size[0];
    for (i0 = 0; i0 < vlen; i0++) {
      force->data[r0->data[i0] + force->size[0] * dIdx] = A->data[i0];
    }

    dIdx++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_forceDirection);
  emxFree_real_T(&c_A);
  emxFree_int32_T(&r0);
  emxFree_int32_T(&r2);
  emxFree_real_T(&b_A);
  emxFree_real_T(&A);
  emxFree_real_T(&B1);
  emxFree_real_T(&t);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (LennardJones.c) */
