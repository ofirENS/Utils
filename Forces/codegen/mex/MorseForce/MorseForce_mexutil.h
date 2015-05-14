/*
 * MorseForce_mexutil.h
 *
 * Code generation for function 'MorseForce_mexutil'
 *
 */

#ifndef __MORSEFORCE_MEXUTIL_H__
#define __MORSEFORCE_MEXUTIL_H__

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
extern const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
extern void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);

#endif

/* End of code generation (MorseForce_mexutil.h) */
