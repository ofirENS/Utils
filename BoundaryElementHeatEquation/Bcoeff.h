/*
 * Bcoeff.h
 *
 * Code generation for function 'Bcoeff'
 *
 */

#ifndef __BCOEFF_H__
#define __BCOEFF_H__

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
extern real_T Bcoeff(const emlrtStack *sp, real_T ksi, real_T j, real_T x,
                     real_T t, const emxArray_real_T *gridT);

#ifdef __WATCOMC__

#pragma aux Bcoeff value [8087];

#endif
#endif

/* End of code generation (Bcoeff.h) */
