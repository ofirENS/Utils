/*
 * mpower.h
 *
 * Code generation for function 'mpower'
 *
 */

#ifndef __MPOWER_H__
#define __MPOWER_H__

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
extern void mpower(const emlrtStack *sp, const emxArray_real_T *a,
                   emxArray_real_T *c);

#endif

/* End of code generation (mpower.h) */
