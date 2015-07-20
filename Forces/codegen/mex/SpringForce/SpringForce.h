/*
 * SpringForce.h
 *
 * Code generation for function 'SpringForce'
 *
 */

#ifndef __SPRINGFORCE_H__
#define __SPRINGFORCE_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "SpringForce_types.h"

/* Function Declarations */
extern void SpringForce(const emlrtStack *sp, emxArray_real_T *particleDist,
  real_T springConst, const emxArray_boolean_T *connectivityMap, real_T
  minParticleDist, emxArray_real_T *force);

#endif

/* End of code generation (SpringForce.h) */
