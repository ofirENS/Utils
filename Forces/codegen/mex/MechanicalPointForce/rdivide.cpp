/*
 * rdivide.cpp
 *
 * Code generation for function 'rdivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MechanicalPointForce.h"
#include "rdivide.h"
#include "MechanicalPointForce_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo j_emlrtRTEI = { 1, 14, "rdivide",
  "/home/ofir/ProgramFiles/MATLAB2015/toolbox/eml/lib/matlab/ops/rdivide.m" };

/* Function Definitions */
void rdivide(const emlrtStack *sp, real_T x, const emxArray_real_T *y,
             emxArray_real_T *z)
{
  int32_T i1;
  int32_T loop_ub;
  i1 = z->size[0];
  z->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)z, i1, (int32_T)sizeof(real_T),
                    &j_emlrtRTEI);
  loop_ub = y->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    z->data[i1] = x / y->data[i1];
  }
}

/* End of code generation (rdivide.cpp) */
