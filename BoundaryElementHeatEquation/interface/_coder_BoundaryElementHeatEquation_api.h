/*
 * _coder_BoundaryElementHeatEquation_api.h
 *
 * Code generation for function '_coder_BoundaryElementHeatEquation_api'
 *
 */

#ifndef ___CODER_BOUNDARYELEMENTHEATEQUATION_API_H__
#define ___CODER_BOUNDARYELEMENTHEATEQUATION_API_H__

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
extern void Acoeff_api(const mxArray * const prhs[5], const mxArray *plhs[1]);
extern void Bcoeff_api(const mxArray * const prhs[5], const mxArray *plhs[1]);
extern void CalculateA1B1B1Star_api(const mxArray * const prhs[5], const mxArray
  *plhs[3]);
extern void CalculateABBStarD_api(const mxArray * const prhs[5], const mxArray
  *plhs[4]);
extern void CalculateC_api(const mxArray * const prhs[4], const mxArray *plhs[1]);
extern void CalculateHeatSolution_api(const mxArray * const prhs[12], const
  mxArray *plhs[1]);
extern void CalculateXY_api(const mxArray * const prhs[15], const mxArray *plhs
  [2]);
extern void Ccoeff_api(const mxArray * const prhs[4], const mxArray *plhs[1]);
extern void Cone_api(const mxArray * const prhs[4], const mxArray *plhs[1]);
extern void Dcoeff_api(const mxArray * const prhs[6], const mxArray *plhs[1]);
extern void Done_api(const mxArray * const prhs[6], const mxArray *plhs[1]);
extern void GetRegularizationTerm_api(const mxArray * const prhs[2], const
  mxArray *plhs[1]);
extern void PlotResults_api(const mxArray * const prhs[4]);
extern void TestBemHeatEq_optimized_api(const mxArray * const prhs[7], const
  mxArray *plhs[2]);

#endif

/* End of code generation (_coder_BoundaryElementHeatEquation_api.h) */
