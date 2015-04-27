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

/* Variable Definitions */
static emlrtRTEInfo j_emlrtRTEI = { 1, 1, "_coder_LennardJones_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *LJPotentialWidth, const char_T *identifier);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *particlePosition, const char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv6[3] = { 0, 0, 0 };

  const mxArray *m3;
  y = NULL;
  m3 = emlrtCreateNumericArray(3, iv6, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m3, (void *)u->data);
  emlrtSetDimensions((mxArray *)m3, u->size, 3);
  emlrtAssign(&y, m3);
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
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv7[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv8[2];
  for (i = 0; i < 2; i++) {
    iv7[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv7, bv0, iv8);
  ret->size[0] = iv8[0];
  ret->size[1] = iv8[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
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
  static const int32_T iv5[2] = { 0, 0 };

  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv5, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u->data);
  emlrtSetDimensions((mxArray *)m2, u->size, 2);
  emlrtAssign(&y, m2);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void LennardJones_api(const mxArray * const prhs[4], const mxArray *plhs[2])
{
  emxArray_real_T *particlePosition;
  emxArray_real_T *particleDist;
  emxArray_real_T *force;
  emxArray_real_T *forceDirection;
  real_T LJPotentialWidth;
  real_T LJPotentialDepth;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &particlePosition, 2, &j_emlrtRTEI, true);
  emxInit_real_T(&st, &particleDist, 2, &j_emlrtRTEI, true);
  emxInit_real_T(&st, &force, 2, &j_emlrtRTEI, true);
  c_emxInit_real_T(&st, &forceDirection, 3, &j_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "particlePosition",
                   particlePosition);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "particleDist", particleDist);
  LJPotentialWidth = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]),
    "LJPotentialWidth");
  LJPotentialDepth = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]),
    "LJPotentialDepth");

  /* Invoke the target function */
  LennardJones(&st, particlePosition, particleDist, LJPotentialWidth,
               LJPotentialDepth, force, forceDirection);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(force);
  plhs[1] = b_emlrt_marshallOut(forceDirection);
  forceDirection->canFreeData = false;
  emxFree_real_T(&forceDirection);
  force->canFreeData = false;
  emxFree_real_T(&force);
  particleDist->canFreeData = false;
  emxFree_real_T(&particleDist);
  particlePosition->canFreeData = false;
  emxFree_real_T(&particlePosition);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_LennardJones_api.c) */
