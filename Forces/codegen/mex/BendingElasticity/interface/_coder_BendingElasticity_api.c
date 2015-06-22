/*
 * _coder_BendingElasticity_api.c
 *
 * Code generation for function '_coder_BendingElasticity_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BendingElasticity.h"
#include "_coder_BendingElasticity_api.h"
#include "BendingElasticity_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo h_emlrtRTEI = { 1, 1, "_coder_BendingElasticity_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *bendingConst, const char_T *identifier);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *affectedParticles, const char_T *identifier, emxArray_real_T *y);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *pos, const
  char_T *identifier, emxArray_real_T *y);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

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
  static const int32_T iv33[2] = { 0, 0 };

  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv33, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u->data);
  emlrtSetDimensions((mxArray *)m2, u->size, 2);
  emlrtAssign(&y, m2);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *bendingConst, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(bendingConst), &thisId);
  emlrtDestroyArray(&bendingConst);
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
  *affectedParticles, const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(sp, emlrtAlias(affectedParticles), &thisId, y);
  emlrtDestroyArray(&affectedParticles);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *pos, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(pos), &thisId, y);
  emlrtDestroyArray(&pos);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv34[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv35[2];
  for (i = 0; i < 2; i++) {
    iv34[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv34, bv0, iv35);
  ret->size[0] = iv35[0];
  ret->size[1] = iv35[1];
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
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv36[1];
  boolean_T bv1[1];
  int32_T iv37[1];
  iv36[0] = -1;
  bv1[0] = true;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, iv36, bv1, iv37);
  ret->size[0] = iv37[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void BendingElasticity_api(const mxArray * const prhs[7], const mxArray *plhs[1])
{
  emxArray_real_T *pos;
  emxArray_real_T *dist;
  emxArray_real_T *angle0;
  emxArray_real_T *affectedParticles;
  emxArray_real_T *force;
  real_T bendingConst;
  real_T numParticles;
  real_T dimension;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &pos, 2, &h_emlrtRTEI, true);
  emxInit_real_T(&st, &dist, 2, &h_emlrtRTEI, true);
  emxInit_real_T(&st, &angle0, 2, &h_emlrtRTEI, true);
  b_emxInit_real_T(&st, &affectedParticles, 1, &h_emlrtRTEI, true);
  emxInit_real_T(&st, &force, 2, &h_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "pos", pos);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "dist", dist);
  bendingConst = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "bendingConst");
  emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "angle0", angle0);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "affectedParticles",
                     affectedParticles);
  numParticles = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "numParticles");
  dimension = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "dimension");

  /* Invoke the target function */
  BendingElasticity(&st, pos, dist, bendingConst, angle0, affectedParticles,
                    numParticles, dimension, force);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(force);
  force->canFreeData = false;
  emxFree_real_T(&force);
  affectedParticles->canFreeData = false;
  emxFree_real_T(&affectedParticles);
  angle0->canFreeData = false;
  emxFree_real_T(&angle0);
  dist->canFreeData = false;
  emxFree_real_T(&dist);
  pos->canFreeData = false;
  emxFree_real_T(&pos);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_BendingElasticity_api.c) */
