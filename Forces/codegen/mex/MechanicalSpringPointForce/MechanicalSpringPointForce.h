/*
 * MechanicalSpringPointForce.h
 *
 * Code generation for function 'MechanicalSpringPointForce'
 *
 */

#ifndef __MECHANICALSPRINGPOINTFORCE_H__
#define __MECHANICALSPRINGPOINTFORCE_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "MechanicalSpringPointForce_types.h"

/* Function Declarations */
extern void MechanicalSpringPointForce(const emlrtStack *sp, const
  emxArray_real_T *particlePosition, const emxArray_real_T *pointSourcePosition,
  real_T forceDirection, real_T forceMagnitude, real_T cutoff, emxArray_real_T
  *force);

#endif

/* End of code generation (MechanicalSpringPointForce.h) */
