/*
 * MorseForce.h
 *
 * Code generation for function 'MorseForce'
 *
 */

#ifndef __MORSEFORCE_H__
#define __MORSEFORCE_H__

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
#include "MorseForce_types.h"

/* Function Declarations */
extern void MorseForce(const emlrtStack *sp, real_T De, real_T alpha, real_T re,
  const emxArray_real_T *edgesX, const emxArray_real_T *edgesY, const
  emxArray_real_T *edgesZ, const emxArray_real_T *particleDistance, const
  emxArray_char_T *forceType, emxArray_real_T *force);

#endif

/* End of code generation (MorseForce.h) */
