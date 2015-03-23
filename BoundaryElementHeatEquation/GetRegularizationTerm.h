/*
 * GetRegularizationTerm.h
 *
 * Code generation for function 'GetRegularizationTerm'
 *
 */

#ifndef __GETREGULARIZATIONTERM_H__
#define __GETREGULARIZATIONTERM_H__

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
extern void GetRegularizationTerm(const emlrtStack *sp, real_T N, real_T order,
  emxArray_real_T *regTerm);

#endif

/* End of code generation (GetRegularizationTerm.h) */
