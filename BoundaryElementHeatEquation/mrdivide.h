/*
 * mrdivide.h
 *
 * Code generation for function 'mrdivide'
 *
 */

#ifndef __MRDIVIDE_H__
#define __MRDIVIDE_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "BoundaryElementHeatEquation_types.h"

/* Function Declarations */
extern void b_mrdivide(const emlrtStack *sp, emxArray_real_T *A, const
  emxArray_real_T *B);
extern real_T eml_div(real_T x, real_T y);

#ifdef __WATCOMC__

#pragma aux eml_div value [8087];

#endif

extern int32_T eml_ixamax(const emlrtStack *sp, int32_T n, const emxArray_real_T
  *x, int32_T ix0);
extern void eml_matlab_zlarf(const emlrtStack *sp, int32_T m, int32_T n, int32_T
  iv0, real_T tau, emxArray_real_T *C, int32_T ic0, int32_T ldc, emxArray_real_T
  *work);
extern real_T eml_matlab_zlarfg(void);

#ifdef __WATCOMC__

#pragma aux eml_matlab_zlarfg value [8087];

#endif

extern real_T eml_xnrm2(const emlrtStack *sp, int32_T n, const emxArray_real_T
  *x, int32_T ix0);

#ifdef __WATCOMC__

#pragma aux eml_xnrm2 value [8087];

#endif

extern void eml_xscal(const emlrtStack *sp, int32_T n, real_T a, emxArray_real_T
                      *x, int32_T ix0);
extern void mrdivide(const emlrtStack *sp, const emxArray_real_T *A, const
                     emxArray_real_T *B, emxArray_real_T *y);
extern void warn_singular(const emlrtStack *sp);

#endif

/* End of code generation (mrdivide.h) */
