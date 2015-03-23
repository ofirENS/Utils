/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Acoeff.h"
#include "Bcoeff.h"
#include "CalculateA1B1B1Star.h"
#include "CalculateABBStarD.h"
#include "CalculateC.h"
#include "CalculateHeatSolution.h"
#include "CalculateXY.h"
#include "Ccoeff.h"
#include "Cone.h"
#include "Dcoeff.h"
#include "Done.h"
#include "GetRegularizationTerm.h"
#include "PlotResults.h"
#include "TestBemHeatEq_optimized.h"
#include "error.h"
#include "BoundaryElementHeatEquation_mexutil.h"
#include "BoundaryElementHeatEquation_data.h"

/* Function Definitions */
void error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv58[2] = { 1, 21 };

  const mxArray *m14;
  char_T cv64[21];
  int32_T i;
  static const char_T cv65[21] = { 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't',
    'e', 'd', ' ', 'c', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m14 = emlrtCreateCharArray(2, iv58);
  for (i = 0; i < 21; i++) {
    cv64[i] = cv65[i];
  }

  emlrtInitCharArrayR2013a(sp, 21, m14, cv64);
  emlrtAssign(&y, m14);
  st.site = &eh_emlrtRSI;
  b_error(&st, y, &u_emlrtMCI);
}

/* End of code generation (error.c) */
