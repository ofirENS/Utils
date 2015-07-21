/*
 * _coder_SpringForce_api.cpp
 *
 * Code generation for function '_coder_SpringForce_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "SpringForce.h"
#include "_coder_SpringForce_api.h"
#include "SpringForce_emxutil.h"
#include "SpringForce_data.h"

/* Variable Definitions */
static emlrtRTEInfo d_emlrtRTEI = { 1, 1, "_coder_SpringForce_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *springConst, const char_T *identifier);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *connectivityMap, const char_T *identifier, emxArray_boolean_T *y);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *particleDist,
  const char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *springConst, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(springConst), &thisId);
  emlrtDestroyArray(&springConst);
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
  *connectivityMap, const char_T *identifier, emxArray_boolean_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(sp, emlrtAlias(connectivityMap), &thisId, y);
  emlrtDestroyArray(&connectivityMap);
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
  static const int32_T iv1[2] = { 0, 0 };

  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u->data);
  emlrtSetDimensions((mxArray *)m0, u->size, 2);
  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv2[2];
  int32_T i;
  int32_T iv3[2];
  boolean_T bv0[2] = { true, true };

  for (i = 0; i < 2; i++) {
    iv2[i] = -1;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv2, &bv0[0],
    iv3);
  ret->size[0] = iv3[0];
  ret->size[1] = iv3[1];
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
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret)
{
  int32_T iv4[2];
  int32_T i;
  int32_T iv5[2];
  boolean_T bv1[2] = { true, true };

  for (i = 0; i < 2; i++) {
    iv4[i] = -1;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "logical", false, 2U, iv4, &bv1[0],
    iv5);
  ret->size[0] = iv5[0];
  ret->size[1] = iv5[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (boolean_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void SpringForce_api(const mxArray *prhs[4], const mxArray *plhs[1])
{
  emxArray_real_T *particleDist;
  emxArray_boolean_T *connectivityMap;
  emxArray_real_T *force;
  real_T springConst;
  real_T minParticleDist;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &particleDist, 2, &d_emlrtRTEI, true);
  emxInit_boolean_T(&st, &connectivityMap, 2, &d_emlrtRTEI, true);
  emxInit_real_T(&st, &force, 2, &d_emlrtRTEI, true);
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "particleDist", particleDist);
  springConst = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "springConst");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "connectivityMap",
                     connectivityMap);
  minParticleDist = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]),
    "minParticleDist");

  /* Invoke the target function */
  SpringForce(&st, particleDist, springConst, connectivityMap, minParticleDist,
              force);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(force);
  force->canFreeData = false;
  emxFree_real_T(&force);
  connectivityMap->canFreeData = false;
  emxFree_boolean_T(&connectivityMap);
  particleDist->canFreeData = false;
  emxFree_real_T(&particleDist);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_SpringForce_api.cpp) */
