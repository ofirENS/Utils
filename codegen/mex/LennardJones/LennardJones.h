/*
 * LennardJones.h
 *
 * Code generation for function 'LennardJones'
 *
 */

#ifndef __LENNARDJONES_H__
#define __LENNARDJONES_H__

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
#include "LennardJones_types.h"

/* Function Declarations */
extern void LennardJones(const emlrtStack *sp, const emxArray_real_T
  *particlePosition, const emxArray_real_T *particleDist, real_T
  LJPotentialWidth, real_T LJPotentialDepth, emxArray_real_T *force);

#endif

/* End of code generation (LennardJones.h) */
