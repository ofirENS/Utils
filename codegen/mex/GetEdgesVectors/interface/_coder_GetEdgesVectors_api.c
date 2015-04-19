/*
 * _coder_GetEdgesVectors_api.c
 *
 * Code generation for function '_coder_GetEdgesVectors_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "GetEdgesVectors.h"
#include "_coder_GetEdgesVectors_api.h"
#include "GetEdgesVectors_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = { 1, 1, "_coder_GetEdgesVectors_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *connectivityMap, const char_T *identifier, emxArray_boolean_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *particlePosition, const char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *connectivityMap, const char_T *identifier, emxArray_boolean_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(sp, emlrtAlias(connectivityMap), &thisId, y);
  emlrtDestroyArray(&connectivityMap);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y)
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
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
  static const int32_T iv6[3] = { 0, 0, 0 };

  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateNumericArray(3, iv6, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u->data);
  emlrtSetDimensions((mxArray *)m2, u->size, 3);
  emlrtAssign(&y, m2);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret)
{
  int32_T iv9[2];
  boolean_T bv1[2];
  int32_T i;
  int32_T iv10[2];
  for (i = 0; i < 2; i++) {
    iv9[i] = -1;
    bv1[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "logical", false, 2U, iv9, bv1, iv10);
  ret->size[0] = iv10[0];
  ret->size[1] = iv10[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (boolean_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void GetEdgesVectors_api(const mxArray * const prhs[2], const mxArray *plhs[1])
{
  emxArray_real_T *particlePosition;
  emxArray_boolean_T *connectivityMap;
  emxArray_real_T *edgesVec;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &particlePosition, 2, &g_emlrtRTEI, true);
  b_emxInit_boolean_T(&st, &connectivityMap, 2, &g_emlrtRTEI, true);
  c_emxInit_real_T(&st, &edgesVec, 3, &g_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "particlePosition",
                   particlePosition);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "connectivityMap",
                     connectivityMap);

  /* Invoke the target function */
  GetEdgesVectors(&st, particlePosition, connectivityMap, edgesVec);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(edgesVec);
  edgesVec->canFreeData = false;
  emxFree_real_T(&edgesVec);
  connectivityMap->canFreeData = false;
  emxFree_boolean_T(&connectivityMap);
  particlePosition->canFreeData = false;
  emxFree_real_T(&particlePosition);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_GetEdgesVectors_api.c) */
