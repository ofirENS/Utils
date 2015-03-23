/*
 * PlotResults.h
 *
 * Code generation for function 'PlotResults'
 *
 */

#ifndef __PLOTRESULTS_H__
#define __PLOTRESULTS_H__

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
extern void PlotResults(const emlrtStack *sp, const emxArray_real_T *t, const
  emxArray_real_T *sigIn, const emxArray_real_T *u, const emxArray_real_T *r);

#endif

/* End of code generation (PlotResults.h) */
