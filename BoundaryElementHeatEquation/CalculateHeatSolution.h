/*
 * CalculateHeatSolution.h
 *
 * Code generation for function 'CalculateHeatSolution'
 *
 */

#ifndef __CALCULATEHEATSOLUTION_H__
#define __CALCULATEHEATSOLUTION_H__

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
extern void CalculateHeatSolution(const emlrtStack *sp, real_T N0, real_T N,
  const emxArray_real_T *t, const emxArray_real_T *gridT, const emxArray_real_T *
  x, const emxArray_real_T *u0, const emxArray_real_T *q0j, const
  emxArray_real_T *q1j, const emxArray_real_T *h0j, const emxArray_real_T *h1j,
  const emxArray_real_T *f, const emxArray_real_T *r, emxArray_real_T *u);

#endif

/* End of code generation (CalculateHeatSolution.h) */
