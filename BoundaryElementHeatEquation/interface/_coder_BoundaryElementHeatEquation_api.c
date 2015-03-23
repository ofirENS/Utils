/*
 * _coder_BoundaryElementHeatEquation_api.c
 *
 * Code generation for function '_coder_BoundaryElementHeatEquation_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Acoeff.h"
#include "Bcoeff.h"
#include "CalculateA1B1B1Star.h"
#include "CalculateABBStarD.h"
#include "CalculateC.h"
#include "CalculateHeatSolution.h"
#include "CalculateXY.h"
#include "Ccoeff.h"
#include "Cone.h"
#include "Dcoeff.h"
#include "Done.h"
#include "GetRegularizationTerm.h"
#include "PlotResults.h"
#include "TestBemHeatEq_optimized.h"
#include "_coder_BoundaryElementHeatEquation_api.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "eml_warning.h"
#include "BoundaryElementHeatEquation_mexutil.h"

/* Variable Definitions */
static emlrtRTEInfo ac_emlrtRTEI = { 1, 1,
  "_coder_BoundaryElementHeatEquation_api", "" };

/* Function Declarations */
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ksi, const
  char_T *identifier);
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *gridT, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *f, const
  char_T *identifier, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *q0j, const
  char_T *identifier, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *plotFlag, const char_T *identifier);
static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static boolean_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ksi, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(ksi), &thisId);
  emlrtDestroyArray(&ksi);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv60[2] = { 0, 0 };

  const mxArray *m18;
  y = NULL;
  m18 = emlrtCreateNumericArray(2, iv60, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m18, (void *)u->data);
  emlrtSetDimensions((mxArray *)m18, u->size, 2);
  emlrtAssign(&y, m18);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv61[1] = { 0 };

  const mxArray *m19;
  y = NULL;
  m19 = emlrtCreateNumericArray(1, iv61, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m19, (void *)u->data);
  emlrtSetDimensions((mxArray *)m19, u->size, 1);
  emlrtAssign(&y, m19);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *gridT, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(sp, emlrtAlias(gridT), &thisId, y);
  emlrtDestroyArray(&gridT);
}

static const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv62[2] = { 0, 0 };

  const mxArray *m20;
  y = NULL;
  m20 = emlrtCreateNumericArray(2, iv62, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m20, (void *)u->data);
  emlrtSetDimensions((mxArray *)m20, u->size, 2);
  emlrtAssign(&y, m20);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *f, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  h_emlrt_marshallIn(sp, emlrtAlias(f), &thisId, y);
  emlrtDestroyArray(&f);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *q0j, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  j_emlrt_marshallIn(sp, emlrtAlias(q0j), &thisId, y);
  emlrtDestroyArray(&q0j);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *plotFlag, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = l_emlrt_marshallIn(sp, emlrtAlias(plotFlag), &thisId);
  emlrtDestroyArray(&plotFlag);
  return y;
}

static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv64[2];
  boolean_T bv0[2];
  int32_T i94;
  static const boolean_T bv1[2] = { false, true };

  int32_T iv65[2];
  for (i94 = 0; i94 < 2; i94++) {
    iv64[i94] = 1 + -2 * i94;
    bv0[i94] = bv1[i94];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv64, bv0, iv65);
  ret->size[0] = iv65[0];
  ret->size[1] = iv65[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv66[2];
  boolean_T bv2[2];
  int32_T i;
  int32_T iv67[2];
  for (i = 0; i < 2; i++) {
    iv66[i] = -1;
    bv2[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv66, bv2, iv67);
  ret->size[0] = iv67[0];
  ret->size[1] = iv67[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv68[1];
  boolean_T bv3[1];
  int32_T iv69[1];
  iv68[0] = -1;
  bv3[0] = true;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, iv68, bv3, iv69);
  ret->size[0] = iv69[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static boolean_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, 0);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

void Acoeff_api(const mxArray * const prhs[5], const mxArray *plhs[1])
{
  emxArray_real_T *gridT;
  real_T ksi;
  real_T j;
  real_T x;
  real_T t;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &gridT, 2, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  ksi = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "ksi");
  j = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "j");
  x = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "x");
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "t");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "gridT", gridT);

  /* Invoke the target function */
  ksi = Acoeff(&st, ksi, j, x, t, gridT);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(ksi);
  gridT->canFreeData = false;
  emxFree_real_T(&gridT);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Bcoeff_api(const mxArray * const prhs[5], const mxArray *plhs[1])
{
  emxArray_real_T *gridT;
  real_T ksi;
  real_T j;
  real_T x;
  real_T t;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &gridT, 2, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  ksi = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "ksi");
  j = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "j");
  x = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "x");
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "t");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "gridT", gridT);

  /* Invoke the target function */
  ksi = Bcoeff(&st, ksi, j, x, t, gridT);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(ksi);
  gridT->canFreeData = false;
  emxFree_real_T(&gridT);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void CalculateA1B1B1Star_api(const mxArray * const prhs[5], const mxArray *plhs
  [3])
{
  emxArray_real_T *x;
  emxArray_real_T *gridT;
  emxArray_real_T *a1k;
  emxArray_real_T *b1k;
  emxArray_real_T *b1s;
  real_T k;
  real_T t;
  real_T N;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &x, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &gridT, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &a1k, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &b1k, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &b1s, 2, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  k = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "k");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "x", x);
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "t");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "gridT", gridT);
  N = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "N");

  /* Invoke the target function */
  CalculateA1B1B1Star(&st, k, x, t, gridT, N, a1k, b1k, b1s);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(a1k);
  plhs[1] = c_emlrt_marshallOut(b1k);
  plhs[2] = c_emlrt_marshallOut(b1s);
  b1s->canFreeData = false;
  emxFree_real_T(&b1s);
  b1k->canFreeData = false;
  emxFree_real_T(&b1k);
  a1k->canFreeData = false;
  emxFree_real_T(&a1k);
  gridT->canFreeData = false;
  emxFree_real_T(&gridT);
  x->canFreeData = false;
  emxFree_real_T(&x);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void CalculateABBStarD_api(const mxArray * const prhs[5], const mxArray *plhs[4])
{
  emxArray_real_T *t;
  emxArray_real_T *gridT;
  emxArray_real_T *x;
  emxArray_real_T *f;
  emxArray_real_T *A;
  emxArray_real_T *B;
  emxArray_real_T *Bstar;
  emxArray_real_T *D;
  real_T N;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &t, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &gridT, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &x, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &f, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &A, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &B, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &Bstar, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &D, 2, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  N = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "N");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "t", t);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "gridT", gridT);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "x", x);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "f", f);

  /* Invoke the target function */
  CalculateABBStarD(&st, N, t, gridT, x, f, A, B, Bstar, D);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(A);
  plhs[1] = c_emlrt_marshallOut(B);
  plhs[2] = c_emlrt_marshallOut(Bstar);
  plhs[3] = c_emlrt_marshallOut(D);
  D->canFreeData = false;
  emxFree_real_T(&D);
  Bstar->canFreeData = false;
  emxFree_real_T(&Bstar);
  B->canFreeData = false;
  emxFree_real_T(&B);
  A->canFreeData = false;
  emxFree_real_T(&A);
  f->canFreeData = false;
  emxFree_real_T(&f);
  x->canFreeData = false;
  emxFree_real_T(&x);
  gridT->canFreeData = false;
  emxFree_real_T(&gridT);
  t->canFreeData = false;
  emxFree_real_T(&t);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void CalculateC_api(const mxArray * const prhs[4], const mxArray *plhs[1])
{
  emxArray_real_T *t;
  emxArray_real_T *gridX;
  emxArray_real_T *C;
  real_T N;
  real_T N0;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &t, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &gridX, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &C, 2, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  N = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "N");
  N0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "N0");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "t", t);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "gridX", gridX);

  /* Invoke the target function */
  CalculateC(&st, N, N0, t, gridX, C);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(C);
  C->canFreeData = false;
  emxFree_real_T(&C);
  gridX->canFreeData = false;
  emxFree_real_T(&gridX);
  t->canFreeData = false;
  emxFree_real_T(&t);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void CalculateHeatSolution_api(const mxArray * const prhs[12], const mxArray
  *plhs[1])
{
  emxArray_real_T *t;
  emxArray_real_T *gridT;
  emxArray_real_T *x;
  emxArray_real_T *u0;
  emxArray_real_T *q0j;
  emxArray_real_T *q1j;
  emxArray_real_T *h0j;
  emxArray_real_T *h1j;
  emxArray_real_T *f;
  emxArray_real_T *r;
  emxArray_real_T *u;
  real_T N0;
  real_T N;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &t, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &gridT, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &x, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &u0, 2, &ac_emlrtRTEI, true);
  c_emxInit_real_T(&st, &q0j, 1, &ac_emlrtRTEI, true);
  c_emxInit_real_T(&st, &q1j, 1, &ac_emlrtRTEI, true);
  c_emxInit_real_T(&st, &h0j, 1, &ac_emlrtRTEI, true);
  c_emxInit_real_T(&st, &h1j, 1, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &f, 2, &ac_emlrtRTEI, true);
  c_emxInit_real_T(&st, &r, 1, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &u, 2, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  N0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "N0");
  N = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "N");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "t", t);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "gridT", gridT);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "x", x);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "u0", u0);
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "q0j", q0j);
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "q1j", q1j);
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "h0j", h0j);
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "h1j", h1j);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "f", f);
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "r", r);

  /* Invoke the target function */
  CalculateHeatSolution(&st, N0, N, t, gridT, x, u0, q0j, q1j, h0j, h1j, f, r, u);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(u);
  u->canFreeData = false;
  emxFree_real_T(&u);
  r->canFreeData = false;
  emxFree_real_T(&r);
  f->canFreeData = false;
  emxFree_real_T(&f);
  h1j->canFreeData = false;
  emxFree_real_T(&h1j);
  h0j->canFreeData = false;
  emxFree_real_T(&h0j);
  q1j->canFreeData = false;
  emxFree_real_T(&q1j);
  q0j->canFreeData = false;
  emxFree_real_T(&q0j);
  u0->canFreeData = false;
  emxFree_real_T(&u0);
  x->canFreeData = false;
  emxFree_real_T(&x);
  gridT->canFreeData = false;
  emxFree_real_T(&gridT);
  t->canFreeData = false;
  emxFree_real_T(&t);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void CalculateXY_api(const mxArray * const prhs[15], const mxArray *plhs[2])
{
  emxArray_real_T *t;
  emxArray_real_T *gridT;
  emxArray_real_T *x;
  emxArray_real_T *gridX;
  emxArray_real_T *E;
  emxArray_real_T *A;
  emxArray_real_T *B;
  emxArray_real_T *Bstar;
  emxArray_real_T *C;
  emxArray_real_T *D;
  emxArray_real_T *u0;
  emxArray_real_T *f;
  emxArray_real_T *X;
  emxArray_real_T *Y;
  real_T N;
  real_T N0;
  real_T alpha;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &t, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &gridT, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &x, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &gridX, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &E, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &A, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &B, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &Bstar, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &C, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &D, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &u0, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &f, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &X, 2, &ac_emlrtRTEI, true);
  c_emxInit_real_T(&st, &Y, 1, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  N = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "N");
  N0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "N0");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "t", t);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "gridT", gridT);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "x", x);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "gridX", gridX);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "E", E);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "A", A);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "B", B);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "Bstar", Bstar);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "C", C);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "D", D);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[12]), "u0", u0);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[13]), "f", f);
  alpha = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "alpha");

  /* Invoke the target function */
  CalculateXY(&st, N, N0, t, gridT, x, gridX, E, A, B, Bstar, C, D, u0, f, alpha,
              X, Y);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(X);
  plhs[1] = d_emlrt_marshallOut(Y);
  Y->canFreeData = false;
  emxFree_real_T(&Y);
  X->canFreeData = false;
  emxFree_real_T(&X);
  f->canFreeData = false;
  emxFree_real_T(&f);
  u0->canFreeData = false;
  emxFree_real_T(&u0);
  D->canFreeData = false;
  emxFree_real_T(&D);
  C->canFreeData = false;
  emxFree_real_T(&C);
  Bstar->canFreeData = false;
  emxFree_real_T(&Bstar);
  B->canFreeData = false;
  emxFree_real_T(&B);
  A->canFreeData = false;
  emxFree_real_T(&A);
  E->canFreeData = false;
  emxFree_real_T(&E);
  gridX->canFreeData = false;
  emxFree_real_T(&gridX);
  x->canFreeData = false;
  emxFree_real_T(&x);
  gridT->canFreeData = false;
  emxFree_real_T(&gridT);
  t->canFreeData = false;
  emxFree_real_T(&t);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Ccoeff_api(const mxArray * const prhs[4], const mxArray *plhs[1])
{
  emxArray_real_T *x;
  emxArray_real_T *vals;
  real_T k;
  real_T t;
  real_T gridX;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &x, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &vals, 2, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  k = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "k");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "x", x);
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "t");
  gridX = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "gridX");

  /* Invoke the target function */
  Ccoeff(&st, k, x, t, gridX, vals);

  /* Marshall function outputs */
  plhs[0] = e_emlrt_marshallOut(vals);
  vals->canFreeData = false;
  emxFree_real_T(&vals);
  x->canFreeData = false;
  emxFree_real_T(&x);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Cone_api(const mxArray * const prhs[4], const mxArray *plhs[1])
{
  emxArray_real_T *x;
  emxArray_real_T *gridX;
  emxArray_real_T *t;
  emxArray_real_T *vals;
  real_T k;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &x, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &gridX, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &t, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &vals, 2, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  k = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "k");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "x", x);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "gridX", gridX);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "t", t);

  /* Invoke the target function */
  Cone(&st, k, x, gridX, t, vals);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(vals);
  vals->canFreeData = false;
  emxFree_real_T(&vals);
  t->canFreeData = false;
  emxFree_real_T(&t);
  gridX->canFreeData = false;
  emxFree_real_T(&gridX);
  x->canFreeData = false;
  emxFree_real_T(&x);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Dcoeff_api(const mxArray * const prhs[6], const mxArray *plhs[1])
{
  emxArray_real_T *y;
  emxArray_real_T *x;
  emxArray_real_T *gridT;
  emxArray_real_T *f;
  real_T j;
  real_T t;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &x, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &gridT, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &f, 2, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  j = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "j");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "x", x);
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "t");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "gridT", gridT);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "f", f);

  /* Invoke the target function */
  j = Dcoeff(&st, y, j, x, t, gridT, f);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(j);
  f->canFreeData = false;
  emxFree_real_T(&f);
  gridT->canFreeData = false;
  emxFree_real_T(&gridT);
  x->canFreeData = false;
  emxFree_real_T(&x);
  y->canFreeData = false;
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Done_api(const mxArray * const prhs[6], const mxArray *plhs[1])
{
  emxArray_real_T *x;
  emxArray_real_T *gridX;
  emxArray_real_T *gridT;
  emxArray_real_T *f;
  real_T k;
  real_T t;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &x, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &gridX, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &gridT, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &f, 2, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  k = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "k");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "x", x);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "gridX", gridX);
  t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "t");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "gridT", gridT);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "f", f);

  /* Invoke the target function */
  k = Done(&st, k, x, gridX, t, gridT, f);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(k);
  f->canFreeData = false;
  emxFree_real_T(&f);
  gridT->canFreeData = false;
  emxFree_real_T(&gridT);
  gridX->canFreeData = false;
  emxFree_real_T(&gridX);
  x->canFreeData = false;
  emxFree_real_T(&x);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void GetRegularizationTerm_api(const mxArray * const prhs[2], const mxArray
  *plhs[1])
{
  emxArray_real_T *regTerm;
  real_T N;
  real_T order;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &regTerm, 2, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  N = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "N");
  order = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "order");

  /* Invoke the target function */
  GetRegularizationTerm(&st, N, order, regTerm);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(regTerm);
  regTerm->canFreeData = false;
  emxFree_real_T(&regTerm);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void PlotResults_api(const mxArray * const prhs[4])
{
  emxArray_real_T *t;
  emxArray_real_T *sigIn;
  emxArray_real_T *u;
  emxArray_real_T *r;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &t, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &sigIn, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &u, 2, &ac_emlrtRTEI, true);
  c_emxInit_real_T(&st, &r, 1, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "t", t);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "sigIn", sigIn);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "u", u);
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "r", r);

  /* Invoke the target function */
  PlotResults(&st, t, sigIn, u, r);
  r->canFreeData = false;
  emxFree_real_T(&r);
  u->canFreeData = false;
  emxFree_real_T(&u);
  sigIn->canFreeData = false;
  emxFree_real_T(&sigIn);
  t->canFreeData = false;
  emxFree_real_T(&t);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void TestBemHeatEq_optimized_api(const mxArray * const prhs[7], const mxArray
  *plhs[2])
{
  emxArray_real_T *sigIn;
  emxArray_real_T *u;
  emxArray_real_T *r;
  real_T regOrder;
  real_T lambda;
  real_T alpha;
  real_T numSpacePoints;
  real_T initCond;
  boolean_T plotFlag;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &sigIn, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &u, 2, &ac_emlrtRTEI, true);
  c_emxInit_real_T(&st, &r, 1, &ac_emlrtRTEI, true);

  /* Marshall function inputs */
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "sigIn", sigIn);
  regOrder = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "regOrder");
  lambda = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "lambda");
  alpha = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "alpha");
  numSpacePoints = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]),
    "numSpacePoints");
  initCond = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "initCond");
  plotFlag = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "plotFlag");

  /* Invoke the target function */
  TestBemHeatEq_optimized(&st, sigIn, regOrder, lambda, alpha, numSpacePoints,
    initCond, plotFlag, u, r);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(u);
  plhs[1] = d_emlrt_marshallOut(r);
  r->canFreeData = false;
  emxFree_real_T(&r);
  u->canFreeData = false;
  emxFree_real_T(&u);
  sigIn->canFreeData = false;
  emxFree_real_T(&sigIn);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_BoundaryElementHeatEquation_api.c) */
