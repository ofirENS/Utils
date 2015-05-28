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
static emlrtRTEInfo e_emlrtRTEI = { 1, 1, "_coder_SpringForce_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *particleDist,
  const char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv4[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv5[2];
  for (i = 0; i < 2; i++) {
    iv4[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv4, bv0, iv5);
  ret->size[0] = iv5[0];
  ret->size[1] = iv5[1];
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
  static const int32_T iv3[2] = { 0, 0 };

  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv3, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u->data);
  emlrtSetDimensions((mxArray *)m2, u->size, 2);
  emlrtAssign(&y, m2);
  return y;
}

void SpringForce_api(const mxArray *prhs[5], const mxArray *plhs[1])
{
  emxArray_real_T *particleDist;
  emxArray_real_T *springConst;
  emxArray_real_T *connectivityMap;
  emxArray_real_T *minParticleDist;
  emxArray_real_T *fixedParticleNum;
  emxArray_real_T *force;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &particleDist, 2, &e_emlrtRTEI, true);
  emxInit_real_T(&st, &springConst, 2, &e_emlrtRTEI, true);
  emxInit_real_T(&st, &connectivityMap, 2, &e_emlrtRTEI, true);
  emxInit_real_T(&st, &minParticleDist, 2, &e_emlrtRTEI, true);
  emxInit_real_T(&st, &fixedParticleNum, 2, &e_emlrtRTEI, true);
  emxInit_real_T(&st, &force, 2, &e_emlrtRTEI, true);
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);
  prhs[2] = emlrtProtectR2012b(prhs[2], 2, false, -1);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "particleDist", particleDist);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "springConst", springConst);
  emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "connectivityMap", connectivityMap);
  emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "minParticleDist", minParticleDist);
  emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "fixedParticleNum",
                   fixedParticleNum);

  /* Invoke the target function */
  SpringForce(&st, particleDist, springConst, connectivityMap, minParticleDist,
              fixedParticleNum, force);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(force);
  force->canFreeData = false;
  emxFree_real_T(&force);
  fixedParticleNum->canFreeData = false;
  emxFree_real_T(&fixedParticleNum);
  minParticleDist->canFreeData = false;
  emxFree_real_T(&minParticleDist);
  connectivityMap->canFreeData = false;
  emxFree_real_T(&connectivityMap);
  springConst->canFreeData = false;
  emxFree_real_T(&springConst);
  particleDist->canFreeData = false;
  emxFree_real_T(&particleDist);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_SpringForce_api.c) */
