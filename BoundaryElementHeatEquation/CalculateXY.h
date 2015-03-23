/*
 * CalculateXY.h
 *
 * Code generation for function 'CalculateXY'
 *
 */

#ifndef __CALCULATEXY_H__
#define __CALCULATEXY_H__

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
extern void CalculateXY(const emlrtStack *sp, real_T N, real_T N0, const
  emxArray_real_T *t, const emxArray_real_T *gridT, const emxArray_real_T *x,
  const emxArray_real_T *gridX, const emxArray_real_T *E, const emxArray_real_T *
  A, const emxArray_real_T *B, const emxArray_real_T *Bstar, const
  emxArray_real_T *C, const emxArray_real_T *D, const emxArray_real_T *u0, const
  emxArray_real_T *f, real_T alpha, emxArray_real_T *X, emxArray_real_T *Y);

#endif

/* End of code generation (CalculateXY.h) */
