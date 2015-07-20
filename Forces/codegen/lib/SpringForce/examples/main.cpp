//
// File: main.cpp
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 20-Jul-2015 21:26:14
//

//***********************************************************************
// This automatically generated example C main file shows how to call
// entry-point functions that MATLAB Coder generated. You must customize
// this file for your application. Do not modify this file directly.
// Instead, make a copy of this file, modify it, and integrate it into
// your development environment.
//
// This file initializes entry-point function arguments to a default
// size and value before calling the entry-point functions. It does
// not store or use any values returned from the entry-point functions.
// If necessary, it does pre-allocate memory for returned values.
// You can use this file as a starting point for a main function that
// you can deploy in your application.
//
// After you copy the file, and before you deploy it, you must make the
// following changes:
// * For variable-size function arguments, change the example sizes to
// the sizes that your application requires.
// * Change the example values of function arguments to the values that
// your application requires.
// * If the entry-point functions return values, store these values or
// otherwise use them as required by your application.
//
//***********************************************************************
// Include Files
#include "rt_nonfinite.h"
#include "SpringForce.h"
#include "main.h"
#include "SpringForce_terminate.h"
#include "SpringForce_emxAPI.h"
#include "SpringForce_initialize.h"

// Function Declarations
static emxArray_real_T *argInit_1xUnbounded_real_T();
static boolean_T argInit_boolean_T();
static double argInit_real_T();
static emxArray_boolean_T *c_argInit_UnboundedxUnbounded_b();
static emxArray_real_T *c_argInit_UnboundedxUnbounded_r();
static void main_SpringForce();

// Function Definitions

//
// Arguments    : void
// Return Type  : emxArray_real_T *
//
static emxArray_real_T *argInit_1xUnbounded_real_T()
{
  emxArray_real_T *result;
  static int iv2[2] = { 1, 2 };

  int b_j1;

  // Set the size of the array.
  // Change this size to the value that the application requires.
  result = emxCreateND_real_T(2, *(int (*)[2])&iv2[0]);

  // Loop over the array to initialize each element.
  for (b_j1 = 0; b_j1 < result->size[1U]; b_j1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result->data[result->size[0] * b_j1] = argInit_real_T();
  }

  return result;
}

//
// Arguments    : void
// Return Type  : boolean_T
//
static boolean_T argInit_boolean_T()
{
  return false;
}

//
// Arguments    : void
// Return Type  : double
//
static double argInit_real_T()
{
  return 0.0;
}

//
// Arguments    : void
// Return Type  : emxArray_boolean_T *
//
static emxArray_boolean_T *c_argInit_UnboundedxUnbounded_b()
{
  emxArray_boolean_T *result;
  static int iv1[2] = { 2, 2 };

  int b_j0;
  int b_j1;

  // Set the size of the array.
  // Change this size to the value that the application requires.
  result = emxCreateND_boolean_T(2, *(int (*)[2])&iv1[0]);

  // Loop over the array to initialize each element.
  for (b_j0 = 0; b_j0 < result->size[0U]; b_j0++) {
    for (b_j1 = 0; b_j1 < result->size[1U]; b_j1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result->data[b_j0 + result->size[0] * b_j1] = argInit_boolean_T();
    }
  }

  return result;
}

//
// Arguments    : void
// Return Type  : emxArray_real_T *
//
static emxArray_real_T *c_argInit_UnboundedxUnbounded_r()
{
  emxArray_real_T *result;
  static int iv0[2] = { 2, 2 };

  int b_j0;
  int b_j1;

  // Set the size of the array.
  // Change this size to the value that the application requires.
  result = emxCreateND_real_T(2, *(int (*)[2])&iv0[0]);

  // Loop over the array to initialize each element.
  for (b_j0 = 0; b_j0 < result->size[0U]; b_j0++) {
    for (b_j1 = 0; b_j1 < result->size[1U]; b_j1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result->data[b_j0 + result->size[0] * b_j1] = argInit_real_T();
    }
  }

  return result;
}

//
// Arguments    : void
// Return Type  : void
//
static void main_SpringForce()
{
  emxArray_real_T *force;
  emxArray_real_T *particleDist;
  emxArray_real_T *springConst;
  emxArray_boolean_T *connectivityMap;
  emxArray_real_T *minParticleDist;
  emxArray_real_T *fixedParticleNum;
  emxInitArray_real_T(&force, 2);

  // Initialize function 'SpringForce' input arguments.
  // Initialize function input argument 'particleDist'.
  particleDist = c_argInit_UnboundedxUnbounded_r();

  // Initialize function input argument 'springConst'.
  springConst = c_argInit_UnboundedxUnbounded_r();

  // Initialize function input argument 'connectivityMap'.
  connectivityMap = c_argInit_UnboundedxUnbounded_b();

  // Initialize function input argument 'minParticleDist'.
  minParticleDist = c_argInit_UnboundedxUnbounded_r();

  // Initialize function input argument 'fixedParticleNum'.
  fixedParticleNum = argInit_1xUnbounded_real_T();

  // Call the entry-point 'SpringForce'.
  SpringForce(particleDist, springConst, connectivityMap, minParticleDist,
              fixedParticleNum, force);
  emxDestroyArray_real_T(force);
  emxDestroyArray_real_T(fixedParticleNum);
  emxDestroyArray_real_T(minParticleDist);
  emxDestroyArray_boolean_T(connectivityMap);
  emxDestroyArray_real_T(springConst);
  emxDestroyArray_real_T(particleDist);
}

//
// Arguments    : int argc
//                const char * const argv[]
// Return Type  : int
//
int main(int, const char * const [])
{
  // Initialize the application.
  // You do not need to do this more than one time.
  SpringForce_initialize();

  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_SpringForce();

  // Terminate the application.
  // You do not need to do this more than one time.
  SpringForce_terminate();
  return 0;
}

//
// File trailer for main.cpp
//
// [EOF]
//
