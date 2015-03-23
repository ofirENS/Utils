/*
 * Dcoeff.h
 *
 * Code generation for function 'Dcoeff'
 *
 */

#ifndef __DCOEFF_H__
#define __DCOEFF_H__

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
extern real_T Dcoeff(const emlrtStack *sp, const emxArray_real_T *y, real_T j,
                     const emxArray_real_T *x, real_T t, const emxArray_real_T
                     *gridT, const emxArray_real_T *f);

#ifdef __WATCOMC__

#pragma aux Dcoeff value [8087];

#endif

extern real_T b_Dcoeff(const emlrtStack *sp, const emxArray_real_T *y, real_T j,
  real_T x, real_T t, const emxArray_real_T *gridT, const emxArray_real_T *f);

#ifdef __WATCOMC__

#pragma aux b_Dcoeff value [8087];

#endif
#endif

/* End of code generation (Dcoeff.h) */
