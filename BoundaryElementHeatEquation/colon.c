/*
 * colon.c
 *
 * Code generation for function 'colon'
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
#include "colon.h"
#include "BoundaryElementHeatEquation_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
static emlrtRSInfo ec_emlrtRSI = { 151, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo fc_emlrtRSI = { 156, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo o_emlrtRTEI = { 152, 1, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

/* Function Definitions */
void eml_signed_integer_colon(const emlrtStack *sp, int32_T b, emxArray_int32_T *
  y)
{
  int32_T n;
  int32_T yk;
  boolean_T b1;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ec_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (b < 1) {
    n = 0;
  } else {
    n = b;
  }

  yk = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = n;
  emxEnsureCapacity(sp, (emxArray__common *)y, yk, (int32_T)sizeof(int32_T),
                    &o_emlrtRTEI);
  if (n > 0) {
    y->data[0] = 1;
    yk = 1;
    st.site = &fc_emlrtRSI;
    if (2 > n) {
      b1 = false;
    } else {
      b1 = (n > 2147483646);
    }

    if (b1) {
      b_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 2; k <= n; k++) {
      yk++;
      y->data[k - 1] = yk;
    }
  }
}

/* End of code generation (colon.c) */
