//
// File: SpringForce.h
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 20-Jul-2015 21:26:14
//
#ifndef __SPRINGFORCE_H__
#define __SPRINGFORCE_H__

// Include Files
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtwtypes.h"
#include "SpringForce_types.h"

// Function Declarations
extern void SpringForce(emxArray_real_T *particleDist, const emxArray_real_T
  *springConst, const emxArray_boolean_T *connectivityMap, const emxArray_real_T
  *minParticleDist, const emxArray_real_T *fixedParticleNum, emxArray_real_T
  *force);

#endif

//
// File trailer for SpringForce.h
//
// [EOF]
//
