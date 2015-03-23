/*
 * CalculateABBStarD.h
 *
 * Code generation for function 'CalculateABBStarD'
 *
 */

#ifndef __CALCULATEABBSTARD_H__
#define __CALCULATEABBSTARD_H__

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
extern void CalculateABBStarD(const emlrtStack *sp, real_T N, const
  emxArray_real_T *t, const emxArray_real_T *gridT, const emxArray_real_T *x,
  const emxArray_real_T *f, emxArray_real_T *A, emxArray_real_T *B,
  emxArray_real_T *Bstar, emxArray_real_T *D);

#endif

/* End of code generation (CalculateABBStarD.h) */
