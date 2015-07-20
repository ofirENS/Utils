/*
 * File: _coder_SpringForce_api.h
 *
 * MATLAB Coder version            : 2.8
 * C/C++ source code generated on  : 20-Jul-2015 21:26:14
 */

#ifndef ___CODER_SPRINGFORCE_API_H__
#define ___CODER_SPRINGFORCE_API_H__

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_SpringForce_api.h"

/* Type Definitions */
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T

typedef struct emxArray_boolean_T emxArray_boolean_T;

#endif                                 /*typedef_emxArray_boolean_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void SpringForce(emxArray_real_T *particleDist, emxArray_real_T
  *springConst, emxArray_boolean_T *connectivityMap, emxArray_real_T
  *minParticleDist, emxArray_real_T *fixedParticleNum, emxArray_real_T *force);
extern void SpringForce_api(const mxArray *prhs[5], const mxArray *plhs[1]);
extern void SpringForce_atexit(void);
extern void SpringForce_initialize(void);
extern void SpringForce_terminate(void);
extern void SpringForce_xil_terminate(void);

#endif

/*
 * File trailer for _coder_SpringForce_api.h
 *
 * [EOF]
 */
