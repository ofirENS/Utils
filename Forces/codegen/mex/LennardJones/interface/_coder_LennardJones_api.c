/*
 * _coder_LennardJones_api.c
 *
 * Code generation for function '_coder_LennardJones_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "LennardJones.h"
#include "_coder_LennardJones_api.h"
#include "LennardJones_emxutil.h"
#include "LennardJones_data.h"

/* Variable Definitions */
static emlrtRTEInfo h_emlrtRTEI = { 1, 1, "_coder_LennardJones_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *LJPotentialWidth, const char_T *identifier);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *potentialType, const char_T *identifier, emxArray_char_T *y);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *particlePosition, const char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_char_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_char_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv3[3] = { 0, 0, 0 };

  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateNumericArray(3, iv3, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m1, (void *)u->data);
  emlrtSetDimensions((mxArray *)m1, u->size, 3);
  emlrtAssign(&y, m1);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *LJPotentialWidth, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(LJPotentialWidth), &thisId);
  emlrtDestroyArray(&LJPotentialWidth);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *potentialType, const char_T *identifier, emxArray_char_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(sp, emlrtAlias(potentialType), &thisId, y);
  emlrtDestroyArray(&potentialType);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *particlePosition, const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(particlePosition), &thisId, y);
  emlrtDestroyArray(&particlePosition);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv2[2] = { 0, 0 };

  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u->data);
  emlrtSetDimensions((mxArray *)m0, u->size, 2);
  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_char_T *y)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv4[2];
  int32_T i;
  int32_T iv5[2];
  boolean_T bv0[2] = { true, true };

  for (i = 0; i < 2; i++) {
    iv4[i] = -1;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv4, &bv0[0],
    iv5);
  ret->size[0] = iv5[0];
  ret->size[1] = iv5[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_char_T *ret)
{
  int32_T iv6[2];
  int32_T i4;
  int32_T iv7[2];
  boolean_T bv1[2] = { false, true };

  for (i4 = 0; i4 < 2; i4++) {
    iv6[i4] = 1 + -2 * i4;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "char", false, 2U, iv6, &bv1[0], iv7);
  i4 = ret->size[0] * ret->size[1];
  ret->size[0] = iv7[0];
  ret->size[1] = iv7[1];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i4, (int32_T)sizeof(char_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 1, false);
  emlrtDestroyArray(&src);
}

void LennardJones_api(const mxArray * const prhs[5], const mxArray *plhs[2])
{
  emxArray_real_T *particlePosition;
  emxArray_real_T *particleDist;
  emxArray_char_T *potentialType;
  emxArray_real_T *force;
  emxArray_real_T *forceDirection;
  real_T LJPotentialWidth;
  real_T LJPotentialDepth;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &particlePosition, 2, &h_emlrtRTEI, true);
  emxInit_real_T(&st, &particleDist, 2, &h_emlrtRTEI, true);
  b_emxInit_char_T(&st, &potentialType, 2, &h_emlrtRTEI, true);
  emxInit_real_T(&st, &force, 2, &h_emlrtRTEI, true);
  c_emxInit_real_T(&st, &forceDirection, 3, &h_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "particlePosition",
                   particlePosition);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "particleDist", particleDist);
  LJPotentialWidth = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]),
    "LJPotentialWidth");
  LJPotentialDepth = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]),
    "LJPotentialDepth");
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "potentialType", potentialType);

  /* Invoke the target function */
  LennardJones(&st, particlePosition, particleDist, LJPotentialWidth,
               LJPotentialDepth, potentialType, force, forceDirection);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(force);
  plhs[1] = b_emlrt_marshallOut(forceDirection);
  forceDirection->canFreeData = false;
  emxFree_real_T(&forceDirection);
  force->canFreeData = false;
  emxFree_real_T(&force);
  emxFree_char_T(&potentialType);
  particleDist->canFreeData = false;
  emxFree_real_T(&particleDist);
  particlePosition->canFreeData = false;
  emxFree_real_T(&particlePosition);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_LennardJones_api.c) */
