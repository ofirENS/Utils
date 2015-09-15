/*
 * _coder_SpringForce_api.c
 *
 * Code generation for function '_coder_SpringForce_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SpringForce.h"
#include "_coder_SpringForce_api.h"
#include "SpringForce_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo f_emlrtRTEI = { 1, 1, "_coder_SpringForce_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *connectivityMap, const char_T *identifier, emxArray_boolean_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *particleDist,
  const char_T *identifier, emxArray_real_T *y);
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
  int32_T iv9[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv10[2];
  for (i = 0; i < 2; i++) {
    iv9[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv9, bv0, iv10);
  ret->size[0] = iv10[0];
  ret->size[1] = iv10[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *particleDist,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(particleDist), &thisId, y);
  emlrtDestroyArray(&particleDist);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv8[2] = { 0, 0 };

  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv8, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u->data);
  emlrtSetDimensions((mxArray *)m2, u->size, 2);
  emlrtAssign(&y, m2);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret)
{
  int32_T iv11[2];
  boolean_T bv1[2];
  int32_T i;
  int32_T iv12[2];
  for (i = 0; i < 2; i++) {
    iv11[i] = -1;
    bv1[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "logical", false, 2U, iv11, bv1,
    iv12);
  ret->size[0] = iv12[0];
  ret->size[1] = iv12[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (boolean_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void SpringForce_api(const mxArray *prhs[4], const mxArray *plhs[1])
{
  emxArray_real_T *particleDist;
  emxArray_real_T *springConst;
  emxArray_boolean_T *connectivityMap;
  emxArray_real_T *minParticleDist;
  emxArray_real_T *force;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &particleDist, 2, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &springConst, 2, &f_emlrtRTEI, true);
  emxInit_boolean_T(&st, &connectivityMap, 2, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &minParticleDist, 2, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &force, 2, &f_emlrtRTEI, true);
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "particleDist", particleDist);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "springConst", springConst);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "connectivityMap",
                     connectivityMap);
  emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "minParticleDist", minParticleDist);

  /* Invoke the target function */
  SpringForce(&st, particleDist, springConst, connectivityMap, minParticleDist,
              force);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(force);
  force->canFreeData = false;
  emxFree_real_T(&force);
  minParticleDist->canFreeData = false;
  emxFree_real_T(&minParticleDist);
  connectivityMap->canFreeData = false;
  emxFree_boolean_T(&connectivityMap);
  springConst->canFreeData = false;
  emxFree_real_T(&springConst);
  particleDist->canFreeData = false;
  emxFree_real_T(&particleDist);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_SpringForce_api.c) */
