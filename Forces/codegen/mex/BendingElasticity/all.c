/*
 * all.c
 *
 * Code generation for function 'all'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BendingElasticity.h"
#include "all.h"

/* Function Definitions */
boolean_T all(const boolean_T x[2])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (x[k] == 0) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

/* End of code generation (all.c) */
