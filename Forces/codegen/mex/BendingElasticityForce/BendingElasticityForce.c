/*
 * BendingElasticityForce.c
 *
 * Code generation for function 'BendingElasticityForce'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BendingElasticityForce.h"
#include "BendingElasticityForce_emxutil.h"
#include "eml_error.h"
#include "norm.h"
#include "eml_int_forloop_overflow_check.h"
#include "BendingElasticityForce_mexutil.h"
#include "BendingElasticityForce_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 9, "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m" };

static emlrtRSInfo b_emlrtRSI = { 10, "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m" };

static emlrtRSInfo c_emlrtRSI = { 16, "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m" };

static emlrtRSInfo d_emlrtRSI = { 23, "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m" };

static emlrtRSInfo e_emlrtRSI = { 31, "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m" };

static emlrtRSInfo f_emlrtRSI = { 11, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo g_emlrtRSI = { 26, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo h_emlrtRSI = { 39, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo i_emlrtRSI = { 22, "eml_int_forloop_overflow_check",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo j_emlrtRSI = { 12, "factorial",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\specfun\\factorial.m"
};

static emlrtRSInfo k_emlrtRSI = { 14, "acos",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elfun\\acos.m"
};

static emlrtRSInfo l_emlrtRSI = { 76, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtMCInfo emlrtMCI = { 14, 5, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 19, "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m" };

static emlrtRTEInfo b_emlrtRTEI = { 9, 5, "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m" };

static emlrtRTEInfo c_emlrtRTEI = { 17, 9, "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m" };

static emlrtRTEInfo d_emlrtRTEI = { 18, 9, "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m" };

static emlrtRTEInfo e_emlrtRTEI = { 17, 9, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 9, 26, "edgeMatX",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 9, 47, "connectivityMat",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 9, 66, "edgeMatY",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 9, 87, "connectivityMat",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 10, 30, "edgeMatZ",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 10, 51, "connectivityMat",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtECInfo emlrtECI = { 2, 9, 16, "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m" };

static emlrtRTEInfo g_emlrtRTEI = { 20, 13, "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m" };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 21, 46, "edgeVec",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 22, 46, "edgeVec",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 25, 50, "angle",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 25, 26, "forceVec",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 31, 15, "force",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtDCInfo emlrtDCI = { 17, 26, "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 1 };

static emlrtDCInfo b_emlrtDCI = { 17, 26, "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 4 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 9, 31, "edgeMatX",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 9, 71, "edgeMatY",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 10, 35, "edgeMatZ",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 23, 17, "angle",
  "BendingElasticityForce",
  "D:\\Ofir\\Work\\ENS\\Utils\\Forces\\BendingElasticityForce.m", 0 };

static emlrtDCInfo c_emlrtDCI = { 17, 37, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m",
  4 };

static emlrtRSInfo n_emlrtRSI = { 14, "eml_li_find",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

/* Function Declarations */
static void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);

/* Function Definitions */
static void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y)
{
  int32_T k;
  boolean_T overflow;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m0;
  int32_T j;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &f_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = 0;
  b_st.site = &h_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &i_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  if (k <= x->size[1]) {
  } else {
    b_y = NULL;
    m0 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m0);
    st.site = &n_emlrtRSI;
    error(&st, b_y, &emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &c_emlrtDCI, sp);
  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &e_emlrtRTEI);
  j = 0;
  st.site = &g_emlrtRSI;
  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

void BendingElasticityForce(const emlrtStack *sp, const emxArray_real_T
  *edgeMatX, const emxArray_real_T *edgeMatY, const emxArray_real_T *edgeMatZ,
  const emxArray_boolean_T *connectivityMat, real_T bendingConst,
  emxArray_real_T *force)
{
  int32_T ixstart;
  int32_T i0;
  int32_T pIdx;
  emxArray_real_T *edgeVec;
  emxArray_real_T *forceVec;
  emxArray_real_T *angle;
  emxArray_real_T *r0;
  emxArray_real_T *r1;
  emxArray_int32_T *r2;
  emxArray_boolean_T *b_connectivityMat;
  emxArray_boolean_T *c_connectivityMat;
  emxArray_boolean_T *d_connectivityMat;
  int32_T ix;
  int32_T i1;
  int32_T iy;
  uint32_T next;
  real_T numPairs;
  static const real_T dv0[170] = { 1.0, 2.0, 6.0, 24.0, 120.0, 720.0, 5040.0,
    40320.0, 362880.0, 3.6288E+6, 3.99168E+7, 4.790016E+8, 6.2270208E+9,
    8.71782912E+10, 1.307674368E+12, 2.0922789888E+13, 3.55687428096E+14,
    6.402373705728E+15, 1.21645100408832E+17, 2.43290200817664E+18,
    5.109094217170944E+19, 1.1240007277776077E+21, 2.5852016738884978E+22,
    6.2044840173323941E+23, 1.5511210043330986E+25, 4.0329146112660565E+26,
    1.0888869450418352E+28, 3.0488834461171384E+29, 8.8417619937397008E+30,
    2.6525285981219103E+32, 8.2228386541779224E+33, 2.6313083693369352E+35,
    8.6833176188118859E+36, 2.9523279903960412E+38, 1.0333147966386144E+40,
    3.7199332678990118E+41, 1.3763753091226343E+43, 5.23022617466601E+44,
    2.0397882081197442E+46, 8.1591528324789768E+47, 3.3452526613163803E+49,
    1.4050061177528798E+51, 6.0415263063373834E+52, 2.6582715747884485E+54,
    1.1962222086548019E+56, 5.5026221598120885E+57, 2.5862324151116818E+59,
    1.2413915592536073E+61, 6.0828186403426752E+62, 3.0414093201713376E+64,
    1.5511187532873822E+66, 8.0658175170943877E+67, 4.2748832840600255E+69,
    2.3084369733924138E+71, 1.2696403353658276E+73, 7.1099858780486348E+74,
    4.0526919504877221E+76, 2.3505613312828789E+78, 1.3868311854568986E+80,
    8.3209871127413916E+81, 5.0758021387722484E+83, 3.1469973260387939E+85,
    1.98260831540444E+87, 1.2688693218588417E+89, 8.2476505920824715E+90,
    5.4434493907744307E+92, 3.6471110918188683E+94, 2.4800355424368305E+96,
    1.711224524281413E+98, 1.197857166996989E+100, 8.5047858856786218E+101,
    6.1234458376886077E+103, 4.4701154615126834E+105, 3.3078854415193856E+107,
    2.4809140811395391E+109, 1.8854947016660498E+111, 1.4518309202828584E+113,
    1.1324281178206295E+115, 8.9461821307829729E+116, 7.1569457046263779E+118,
    5.7971260207473655E+120, 4.75364333701284E+122, 3.9455239697206569E+124,
    3.314240134565352E+126, 2.8171041143805494E+128, 2.4227095383672724E+130,
    2.1077572983795269E+132, 1.8548264225739836E+134, 1.6507955160908452E+136,
    1.4857159644817607E+138, 1.3520015276784023E+140, 1.24384140546413E+142,
    1.1567725070816409E+144, 1.0873661566567424E+146, 1.0329978488239052E+148,
    9.916779348709491E+149, 9.6192759682482062E+151, 9.426890448883242E+153,
    9.33262154439441E+155, 9.33262154439441E+157, 9.4259477598383536E+159,
    9.6144667150351211E+161, 9.9029007164861754E+163, 1.0299016745145622E+166,
    1.0813967582402903E+168, 1.1462805637347078E+170, 1.2265202031961373E+172,
    1.3246418194518284E+174, 1.4438595832024928E+176, 1.5882455415227421E+178,
    1.7629525510902437E+180, 1.9745068572210728E+182, 2.2311927486598123E+184,
    2.5435597334721862E+186, 2.9250936934930141E+188, 3.3931086844518965E+190,
    3.969937160808719E+192, 4.6845258497542883E+194, 5.5745857612076033E+196,
    6.6895029134491239E+198, 8.09429852527344E+200, 9.8750442008335976E+202,
    1.2146304367025325E+205, 1.5061417415111404E+207, 1.8826771768889254E+209,
    2.3721732428800459E+211, 3.0126600184576582E+213, 3.8562048236258025E+215,
    4.9745042224772855E+217, 6.4668554892204716E+219, 8.4715806908788174E+221,
    1.1182486511960039E+224, 1.4872707060906852E+226, 1.9929427461615181E+228,
    2.6904727073180495E+230, 3.6590428819525472E+232, 5.01288874827499E+234,
    6.9177864726194859E+236, 9.6157231969410859E+238, 1.346201247571752E+241,
    1.89814375907617E+243, 2.6953641378881614E+245, 3.8543707171800706E+247,
    5.5502938327393013E+249, 8.0479260574719866E+251, 1.17499720439091E+254,
    1.7272458904546376E+256, 2.5563239178728637E+258, 3.8089226376305671E+260,
    5.7133839564458505E+262, 8.6272097742332346E+264, 1.3113358856834518E+267,
    2.0063439050956811E+269, 3.0897696138473489E+271, 4.7891429014633912E+273,
    7.47106292628289E+275, 1.1729568794264138E+278, 1.8532718694937338E+280,
    2.9467022724950369E+282, 4.714723635992059E+284, 7.5907050539472148E+286,
    1.2296942187394488E+289, 2.0044015765453015E+291, 3.2872185855342945E+293,
    5.423910666131586E+295, 9.0036917057784329E+297, 1.5036165148649983E+300,
    2.5260757449731969E+302, 4.2690680090047027E+304, 7.257415615307994E+306 };

  real_T n;
  int32_T i;
  uint32_T a2Idx;
  real_T y[3];
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* =========== */
  /*  Calculate the force on each particle given its connectivity */
  ixstart = connectivityMat->size[0];
  i0 = force->size[0] * force->size[1];
  force->size[0] = ixstart;
  force->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ixstart = connectivityMat->size[0] * 3;
  for (i0 = 0; i0 < ixstart; i0++) {
    force->data[i0] = 0.0;
  }

  pIdx = 1;
  emxInit_real_T(sp, &edgeVec, 2, &b_emlrtRTEI, true);
  emxInit_real_T(sp, &forceVec, 2, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &angle, 2, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &r0, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 2, &emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_connectivityMat, 2, &emlrtRTEI, true);
  emxInit_boolean_T(sp, &c_connectivityMat, 2, &emlrtRTEI, true);
  emxInit_boolean_T(sp, &d_connectivityMat, 2, &emlrtRTEI, true);
  while (pIdx - 1 <= connectivityMat->size[0] - 1) {
    ixstart = connectivityMat->size[1];
    i0 = connectivityMat->size[0];
    ix = emlrtDynamicBoundsCheckFastR2012b(pIdx, 1, i0, &b_emlrtBCI, sp);
    i0 = d_connectivityMat->size[0] * d_connectivityMat->size[1];
    d_connectivityMat->size[0] = 1;
    d_connectivityMat->size[1] = ixstart;
    emxEnsureCapacity(sp, (emxArray__common *)d_connectivityMat, i0, (int32_T)
                      sizeof(boolean_T), &emlrtRTEI);
    for (i0 = 0; i0 < ixstart; i0++) {
      d_connectivityMat->data[d_connectivityMat->size[0] * i0] =
        connectivityMat->data[(ix + connectivityMat->size[0] * i0) - 1];
    }

    st.site = &emlrtRSI;
    eml_li_find(&st, d_connectivityMat, r2);
    i0 = edgeMatX->size[0];
    ix = emlrtDynamicBoundsCheckFastR2012b(pIdx, 1, i0, &emlrtBCI, sp);
    i0 = angle->size[0] * angle->size[1];
    angle->size[0] = 1;
    angle->size[1] = r2->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)angle, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    ixstart = r2->size[1];
    for (i0 = 0; i0 < ixstart; i0++) {
      i1 = edgeMatX->size[1];
      iy = r2->data[r2->size[0] * i0];
      angle->data[angle->size[0] * i0] = edgeMatX->data[(ix + edgeMatX->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(iy, 1, i1, &l_emlrtBCI, sp) - 1)) - 1];
    }

    ixstart = connectivityMat->size[1];
    i0 = connectivityMat->size[0];
    ix = emlrtDynamicBoundsCheckFastR2012b(pIdx, 1, i0, &d_emlrtBCI, sp);
    i0 = c_connectivityMat->size[0] * c_connectivityMat->size[1];
    c_connectivityMat->size[0] = 1;
    c_connectivityMat->size[1] = ixstart;
    emxEnsureCapacity(sp, (emxArray__common *)c_connectivityMat, i0, (int32_T)
                      sizeof(boolean_T), &emlrtRTEI);
    for (i0 = 0; i0 < ixstart; i0++) {
      c_connectivityMat->data[c_connectivityMat->size[0] * i0] =
        connectivityMat->data[(ix + connectivityMat->size[0] * i0) - 1];
    }

    st.site = &emlrtRSI;
    eml_li_find(&st, c_connectivityMat, r2);
    i0 = edgeMatY->size[0];
    ix = emlrtDynamicBoundsCheckFastR2012b(pIdx, 1, i0, &c_emlrtBCI, sp);
    i0 = r0->size[0] * r0->size[1];
    r0->size[0] = 1;
    r0->size[1] = r2->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    ixstart = r2->size[1];
    for (i0 = 0; i0 < ixstart; i0++) {
      i1 = edgeMatY->size[1];
      iy = r2->data[r2->size[0] * i0];
      r0->data[r0->size[0] * i0] = edgeMatY->data[(ix + edgeMatY->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(iy, 1, i1, &m_emlrtBCI, sp) - 1)) - 1];
    }

    i0 = angle->size[1];
    i1 = r0->size[1];
    emlrtDimSizeEqCheckFastR2012b(i0, i1, &emlrtECI, sp);
    ixstart = connectivityMat->size[1];
    i0 = connectivityMat->size[0];
    ix = emlrtDynamicBoundsCheckFastR2012b(pIdx, 1, i0, &f_emlrtBCI, sp);
    i0 = b_connectivityMat->size[0] * b_connectivityMat->size[1];
    b_connectivityMat->size[0] = 1;
    b_connectivityMat->size[1] = ixstart;
    emxEnsureCapacity(sp, (emxArray__common *)b_connectivityMat, i0, (int32_T)
                      sizeof(boolean_T), &emlrtRTEI);
    for (i0 = 0; i0 < ixstart; i0++) {
      b_connectivityMat->data[b_connectivityMat->size[0] * i0] =
        connectivityMat->data[(ix + connectivityMat->size[0] * i0) - 1];
    }

    st.site = &b_emlrtRSI;
    eml_li_find(&st, b_connectivityMat, r2);
    i0 = edgeMatZ->size[0];
    ix = emlrtDynamicBoundsCheckFastR2012b(pIdx, 1, i0, &e_emlrtBCI, sp);
    i0 = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = r2->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    ixstart = r2->size[1];
    for (i0 = 0; i0 < ixstart; i0++) {
      i1 = edgeMatZ->size[1];
      iy = r2->data[r2->size[0] * i0];
      r1->data[r1->size[0] * i0] = edgeMatZ->data[(ix + edgeMatZ->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(iy, 1, i1, &n_emlrtBCI, sp) - 1)) - 1];
    }

    i0 = angle->size[1];
    i1 = r1->size[1];
    emlrtDimSizeEqCheckFastR2012b(i0, i1, &emlrtECI, sp);
    i0 = edgeVec->size[0] * edgeVec->size[1];
    edgeVec->size[0] = 3;
    edgeVec->size[1] = angle->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)edgeVec, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    ixstart = angle->size[1];
    for (i0 = 0; i0 < ixstart; i0++) {
      edgeVec->data[edgeVec->size[0] * i0] = angle->data[angle->size[0] * i0];
    }

    ixstart = r0->size[1];
    for (i0 = 0; i0 < ixstart; i0++) {
      edgeVec->data[1 + edgeVec->size[0] * i0] = r0->data[r0->size[0] * i0];
    }

    ixstart = r1->size[1];
    for (i0 = 0; i0 < ixstart; i0++) {
      edgeVec->data[2 + edgeVec->size[0] * i0] = r1->data[r1->size[0] * i0];
    }

    /*  calculate the pairwise angles between the connected */
    /*  particles */
    /*  number of edge pairs */
    if (edgeVec->size[1] >= 2) {
      next = 1U;
      st.site = &c_emlrtRSI;
      b_st.site = &j_emlrtRSI;
      if (edgeVec->size[1] > 170) {
        numPairs = rtInf;
      } else {
        numPairs = dv0[edgeVec->size[1] - 1];
      }

      st.site = &c_emlrtRSI;
      b_st.site = &j_emlrtRSI;
      if (edgeVec->size[1] - 2 > 170) {
        n = rtInf;
      } else if (edgeVec->size[1] - 2 < 1) {
        n = 1.0;
      } else {
        n = dv0[edgeVec->size[1] - 3];
      }

      numPairs /= 2.0 * n;
      i0 = forceVec->size[0] * forceVec->size[1];
      n = emlrtNonNegativeCheckFastR2012b(numPairs, &b_emlrtDCI, sp);
      forceVec->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(n, &emlrtDCI, sp);
      forceVec->size[1] = 3;
      emxEnsureCapacity(sp, (emxArray__common *)forceVec, i0, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      n = emlrtNonNegativeCheckFastR2012b(numPairs, &b_emlrtDCI, sp);
      ixstart = (int32_T)emlrtIntegerCheckFastR2012b(n, &emlrtDCI, sp) * 3;
      for (i0 = 0; i0 < ixstart; i0++) {
        forceVec->data[i0] = 0.0;
      }

      i0 = angle->size[0] * angle->size[1];
      angle->size[0] = 1;
      angle->size[1] = (int32_T)numPairs;
      emxEnsureCapacity(sp, (emxArray__common *)angle, i0, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      ixstart = (int32_T)numPairs;
      for (i0 = 0; i0 < ixstart; i0++) {
        angle->data[i0] = 0.0;
      }

      ix = 0;
      while (ix <= edgeVec->size[1] - 1) {
        i0 = edgeVec->size[1] + (int32_T)(1.0 - ((1.0 + (real_T)ix) + 1.0));
        emlrtForLoopVectorCheckR2012b((1.0 + (real_T)ix) + 1.0, 1.0,
          edgeVec->size[1], mxDOUBLE_CLASS, i0, &g_emlrtRTEI, sp);
        i = 0;
        while (i <= i0 - 1) {
          a2Idx = ((uint32_T)ix + i) + 2U;
          i1 = edgeVec->size[1];
          iy = ix + 1;
          emlrtDynamicBoundsCheckFastR2012b(iy, 1, i1, &g_emlrtBCI, sp);
          i1 = edgeVec->size[1];
          iy = (int32_T)(((uint32_T)ix + i) + 2U);
          emlrtDynamicBoundsCheckFastR2012b(iy, 1, i1, &h_emlrtBCI, sp);
          ixstart = (int32_T)a2Idx;
          for (i1 = 0; i1 < 3; i1++) {
            y[i1] = edgeVec->data[i1 + edgeVec->size[0] * ix] * edgeVec->data[i1
              + edgeVec->size[0] * (ixstart - 1)];
          }

          numPairs = y[0];
          for (ixstart = 0; ixstart < 2; ixstart++) {
            numPairs += y[ixstart + 1];
          }

          numPairs /= norm(*(real_T (*)[3])&edgeVec->data[edgeVec->size[0] * ix])
            * norm(*(real_T (*)[3])&edgeVec->data[edgeVec->size[0] * ((int32_T)
                    a2Idx - 1)]);
          st.site = &d_emlrtRSI;
          if ((numPairs < -1.0) || (1.0 < numPairs)) {
            b_st.site = &k_emlrtRSI;
            eml_error(&b_st);
          }

          i1 = angle->size[1];
          iy = (int32_T)next;
          angle->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i1, &o_emlrtBCI,
            sp) - 1] = muDoubleScalarAcos(numPairs);
          i1 = angle->size[1];
          iy = (int32_T)next;
          emlrtDynamicBoundsCheckFastR2012b(iy, 1, i1, &i_emlrtBCI, sp);
          numPairs = bendingConst * (angle->data[(int32_T)next - 1] /
            3.1415926535897931 - 1.0);
          ixstart = forceVec->size[0];
          i1 = (int32_T)next;
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, ixstart, &j_emlrtBCI, sp);
          ixstart = (int32_T)a2Idx;
          for (i1 = 0; i1 < 3; i1++) {
            forceVec->data[((int32_T)next + forceVec->size[0] * i1) - 1] =
              numPairs * ((edgeVec->data[i1 + edgeVec->size[0] * (ixstart - 1)]
                           + edgeVec->data[i1 + edgeVec->size[0] * ix]) / 2.0);
          }

          next++;
          i++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
        }

        ix++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      /*  calculate the resulting force vector for the specific */
      /*  particle */
      st.site = &e_emlrtRSI;
      if (forceVec->size[0] == 0) {
        for (i0 = 0; i0 < 3; i0++) {
          y[i0] = 0.0;
        }
      } else {
        ix = -1;
        iy = -1;
        for (i = 0; i < 3; i++) {
          ixstart = ix + 1;
          ix++;
          numPairs = forceVec->data[ixstart];
          b_st.site = &l_emlrtRSI;
          if (2 > forceVec->size[0]) {
            overflow = false;
          } else {
            overflow = (forceVec->size[0] > 2147483646);
          }

          if (overflow) {
            c_st.site = &i_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (ixstart = 2; ixstart <= forceVec->size[0]; ixstart++) {
            ix++;
            numPairs += forceVec->data[ix];
          }

          iy++;
          y[iy] = numPairs;
        }
      }

      ixstart = force->size[0];
      emlrtDynamicBoundsCheckFastR2012b(pIdx, 1, ixstart, &k_emlrtBCI, sp);
      for (i0 = 0; i0 < 3; i0++) {
        force->data[(pIdx + force->size[0] * i0) - 1] = y[i0];
      }
    }

    pIdx++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_boolean_T(&d_connectivityMat);
  emxFree_boolean_T(&c_connectivityMat);
  emxFree_boolean_T(&b_connectivityMat);
  emxFree_int32_T(&r2);
  emxFree_real_T(&r1);
  emxFree_real_T(&r0);
  emxFree_real_T(&angle);
  emxFree_real_T(&forceVec);
  emxFree_real_T(&edgeVec);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (BendingElasticityForce.c) */
