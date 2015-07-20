/*
 * dec2bin.c
 *
 * Code generation for function 'dec2bin'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "LennardJones.h"
#include "dec2bin.h"

/* Function Definitions */
void dec2bin(char_T s_data[], int32_T s_size[2])
{
  int32_T di;
  int32_T j;
  boolean_T exitg2;
  int32_T olddi;
  int32_T firstcol;
  boolean_T exitg1;
  boolean_T p;
  char_T b_s_data[52];
  s_size[0] = 1;
  s_size[1] = 52;
  for (di = 0; di < 52; di++) {
    s_data[di] = '0';
  }

  di = 6;
  j = 52;
  exitg2 = false;
  while ((!exitg2) && (j > 0)) {
    olddi = di;
    di = (int32_T)muDoubleScalarFloor((real_T)di / 2.0);
    if ((di << 1) < olddi) {
      s_data[j - 1] = '1';
    }

    if (di > 0) {
      j--;
    } else {
      exitg2 = true;
    }
  }

  firstcol = 52;
  j = 1;
  exitg1 = false;
  while ((!exitg1) && (j <= 51)) {
    p = false;
    if (s_data[j - 1] != '0') {
      p = true;
    }

    if (p) {
      firstcol = j;
      exitg1 = true;
    } else {
      j++;
    }
  }

  if (firstcol > 1) {
    for (j = firstcol; j < 53; j++) {
      s_data[j - firstcol] = s_data[j - 1];
    }

    olddi = 53 - firstcol;
    for (di = 0; di < olddi; di++) {
      b_s_data[di] = s_data[di];
    }

    s_size[0] = 1;
    s_size[1] = 53 - firstcol;
    olddi = 53 - firstcol;
    for (di = 0; di < olddi; di++) {
      s_data[di] = b_s_data[di];
    }
  }
}

/* End of code generation (dec2bin.c) */
