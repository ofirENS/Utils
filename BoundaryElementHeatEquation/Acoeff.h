/*
 * Acoeff.h
 *
 * Code generation for function 'Acoeff'
 *
 */

#ifndef __ACOEFF_H__
#define __ACOEFF_H__

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
extern real_T Acoeff(const emlrtStack *sp, real_T ksi, real_T j, real_T x,
                     real_T t, const emxArray_real_T *gridT);

#ifdef __WATCOMC__

#pragma aux Acoeff value [8087];

#endif

extern void b_Acoeff(const emlrtStack *sp, real_T ksi, real_T j, const
                     emxArray_real_T *x, real_T t, const emxArray_real_T *gridT,
                     emxArray_real_T *vals);
extern real_T b_scalar_erf(real_T x);

#ifdef __WATCOMC__

#pragma aux b_scalar_erf value [8087];

#endif

extern real_T scalar_erf(real_T x);

#ifdef __WATCOMC__

#pragma aux scalar_erf value [8087];

#endif
#endif

/* End of code generation (Acoeff.h) */
