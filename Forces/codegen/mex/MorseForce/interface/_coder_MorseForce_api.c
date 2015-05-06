/*
 * _coder_MorseForce_api.c
 *
 * Code generation for function '_coder_MorseForce_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MorseForce.h"
#include "_coder_MorseForce_api.h"
#include "MorseForce_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo k_emlrtRTEI = { 1, 1, "_coder_MorseForce_api", "" };

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *edgesX,
  const char_T *identifier, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forceType,
  const char_T *identifier, emxArray_char_T *y);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *De, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_char_T *y);
static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_char_T *ret);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *edgesX,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(sp, emlrtAlias(edgesX), &thisId, y);
  emlrtDestroyArray(&edgesX);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *forceType,
  const char_T *identifier, emxArray_char_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(sp, emlrtAlias(forceType), &thisId, y);
  emlrtDestroyArray(&forceType);
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *De, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(sp, emlrtAlias(De), &thisId);
  emlrtDestroyArray(&De);
  return y;
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv13[2] = { 0, 0 };

  const mxArray *m7;
  y = NULL;
  m7 = emlrtCreateNumericArray(2, iv13, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m7, (void *)u->data);
  emlrtSetDimensions((mxArray *)m7, u->size, 2);
  emlrtAssign(&y, m7);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_char_T *y)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv14[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv15[2];
  for (i = 0; i < 2; i++) {
    iv14[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv14, bv0, iv15);
  ret->size[0] = iv15[0];
  ret->size[1] = iv15[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_char_T *ret)
{
  int32_T iv16[2];
  boolean_T bv1[2];
  int32_T i4;
  static const boolean_T bv2[2] = { false, true };

  int32_T iv17[2];
  for (i4 = 0; i4 < 2; i4++) {
    iv16[i4] = 1 + -2 * i4;
    bv1[i4] = bv2[i4];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "char", false, 2U, iv16, bv1, iv17);
  i4 = ret->size[0] * ret->size[1];
  ret->size[0] = iv17[0];
  ret->size[1] = iv17[1];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i4, (int32_T)sizeof(char_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 1, false);
  emlrtDestroyArray(&src);
}

void MorseForce_api(const mxArray * const prhs[8], const mxArray *plhs[1])
{
  emxArray_real_T *edgesX;
  emxArray_real_T *edgesY;
  emxArray_real_T *edgesZ;
  emxArray_real_T *particleDistance;
  emxArray_char_T *forceType;
  emxArray_real_T *force;
  real_T De;
  real_T alpha;
  real_T re;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &edgesX, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &edgesY, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &edgesZ, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &particleDistance, 2, &k_emlrtRTEI, true);
  emxInit_char_T(&st, &forceType, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &force, 2, &k_emlrtRTEI, true);

  /* Marshall function inputs */
  De = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "De");
  alpha = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "alpha");
  re = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "re");
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "edgesX", edgesX);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "edgesY", edgesY);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "edgesZ", edgesZ);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "particleDistance",
                     particleDistance);
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "forceType", forceType);

  /* Invoke the target function */
  MorseForce(&st, De, alpha, re, edgesX, edgesY, edgesZ, particleDistance,
             forceType, force);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(force);
  force->canFreeData = false;
  emxFree_real_T(&force);
  emxFree_char_T(&forceType);
  particleDistance->canFreeData = false;
  emxFree_real_T(&particleDistance);
  edgesZ->canFreeData = false;
  emxFree_real_T(&edgesZ);
  edgesY->canFreeData = false;
  emxFree_real_T(&edgesY);
  edgesX->canFreeData = false;
  emxFree_real_T(&edgesX);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_MorseForce_api.c) */
