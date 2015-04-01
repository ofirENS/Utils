/*
 * GetEdgesVectors.h
 *
 * Code generation for function 'GetEdgesVectors'
 *
 */

#ifndef __GETEDGESVECTORS_H__
#define __GETEDGESVECTORS_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "GetEdgesVectors_types.h"

/* Function Declarations */
extern void GetEdgesVectors(const emlrtStack *sp, const emxArray_real_T
  *particlePosition, const emxArray_boolean_T *connectivityMap, emxArray_real_T *
  edgesVec);

#endif

/* End of code generation (GetEdgesVectors.h) */
