/*
 * _coder_MechanicalSpringPointForce_api.c
 *
 * Code generation for function '_coder_MechanicalSpringPointForce_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MechanicalSpringPointForce.h"
#include "_coder_MechanicalSpringPointForce_api.h"
#include "MechanicalSpringPointForce_emxutil.h"
#include "MechanicalSpringPointForce_data.h"

/* Variable Definitions */
static emlrtRTEInfo i_emlrtRTEI = { 1, 1,
  "_coder_MechanicalSpringPointForce_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *forceDirection, const char_T *identifier);
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

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *forceDirection, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(forceDirection), &thisId);
  emlrtDestroyArray(&forceDirection);
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
  static const int32_T iv1[2] = { 0, 0 };

  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m1, (void *)u->data);
  emlrtSetDimensions((mxArray *)m1, u->size, 2);
  emlrtAssign(&y, m1);
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

void MechanicalSpringPointForce_api(const mxArray * const prhs[5], const mxArray
  *plhs[1])
{
  emxArray_real_T *particlePosition;
  emxArray_real_T *pointSourcePosition;
  emxArray_real_T *force;
  real_T forceDirection;
  real_T forceMagnitude;
  real_T cutoff;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &particlePosition, 2, &i_emlrtRTEI, true);
  emxInit_real_T(&st, &pointSourcePosition, 2, &i_emlrtRTEI, true);
  emxInit_real_T(&st, &force, 2, &i_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "particlePosition",
                   particlePosition);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "pointSourcePosition",
                   pointSourcePosition);
  forceDirection = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]),
    "forceDirection");
  forceMagnitude = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]),
    "forceMagnitude");
  cutoff = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "cutoff");

  /* Invoke the target function */
  MechanicalSpringPointForce(&st, particlePosition, pointSourcePosition,
    forceDirection, forceMagnitude, cutoff, force);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(force);
  force->canFreeData = false;
  emxFree_real_T(&force);
  pointSourcePosition->canFreeData = false;
  emxFree_real_T(&pointSourcePosition);
  particlePosition->canFreeData = false;
  emxFree_real_T(&particlePosition);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_MechanicalSpringPointForce_api.c) */
