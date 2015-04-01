/*
 * BendingElasticityForce.h
 *
 * Code generation for function 'BendingElasticityForce'
 *
 */

#ifndef __BENDINGELASTICITYFORCE_H__
#define __BENDINGELASTICITYFORCE_H__

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
#include "BendingElasticityForce_types.h"

/* Function Declarations */
extern void BendingElasticityForce(const emlrtStack *sp, const emxArray_real_T
  *edgeMatX, const emxArray_real_T *edgeMatY, const emxArray_real_T *edgeMatZ,
  const emxArray_boolean_T *connectivityMat, real_T bendingConst,
  emxArray_real_T *force);

#endif

/* End of code generation (BendingElasticityForce.h) */
