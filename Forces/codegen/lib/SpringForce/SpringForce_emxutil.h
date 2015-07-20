//
// File: SpringForce_emxutil.h
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 20-Jul-2015 21:26:14
//
#ifndef __SPRINGFORCE_EMXUTIL_H__
#define __SPRINGFORCE_EMXUTIL_H__

// Include Files
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtwtypes.h"
#include "SpringForce_types.h"

// Function Declarations
extern void b_emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);
extern void emxEnsureCapacity(emxArray__common *emxArray, int oldNumel, int
  elementSize);
extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions);
extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);

#endif

//
// File trailer for SpringForce_emxutil.h
//
// [EOF]
//
