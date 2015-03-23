/*
 * BoundaryElementHeatEquation_data.c
 *
 * Code generation for function 'BoundaryElementHeatEquation_data'
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
#include "BoundaryElementHeatEquation_data.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
emlrtRSInfo f_emlrtRSI = { 14, "sqrt",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"
};

emlrtRSInfo v_emlrtRSI = { 7, "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m" };

emlrtRSInfo w_emlrtRSI = { 10, "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m" };

emlrtRSInfo bb_emlrtRSI = { 25, "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m"
};

emlrtRSInfo cb_emlrtRSI = { 26, "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m"
};

emlrtRSInfo db_emlrtRSI = { 27, "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m"
};

emlrtRSInfo eb_emlrtRSI = { 31, "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m"
};

emlrtRSInfo mb_emlrtRSI = { 42, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

emlrtRSInfo nb_emlrtRSI = { 92, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

emlrtRSInfo ob_emlrtRSI = { 90, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

emlrtRSInfo sb_emlrtRSI = { 8, "eml_xgetrf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\eml_xgetrf.m"
};

emlrtRSInfo tb_emlrtRSI = { 8, "eml_lapack_xgetrf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\internal\\eml_lapack_xgetrf.m"
};

emlrtRSInfo ub_emlrtRSI = { 23, "eml_matlab_zgetrf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

emlrtRSInfo vb_emlrtRSI = { 30, "eml_matlab_zgetrf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

emlrtRSInfo wb_emlrtRSI = { 36, "eml_matlab_zgetrf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

emlrtRSInfo xb_emlrtRSI = { 44, "eml_matlab_zgetrf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

emlrtRSInfo yb_emlrtRSI = { 50, "eml_matlab_zgetrf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

emlrtRSInfo ac_emlrtRSI = { 58, "eml_matlab_zgetrf",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

emlrtRSInfo bc_emlrtRSI = { 21, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRSInfo cc_emlrtRSI = { 75, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRSInfo dc_emlrtRSI = { 112, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRSInfo gc_emlrtRSI = { 241, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRSInfo hc_emlrtRSI = { 268, "colon",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRSInfo ic_emlrtRSI = { 22, "eml_int_forloop_overflow_check",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

emlrtRSInfo jc_emlrtRSI = { 20, "eml_ixamax",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_ixamax.m"
};

emlrtRSInfo kc_emlrtRSI = { 1, "ixamax",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\ixamax.p"
};

emlrtRSInfo lc_emlrtRSI = { 26, "eml_xswap",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xswap.m"
};

emlrtRSInfo mc_emlrtRSI = { 1, "xswap",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xswap.p"
};

emlrtRSInfo nc_emlrtRSI = { 1, "xswap",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xswap.p"
};

emlrtRSInfo oc_emlrtRSI = { 41, "eml_xgeru",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgeru.m"
};

emlrtRSInfo pc_emlrtRSI = { 1, "xgeru",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgeru.p"
};

emlrtRSInfo qc_emlrtRSI = { 1, "xger",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xger.p"
};

emlrtRSInfo sc_emlrtRSI = { 54, "eml_xtrsm",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xtrsm.m"
};

emlrtRSInfo tc_emlrtRSI = { 1, "xtrsm",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xtrsm.p"
};

emlrtRSInfo uc_emlrtRSI = { 29, "eml_qrsolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

emlrtRSInfo vc_emlrtRSI = { 38, "eml_qrsolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

emlrtRSInfo wc_emlrtRSI = { 37, "eml_qrsolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

emlrtRSInfo xc_emlrtRSI = { 8, "eml_xgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\eml_xgeqp3.m"
};

emlrtRSInfo yc_emlrtRSI = { 8, "eml_lapack_xgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\internal\\eml_lapack_xgeqp3.m"
};

emlrtRSInfo ad_emlrtRSI = { 19, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRSInfo bd_emlrtRSI = { 25, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRSInfo cd_emlrtRSI = { 31, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRSInfo dd_emlrtRSI = { 32, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRSInfo ed_emlrtRSI = { 37, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRSInfo fd_emlrtRSI = { 47, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRSInfo gd_emlrtRSI = { 51, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRSInfo hd_emlrtRSI = { 64, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRSInfo id_emlrtRSI = { 66, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRSInfo jd_emlrtRSI = { 74, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRSInfo kd_emlrtRSI = { 79, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRSInfo ld_emlrtRSI = { 93, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRSInfo md_emlrtRSI = { 100, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRSInfo nd_emlrtRSI = { 19, "eml_xnrm2",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xnrm2.m"
};

emlrtRSInfo od_emlrtRSI = { 1, "xnrm2",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xnrm2.p"
};

emlrtRSInfo pd_emlrtRSI = { 18, "eml_matlab_zlarfg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarfg.m"
};

emlrtRSInfo qd_emlrtRSI = { 39, "eml_matlab_zlarfg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarfg.m"
};

emlrtRSInfo rd_emlrtRSI = { 51, "eml_matlab_zlarfg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarfg.m"
};

emlrtRSInfo sd_emlrtRSI = { 66, "eml_matlab_zlarfg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarfg.m"
};

emlrtRSInfo td_emlrtRSI = { 69, "eml_matlab_zlarfg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarfg.m"
};

emlrtRSInfo ud_emlrtRSI = { 79, "eml_matlab_zlarfg",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarfg.m"
};

emlrtRSInfo ge_emlrtRSI = { 68, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtRSInfo he_emlrtRSI = { 21, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtRSInfo ie_emlrtRSI = { 54, "eml_xgemm",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgemm.m"
};

emlrtRSInfo je_emlrtRSI = { 1, "xgemm",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemm.p"
};

emlrtRSInfo ne_emlrtRSI = { 72, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

emlrtRSInfo oe_emlrtRSI = { 76, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

emlrtRSInfo lf_emlrtRSI = { 67, "diag",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

emlrtRSInfo mf_emlrtRSI = { 74, "diag",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

emlrtMCInfo h_emlrtMCI = { 29, 23, "eml_flt2str",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_flt2str.m"
};

emlrtMCInfo i_emlrtMCI = { 29, 15, "eml_flt2str",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_flt2str.m"
};

emlrtMCInfo j_emlrtMCI = { 99, 13, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtMCInfo k_emlrtMCI = { 98, 23, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtMCInfo l_emlrtMCI = { 104, 13, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtMCInfo m_emlrtMCI = { 103, 23, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtMCInfo u_emlrtMCI = { 16, 1, "error",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"
};

emlrtRTEInfo c_emlrtRTEI = { 5, 1, "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m" };

emlrtRTEInfo i_emlrtRTEI = { 55, 1, "sum",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

emlrtRTEInfo n_emlrtRTEI = { 1, 19, "eml_lusolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

emlrtRTEInfo p_emlrtRTEI = { 1, 24, "eml_qrsolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

emlrtRTEInfo q_emlrtRTEI = { 16, 1, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRTEInfo r_emlrtRTEI = { 28, 5, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRTEInfo s_emlrtRTEI = { 29, 5, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRTEInfo t_emlrtRTEI = { 24, 1, "eml_matlab_zgeqp3",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgeqp3.m"
};

emlrtRTEInfo ab_emlrtRTEI = { 18, 1, "eml_erfcore",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\specfun\\eml_erfcore.m"
};

emlrtBCInfo hb_emlrtBCI = { -1, -1, 11, 52, "f", "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m", 0 };

emlrtBCInfo ib_emlrtBCI = { -1, -1, 11, 34, "f", "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m", 0 };

emlrtBCInfo jb_emlrtBCI = { -1, -1, 7, 1, "a", "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m", 0 };

emlrtBCInfo kb_emlrtBCI = { -1, -1, 7, 15, "y", "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m", 0 };

emlrtBCInfo gc_emlrtBCI = { -1, -1, 10, 5, "a", "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m", 0 };

emlrtBCInfo hc_emlrtBCI = { -1, -1, 10, 22, "y", "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m", 0 };

emlrtBCInfo ic_emlrtBCI = { -1, -1, 11, 26, "a", "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m", 0 };

emlrtBCInfo jc_emlrtBCI = { -1, -1, 11, 42, "a", "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m", 0 };

emlrtBCInfo kc_emlrtBCI = { -1, -1, 11, 64, "y", "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m", 0 };

emlrtBCInfo lc_emlrtBCI = { -1, -1, 11, 72, "y", "Dcoeff",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\Dcoeff.m", 0 };

emlrtBCInfo sc_emlrtBCI = { -1, -1, 27, 49, "f", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo tc_emlrtBCI = { -1, -1, 16, 1, "eta", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo uc_emlrtBCI = { -1, -1, 17, 1, "eta", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo vc_emlrtBCI = { -1, -1, 33, 11, "u", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo wc_emlrtBCI = { -1, -1, 33, 13, "u", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo xc_emlrtBCI = { -1, -1, 33, 33, "eta", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo yc_emlrtBCI = { -1, -1, 31, 43, "x", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo ad_emlrtBCI = { -1, -1, 31, 48, "t", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo bd_emlrtBCI = { -1, -1, 31, 60, "u0", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo cd_emlrtBCI = { -1, -1, 25, 42, "x", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo dd_emlrtBCI = { -1, -1, 25, 47, "t", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo ed_emlrtBCI = { -1, -1, 25, 59, "q0j", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo fd_emlrtBCI = { -1, -1, 25, 85, "x", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo gd_emlrtBCI = { -1, -1, 25, 90, "t", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo hd_emlrtBCI = { -1, -1, 25, 102, "q1j", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo id_emlrtBCI = { -1, -1, 26, 31, "x", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo jd_emlrtBCI = { -1, -1, 26, 36, "t", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo kd_emlrtBCI = { -1, -1, 26, 48, "h0j", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo ld_emlrtBCI = { -1, -1, 26, 74, "x", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo md_emlrtBCI = { -1, -1, 26, 79, "t", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo nd_emlrtBCI = { -1, -1, 26, 92, "h1j", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo od_emlrtBCI = { -1, -1, 27, 31, "x", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo pd_emlrtBCI = { -1, -1, 27, 36, "t", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo qd_emlrtBCI = { -1, -1, 27, 55, "r", "CalculateHeatSolution",
  "D:\\Ofir\\Work\\ENS\\TestFiles\\code\\HeatEqBoundaryElements\\CalculateHeatSolution.m",
  0 };

emlrtBCInfo td_emlrtBCI = { -1, -1, 1, 1, "", "xgemm",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemm.p",
  0 };

emlrtBCInfo yd_emlrtBCI = { -1, -1, 1, 1, "", "xtrsm",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xtrsm.p",
  0 };

emlrtBCInfo ae_emlrtBCI = { -1, -1, 1, 1, "", "ixamax",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\ixamax.p",
  0 };

emlrtBCInfo be_emlrtBCI = { -1, -1, 1, 1, "", "xger",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xger.p",
  0 };

emlrtBCInfo ce_emlrtBCI = { -1, -1, 1, 1, "", "xswap",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xswap.p",
  0 };

emlrtRTEInfo jc_emlrtRTEI = { 106, 5, "eml_qrsolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

emlrtRTEInfo kc_emlrtRTEI = { 99, 5, "eml_qrsolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

emlrtRTEInfo lc_emlrtRTEI = { 82, 21, "eml_qrsolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

emlrtRTEInfo mc_emlrtRTEI = { 76, 17, "eml_qrsolve",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

emlrtBCInfo de_emlrtBCI = { -1, -1, 1, 1, "", "xnrm2",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xnrm2.p",
  0 };

emlrtRSInfo vg_emlrtRSI = { 99, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtRSInfo wg_emlrtRSI = { 104, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtRSInfo eh_emlrtRSI = { 16, "error",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"
};

emlrtRSInfo fh_emlrtRSI = { 98, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtRSInfo gh_emlrtRSI = { 103, "eml_mtimes_helper",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

emlrtRSInfo qh_emlrtRSI = { 29, "eml_flt2str",
  "D:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_flt2str.m"
};

/* End of code generation (BoundaryElementHeatEquation_data.c) */
