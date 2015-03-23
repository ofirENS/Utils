/*
 * Ccoeff.h
 *
 * Code generation for function 'Ccoeff'
 *
 */

#ifndef __CCOEFF_H__
#define __CCOEFF_H__

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
extern void Ccoeff(const emlrtStack *sp, real_T k, const emxArray_real_T *x,
                   real_T t, real_T gridX, emxArray_real_T *vals);
extern real_T b_Ccoeff(const emlrtStack *sp, real_T k, real_T x, real_T t, const
  emxArray_real_T *gridX);

#ifdef __WATCOMC__

#pragma aux b_Ccoeff value [8087];

#endif
#endif

/* End of code generation (Ccoeff.h) */
