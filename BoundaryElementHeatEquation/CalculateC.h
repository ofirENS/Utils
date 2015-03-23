/*
 * CalculateC.h
 *
 * Code generation for function 'CalculateC'
 *
 */

#ifndef __CALCULATEC_H__
#define __CALCULATEC_H__

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
extern void CalculateC(const emlrtStack *sp, real_T N, real_T N0, const
  emxArray_real_T *t, const emxArray_real_T *gridX, emxArray_real_T *C);

#endif

/* End of code generation (CalculateC.h) */
