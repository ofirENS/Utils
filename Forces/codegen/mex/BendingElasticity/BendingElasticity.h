/*
 * BendingElasticity.h
 *
 * Code generation for function 'BendingElasticity'
 *
 */

#ifndef __BENDINGELASTICITY_H__
#define __BENDINGELASTICITY_H__

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
#include "BendingElasticity_types.h"

/* Function Declarations */
extern void BendingElasticity(const emlrtStack *sp, const emxArray_real_T *pos,
  const emxArray_real_T *dist, real_T bendingConst, const emxArray_real_T
  *angle0, const emxArray_real_T *affectedParticles, real_T numParticles, real_T
  dimension, emxArray_real_T *force);

#endif

/* End of code generation (BendingElasticity.h) */
