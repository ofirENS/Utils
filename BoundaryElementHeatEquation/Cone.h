/*
 * Cone.h
 *
 * Code generation for function 'Cone'
 *
 */

#ifndef __CONE_H__
#define __CONE_H__

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
extern void Cone(const emlrtStack *sp, real_T k, const emxArray_real_T *x, const
                 emxArray_real_T *gridX, const emxArray_real_T *t,
                 emxArray_real_T *vals);

#endif

/* End of code generation (Cone.h) */
