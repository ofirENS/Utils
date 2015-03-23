/*
 * TestBemHeatEq_optimized.h
 *
 * Code generation for function 'TestBemHeatEq_optimized'
 *
 */

#ifndef __TESTBEMHEATEQ_OPTIMIZED_H__
#define __TESTBEMHEATEQ_OPTIMIZED_H__

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
extern void TestBemHeatEq_optimized(const emlrtStack *sp, const emxArray_real_T *
  sigIn, real_T regOrder, real_T lambda, real_T alpha, real_T numSpacePoints,
  real_T initCond, boolean_T plotFlag, emxArray_real_T *u, emxArray_real_T *r);

#endif

/* End of code generation (TestBemHeatEq_optimized.h) */
