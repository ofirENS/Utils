/*
 * _coder_BendingElasticityForce_api.c
 *
 * Code generation for function '_coder_BendingElasticityForce_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BendingElasticityForce.h"
#include "_coder_BendingElasticityForce_api.h"
#include "BendingElasticityForce_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo f_emlrtRTEI = { 1, 1, "_coder_BendingElasticityForce_api",
  "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *connectivityMat, const char_T *identifier, emxArray_boolean_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *bendingConst, const char_T *identifier);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *edgeMatX,
  const char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret);
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *connectivityMat, const char_T *identifier, emxArray_boolean_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(sp, emlrtAlias(connectivityMat), &thisId, y);
  emlrtDestroyArray(&connectivityMat);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y)
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *bendingConst, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = f_emlrt_marshallIn(sp, emlrtAlias(bendingConst), &thisId);
  emlrtDestroyArray(&bendingConst);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *edgeMatX,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(edgeMatX), &thisId, y);
  emlrtDestroyArray(&edgeMatX);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv2[2] = { 0, 0 };

  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u->data);
  emlrtSetDimensions((mxArray *)m2, u->size, 2);
  emlrtAssign(&y, m2);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv3[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv4[2];
  for (i = 0; i < 2; i++) {
    iv3[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv3, bv0, iv4);
  ret->size[0] = iv4[0];
  ret->size[1] = iv4[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret)
{
  int32_T iv5[2];
  boolean_T bv1[2];
  int32_T i;
  int32_T iv6[2];
  for (i = 0; i < 2; i++) {
    iv5[i] = -1;
    bv1[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "logical", false, 2U, iv5, bv1, iv6);
  ret->size[0] = iv6[0];
  ret->size[1] = iv6[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (boolean_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void BendingElasticityForce_api(const mxArray * const prhs[5], const mxArray
  *plhs[1])
{
  emxArray_real_T *edgeMatX;
  emxArray_real_T *edgeMatY;
  emxArray_real_T *edgeMatZ;
  emxArray_boolean_T *connectivityMat;
  emxArray_real_T *force;
  real_T bendingConst;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &edgeMatX, 2, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &edgeMatY, 2, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &edgeMatZ, 2, &f_emlrtRTEI, true);
  emxInit_boolean_T(&st, &connectivityMat, 2, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &force, 2, &f_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "edgeMatX", edgeMatX);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "edgeMatY", edgeMatY);
  emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "edgeMatZ", edgeMatZ);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "connectivityMat",
                     connectivityMat);
  bendingConst = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "bendingConst");

  /* Invoke the target function */
  BendingElasticityForce(&st, edgeMatX, edgeMatY, edgeMatZ, connectivityMat,
    bendingConst, force);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(force);
  force->canFreeData = false;
  emxFree_real_T(&force);
  connectivityMat->canFreeData = false;
  emxFree_boolean_T(&connectivityMat);
  edgeMatZ->canFreeData = false;
  emxFree_real_T(&edgeMatZ);
  edgeMatY->canFreeData = false;
  emxFree_real_T(&edgeMatY);
  edgeMatX->canFreeData = false;
  emxFree_real_T(&edgeMatX);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_BendingElasticityForce_api.c) */
