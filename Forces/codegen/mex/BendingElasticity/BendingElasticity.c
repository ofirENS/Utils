/*
 * BendingElasticity.c
 *
 * Code generation for function 'BendingElasticity'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BendingElasticity.h"
#include "BendingElasticity_emxutil.h"
#include "rdivide.h"
#include "all.h"
#include "cos.h"
#include "BendingElasticity_data.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 22, 7, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRTEInfo b_emlrtRTEI = { 41, 10, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRTEInfo c_emlrtRTEI = { 42, 10, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRTEInfo d_emlrtRTEI = { 43, 10, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRSInfo emlrtRSI = { 24, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRSInfo b_emlrtRSI = { 28, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRSInfo c_emlrtRSI = { 29, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRSInfo d_emlrtRSI = { 32, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRSInfo e_emlrtRSI = { 35, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRSInfo f_emlrtRSI = { 36, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRSInfo g_emlrtRSI = { 39, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRSInfo h_emlrtRSI = { 41, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRSInfo i_emlrtRSI = { 42, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRSInfo j_emlrtRSI = { 43, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRSInfo k_emlrtRSI = { 47, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRSInfo l_emlrtRSI = { 48, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRSInfo m_emlrtRSI = { 49, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRSInfo n_emlrtRSI = { 61, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo o_emlrtRSI = { 21, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo p_emlrtRSI = { 30, "eml_xdotu",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m" };

static emlrtRSInfo q_emlrtRSI = { 1, "xdotu",
  "/usr/local/MATLAB/R2014a/toolbox/coder/coder/+coder/+internal/+blas/xdotu.p"
};

static emlrtRSInfo r_emlrtRSI = { 1, "xdot",
  "/usr/local/MATLAB/R2014a/toolbox/coder/coder/+coder/+internal/+blas/xdot.p" };

static emlrtMCInfo emlrtMCI = { 99, 13, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtMCInfo b_emlrtMCI = { 98, 23, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtMCInfo c_emlrtMCI = { 104, 13, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtMCInfo d_emlrtMCI = { 103, 23, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRTEInfo e_emlrtRTEI = { 1, 18, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtRTEInfo f_emlrtRTEI = { 19, 1, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 22, 11, "affectedParticles",
  "BendingElasticity", "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0
};

static emlrtDCInfo emlrtDCI = { 24, 33, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 24, 33, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtDCInfo b_emlrtDCI = { 24, 44, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 24, 44, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo emlrtECI = { 2, 24, 29, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtDCInfo c_emlrtDCI = { 24, 57, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 24, 57, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 24, 66, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo b_emlrtECI = { 2, 24, 53, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 24, 82, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 24, 86, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 24, 96, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 24, 100, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 24, 124, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 24, 135, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo c_emlrtECI = { 2, 24, 120, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 24, 150, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 24, 154, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 24, 164, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 24, 166, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo d_emlrtECI = { 2, 24, 26, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtDCInfo d_emlrtDCI = { 28, 33, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 28, 33, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtDCInfo e_emlrtDCI = { 28, 44, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 28, 44, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo e_emlrtECI = { 2, 28, 29, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 28, 55, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 28, 66, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo f_emlrtECI = { 2, 28, 51, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 28, 80, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 28, 84, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 28, 92, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 28, 96, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 28, 122, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 28, 131, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo g_emlrtECI = { 2, 28, 116, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 28, 142, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo h_emlrtECI = { 2, 28, 26, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 29, 67, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 29, 78, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo i_emlrtECI = { 2, 29, 63, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 29, 91, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 29, 100, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo j_emlrtECI = { 2, 29, 87, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 29, 116, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 29, 120, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 29, 130, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 29, 134, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 29, 158, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 29, 169, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo k_emlrtECI = { 2, 29, 154, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtECInfo l_emlrtECI = { 2, 29, 60, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtDCInfo f_emlrtDCI = { 32, 49, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 32, 49, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtDCInfo g_emlrtDCI = { 32, 60, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 32, 60, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo m_emlrtECI = { 2, 32, 45, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 32, 71, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 32, 82, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo n_emlrtECI = { 2, 32, 67, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 32, 96, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 32, 100, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 32, 108, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 32, 112, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 32, 138, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 32, 147, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo o_emlrtECI = { 2, 32, 132, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 32, 158, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo p_emlrtECI = { 2, 32, 42, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtDCInfo h_emlrtDCI = { 35, 34, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 35, 34, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtDCInfo i_emlrtDCI = { 35, 45, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 35, 45, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo q_emlrtECI = { 2, 35, 30, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 35, 58, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 35, 69, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo r_emlrtECI = { 2, 35, 54, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 35, 83, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 35, 87, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 35, 97, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 35, 101, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 35, 126, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 35, 135, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo s_emlrtECI = { 2, 35, 120, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 35, 146, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo t_emlrtECI = { 2, 35, 27, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 36, 68, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 36, 79, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo u_emlrtECI = { 2, 36, 64, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 36, 92, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 36, 101, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo v_emlrtECI = { 2, 36, 88, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 36, 117, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 36, 121, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 36, 131, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 36, 135, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 36, 158, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 36, 169, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo w_emlrtECI = { 2, 36, 154, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtECInfo x_emlrtECI = { 2, 36, 61, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtDCInfo j_emlrtDCI = { 39, 34, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 39, 34, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtDCInfo k_emlrtDCI = { 39, 45, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 39, 45, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo y_emlrtECI = { 2, 39, 30, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtDCInfo l_emlrtDCI = { 39, 58, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 39, 58, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 39, 67, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo ab_emlrtECI = { 2, 39, 54, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 39, 83, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 39, 87, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 39, 97, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 39, 101, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 39, 125, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 39, 136, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo bb_emlrtECI = { 2, 39, 121, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtECInfo cb_emlrtECI = { 2, 39, 26, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtDCInfo m_emlrtDCI = { 41, 23, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 41, 23, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtDCInfo n_emlrtDCI = { 41, 34, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 41, 34, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo db_emlrtECI = { 2, 41, 19, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtDCInfo o_emlrtDCI = { 41, 47, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 41, 47, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 41, 56, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo eb_emlrtECI = { 2, 41, 43, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 41, 72, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 41, 76, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 41, 86, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 41, 90, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 41, 113, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 41, 124, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo fb_emlrtECI = { 2, 41, 109, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtECInfo gb_emlrtECI = { 2, 41, 15, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 42, 23, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo od_emlrtBCI = { -1, -1, 42, 34, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo hb_emlrtECI = { 2, 42, 19, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 42, 47, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo qd_emlrtBCI = { -1, -1, 42, 58, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo ib_emlrtECI = { 2, 42, 43, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 42, 72, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 42, 76, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo td_emlrtBCI = { -1, -1, 42, 84, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 42, 88, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 42, 115, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 42, 124, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo jb_emlrtECI = { 2, 42, 109, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 42, 135, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo kb_emlrtECI = { 2, 42, 15, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo yd_emlrtBCI = { -1, -1, 43, 23, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ae_emlrtBCI = { -1, -1, 43, 34, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo lb_emlrtECI = { 2, 43, 19, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo be_emlrtBCI = { -1, -1, 43, 47, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ce_emlrtBCI = { -1, -1, 43, 56, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo mb_emlrtECI = { 2, 43, 43, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo de_emlrtBCI = { -1, -1, 43, 72, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ee_emlrtBCI = { -1, -1, 43, 76, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo fe_emlrtBCI = { -1, -1, 43, 86, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ge_emlrtBCI = { -1, -1, 43, 90, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo he_emlrtBCI = { -1, -1, 43, 113, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ie_emlrtBCI = { -1, -1, 43, 124, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo nb_emlrtECI = { 2, 43, 109, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtECInfo ob_emlrtECI = { 2, 43, 15, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo je_emlrtBCI = { -1, -1, 47, 32, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ke_emlrtBCI = { -1, -1, 47, 43, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo pb_emlrtECI = { 2, 47, 28, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo le_emlrtBCI = { -1, -1, 47, 56, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo me_emlrtBCI = { -1, -1, 47, 65, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo qb_emlrtECI = { 2, 47, 52, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo ne_emlrtBCI = { -1, -1, 47, 81, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo oe_emlrtBCI = { -1, -1, 47, 85, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo pe_emlrtBCI = { -1, -1, 47, 95, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo qe_emlrtBCI = { -1, -1, 47, 99, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo re_emlrtBCI = { -1, -1, 47, 122, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo se_emlrtBCI = { -1, -1, 47, 133, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo rb_emlrtECI = { 2, 47, 118, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtECInfo sb_emlrtECI = { 2, 47, 24, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo te_emlrtBCI = { -1, -1, 48, 31, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ue_emlrtBCI = { -1, -1, 48, 42, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo tb_emlrtECI = { 2, 48, 27, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo ve_emlrtBCI = { -1, -1, 48, 55, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo we_emlrtBCI = { -1, -1, 48, 66, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo ub_emlrtECI = { 2, 48, 51, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo xe_emlrtBCI = { -1, -1, 48, 80, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ye_emlrtBCI = { -1, -1, 48, 84, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo af_emlrtBCI = { -1, -1, 48, 92, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo bf_emlrtBCI = { -1, -1, 48, 96, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo cf_emlrtBCI = { -1, -1, 48, 123, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo df_emlrtBCI = { -1, -1, 48, 132, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo vb_emlrtECI = { 2, 48, 117, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo ef_emlrtBCI = { -1, -1, 48, 143, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo wb_emlrtECI = { 2, 48, 23, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo ff_emlrtBCI = { -1, -1, 49, 31, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo gf_emlrtBCI = { -1, -1, 49, 42, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo xb_emlrtECI = { 2, 49, 27, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo hf_emlrtBCI = { -1, -1, 49, 55, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo if_emlrtBCI = { -1, -1, 49, 64, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo yb_emlrtECI = { 2, 49, 51, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo jf_emlrtBCI = { -1, -1, 49, 80, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo kf_emlrtBCI = { -1, -1, 49, 84, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo lf_emlrtBCI = { -1, -1, 49, 94, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo mf_emlrtBCI = { -1, -1, 49, 98, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo nf_emlrtBCI = { -1, -1, 49, 121, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo of_emlrtBCI = { -1, -1, 49, 132, "pos", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo ac_emlrtECI = { 2, 49, 117, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtECInfo bc_emlrtECI = { 2, 49, 23, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo pf_emlrtBCI = { -1, -1, 24, 16, "force", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo cc_emlrtECI = { -1, 24, 10, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo qf_emlrtBCI = { -1, -1, 28, 16, "force", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo dc_emlrtECI = { -1, 28, 10, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo rf_emlrtBCI = { -1, -1, 32, 18, "force", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo ec_emlrtECI = { -1, 32, 12, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo sf_emlrtBCI = { -1, -1, 35, 17, "force", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo fc_emlrtECI = { -1, 35, 11, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo tf_emlrtBCI = { -1, -1, 39, 16, "force", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo gc_emlrtECI = { -1, 39, 10, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo uf_emlrtBCI = { -1, -1, 47, 15, "force", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtECInfo hc_emlrtECI = { -1, 47, 9, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m" };

static emlrtBCInfo vf_emlrtBCI = { -1, -1, 1, 1, "", "xdot",
  "/usr/local/MATLAB/R2014a/toolbox/coder/coder/+coder/+internal/+blas/xdot.p",
  0 };

static emlrtDCInfo p_emlrtDCI = { 6, 22, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtDCInfo q_emlrtDCI = { 6, 22, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 4 };

static emlrtDCInfo r_emlrtDCI = { 6, 35, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 1 };

static emlrtDCInfo s_emlrtDCI = { 6, 35, "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 4 };

static emlrtBCInfo wf_emlrtBCI = { -1, -1, 41, 139, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo xf_emlrtBCI = { -1, -1, 41, 143, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo yf_emlrtBCI = { -1, -1, 41, 153, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ag_emlrtBCI = { -1, -1, 41, 155, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo bg_emlrtBCI = { -1, -1, 42, 150, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo cg_emlrtBCI = { -1, -1, 42, 154, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo dg_emlrtBCI = { -1, -1, 42, 162, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo eg_emlrtBCI = { -1, -1, 42, 166, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo fg_emlrtBCI = { -1, -1, 43, 139, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo gg_emlrtBCI = { -1, -1, 43, 143, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo hg_emlrtBCI = { -1, -1, 43, 153, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ig_emlrtBCI = { -1, -1, 43, 155, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo jg_emlrtBCI = { -1, -1, 47, 148, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo kg_emlrtBCI = { -1, -1, 47, 152, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo lg_emlrtBCI = { -1, -1, 47, 162, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo mg_emlrtBCI = { -1, -1, 47, 164, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ng_emlrtBCI = { -1, -1, 48, 158, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo og_emlrtBCI = { -1, -1, 48, 162, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo pg_emlrtBCI = { -1, -1, 48, 170, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo qg_emlrtBCI = { -1, -1, 48, 174, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo rg_emlrtBCI = { -1, -1, 49, 147, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo sg_emlrtBCI = { -1, -1, 49, 151, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo tg_emlrtBCI = { -1, -1, 49, 161, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ug_emlrtBCI = { -1, -1, 49, 163, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo vg_emlrtBCI = { -1, -1, 47, 17, "force", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo wg_emlrtBCI = { -1, -1, 39, 151, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo xg_emlrtBCI = { -1, -1, 39, 155, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo yg_emlrtBCI = { -1, -1, 39, 165, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ah_emlrtBCI = { -1, -1, 39, 167, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo bh_emlrtBCI = { -1, -1, 39, 18, "force", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ch_emlrtBCI = { -1, -1, 35, 161, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo dh_emlrtBCI = { -1, -1, 35, 165, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo eh_emlrtBCI = { -1, -1, 35, 173, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo fh_emlrtBCI = { -1, -1, 35, 177, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo gh_emlrtBCI = { -1, -1, 36, 184, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo hh_emlrtBCI = { -1, -1, 36, 188, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ih_emlrtBCI = { -1, -1, 36, 198, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo jh_emlrtBCI = { -1, -1, 36, 200, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo kh_emlrtBCI = { -1, -1, 35, 19, "force", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo lh_emlrtBCI = { -1, -1, 32, 173, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo mh_emlrtBCI = { -1, -1, 32, 177, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo nh_emlrtBCI = { -1, -1, 32, 185, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo oh_emlrtBCI = { -1, -1, 32, 189, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ph_emlrtBCI = { -1, -1, 32, 20, "force", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo qh_emlrtBCI = { -1, -1, 28, 157, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo rh_emlrtBCI = { -1, -1, 28, 161, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo sh_emlrtBCI = { -1, -1, 28, 169, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo th_emlrtBCI = { -1, -1, 28, 173, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo uh_emlrtBCI = { -1, -1, 29, 184, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo vh_emlrtBCI = { -1, -1, 29, 188, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo wh_emlrtBCI = { -1, -1, 29, 198, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo xh_emlrtBCI = { -1, -1, 29, 200, "dist", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo yh_emlrtBCI = { -1, -1, 28, 18, "force", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtBCInfo ai_emlrtBCI = { -1, -1, 24, 18, "force", "BendingElasticity",
  "/home/ofir/Work/ENS/Utils/Forces/BendingElasticity.m", 0 };

static emlrtRSInfo s_emlrtRSI = { 98, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo t_emlrtRSI = { 103, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo u_emlrtRSI = { 99, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo v_emlrtRSI = { 104, "eml_mtimes_helper",
  "/usr/local/MATLAB/R2014a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

/* Function Declarations */
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  real_T *pData;
  int32_T i6;
  int32_T i;
  y = NULL;
  m1 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m1);
  i6 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i6] = u->data[u->size[0] * i];
    i6++;
  }

  emlrtAssign(&y, m1);
  return y;
}

static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m3;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m3, 1, &pArray, "message", true, location);
}

void BendingElasticity(const emlrtStack *sp, const emxArray_real_T *pos, const
  emxArray_real_T *dist, real_T bendingConst, const emxArray_real_T *angle0,
  const emxArray_real_T *affectedParticles, real_T numParticles, real_T
  dimension, emxArray_real_T *force)
{
  boolean_T b0;
  boolean_T b1;
  boolean_T b2;
  boolean_T b3;
  boolean_T b4;
  boolean_T b5;
  int32_T i0;
  real_T y;
  real_T d0;
  int32_T loop_ub;
  emxArray_real_T *cosTheta0;
  int32_T pIdx;
  emxArray_real_T *r0;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_pos;
  emxArray_real_T *r3;
  emxArray_real_T *c_pos;
  emxArray_real_T *b_y;
  emxArray_real_T *d_pos;
  emxArray_real_T *c_y;
  emxArray_real_T *r4;
  emxArray_real_T *d_y;
  emxArray_real_T *e_pos;
  emxArray_real_T *f_pos;
  emxArray_real_T *g_pos;
  emxArray_real_T *r5;
  emxArray_real_T *r6;
  emxArray_real_T *h_pos;
  emxArray_real_T *r7;
  emxArray_real_T *i_pos;
  emxArray_real_T *j_pos;
  emxArray_real_T *k_pos;
  emxArray_real_T *l_pos;
  emxArray_real_T *m_pos;
  emxArray_real_T *n_pos;
  emxArray_real_T *o_pos;
  emxArray_real_T *p_pos;
  emxArray_real_T *q_pos;
  emxArray_real_T *r_pos;
  emxArray_real_T *s_pos;
  emxArray_real_T *t_pos;
  emxArray_real_T *u_pos;
  emxArray_real_T *v_pos;
  emxArray_real_T *w_pos;
  emxArray_real_T *x_pos;
  emxArray_real_T *y_pos;
  emxArray_real_T *ab_pos;
  emxArray_real_T *bb_pos;
  emxArray_real_T *cb_pos;
  emxArray_real_T *db_pos;
  emxArray_real_T *eb_pos;
  emxArray_real_T *fb_pos;
  emxArray_real_T *gb_pos;
  emxArray_real_T *hb_pos;
  emxArray_real_T *ib_pos;
  emxArray_real_T *jb_pos;
  emxArray_real_T *kb_pos;
  emxArray_real_T *lb_pos;
  emxArray_real_T *mb_pos;
  emxArray_real_T *nb_pos;
  emxArray_real_T *ob_pos;
  emxArray_real_T *pb_pos;
  emxArray_real_T *qb_pos;
  emxArray_real_T *rb_pos;
  emxArray_real_T *sb_pos;
  emxArray_real_T *tb_pos;
  emxArray_real_T *r8;
  emxArray_real_T *ub_pos;
  emxArray_real_T *vb_pos;
  emxArray_real_T *wb_pos;
  emxArray_real_T *xb_pos;
  emxArray_real_T *yb_pos;
  emxArray_real_T *ac_pos;
  emxArray_real_T *bc_pos;
  emxArray_real_T *cc_pos;
  emxArray_real_T *dc_pos;
  emxArray_real_T *ec_pos;
  emxArray_real_T *fc_pos;
  emxArray_real_T *gc_pos;
  emxArray_real_T *hc_pos;
  emxArray_real_T *ic_pos;
  emxArray_real_T *jc_pos;
  emxArray_real_T *kc_pos;
  emxArray_real_T *lc_pos;
  emxArray_real_T *mc_pos;
  emxArray_real_T *r9;
  emxArray_real_T *nc_pos;
  emxArray_real_T *oc_pos;
  emxArray_real_T *pc_pos;
  emxArray_real_T *qc_pos;
  emxArray_real_T *rc_pos;
  emxArray_real_T *sc_pos;
  emxArray_real_T *tc_pos;
  emxArray_real_T *uc_pos;
  emxArray_real_T *vc_pos;
  emxArray_real_T *wc_pos;
  emxArray_real_T *xc_pos;
  emxArray_real_T *yc_pos;
  emxArray_real_T *ad_pos;
  emxArray_real_T *bd_pos;
  emxArray_real_T *cd_pos;
  emxArray_real_T *dd_pos;
  emxArray_real_T *ed_pos;
  emxArray_real_T *fd_pos;
  emxArray_real_T *r10;
  emxArray_real_T *gd_pos;
  emxArray_real_T *hd_pos;
  emxArray_real_T *id_pos;
  emxArray_real_T *jd_pos;
  emxArray_real_T *kd_pos;
  emxArray_real_T *ld_pos;
  int32_T i;
  const mxArray *e_y;
  const mxArray *m0;
  int32_T md_pos[2];
  int32_T nd_pos[2];
  int32_T iv0[2];
  const mxArray *f_y;
  static const int32_T iv1[2] = { 1, 45 };

  char_T cv0[45];
  static const char_T cv1[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *g_y;
  static const int32_T iv2[2] = { 1, 21 };

  char_T cv2[21];
  static const char_T cv3[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * xix0_t;
  double * yiy0_t;
  int32_T iv3[2];
  boolean_T b_affectedParticles[2];
  int32_T c_affectedParticles;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  const mxArray *h_y;
  static const int32_T iv4[2] = { 1, 45 };

  const mxArray *i_y;
  static const int32_T iv5[2] = { 1, 21 };

  const mxArray *j_y;
  static const int32_T iv6[2] = { 1, 45 };

  const mxArray *k_y;
  static const int32_T iv7[2] = { 1, 21 };

  int32_T iv8[2];
  boolean_T d_affectedParticles[2];
  const mxArray *l_y;
  static const int32_T iv9[2] = { 1, 45 };

  const mxArray *m_y;
  static const int32_T iv10[2] = { 1, 21 };

  int32_T iv11[2];
  boolean_T e_affectedParticles[2];
  const mxArray *n_y;
  static const int32_T iv12[2] = { 1, 45 };

  const mxArray *o_y;
  static const int32_T iv13[2] = { 1, 21 };

  const mxArray *p_y;
  static const int32_T iv14[2] = { 1, 45 };

  const mxArray *q_y;
  static const int32_T iv15[2] = { 1, 21 };

  int32_T iv16[2];
  const mxArray *r_y;
  static const int32_T iv17[2] = { 1, 45 };

  const mxArray *s_y;
  static const int32_T iv18[2] = { 1, 21 };

  int32_T iv19[2];
  const mxArray *t_y;
  static const int32_T iv20[2] = { 1, 45 };

  const mxArray *u_y;
  static const int32_T iv21[2] = { 1, 21 };

  const mxArray *v_y;
  static const int32_T iv22[2] = { 1, 45 };

  const mxArray *w_y;
  static const int32_T iv23[2] = { 1, 21 };

  const mxArray *x_y;
  static const int32_T iv24[2] = { 1, 45 };

  const mxArray *y_y;
  static const int32_T iv25[2] = { 1, 21 };

  const mxArray *ab_y;
  static const int32_T iv26[2] = { 1, 45 };

  const mxArray *bb_y;
  static const int32_T iv27[2] = { 1, 21 };

  const mxArray *cb_y;
  static const int32_T iv28[2] = { 1, 45 };

  const mxArray *db_y;
  static const int32_T iv29[2] = { 1, 21 };

  const mxArray *eb_y;
  static const int32_T iv30[2] = { 1, 45 };

  const mxArray *fb_y;
  static const int32_T iv31[2] = { 1, 21 };

  int32_T iv32[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b0 = false;
  b1 = false;
  b2 = false;
  b3 = false;
  b4 = false;
  b5 = false;

  /* =========== */
  /*  Calculate the force on each particle given its connectivity */
  /*  numParticles = size(pos,1); */
  /*  dimension    = size(pos,2); */
  i0 = force->size[0] * force->size[1];
  y = emlrtNonNegativeCheckFastR2012b(numParticles, &q_emlrtDCI, sp);
  force->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(y, &p_emlrtDCI, sp);
  y = emlrtNonNegativeCheckFastR2012b(dimension, &s_emlrtDCI, sp);
  force->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(y, &r_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  y = emlrtNonNegativeCheckFastR2012b(numParticles, &q_emlrtDCI, sp);
  d0 = emlrtNonNegativeCheckFastR2012b(dimension, &s_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(y, &p_emlrtDCI, sp) * (int32_T)
    emlrtIntegerCheckFastR2012b(d0, &r_emlrtDCI, sp);
  for (i0 = 0; i0 < loop_ub; i0++) {
    force->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &cosTheta0, 2, &f_emlrtRTEI, true);

  /*  if ~exist('affectedParticles','var') */
  /*      affectedParticles = 1:size(pos,1); */
  /*  end */
  /*   */
  /*  F1 = @(pos,dist,i,cosTheta0)((pos(i-2,:)-pos(i-1,:))*(pos(i,:)-pos(i-1,:))'./(dist(i-2,i-1)*dist(i-1,i)) -cosTheta0)*(pos(i-2,:)-pos(i-1,:))./(dist(i-2,i-1)*dist(i,i-1)); */
  /*  F2 = @(pos,dist,i,cosTheta0)((pos(i-1,:)-pos(i,:))*(pos(i+1,:)-pos(i,:))'./(dist(i-1,i)*dist(i+1,i)) -cosTheta0)* (2*pos(i,:)-pos(i-1,:)-pos(i+1,:))./(dist(i-1,i)*dist(i+1,i)); */
  /*  F3 = @(pos,dist,i,cosTheta0)((pos(i+2,:)-pos(i+1,:))*(pos(i,:)-pos(i+1,:))'./(dist(i+2,i+1)*dist(i+1,i)) -cosTheta0)* (pos(i+2,:)-pos(i+1,:))./(dist(i+2,i+1)*dist(i,i+1));  */
  /*   */
  /*   */
  /*  pos = pos; */
  /*  dist = dist; */
  i0 = cosTheta0->size[0] * cosTheta0->size[1];
  cosTheta0->size[0] = angle0->size[0];
  cosTheta0->size[1] = angle0->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)cosTheta0, i0, (int32_T)sizeof
                    (real_T), &e_emlrtRTEI);
  loop_ub = angle0->size[0] * angle0->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    cosTheta0->data[i0] = angle0->data[i0];
  }

  b_cos(cosTheta0);
  if (numParticles > 2.0) {
    pIdx = 0;
    emxInit_real_T(sp, &r0, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &r1, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &r2, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &a, 2, &e_emlrtRTEI, true);
    b_emxInit_real_T(sp, &b, 1, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &b_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &r3, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &c_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &b_y, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &d_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &c_y, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &r4, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &d_y, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &e_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &f_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &g_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &r5, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &r6, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &h_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &r7, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &i_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &j_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &k_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &l_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &m_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &n_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &o_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &p_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &q_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &r_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &s_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &t_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &u_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &v_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &w_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &x_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &y_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &ab_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &bb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &cb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &db_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &eb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &fb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &gb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &hb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &ib_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &jb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &kb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &lb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &mb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &nb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &ob_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &pb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &qb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &rb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &sb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &tb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &r8, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &ub_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &vb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &wb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &xb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &yb_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &ac_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &bc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &cc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &dc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &ec_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &fc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &gc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &hc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &ic_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &jc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &kc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &lc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &mc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &r9, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &nc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &oc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &pc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &qc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &rc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &sc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &tc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &uc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &vc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &wc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &xc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &yc_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &ad_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &bd_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &cd_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &dd_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &ed_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &fd_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &r10, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &gd_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &hd_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &id_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &jd_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &kd_pos, 2, &e_emlrtRTEI, true);
    emxInit_real_T(sp, &ld_pos, 2, &e_emlrtRTEI, true);
    while (pIdx <= affectedParticles->size[0] - 1) {
      i0 = affectedParticles->size[0];
      i = pIdx + 1;
      emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &emlrtBCI, sp);
      e_y = NULL;
      m0 = emlrtCreateDoubleScalar(affectedParticles->data[pIdx]);
      emlrtAssign(&e_y, m0);
      emlrtDisplayR2012b(e_y, "i", &emlrtRTEI, sp);
      if (affectedParticles->data[pIdx] == 1.0) {
        y = affectedParticles->data[pIdx] + 2.0;
        i0 = pos->size[0];
        i = (int32_T)emlrtIntegerCheckFastR2012b(y, &emlrtDCI, sp);
        emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &b_emlrtBCI, sp);
        y = affectedParticles->data[pIdx] + 1.0;
        i0 = pos->size[0];
        i = (int32_T)emlrtIntegerCheckFastR2012b(y, &b_emlrtDCI, sp);
        emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &c_emlrtBCI, sp);
        loop_ub = pos->size[1];
        i0 = gd_pos->size[0] * gd_pos->size[1];
        gd_pos->size[0] = 1;
        gd_pos->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)gd_pos, i0, (int32_T)sizeof
                          (real_T), &e_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          gd_pos->data[gd_pos->size[0] * i0] = pos->data[2 + pos->size[0] * i0];
        }

        for (i0 = 0; i0 < 2; i0++) {
          md_pos[i0] = gd_pos->size[i0];
        }

        loop_ub = pos->size[1];
        i0 = hd_pos->size[0] * hd_pos->size[1];
        hd_pos->size[0] = 1;
        hd_pos->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)hd_pos, i0, (int32_T)sizeof
                          (real_T), &e_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          hd_pos->data[hd_pos->size[0] * i0] = pos->data[1 + pos->size[0] * i0];
        }

        for (i0 = 0; i0 < 2; i0++) {
          nd_pos[i0] = hd_pos->size[i0];
        }

        emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &emlrtECI, sp);
        y = affectedParticles->data[pIdx];
        i0 = pos->size[0];
        i = (int32_T)emlrtIntegerCheckFastR2012b(y, &c_emlrtDCI, sp);
        emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &d_emlrtBCI, sp);
        i0 = pos->size[0];
        i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
        emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &e_emlrtBCI, sp);
        loop_ub = pos->size[1];
        i0 = id_pos->size[0] * id_pos->size[1];
        id_pos->size[0] = 1;
        id_pos->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)id_pos, i0, (int32_T)sizeof
                          (real_T), &e_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          id_pos->data[id_pos->size[0] * i0] = pos->data[pos->size[0] * i0];
        }

        for (i0 = 0; i0 < 2; i0++) {
          md_pos[i0] = id_pos->size[i0];
        }

        loop_ub = pos->size[1];
        i0 = jd_pos->size[0] * jd_pos->size[1];
        jd_pos->size[0] = 1;
        jd_pos->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)jd_pos, i0, (int32_T)sizeof
                          (real_T), &e_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          jd_pos->data[jd_pos->size[0] * i0] = pos->data[1 + pos->size[0] * i0];
        }

        for (i0 = 0; i0 < 2; i0++) {
          nd_pos[i0] = jd_pos->size[i0];
        }

        emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &b_emlrtECI, sp);
        i0 = pos->size[0];
        i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
        emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &j_emlrtBCI, sp);
        i0 = pos->size[0];
        i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
        emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &k_emlrtBCI, sp);
        loop_ub = pos->size[1];
        i0 = kd_pos->size[0] * kd_pos->size[1];
        kd_pos->size[0] = 1;
        kd_pos->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)kd_pos, i0, (int32_T)sizeof
                          (real_T), &e_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          kd_pos->data[kd_pos->size[0] * i0] = pos->data[2 + pos->size[0] * i0];
        }

        for (i0 = 0; i0 < 2; i0++) {
          md_pos[i0] = kd_pos->size[i0];
        }

        loop_ub = pos->size[1];
        i0 = ld_pos->size[0] * ld_pos->size[1];
        ld_pos->size[0] = 1;
        ld_pos->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)ld_pos, i0, (int32_T)sizeof
                          (real_T), &e_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          ld_pos->data[ld_pos->size[0] * i0] = pos->data[1 + pos->size[0] * i0];
        }

        for (i0 = 0; i0 < 2; i0++) {
          nd_pos[i0] = ld_pos->size[i0];
        }

        emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &c_emlrtECI, sp);
        i0 = dist->size[0];
        i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
        emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &l_emlrtBCI, sp);
        i0 = dist->size[1];
        i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
        emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &m_emlrtBCI, sp);
        i0 = dist->size[0];
        i = (int32_T)affectedParticles->data[pIdx];
        emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &n_emlrtBCI, sp);
        i0 = dist->size[1];
        i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
        emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &o_emlrtBCI, sp);
        loop_ub = pos->size[1];
        i0 = i_pos->size[0] * i_pos->size[1];
        i_pos->size[0] = 1;
        i_pos->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)i_pos, i0, (int32_T)sizeof
                          (real_T), &e_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          i_pos->data[i_pos->size[0] * i0] = pos->data[2 + pos->size[0] * i0] -
            pos->data[1 + pos->size[0] * i0];
        }

        rdivide(sp, i_pos, dist->data[2 + dist->size[0]] * dist->data[dist->
                size[0]], r0);
        for (i0 = 0; i0 < 2; i0++) {
          nd_pos[i0] = cosTheta0->size[i0];
        }

        for (i0 = 0; i0 < 2; i0++) {
          iv0[i0] = r0->size[i0];
        }

        emlrtSizeEqCheck2DFastR2012b(nd_pos, iv0, &d_emlrtECI, sp);
        i0 = force->size[0];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &pf_emlrtBCI, sp);
        for (i0 = 0; i0 < 3; i0++) {
          i = force->size[1];
          loop_ub = 1 + i0;
          emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i, &ai_emlrtBCI, sp);
        }

        i0 = dist->size[0];
        i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
        emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &f_emlrtBCI, sp);
        i0 = dist->size[1];
        i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
        emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &g_emlrtBCI, sp);
        i0 = dist->size[0];
        i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
        emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &h_emlrtBCI, sp);
        i0 = dist->size[1];
        i = (int32_T)affectedParticles->data[pIdx];
        emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &i_emlrtBCI, sp);
        st.site = &emlrtRSI;
        loop_ub = pos->size[1];
        i0 = a->size[0] * a->size[1];
        a->size[0] = 1;
        a->size[1] = loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)a, i0, (int32_T)sizeof(real_T),
                          &e_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          a->data[a->size[0] * i0] = pos->data[2 + pos->size[0] * i0] -
            pos->data[1 + pos->size[0] * i0];
        }

        loop_ub = pos->size[1];
        i0 = b->size[0];
        b->size[0] = loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof(real_T),
                          &e_emlrtRTEI);
        for (i0 = 0; i0 < loop_ub; i0++) {
          b->data[i0] = pos->data[pos->size[0] * i0] - pos->data[1 + pos->size[0]
            * i0];
        }

        b_st.site = &o_emlrtRSI;
        if (!(a->size[1] == b->size[0])) {
          if ((a->size[1] == 1) || (b->size[0] == 1)) {
            f_y = NULL;
            m0 = emlrtCreateCharArray(2, iv1);
            for (i = 0; i < 45; i++) {
              cv0[i] = cv1[i];
            }

            emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
            emlrtAssign(&f_y, m0);
            c_st.site = &s_emlrtRSI;
            d_st.site = &u_emlrtRSI;
            error(&c_st, message(&d_st, f_y, &emlrtMCI), &b_emlrtMCI);
          } else {
            g_y = NULL;
            m0 = emlrtCreateCharArray(2, iv2);
            for (i = 0; i < 21; i++) {
              cv2[i] = cv3[i];
            }

            emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
            emlrtAssign(&g_y, m0);
            c_st.site = &t_emlrtRSI;
            d_st.site = &v_emlrtRSI;
            error(&c_st, message(&d_st, g_y, &c_emlrtMCI), &d_emlrtMCI);
          }
        }

        if ((a->size[1] == 1) || (b->size[0] == 1)) {
          y = 0.0;
          for (i0 = 0; i0 < a->size[1]; i0++) {
            y += a->data[a->size[0] * i0] * b->data[i0];
          }
        } else {
          b_st.site = &n_emlrtRSI;
          c_st.site = &p_emlrtRSI;
          e_st.site = &q_emlrtRSI;
          if (a->size[1] < 1) {
            y = 0.0;
          } else {
            f_st.site = &r_emlrtRSI;
            n_t = (ptrdiff_t)(a->size[1]);
            incx_t = (ptrdiff_t)(1);
            incy_t = (ptrdiff_t)(1);
            xix0_t = (double *)(&a->data[0]);
            i0 = b->size[0];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &vf_emlrtBCI, &f_st);
            yiy0_t = (double *)(&b->data[0]);
            y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
          }
        }

        y /= dist->data[2 + dist->size[0]] * dist->data[1];
        i0 = r0->size[0] * r0->size[1];
        r0->size[0] = cosTheta0->size[0];
        r0->size[1] = cosTheta0->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(real_T),
                          &e_emlrtRTEI);
        loop_ub = cosTheta0->size[0] * cosTheta0->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          r0->data[i0] *= y - cosTheta0->data[i0];
        }

        if (!b0) {
          for (i0 = 0; i0 < 2; i0++) {
            iv3[i0] = 1 + (i0 << 1);
          }

          b0 = true;
        }

        emlrtSubAssignSizeCheckR2012b(iv3, 2, *(int32_T (*)[2])r0->size, 2,
          &cc_emlrtECI, sp);
        for (i0 = 0; i0 < 3; i0++) {
          force->data[force->size[0] * i0] = r0->data[i0];
        }
      } else {
        b_affectedParticles[0] = (affectedParticles->data[pIdx] == 2.0);
        b_affectedParticles[1] = (affectedParticles->data[pIdx] != numParticles
          - 1.0);
        if (all(b_affectedParticles)) {
          y = affectedParticles->data[pIdx] - 1.0;
          i0 = pos->size[0];
          i = (int32_T)emlrtIntegerCheckFastR2012b(y, &d_emlrtDCI, sp);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &p_emlrtBCI, sp);
          y = affectedParticles->data[pIdx];
          i0 = pos->size[0];
          i = (int32_T)emlrtIntegerCheckFastR2012b(y, &e_emlrtDCI, sp);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &q_emlrtBCI, sp);
          loop_ub = pos->size[1];
          i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
          i0 = tc_pos->size[0] * tc_pos->size[1];
          tc_pos->size[0] = 1;
          tc_pos->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)tc_pos, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            tc_pos->data[tc_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
              i0) - 1];
          }

          for (i0 = 0; i0 < 2; i0++) {
            md_pos[i0] = tc_pos->size[i0];
          }

          loop_ub = pos->size[1];
          i = (int32_T)affectedParticles->data[pIdx];
          i0 = uc_pos->size[0] * uc_pos->size[1];
          uc_pos->size[0] = 1;
          uc_pos->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)uc_pos, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            uc_pos->data[uc_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
              i0) - 1];
          }

          for (i0 = 0; i0 < 2; i0++) {
            nd_pos[i0] = uc_pos->size[i0];
          }

          emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &e_emlrtECI, sp);
          i0 = pos->size[0];
          i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &r_emlrtBCI, sp);
          i0 = pos->size[0];
          i = (int32_T)affectedParticles->data[pIdx];
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &s_emlrtBCI, sp);
          loop_ub = pos->size[1];
          i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          i0 = vc_pos->size[0] * vc_pos->size[1];
          vc_pos->size[0] = 1;
          vc_pos->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)vc_pos, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            vc_pos->data[vc_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
              i0) - 1];
          }

          for (i0 = 0; i0 < 2; i0++) {
            md_pos[i0] = vc_pos->size[i0];
          }

          loop_ub = pos->size[1];
          i = (int32_T)affectedParticles->data[pIdx];
          i0 = wc_pos->size[0] * wc_pos->size[1];
          wc_pos->size[0] = 1;
          wc_pos->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)wc_pos, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            wc_pos->data[wc_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
              i0) - 1];
          }

          for (i0 = 0; i0 < 2; i0++) {
            nd_pos[i0] = wc_pos->size[i0];
          }

          emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &f_emlrtECI, sp);
          i0 = pos->size[0];
          i = (int32_T)affectedParticles->data[pIdx];
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &x_emlrtBCI, sp);
          loop_ub = pos->size[1];
          i = (int32_T)affectedParticles->data[pIdx];
          i0 = r0->size[0] * r0->size[1];
          r0->size[0] = 1;
          r0->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            r0->data[r0->size[0] * i0] = 2.0 * pos->data[(i + pos->size[0] * i0)
              - 1];
          }

          i0 = pos->size[0];
          i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &y_emlrtBCI, sp);
          for (i0 = 0; i0 < 2; i0++) {
            iv0[i0] = r0->size[i0];
          }

          loop_ub = pos->size[1];
          i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
          i0 = xc_pos->size[0] * xc_pos->size[1];
          xc_pos->size[0] = 1;
          xc_pos->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)xc_pos, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            xc_pos->data[xc_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
              i0) - 1];
          }

          for (i0 = 0; i0 < 2; i0++) {
            md_pos[i0] = xc_pos->size[i0];
          }

          emlrtSizeEqCheck2DFastR2012b(iv0, md_pos, &g_emlrtECI, sp);
          i0 = pos->size[0];
          i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ab_emlrtBCI, sp);
          for (i0 = 0; i0 < 2; i0++) {
            iv0[i0] = r0->size[i0];
          }

          loop_ub = pos->size[1];
          i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          i0 = yc_pos->size[0] * yc_pos->size[1];
          yc_pos->size[0] = 1;
          yc_pos->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)yc_pos, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            yc_pos->data[yc_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
              i0) - 1];
          }

          for (i0 = 0; i0 < 2; i0++) {
            md_pos[i0] = yc_pos->size[i0];
          }

          emlrtSizeEqCheck2DFastR2012b(iv0, md_pos, &g_emlrtECI, sp);
          i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
          c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          i0 = r7->size[0] * r7->size[1];
          r7->size[0] = 1;
          r7->size[1] = r0->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)r7, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          loop_ub = r0->size[1];
          for (i0 = 0; i0 < loop_ub; i0++) {
            r7->data[r7->size[0] * i0] = (r0->data[r0->size[0] * i0] - pos->
              data[(i + pos->size[0] * i0) - 1]) - pos->data
              [(c_affectedParticles + pos->size[0] * i0) - 1];
          }

          i0 = dist->size[0];
          i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
          loop_ub = dist->size[1];
          c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
          i1 = dist->size[0];
          i2 = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          i3 = dist->size[1];
          i4 = (int32_T)affectedParticles->data[pIdx];
          rdivide(sp, r7, dist->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1, i0,
                    &qh_emlrtBCI, sp) + dist->size[0] *
                   (emlrtDynamicBoundsCheckFastR2012b(c_affectedParticles, 1,
                     loop_ub, &rh_emlrtBCI, sp) - 1)) - 1] * dist->data
                  [(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &sh_emlrtBCI,
                    sp) + dist->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i4,
                     1, i3, &th_emlrtBCI, sp) - 1)) - 1], r0);
          for (i0 = 0; i0 < 2; i0++) {
            nd_pos[i0] = cosTheta0->size[i0];
          }

          for (i0 = 0; i0 < 2; i0++) {
            iv0[i0] = r0->size[i0];
          }

          emlrtSizeEqCheck2DFastR2012b(nd_pos, iv0, &h_emlrtECI, sp);
          i0 = pos->size[0];
          i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &bb_emlrtBCI, sp);
          i0 = pos->size[0];
          i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &cb_emlrtBCI, sp);
          loop_ub = pos->size[1];
          i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
          i0 = ad_pos->size[0] * ad_pos->size[1];
          ad_pos->size[0] = 1;
          ad_pos->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)ad_pos, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            ad_pos->data[ad_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
              i0) - 1];
          }

          for (i0 = 0; i0 < 2; i0++) {
            md_pos[i0] = ad_pos->size[i0];
          }

          loop_ub = pos->size[1];
          i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          i0 = bd_pos->size[0] * bd_pos->size[1];
          bd_pos->size[0] = 1;
          bd_pos->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)bd_pos, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            bd_pos->data[bd_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
              i0) - 1];
          }

          for (i0 = 0; i0 < 2; i0++) {
            nd_pos[i0] = bd_pos->size[i0];
          }

          emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &i_emlrtECI, sp);
          i0 = pos->size[0];
          i = (int32_T)affectedParticles->data[pIdx];
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &db_emlrtBCI, sp);
          i0 = pos->size[0];
          i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &eb_emlrtBCI, sp);
          loop_ub = pos->size[1];
          i = (int32_T)affectedParticles->data[pIdx];
          i0 = cd_pos->size[0] * cd_pos->size[1];
          cd_pos->size[0] = 1;
          cd_pos->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)cd_pos, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            cd_pos->data[cd_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
              i0) - 1];
          }

          for (i0 = 0; i0 < 2; i0++) {
            md_pos[i0] = cd_pos->size[i0];
          }

          loop_ub = pos->size[1];
          i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          i0 = dd_pos->size[0] * dd_pos->size[1];
          dd_pos->size[0] = 1;
          dd_pos->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)dd_pos, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            dd_pos->data[dd_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
              i0) - 1];
          }

          for (i0 = 0; i0 < 2; i0++) {
            nd_pos[i0] = dd_pos->size[i0];
          }

          emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &j_emlrtECI, sp);
          i0 = pos->size[0];
          i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &jb_emlrtBCI, sp);
          i0 = pos->size[0];
          i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &kb_emlrtBCI, sp);
          loop_ub = pos->size[1];
          i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
          i0 = ed_pos->size[0] * ed_pos->size[1];
          ed_pos->size[0] = 1;
          ed_pos->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)ed_pos, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            ed_pos->data[ed_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
              i0) - 1];
          }

          for (i0 = 0; i0 < 2; i0++) {
            md_pos[i0] = ed_pos->size[i0];
          }

          loop_ub = pos->size[1];
          i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          i0 = fd_pos->size[0] * fd_pos->size[1];
          fd_pos->size[0] = 1;
          fd_pos->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)fd_pos, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            fd_pos->data[fd_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
              i0) - 1];
          }

          for (i0 = 0; i0 < 2; i0++) {
            nd_pos[i0] = fd_pos->size[i0];
          }

          emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &k_emlrtECI, sp);
          loop_ub = pos->size[1];
          i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
          c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          i0 = h_pos->size[0] * h_pos->size[1];
          h_pos->size[0] = 1;
          h_pos->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)h_pos, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            h_pos->data[h_pos->size[0] * i0] = pos->data[(i + pos->size[0] * i0)
              - 1] - pos->data[(c_affectedParticles + pos->size[0] * i0) - 1];
          }

          i0 = dist->size[0];
          i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
          loop_ub = dist->size[1];
          c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          i1 = dist->size[0];
          i2 = (int32_T)affectedParticles->data[pIdx];
          i3 = dist->size[1];
          i4 = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          rdivide(sp, h_pos, dist->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1,
                    i0, &uh_emlrtBCI, sp) + dist->size[0] *
                   (emlrtDynamicBoundsCheckFastR2012b(c_affectedParticles, 1,
                     loop_ub, &vh_emlrtBCI, sp) - 1)) - 1] * dist->data
                  [(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &wh_emlrtBCI,
                    sp) + dist->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i4,
                     1, i3, &xh_emlrtBCI, sp) - 1)) - 1], r1);
          for (i0 = 0; i0 < 2; i0++) {
            nd_pos[i0] = cosTheta0->size[i0];
          }

          for (i0 = 0; i0 < 2; i0++) {
            iv0[i0] = r1->size[i0];
          }

          emlrtSizeEqCheck2DFastR2012b(nd_pos, iv0, &l_emlrtECI, sp);
          st.site = &b_emlrtRSI;
          loop_ub = pos->size[1];
          i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
          c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
          i0 = a->size[0] * a->size[1];
          a->size[0] = 1;
          a->size[1] = loop_ub;
          emxEnsureCapacity(&st, (emxArray__common *)a, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            a->data[a->size[0] * i0] = pos->data[(i + pos->size[0] * i0) - 1] -
              pos->data[(c_affectedParticles + pos->size[0] * i0) - 1];
          }

          loop_ub = pos->size[1];
          i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
          i0 = b->size[0];
          b->size[0] = loop_ub;
          emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            b->data[i0] = pos->data[(i + pos->size[0] * i0) - 1] - pos->data
              [(c_affectedParticles + pos->size[0] * i0) - 1];
          }

          b_st.site = &o_emlrtRSI;
          if (!(a->size[1] == b->size[0])) {
            if ((a->size[1] == 1) || (b->size[0] == 1)) {
              h_y = NULL;
              m0 = emlrtCreateCharArray(2, iv4);
              for (i = 0; i < 45; i++) {
                cv0[i] = cv1[i];
              }

              emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
              emlrtAssign(&h_y, m0);
              c_st.site = &s_emlrtRSI;
              d_st.site = &u_emlrtRSI;
              error(&c_st, message(&d_st, h_y, &emlrtMCI), &b_emlrtMCI);
            } else {
              i_y = NULL;
              m0 = emlrtCreateCharArray(2, iv5);
              for (i = 0; i < 21; i++) {
                cv2[i] = cv3[i];
              }

              emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
              emlrtAssign(&i_y, m0);
              c_st.site = &t_emlrtRSI;
              d_st.site = &v_emlrtRSI;
              error(&c_st, message(&d_st, i_y, &c_emlrtMCI), &d_emlrtMCI);
            }
          }

          if ((a->size[1] == 1) || (b->size[0] == 1)) {
            y = 0.0;
            for (i0 = 0; i0 < a->size[1]; i0++) {
              y += a->data[a->size[0] * i0] * b->data[i0];
            }
          } else {
            b_st.site = &n_emlrtRSI;
            c_st.site = &p_emlrtRSI;
            e_st.site = &q_emlrtRSI;
            if (a->size[1] < 1) {
              y = 0.0;
            } else {
              f_st.site = &r_emlrtRSI;
              n_t = (ptrdiff_t)(a->size[1]);
              incx_t = (ptrdiff_t)(1);
              incy_t = (ptrdiff_t)(1);
              xix0_t = (double *)(&a->data[0]);
              i0 = b->size[0];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &vf_emlrtBCI, &f_st);
              yiy0_t = (double *)(&b->data[0]);
              y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
            }
          }

          i0 = dist->size[0];
          i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &t_emlrtBCI, sp);
          i0 = dist->size[1];
          i = (int32_T)affectedParticles->data[pIdx];
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &u_emlrtBCI, sp);
          i0 = dist->size[0];
          i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &v_emlrtBCI, sp);
          i0 = dist->size[1];
          i = (int32_T)affectedParticles->data[pIdx];
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &w_emlrtBCI, sp);
          y /= dist->data[((int32_T)(affectedParticles->data[pIdx] - 1.0) +
                           dist->size[0] * ((int32_T)affectedParticles->
            data[pIdx] - 1)) - 1] * dist->data[((int32_T)
            (affectedParticles->data[pIdx] + 1.0) + dist->size[0] * ((int32_T)
            affectedParticles->data[pIdx] - 1)) - 1];
          i0 = r0->size[0] * r0->size[1];
          r0->size[0] = cosTheta0->size[0];
          r0->size[1] = cosTheta0->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          loop_ub = cosTheta0->size[0] * cosTheta0->size[1];
          for (i0 = 0; i0 < loop_ub; i0++) {
            r0->data[i0] *= y - cosTheta0->data[i0];
          }

          st.site = &c_emlrtRSI;
          loop_ub = pos->size[1];
          i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
          c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          i0 = a->size[0] * a->size[1];
          a->size[0] = 1;
          a->size[1] = loop_ub;
          emxEnsureCapacity(&st, (emxArray__common *)a, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            a->data[a->size[0] * i0] = pos->data[(i + pos->size[0] * i0) - 1] -
              pos->data[(c_affectedParticles + pos->size[0] * i0) - 1];
          }

          loop_ub = pos->size[1];
          i = (int32_T)affectedParticles->data[pIdx];
          c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          i0 = b->size[0];
          b->size[0] = loop_ub;
          emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i0 = 0; i0 < loop_ub; i0++) {
            b->data[i0] = pos->data[(i + pos->size[0] * i0) - 1] - pos->data
              [(c_affectedParticles + pos->size[0] * i0) - 1];
          }

          b_st.site = &o_emlrtRSI;
          if (!(a->size[1] == b->size[0])) {
            if ((a->size[1] == 1) || (b->size[0] == 1)) {
              j_y = NULL;
              m0 = emlrtCreateCharArray(2, iv6);
              for (i = 0; i < 45; i++) {
                cv0[i] = cv1[i];
              }

              emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
              emlrtAssign(&j_y, m0);
              c_st.site = &s_emlrtRSI;
              d_st.site = &u_emlrtRSI;
              error(&c_st, message(&d_st, j_y, &emlrtMCI), &b_emlrtMCI);
            } else {
              k_y = NULL;
              m0 = emlrtCreateCharArray(2, iv7);
              for (i = 0; i < 21; i++) {
                cv2[i] = cv3[i];
              }

              emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
              emlrtAssign(&k_y, m0);
              c_st.site = &t_emlrtRSI;
              d_st.site = &v_emlrtRSI;
              error(&c_st, message(&d_st, k_y, &c_emlrtMCI), &d_emlrtMCI);
            }
          }

          if ((a->size[1] == 1) || (b->size[0] == 1)) {
            y = 0.0;
            for (i0 = 0; i0 < a->size[1]; i0++) {
              y += a->data[a->size[0] * i0] * b->data[i0];
            }
          } else {
            b_st.site = &n_emlrtRSI;
            c_st.site = &p_emlrtRSI;
            e_st.site = &q_emlrtRSI;
            if (a->size[1] < 1) {
              y = 0.0;
            } else {
              f_st.site = &r_emlrtRSI;
              n_t = (ptrdiff_t)(a->size[1]);
              incx_t = (ptrdiff_t)(1);
              incy_t = (ptrdiff_t)(1);
              xix0_t = (double *)(&a->data[0]);
              i0 = b->size[0];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &vf_emlrtBCI, &f_st);
              yiy0_t = (double *)(&b->data[0]);
              y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
            }
          }

          i0 = dist->size[0];
          i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &fb_emlrtBCI, sp);
          i0 = dist->size[1];
          i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &gb_emlrtBCI, sp);
          i0 = dist->size[0];
          i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &hb_emlrtBCI, sp);
          i0 = dist->size[1];
          i = (int32_T)affectedParticles->data[pIdx];
          emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ib_emlrtBCI, sp);
          y /= dist->data[((int32_T)(affectedParticles->data[pIdx] + 2.0) +
                           dist->size[0] * ((int32_T)(affectedParticles->
            data[pIdx] + 1.0) - 1)) - 1] * dist->data[((int32_T)
            (affectedParticles->data[pIdx] + 1.0) + dist->size[0] * ((int32_T)
            affectedParticles->data[pIdx] - 1)) - 1];
          i0 = r1->size[0] * r1->size[1];
          r1->size[0] = cosTheta0->size[0];
          r1->size[1] = cosTheta0->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          loop_ub = cosTheta0->size[0] * cosTheta0->size[1];
          for (i0 = 0; i0 < loop_ub; i0++) {
            r1->data[i0] *= y - cosTheta0->data[i0];
          }

          for (i0 = 0; i0 < 2; i0++) {
            iv0[i0] = r0->size[i0];
          }

          for (i0 = 0; i0 < 2; i0++) {
            nd_pos[i0] = r1->size[i0];
          }

          emlrtSizeEqCheck2DFastR2012b(iv0, nd_pos, &h_emlrtECI, sp);
          i0 = force->size[0];
          emlrtDynamicBoundsCheckFastR2012b(2, 1, i0, &qf_emlrtBCI, sp);
          for (i0 = 0; i0 < 3; i0++) {
            i = force->size[1];
            loop_ub = 1 + i0;
            emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i, &yh_emlrtBCI, sp);
          }

          if (!b1) {
            for (i0 = 0; i0 < 2; i0++) {
              iv8[i0] = 1 + (i0 << 1);
            }

            b1 = true;
          }

          emlrtSubAssignSizeCheckR2012b(iv8, 2, *(int32_T (*)[2])r0->size, 2,
            &dc_emlrtECI, sp);
          i0 = r10->size[0] * r10->size[1];
          r10->size[0] = 1;
          r10->size[1] = r0->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)r10, i0, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          loop_ub = r0->size[1];
          for (i0 = 0; i0 < loop_ub; i0++) {
            r10->data[r10->size[0] * i0] = r0->data[r0->size[0] * i0] + r1->
              data[r1->size[0] * i0];
          }

          for (i0 = 0; i0 < 3; i0++) {
            force->data[1 + force->size[0] * i0] = r10->data[i0];
          }
        } else {
          d_affectedParticles[0] = (affectedParticles->data[pIdx] == 2.0);
          d_affectedParticles[1] = (affectedParticles->data[pIdx] ==
            numParticles - 1.0);
          if (all(d_affectedParticles)) {
            y = affectedParticles->data[pIdx] - 1.0;
            i0 = pos->size[0];
            i = (int32_T)emlrtIntegerCheckFastR2012b(y, &f_emlrtDCI, sp);
            emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &lb_emlrtBCI, sp);
            y = affectedParticles->data[pIdx];
            i0 = pos->size[0];
            i = (int32_T)emlrtIntegerCheckFastR2012b(y, &g_emlrtDCI, sp);
            emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &mb_emlrtBCI, sp);
            loop_ub = pos->size[1];
            i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
            i0 = nc_pos->size[0] * nc_pos->size[1];
            nc_pos->size[0] = 1;
            nc_pos->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)nc_pos, i0, (int32_T)
                              sizeof(real_T), &e_emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              nc_pos->data[nc_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                i0) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              md_pos[i0] = nc_pos->size[i0];
            }

            loop_ub = pos->size[1];
            i = (int32_T)affectedParticles->data[pIdx];
            i0 = oc_pos->size[0] * oc_pos->size[1];
            oc_pos->size[0] = 1;
            oc_pos->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)oc_pos, i0, (int32_T)
                              sizeof(real_T), &e_emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              oc_pos->data[oc_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                i0) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              nd_pos[i0] = oc_pos->size[i0];
            }

            emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &m_emlrtECI, sp);
            i0 = pos->size[0];
            i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
            emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &nb_emlrtBCI, sp);
            i0 = pos->size[0];
            i = (int32_T)affectedParticles->data[pIdx];
            emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ob_emlrtBCI, sp);
            loop_ub = pos->size[1];
            i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
            i0 = pc_pos->size[0] * pc_pos->size[1];
            pc_pos->size[0] = 1;
            pc_pos->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)pc_pos, i0, (int32_T)
                              sizeof(real_T), &e_emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              pc_pos->data[pc_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                i0) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              md_pos[i0] = pc_pos->size[i0];
            }

            loop_ub = pos->size[1];
            i = (int32_T)affectedParticles->data[pIdx];
            i0 = qc_pos->size[0] * qc_pos->size[1];
            qc_pos->size[0] = 1;
            qc_pos->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)qc_pos, i0, (int32_T)
                              sizeof(real_T), &e_emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              qc_pos->data[qc_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                i0) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              nd_pos[i0] = qc_pos->size[i0];
            }

            emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &n_emlrtECI, sp);
            i0 = pos->size[0];
            i = (int32_T)affectedParticles->data[pIdx];
            emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &tb_emlrtBCI, sp);
            loop_ub = pos->size[1];
            i = (int32_T)affectedParticles->data[pIdx];
            i0 = r0->size[0] * r0->size[1];
            r0->size[0] = 1;
            r0->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof
                              (real_T), &e_emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              r0->data[r0->size[0] * i0] = 2.0 * pos->data[(i + pos->size[0] *
                i0) - 1];
            }

            i0 = pos->size[0];
            i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
            emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ub_emlrtBCI, sp);
            for (i0 = 0; i0 < 2; i0++) {
              iv0[i0] = r0->size[i0];
            }

            loop_ub = pos->size[1];
            i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
            i0 = rc_pos->size[0] * rc_pos->size[1];
            rc_pos->size[0] = 1;
            rc_pos->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)rc_pos, i0, (int32_T)
                              sizeof(real_T), &e_emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              rc_pos->data[rc_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                i0) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              md_pos[i0] = rc_pos->size[i0];
            }

            emlrtSizeEqCheck2DFastR2012b(iv0, md_pos, &o_emlrtECI, sp);
            i0 = pos->size[0];
            i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
            emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &vb_emlrtBCI, sp);
            for (i0 = 0; i0 < 2; i0++) {
              iv0[i0] = r0->size[i0];
            }

            loop_ub = pos->size[1];
            i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
            i0 = sc_pos->size[0] * sc_pos->size[1];
            sc_pos->size[0] = 1;
            sc_pos->size[1] = loop_ub;
            emxEnsureCapacity(sp, (emxArray__common *)sc_pos, i0, (int32_T)
                              sizeof(real_T), &e_emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              sc_pos->data[sc_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                i0) - 1];
            }

            for (i0 = 0; i0 < 2; i0++) {
              md_pos[i0] = sc_pos->size[i0];
            }

            emlrtSizeEqCheck2DFastR2012b(iv0, md_pos, &o_emlrtECI, sp);
            i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
            c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] + 1.0);
            i0 = r6->size[0] * r6->size[1];
            r6->size[0] = 1;
            r6->size[1] = r0->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)r6, i0, (int32_T)sizeof
                              (real_T), &e_emlrtRTEI);
            loop_ub = r0->size[1];
            for (i0 = 0; i0 < loop_ub; i0++) {
              r6->data[r6->size[0] * i0] = (r0->data[r0->size[0] * i0] -
                pos->data[(i + pos->size[0] * i0) - 1]) - pos->data
                [(c_affectedParticles + pos->size[0] * i0) - 1];
            }

            i0 = dist->size[0];
            i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
            loop_ub = dist->size[1];
            c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
            i1 = dist->size[0];
            i2 = (int32_T)(affectedParticles->data[pIdx] + 1.0);
            i3 = dist->size[1];
            i4 = (int32_T)affectedParticles->data[pIdx];
            rdivide(sp, r6, dist->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1,
                      i0, &lh_emlrtBCI, sp) + dist->size[0] *
                     (emlrtDynamicBoundsCheckFastR2012b(c_affectedParticles, 1,
                       loop_ub, &mh_emlrtBCI, sp) - 1)) - 1] * dist->data
                    [(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &nh_emlrtBCI,
                      sp) + dist->size[0] * (emlrtDynamicBoundsCheckFastR2012b
                      (i4, 1, i3, &oh_emlrtBCI, sp) - 1)) - 1], r0);
            for (i0 = 0; i0 < 2; i0++) {
              nd_pos[i0] = cosTheta0->size[i0];
            }

            for (i0 = 0; i0 < 2; i0++) {
              iv0[i0] = r0->size[i0];
            }

            emlrtSizeEqCheck2DFastR2012b(nd_pos, iv0, &p_emlrtECI, sp);
            i0 = force->size[0];
            emlrtDynamicBoundsCheckFastR2012b(2, 1, i0, &rf_emlrtBCI, sp);
            for (i0 = 0; i0 < 3; i0++) {
              i = force->size[1];
              loop_ub = 1 + i0;
              emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i, &ph_emlrtBCI, sp);
            }

            st.site = &d_emlrtRSI;
            loop_ub = pos->size[1];
            i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
            c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
            i0 = a->size[0] * a->size[1];
            a->size[0] = 1;
            a->size[1] = loop_ub;
            emxEnsureCapacity(&st, (emxArray__common *)a, i0, (int32_T)sizeof
                              (real_T), &e_emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              a->data[a->size[0] * i0] = pos->data[(i + pos->size[0] * i0) - 1]
                - pos->data[(c_affectedParticles + pos->size[0] * i0) - 1];
            }

            loop_ub = pos->size[1];
            i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
            c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
            i0 = b->size[0];
            b->size[0] = loop_ub;
            emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof
                              (real_T), &e_emlrtRTEI);
            for (i0 = 0; i0 < loop_ub; i0++) {
              b->data[i0] = pos->data[(i + pos->size[0] * i0) - 1] - pos->data
                [(c_affectedParticles + pos->size[0] * i0) - 1];
            }

            b_st.site = &o_emlrtRSI;
            if (!(a->size[1] == b->size[0])) {
              if ((a->size[1] == 1) || (b->size[0] == 1)) {
                l_y = NULL;
                m0 = emlrtCreateCharArray(2, iv9);
                for (i = 0; i < 45; i++) {
                  cv0[i] = cv1[i];
                }

                emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
                emlrtAssign(&l_y, m0);
                c_st.site = &s_emlrtRSI;
                d_st.site = &u_emlrtRSI;
                error(&c_st, message(&d_st, l_y, &emlrtMCI), &b_emlrtMCI);
              } else {
                m_y = NULL;
                m0 = emlrtCreateCharArray(2, iv10);
                for (i = 0; i < 21; i++) {
                  cv2[i] = cv3[i];
                }

                emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
                emlrtAssign(&m_y, m0);
                c_st.site = &t_emlrtRSI;
                d_st.site = &v_emlrtRSI;
                error(&c_st, message(&d_st, m_y, &c_emlrtMCI), &d_emlrtMCI);
              }
            }

            if ((a->size[1] == 1) || (b->size[0] == 1)) {
              y = 0.0;
              for (i0 = 0; i0 < a->size[1]; i0++) {
                y += a->data[a->size[0] * i0] * b->data[i0];
              }
            } else {
              b_st.site = &n_emlrtRSI;
              c_st.site = &p_emlrtRSI;
              e_st.site = &q_emlrtRSI;
              if (a->size[1] < 1) {
                y = 0.0;
              } else {
                f_st.site = &r_emlrtRSI;
                n_t = (ptrdiff_t)(a->size[1]);
                incx_t = (ptrdiff_t)(1);
                incy_t = (ptrdiff_t)(1);
                xix0_t = (double *)(&a->data[0]);
                i0 = b->size[0];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &vf_emlrtBCI, &f_st);
                yiy0_t = (double *)(&b->data[0]);
                y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
              }
            }

            i0 = dist->size[0];
            i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
            emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &pb_emlrtBCI, sp);
            i0 = dist->size[1];
            i = (int32_T)affectedParticles->data[pIdx];
            emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &qb_emlrtBCI, sp);
            i0 = dist->size[0];
            i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
            emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &rb_emlrtBCI, sp);
            i0 = dist->size[1];
            i = (int32_T)affectedParticles->data[pIdx];
            emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &sb_emlrtBCI, sp);
            y /= dist->data[((int32_T)(affectedParticles->data[pIdx] - 1.0) +
                             dist->size[0] * ((int32_T)affectedParticles->
              data[pIdx] - 1)) - 1] * dist->data[((int32_T)
              (affectedParticles->data[pIdx] + 1.0) + dist->size[0] * ((int32_T)
              affectedParticles->data[pIdx] - 1)) - 1];
            i0 = r0->size[0] * r0->size[1];
            r0->size[0] = cosTheta0->size[0];
            r0->size[1] = cosTheta0->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof
                              (real_T), &e_emlrtRTEI);
            loop_ub = cosTheta0->size[0] * cosTheta0->size[1];
            for (i0 = 0; i0 < loop_ub; i0++) {
              r0->data[i0] = bendingConst * ((y - cosTheta0->data[i0]) *
                r0->data[i0]);
            }

            if (!b2) {
              for (i0 = 0; i0 < 2; i0++) {
                iv11[i0] = 1 + (i0 << 1);
              }

              b2 = true;
            }

            emlrtSubAssignSizeCheckR2012b(iv11, 2, *(int32_T (*)[2])r0->size, 2,
              &ec_emlrtECI, sp);
            for (i0 = 0; i0 < 3; i0++) {
              force->data[1 + force->size[0] * i0] = r0->data[i0];
            }
          } else {
            e_affectedParticles[0] = (affectedParticles->data[pIdx] ==
              numParticles - 1.0);
            e_affectedParticles[1] = (affectedParticles->data[pIdx] != 2.0);
            if (all(e_affectedParticles)) {
              y = affectedParticles->data[pIdx] - 1.0;
              i0 = pos->size[0];
              i = (int32_T)emlrtIntegerCheckFastR2012b(y, &h_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &wb_emlrtBCI, sp);
              y = affectedParticles->data[pIdx];
              i0 = pos->size[0];
              i = (int32_T)emlrtIntegerCheckFastR2012b(y, &i_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &xb_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = bc_pos->size[0] * bc_pos->size[1];
              bc_pos->size[0] = 1;
              bc_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)bc_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                bc_pos->data[bc_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = bc_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = cc_pos->size[0] * cc_pos->size[1];
              cc_pos->size[0] = 1;
              cc_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)cc_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                cc_pos->data[cc_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = cc_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &q_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &yb_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ac_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i0 = dc_pos->size[0] * dc_pos->size[1];
              dc_pos->size[0] = 1;
              dc_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)dc_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                dc_pos->data[dc_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = dc_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = ec_pos->size[0] * ec_pos->size[1];
              ec_pos->size[0] = 1;
              ec_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)ec_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                ec_pos->data[ec_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = ec_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &r_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &fc_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = r0->size[0] * r0->size[1];
              r0->size[0] = 1;
              r0->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                r0->data[r0->size[0] * i0] = 2.0 * pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &gc_emlrtBCI, sp);
              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r0->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = fc_pos->size[0] * fc_pos->size[1];
              fc_pos->size[0] = 1;
              fc_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)fc_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                fc_pos->data[fc_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = fc_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(iv0, md_pos, &s_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &hc_emlrtBCI, sp);
              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r0->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i0 = gc_pos->size[0] * gc_pos->size[1];
              gc_pos->size[0] = 1;
              gc_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)gc_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                gc_pos->data[gc_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = gc_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(iv0, md_pos, &s_emlrtECI, sp);
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] +
                1.0);
              i0 = r5->size[0] * r5->size[1];
              r5->size[0] = 1;
              r5->size[1] = r0->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)r5, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = r0->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                r5->data[r5->size[0] * i0] = (r0->data[r0->size[0] * i0] -
                  pos->data[(i + pos->size[0] * i0) - 1]) - pos->data
                  [(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              loop_ub = dist->size[1];
              c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
              i1 = dist->size[0];
              i2 = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i3 = dist->size[1];
              i4 = (int32_T)affectedParticles->data[pIdx];
              rdivide(sp, r5, dist->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1,
                        i0, &ch_emlrtBCI, sp) + dist->size[0] *
                       (emlrtDynamicBoundsCheckFastR2012b(c_affectedParticles, 1,
                         loop_ub, &dh_emlrtBCI, sp) - 1)) - 1] * dist->data
                      [(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                        &eh_emlrtBCI, sp) + dist->size[0] *
                        (emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
                         &fh_emlrtBCI, sp) - 1)) - 1], r0);
              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = cosTheta0->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r0->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(nd_pos, iv0, &t_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ic_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &jc_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              i0 = hc_pos->size[0] * hc_pos->size[1];
              hc_pos->size[0] = 1;
              hc_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)hc_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                hc_pos->data[hc_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = hc_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = ic_pos->size[0] * ic_pos->size[1];
              ic_pos->size[0] = 1;
              ic_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)ic_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                ic_pos->data[ic_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = ic_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &u_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &kc_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &lc_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = jc_pos->size[0] * jc_pos->size[1];
              jc_pos->size[0] = 1;
              jc_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)jc_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                jc_pos->data[jc_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = jc_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = kc_pos->size[0] * kc_pos->size[1];
              kc_pos->size[0] = 1;
              kc_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)kc_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                kc_pos->data[kc_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = kc_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &v_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &qc_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &rc_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              i0 = lc_pos->size[0] * lc_pos->size[1];
              lc_pos->size[0] = 1;
              lc_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)lc_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                lc_pos->data[lc_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = lc_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = mc_pos->size[0] * mc_pos->size[1];
              mc_pos->size[0] = 1;
              mc_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)mc_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                mc_pos->data[mc_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = mc_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &w_emlrtECI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i0 = g_pos->size[0] * g_pos->size[1];
              g_pos->size[0] = 1;
              g_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)g_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                g_pos->data[g_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1] - pos->data[(c_affectedParticles + pos->size[0] * i0)
                  - 1];
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              loop_ub = dist->size[1];
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i1 = dist->size[0];
              i2 = (int32_T)affectedParticles->data[pIdx];
              i3 = dist->size[1];
              i4 = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              rdivide(sp, g_pos, dist->data[(emlrtDynamicBoundsCheckFastR2012b(i,
                        1, i0, &gh_emlrtBCI, sp) + dist->size[0] *
                       (emlrtDynamicBoundsCheckFastR2012b(c_affectedParticles, 1,
                         loop_ub, &hh_emlrtBCI, sp) - 1)) - 1] * dist->data
                      [(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                        &ih_emlrtBCI, sp) + dist->size[0] *
                        (emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
                         &jh_emlrtBCI, sp) - 1)) - 1], r1);
              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = cosTheta0->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r1->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(nd_pos, iv0, &x_emlrtECI, sp);
              st.site = &e_emlrtRSI;
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
              i0 = a->size[0] * a->size[1];
              a->size[0] = 1;
              a->size[1] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)a, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                a->data[a->size[0] * i0] = pos->data[(i + pos->size[0] * i0) - 1]
                  - pos->data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
              i0 = b->size[0];
              b->size[0] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b->data[i0] = pos->data[(i + pos->size[0] * i0) - 1] - pos->
                  data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              b_st.site = &o_emlrtRSI;
              if (!(a->size[1] == b->size[0])) {
                if ((a->size[1] == 1) || (b->size[0] == 1)) {
                  n_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv12);
                  for (i = 0; i < 45; i++) {
                    cv0[i] = cv1[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
                  emlrtAssign(&n_y, m0);
                  c_st.site = &s_emlrtRSI;
                  d_st.site = &u_emlrtRSI;
                  error(&c_st, message(&d_st, n_y, &emlrtMCI), &b_emlrtMCI);
                } else {
                  o_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv13);
                  for (i = 0; i < 21; i++) {
                    cv2[i] = cv3[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
                  emlrtAssign(&o_y, m0);
                  c_st.site = &t_emlrtRSI;
                  d_st.site = &v_emlrtRSI;
                  error(&c_st, message(&d_st, o_y, &c_emlrtMCI), &d_emlrtMCI);
                }
              }

              if ((a->size[1] == 1) || (b->size[0] == 1)) {
                y = 0.0;
                for (i0 = 0; i0 < a->size[1]; i0++) {
                  y += a->data[a->size[0] * i0] * b->data[i0];
                }
              } else {
                b_st.site = &n_emlrtRSI;
                c_st.site = &p_emlrtRSI;
                e_st.site = &q_emlrtRSI;
                if (a->size[1] < 1) {
                  y = 0.0;
                } else {
                  f_st.site = &r_emlrtRSI;
                  n_t = (ptrdiff_t)(a->size[1]);
                  incx_t = (ptrdiff_t)(1);
                  incy_t = (ptrdiff_t)(1);
                  xix0_t = (double *)(&a->data[0]);
                  i0 = b->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &vf_emlrtBCI,
                    &f_st);
                  yiy0_t = (double *)(&b->data[0]);
                  y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
                }
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &bc_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &cc_emlrtBCI, sp);
              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &dc_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ec_emlrtBCI, sp);
              y /= dist->data[((int32_T)(affectedParticles->data[pIdx] - 1.0) +
                               dist->size[0] * ((int32_T)affectedParticles->
                data[pIdx] - 1)) - 1] * dist->data[((int32_T)
                (affectedParticles->data[pIdx] + 1.0) + dist->size[0] *
                ((int32_T)affectedParticles->data[pIdx] - 1)) - 1];
              i0 = r0->size[0] * r0->size[1];
              r0->size[0] = cosTheta0->size[0];
              r0->size[1] = cosTheta0->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = cosTheta0->size[0] * cosTheta0->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                r0->data[i0] *= y - cosTheta0->data[i0];
              }

              st.site = &f_emlrtRSI;
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i0 = a->size[0] * a->size[1];
              a->size[0] = 1;
              a->size[1] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)a, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                a->data[a->size[0] * i0] = pos->data[(i + pos->size[0] * i0) - 1]
                  - pos->data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i0 = b->size[0];
              b->size[0] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b->data[i0] = pos->data[(i + pos->size[0] * i0) - 1] - pos->
                  data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              b_st.site = &o_emlrtRSI;
              if (!(a->size[1] == b->size[0])) {
                if ((a->size[1] == 1) || (b->size[0] == 1)) {
                  p_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv14);
                  for (i = 0; i < 45; i++) {
                    cv0[i] = cv1[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
                  emlrtAssign(&p_y, m0);
                  c_st.site = &s_emlrtRSI;
                  d_st.site = &u_emlrtRSI;
                  error(&c_st, message(&d_st, p_y, &emlrtMCI), &b_emlrtMCI);
                } else {
                  q_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv15);
                  for (i = 0; i < 21; i++) {
                    cv2[i] = cv3[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
                  emlrtAssign(&q_y, m0);
                  c_st.site = &t_emlrtRSI;
                  d_st.site = &v_emlrtRSI;
                  error(&c_st, message(&d_st, q_y, &c_emlrtMCI), &d_emlrtMCI);
                }
              }

              if ((a->size[1] == 1) || (b->size[0] == 1)) {
                y = 0.0;
                for (i0 = 0; i0 < a->size[1]; i0++) {
                  y += a->data[a->size[0] * i0] * b->data[i0];
                }
              } else {
                b_st.site = &n_emlrtRSI;
                c_st.site = &p_emlrtRSI;
                e_st.site = &q_emlrtRSI;
                if (a->size[1] < 1) {
                  y = 0.0;
                } else {
                  f_st.site = &r_emlrtRSI;
                  n_t = (ptrdiff_t)(a->size[1]);
                  incx_t = (ptrdiff_t)(1);
                  incy_t = (ptrdiff_t)(1);
                  xix0_t = (double *)(&a->data[0]);
                  i0 = b->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &vf_emlrtBCI,
                    &f_st);
                  yiy0_t = (double *)(&b->data[0]);
                  y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
                }
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &mc_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &nc_emlrtBCI, sp);
              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &oc_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &pc_emlrtBCI, sp);
              y /= dist->data[((int32_T)(affectedParticles->data[pIdx] - 2.0) +
                               dist->size[0] * ((int32_T)
                (affectedParticles->data[pIdx] - 1.0) - 1)) - 1] * dist->data
                [((int32_T)(affectedParticles->data[pIdx] - 1.0) + dist->size[0]
                  * ((int32_T)affectedParticles->data[pIdx] - 1)) - 1];
              i0 = r1->size[0] * r1->size[1];
              r1->size[0] = cosTheta0->size[0];
              r1->size[1] = cosTheta0->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = cosTheta0->size[0] * cosTheta0->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                r1->data[i0] *= y - cosTheta0->data[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r0->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = r1->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(iv0, nd_pos, &t_emlrtECI, sp);
              i0 = force->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &sf_emlrtBCI, sp);
              for (i0 = 0; i0 < 3; i0++) {
                i = force->size[1];
                loop_ub = 1 + i0;
                emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i, &kh_emlrtBCI,
                  sp);
              }

              if (!b3) {
                for (i0 = 0; i0 < 2; i0++) {
                  iv16[i0] = 1 + (i0 << 1);
                }

                b3 = true;
              }

              emlrtSubAssignSizeCheckR2012b(iv16, 2, *(int32_T (*)[2])r0->size,
                2, &fc_emlrtECI, sp);
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = r9->size[0] * r9->size[1];
              r9->size[0] = 1;
              r9->size[1] = r0->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)r9, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = r0->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                r9->data[r9->size[0] * i0] = r0->data[r0->size[0] * i0] +
                  r1->data[r1->size[0] * i0];
              }

              for (i0 = 0; i0 < 3; i0++) {
                force->data[(i + force->size[0] * i0) - 1] = r9->data[i0];
              }
            } else if (affectedParticles->data[pIdx] == numParticles) {
              y = affectedParticles->data[pIdx] - 2.0;
              i0 = pos->size[0];
              i = (int32_T)emlrtIntegerCheckFastR2012b(y, &j_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &sc_emlrtBCI, sp);
              y = affectedParticles->data[pIdx] - 1.0;
              i0 = pos->size[0];
              i = (int32_T)emlrtIntegerCheckFastR2012b(y, &k_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &tc_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              i0 = ub_pos->size[0] * ub_pos->size[1];
              ub_pos->size[0] = 1;
              ub_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)ub_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                ub_pos->data[ub_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = ub_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = vb_pos->size[0] * vb_pos->size[1];
              vb_pos->size[0] = 1;
              vb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)vb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                vb_pos->data[vb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = vb_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &y_emlrtECI, sp);
              y = affectedParticles->data[pIdx];
              i0 = pos->size[0];
              i = (int32_T)emlrtIntegerCheckFastR2012b(y, &l_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &uc_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &vc_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = wb_pos->size[0] * wb_pos->size[1];
              wb_pos->size[0] = 1;
              wb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)wb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                wb_pos->data[wb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = wb_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = xb_pos->size[0] * xb_pos->size[1];
              xb_pos->size[0] = 1;
              xb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)xb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                xb_pos->data[xb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = xb_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &ab_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &bd_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &cd_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              i0 = yb_pos->size[0] * yb_pos->size[1];
              yb_pos->size[0] = 1;
              yb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)yb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                yb_pos->data[yb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = yb_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = ac_pos->size[0] * ac_pos->size[1];
              ac_pos->size[0] = 1;
              ac_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)ac_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                ac_pos->data[ac_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = ac_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &bb_emlrtECI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i0 = f_pos->size[0] * f_pos->size[1];
              f_pos->size[0] = 1;
              f_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)f_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                f_pos->data[f_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1] - pos->data[(c_affectedParticles + pos->size[0] * i0)
                  - 1];
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              loop_ub = dist->size[1];
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i1 = dist->size[0];
              i2 = (int32_T)affectedParticles->data[pIdx];
              i3 = dist->size[1];
              i4 = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              rdivide(sp, f_pos, dist->data[(emlrtDynamicBoundsCheckFastR2012b(i,
                        1, i0, &wg_emlrtBCI, sp) + dist->size[0] *
                       (emlrtDynamicBoundsCheckFastR2012b(c_affectedParticles, 1,
                         loop_ub, &xg_emlrtBCI, sp) - 1)) - 1] * dist->data
                      [(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                        &yg_emlrtBCI, sp) + dist->size[0] *
                        (emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
                         &ah_emlrtBCI, sp) - 1)) - 1], r0);
              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = cosTheta0->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r0->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(nd_pos, iv0, &cb_emlrtECI, sp);
              i0 = force->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &tf_emlrtBCI, sp);
              for (i0 = 0; i0 < 3; i0++) {
                i = force->size[1];
                loop_ub = 1 + i0;
                emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i, &bh_emlrtBCI,
                  sp);
              }

              st.site = &g_emlrtRSI;
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i0 = a->size[0] * a->size[1];
              a->size[0] = 1;
              a->size[1] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)a, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                a->data[a->size[0] * i0] = pos->data[(i + pos->size[0] * i0) - 1]
                  - pos->data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i0 = b->size[0];
              b->size[0] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b->data[i0] = pos->data[(i + pos->size[0] * i0) - 1] - pos->
                  data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              b_st.site = &o_emlrtRSI;
              if (!(a->size[1] == b->size[0])) {
                if ((a->size[1] == 1) || (b->size[0] == 1)) {
                  r_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv17);
                  for (i = 0; i < 45; i++) {
                    cv0[i] = cv1[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
                  emlrtAssign(&r_y, m0);
                  c_st.site = &s_emlrtRSI;
                  d_st.site = &u_emlrtRSI;
                  error(&c_st, message(&d_st, r_y, &emlrtMCI), &b_emlrtMCI);
                } else {
                  s_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv18);
                  for (i = 0; i < 21; i++) {
                    cv2[i] = cv3[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
                  emlrtAssign(&s_y, m0);
                  c_st.site = &t_emlrtRSI;
                  d_st.site = &v_emlrtRSI;
                  error(&c_st, message(&d_st, s_y, &c_emlrtMCI), &d_emlrtMCI);
                }
              }

              if ((a->size[1] == 1) || (b->size[0] == 1)) {
                y = 0.0;
                for (i0 = 0; i0 < a->size[1]; i0++) {
                  y += a->data[a->size[0] * i0] * b->data[i0];
                }
              } else {
                b_st.site = &n_emlrtRSI;
                c_st.site = &p_emlrtRSI;
                e_st.site = &q_emlrtRSI;
                if (a->size[1] < 1) {
                  y = 0.0;
                } else {
                  f_st.site = &r_emlrtRSI;
                  n_t = (ptrdiff_t)(a->size[1]);
                  incx_t = (ptrdiff_t)(1);
                  incy_t = (ptrdiff_t)(1);
                  xix0_t = (double *)(&a->data[0]);
                  i0 = b->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &vf_emlrtBCI,
                    &f_st);
                  yiy0_t = (double *)(&b->data[0]);
                  y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
                }
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &wc_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &xc_emlrtBCI, sp);
              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &yc_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ad_emlrtBCI, sp);
              y /= dist->data[((int32_T)(affectedParticles->data[pIdx] - 2.0) +
                               dist->size[0] * ((int32_T)
                (affectedParticles->data[pIdx] - 1.0) - 1)) - 1] * dist->data
                [((int32_T)(affectedParticles->data[pIdx] - 1.0) + dist->size[0]
                  * ((int32_T)affectedParticles->data[pIdx] - 1)) - 1];
              i0 = r0->size[0] * r0->size[1];
              r0->size[0] = cosTheta0->size[0];
              r0->size[1] = cosTheta0->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = cosTheta0->size[0] * cosTheta0->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                r0->data[i0] *= y - cosTheta0->data[i0];
              }

              if (!b4) {
                for (i0 = 0; i0 < 2; i0++) {
                  iv19[i0] = 1 + (i0 << 1);
                }

                b4 = true;
              }

              emlrtSubAssignSizeCheckR2012b(iv19, 2, *(int32_T (*)[2])r0->size,
                2, &gc_emlrtECI, sp);
              i = (int32_T)affectedParticles->data[pIdx];
              for (i0 = 0; i0 < 3; i0++) {
                force->data[(i + force->size[0] * i0) - 1] = r0->data[i0];
              }
            } else {
              y = affectedParticles->data[pIdx] - 2.0;
              i0 = pos->size[0];
              i = (int32_T)emlrtIntegerCheckFastR2012b(y, &m_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &dd_emlrtBCI, sp);
              y = affectedParticles->data[pIdx] - 1.0;
              i0 = pos->size[0];
              i = (int32_T)emlrtIntegerCheckFastR2012b(y, &n_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ed_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              i0 = j_pos->size[0] * j_pos->size[1];
              j_pos->size[0] = 1;
              j_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)j_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                j_pos->data[j_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = j_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = k_pos->size[0] * k_pos->size[1];
              k_pos->size[0] = 1;
              k_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)k_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                k_pos->data[k_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = k_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &db_emlrtECI, sp);
              y = affectedParticles->data[pIdx];
              i0 = pos->size[0];
              i = (int32_T)emlrtIntegerCheckFastR2012b(y, &o_emlrtDCI, sp);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &fd_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &gd_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = l_pos->size[0] * l_pos->size[1];
              l_pos->size[0] = 1;
              l_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)l_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                l_pos->data[l_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = l_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = m_pos->size[0] * m_pos->size[1];
              m_pos->size[0] = 1;
              m_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)m_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                m_pos->data[m_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = m_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &eb_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ld_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &md_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              i0 = n_pos->size[0] * n_pos->size[1];
              n_pos->size[0] = 1;
              n_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)n_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                n_pos->data[n_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = n_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = o_pos->size[0] * o_pos->size[1];
              o_pos->size[0] = 1;
              o_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)o_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                o_pos->data[o_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = o_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &fb_emlrtECI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i0 = e_pos->size[0] * e_pos->size[1];
              e_pos->size[0] = 1;
              e_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)e_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                e_pos->data[e_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1] - pos->data[(c_affectedParticles + pos->size[0] * i0)
                  - 1];
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              loop_ub = dist->size[1];
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i1 = dist->size[0];
              i2 = (int32_T)affectedParticles->data[pIdx];
              i3 = dist->size[1];
              i4 = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              rdivide(sp, e_pos, dist->data[(emlrtDynamicBoundsCheckFastR2012b(i,
                        1, i0, &wf_emlrtBCI, sp) + dist->size[0] *
                       (emlrtDynamicBoundsCheckFastR2012b(c_affectedParticles, 1,
                         loop_ub, &xf_emlrtBCI, sp) - 1)) - 1] * dist->data
                      [(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                        &yf_emlrtBCI, sp) + dist->size[0] *
                        (emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
                         &ag_emlrtBCI, sp) - 1)) - 1], r0);
              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = cosTheta0->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r0->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(nd_pos, iv0, &gb_emlrtECI, sp);
              st.site = &h_emlrtRSI;
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i0 = a->size[0] * a->size[1];
              a->size[0] = 1;
              a->size[1] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)a, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                a->data[a->size[0] * i0] = pos->data[(i + pos->size[0] * i0) - 1]
                  - pos->data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i0 = b->size[0];
              b->size[0] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b->data[i0] = pos->data[(i + pos->size[0] * i0) - 1] - pos->
                  data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              b_st.site = &o_emlrtRSI;
              if (!(a->size[1] == b->size[0])) {
                if ((a->size[1] == 1) || (b->size[0] == 1)) {
                  t_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv20);
                  for (i = 0; i < 45; i++) {
                    cv0[i] = cv1[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
                  emlrtAssign(&t_y, m0);
                  c_st.site = &s_emlrtRSI;
                  d_st.site = &u_emlrtRSI;
                  error(&c_st, message(&d_st, t_y, &emlrtMCI), &b_emlrtMCI);
                } else {
                  u_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv21);
                  for (i = 0; i < 21; i++) {
                    cv2[i] = cv3[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
                  emlrtAssign(&u_y, m0);
                  c_st.site = &t_emlrtRSI;
                  d_st.site = &v_emlrtRSI;
                  error(&c_st, message(&d_st, u_y, &c_emlrtMCI), &d_emlrtMCI);
                }
              }

              if ((a->size[1] == 1) || (b->size[0] == 1)) {
                y = 0.0;
                for (i0 = 0; i0 < a->size[1]; i0++) {
                  y += a->data[a->size[0] * i0] * b->data[i0];
                }
              } else {
                b_st.site = &n_emlrtRSI;
                c_st.site = &p_emlrtRSI;
                e_st.site = &q_emlrtRSI;
                if (a->size[1] < 1) {
                  y = 0.0;
                } else {
                  f_st.site = &r_emlrtRSI;
                  n_t = (ptrdiff_t)(a->size[1]);
                  incx_t = (ptrdiff_t)(1);
                  incy_t = (ptrdiff_t)(1);
                  xix0_t = (double *)(&a->data[0]);
                  i0 = b->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &vf_emlrtBCI,
                    &f_st);
                  yiy0_t = (double *)(&b->data[0]);
                  y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
                }
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &hd_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &id_emlrtBCI, sp);
              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &jd_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &kd_emlrtBCI, sp);
              y /= dist->data[((int32_T)(affectedParticles->data[pIdx] - 2.0) +
                               dist->size[0] * ((int32_T)
                (affectedParticles->data[pIdx] - 1.0) - 1)) - 1] * dist->data
                [((int32_T)(affectedParticles->data[pIdx] - 1.0) + dist->size[0]
                  * ((int32_T)affectedParticles->data[pIdx] - 1)) - 1];
              i0 = d_y->size[0] * d_y->size[1];
              d_y->size[0] = cosTheta0->size[0];
              d_y->size[1] = cosTheta0->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)d_y, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = cosTheta0->size[0] * cosTheta0->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                d_y->data[i0] = (y - cosTheta0->data[i0]) * r0->data[i0];
              }

              emlrtDisplayR2012b(emlrt_marshallOut(d_y), "F1", &b_emlrtRTEI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &nd_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &od_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = p_pos->size[0] * p_pos->size[1];
              p_pos->size[0] = 1;
              p_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)p_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                p_pos->data[p_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = p_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = q_pos->size[0] * q_pos->size[1];
              q_pos->size[0] = 1;
              q_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)q_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                q_pos->data[q_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = q_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &hb_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &pd_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &qd_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i0 = r_pos->size[0] * r_pos->size[1];
              r_pos->size[0] = 1;
              r_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)r_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                r_pos->data[r_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = r_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = s_pos->size[0] * s_pos->size[1];
              s_pos->size[0] = 1;
              s_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)s_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                s_pos->data[s_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = s_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &ib_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &vd_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = r0->size[0] * r0->size[1];
              r0->size[0] = 1;
              r0->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                r0->data[r0->size[0] * i0] = 2.0 * pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &wd_emlrtBCI, sp);
              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r0->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = t_pos->size[0] * t_pos->size[1];
              t_pos->size[0] = 1;
              t_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)t_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                t_pos->data[t_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = t_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(iv0, md_pos, &jb_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &xd_emlrtBCI, sp);
              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r0->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i0 = u_pos->size[0] * u_pos->size[1];
              u_pos->size[0] = 1;
              u_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)u_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                u_pos->data[u_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = u_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(iv0, md_pos, &jb_emlrtECI, sp);
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] +
                1.0);
              i0 = r4->size[0] * r4->size[1];
              r4->size[0] = 1;
              r4->size[1] = r0->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)r4, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = r0->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                r4->data[r4->size[0] * i0] = (r0->data[r0->size[0] * i0] -
                  pos->data[(i + pos->size[0] * i0) - 1]) - pos->data
                  [(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              loop_ub = dist->size[1];
              c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
              i1 = dist->size[0];
              i2 = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i3 = dist->size[1];
              i4 = (int32_T)affectedParticles->data[pIdx];
              rdivide(sp, r4, dist->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1,
                        i0, &bg_emlrtBCI, sp) + dist->size[0] *
                       (emlrtDynamicBoundsCheckFastR2012b(c_affectedParticles, 1,
                         loop_ub, &cg_emlrtBCI, sp) - 1)) - 1] * dist->data
                      [(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                        &dg_emlrtBCI, sp) + dist->size[0] *
                        (emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
                         &eg_emlrtBCI, sp) - 1)) - 1], r0);
              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = cosTheta0->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r0->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(nd_pos, iv0, &kb_emlrtECI, sp);
              st.site = &i_emlrtRSI;
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
              i0 = a->size[0] * a->size[1];
              a->size[0] = 1;
              a->size[1] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)a, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                a->data[a->size[0] * i0] = pos->data[(i + pos->size[0] * i0) - 1]
                  - pos->data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
              i0 = b->size[0];
              b->size[0] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b->data[i0] = pos->data[(i + pos->size[0] * i0) - 1] - pos->
                  data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              b_st.site = &o_emlrtRSI;
              if (!(a->size[1] == b->size[0])) {
                if ((a->size[1] == 1) || (b->size[0] == 1)) {
                  v_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv22);
                  for (i = 0; i < 45; i++) {
                    cv0[i] = cv1[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
                  emlrtAssign(&v_y, m0);
                  c_st.site = &s_emlrtRSI;
                  d_st.site = &u_emlrtRSI;
                  error(&c_st, message(&d_st, v_y, &emlrtMCI), &b_emlrtMCI);
                } else {
                  w_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv23);
                  for (i = 0; i < 21; i++) {
                    cv2[i] = cv3[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
                  emlrtAssign(&w_y, m0);
                  c_st.site = &t_emlrtRSI;
                  d_st.site = &v_emlrtRSI;
                  error(&c_st, message(&d_st, w_y, &c_emlrtMCI), &d_emlrtMCI);
                }
              }

              if ((a->size[1] == 1) || (b->size[0] == 1)) {
                y = 0.0;
                for (i0 = 0; i0 < a->size[1]; i0++) {
                  y += a->data[a->size[0] * i0] * b->data[i0];
                }
              } else {
                b_st.site = &n_emlrtRSI;
                c_st.site = &p_emlrtRSI;
                e_st.site = &q_emlrtRSI;
                if (a->size[1] < 1) {
                  y = 0.0;
                } else {
                  f_st.site = &r_emlrtRSI;
                  n_t = (ptrdiff_t)(a->size[1]);
                  incx_t = (ptrdiff_t)(1);
                  incy_t = (ptrdiff_t)(1);
                  xix0_t = (double *)(&a->data[0]);
                  i0 = b->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &vf_emlrtBCI,
                    &f_st);
                  yiy0_t = (double *)(&b->data[0]);
                  y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
                }
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &rd_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &sd_emlrtBCI, sp);
              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &td_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ud_emlrtBCI, sp);
              y /= dist->data[((int32_T)(affectedParticles->data[pIdx] - 1.0) +
                               dist->size[0] * ((int32_T)affectedParticles->
                data[pIdx] - 1)) - 1] * dist->data[((int32_T)
                (affectedParticles->data[pIdx] + 1.0) + dist->size[0] *
                ((int32_T)affectedParticles->data[pIdx] - 1)) - 1];
              i0 = c_y->size[0] * c_y->size[1];
              c_y->size[0] = cosTheta0->size[0];
              c_y->size[1] = cosTheta0->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)c_y, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = cosTheta0->size[0] * cosTheta0->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                c_y->data[i0] = (y - cosTheta0->data[i0]) * r0->data[i0];
              }

              emlrtDisplayR2012b(emlrt_marshallOut(c_y), "F2", &c_emlrtRTEI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &yd_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ae_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              i0 = v_pos->size[0] * v_pos->size[1];
              v_pos->size[0] = 1;
              v_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)v_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                v_pos->data[v_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = v_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i0 = w_pos->size[0] * w_pos->size[1];
              w_pos->size[0] = 1;
              w_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)w_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                w_pos->data[w_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = w_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &lb_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &be_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ce_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = x_pos->size[0] * x_pos->size[1];
              x_pos->size[0] = 1;
              x_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)x_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                x_pos->data[x_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = x_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i0 = y_pos->size[0] * y_pos->size[1];
              y_pos->size[0] = 1;
              y_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)y_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                y_pos->data[y_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = y_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &mb_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &he_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ie_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              i0 = ab_pos->size[0] * ab_pos->size[1];
              ab_pos->size[0] = 1;
              ab_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)ab_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                ab_pos->data[ab_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = ab_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i0 = bb_pos->size[0] * bb_pos->size[1];
              bb_pos->size[0] = 1;
              bb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)bb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                bb_pos->data[bb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = bb_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &nb_emlrtECI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] +
                1.0);
              i0 = d_pos->size[0] * d_pos->size[1];
              d_pos->size[0] = 1;
              d_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)d_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                d_pos->data[d_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1] - pos->data[(c_affectedParticles + pos->size[0] * i0)
                  - 1];
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              loop_ub = dist->size[1];
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] +
                1.0);
              i1 = dist->size[0];
              i2 = (int32_T)affectedParticles->data[pIdx];
              i3 = dist->size[1];
              i4 = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              rdivide(sp, d_pos, dist->data[(emlrtDynamicBoundsCheckFastR2012b(i,
                        1, i0, &fg_emlrtBCI, sp) + dist->size[0] *
                       (emlrtDynamicBoundsCheckFastR2012b(c_affectedParticles, 1,
                         loop_ub, &gg_emlrtBCI, sp) - 1)) - 1] * dist->data
                      [(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                        &hg_emlrtBCI, sp) + dist->size[0] *
                        (emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
                         &ig_emlrtBCI, sp) - 1)) - 1], r0);
              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = cosTheta0->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r0->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(nd_pos, iv0, &ob_emlrtECI, sp);
              st.site = &j_emlrtRSI;
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] +
                1.0);
              i0 = a->size[0] * a->size[1];
              a->size[0] = 1;
              a->size[1] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)a, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                a->data[a->size[0] * i0] = pos->data[(i + pos->size[0] * i0) - 1]
                  - pos->data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] +
                1.0);
              i0 = b->size[0];
              b->size[0] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b->data[i0] = pos->data[(i + pos->size[0] * i0) - 1] - pos->
                  data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              b_st.site = &o_emlrtRSI;
              if (!(a->size[1] == b->size[0])) {
                if ((a->size[1] == 1) || (b->size[0] == 1)) {
                  x_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv24);
                  for (i = 0; i < 45; i++) {
                    cv0[i] = cv1[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
                  emlrtAssign(&x_y, m0);
                  c_st.site = &s_emlrtRSI;
                  d_st.site = &u_emlrtRSI;
                  error(&c_st, message(&d_st, x_y, &emlrtMCI), &b_emlrtMCI);
                } else {
                  y_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv25);
                  for (i = 0; i < 21; i++) {
                    cv2[i] = cv3[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
                  emlrtAssign(&y_y, m0);
                  c_st.site = &t_emlrtRSI;
                  d_st.site = &v_emlrtRSI;
                  error(&c_st, message(&d_st, y_y, &c_emlrtMCI), &d_emlrtMCI);
                }
              }

              if ((a->size[1] == 1) || (b->size[0] == 1)) {
                y = 0.0;
                for (i0 = 0; i0 < a->size[1]; i0++) {
                  y += a->data[a->size[0] * i0] * b->data[i0];
                }
              } else {
                b_st.site = &n_emlrtRSI;
                c_st.site = &p_emlrtRSI;
                e_st.site = &q_emlrtRSI;
                if (a->size[1] < 1) {
                  y = 0.0;
                } else {
                  f_st.site = &r_emlrtRSI;
                  n_t = (ptrdiff_t)(a->size[1]);
                  incx_t = (ptrdiff_t)(1);
                  incy_t = (ptrdiff_t)(1);
                  xix0_t = (double *)(&a->data[0]);
                  i0 = b->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &vf_emlrtBCI,
                    &f_st);
                  yiy0_t = (double *)(&b->data[0]);
                  y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
                }
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &de_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ee_emlrtBCI, sp);
              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &fe_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ge_emlrtBCI, sp);
              y /= dist->data[((int32_T)(affectedParticles->data[pIdx] + 2.0) +
                               dist->size[0] * ((int32_T)
                (affectedParticles->data[pIdx] + 1.0) - 1)) - 1] * dist->data
                [((int32_T)(affectedParticles->data[pIdx] + 1.0) + dist->size[0]
                  * ((int32_T)affectedParticles->data[pIdx] - 1)) - 1];
              i0 = b_y->size[0] * b_y->size[1];
              b_y->size[0] = cosTheta0->size[0];
              b_y->size[1] = cosTheta0->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)b_y, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = cosTheta0->size[0] * cosTheta0->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                b_y->data[i0] = (y - cosTheta0->data[i0]) * r0->data[i0];
              }

              emlrtDisplayR2012b(emlrt_marshallOut(b_y), "F3", &d_emlrtRTEI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &je_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ke_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              i0 = cb_pos->size[0] * cb_pos->size[1];
              cb_pos->size[0] = 1;
              cb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)cb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                cb_pos->data[cb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = cb_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = db_pos->size[0] * db_pos->size[1];
              db_pos->size[0] = 1;
              db_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)db_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                db_pos->data[db_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = db_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &pb_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &le_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &me_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = eb_pos->size[0] * eb_pos->size[1];
              eb_pos->size[0] = 1;
              eb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)eb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                eb_pos->data[eb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = eb_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = fb_pos->size[0] * fb_pos->size[1];
              fb_pos->size[0] = 1;
              fb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)fb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                fb_pos->data[fb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = fb_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &qb_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &re_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &se_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              i0 = gb_pos->size[0] * gb_pos->size[1];
              gb_pos->size[0] = 1;
              gb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)gb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                gb_pos->data[gb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = gb_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = hb_pos->size[0] * hb_pos->size[1];
              hb_pos->size[0] = 1;
              hb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)hb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                hb_pos->data[hb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = hb_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &rb_emlrtECI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i0 = c_pos->size[0] * c_pos->size[1];
              c_pos->size[0] = 1;
              c_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)c_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                c_pos->data[c_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1] - pos->data[(c_affectedParticles + pos->size[0] * i0)
                  - 1];
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              loop_ub = dist->size[1];
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i1 = dist->size[0];
              i2 = (int32_T)affectedParticles->data[pIdx];
              i3 = dist->size[1];
              i4 = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              rdivide(sp, c_pos, dist->data[(emlrtDynamicBoundsCheckFastR2012b(i,
                        1, i0, &jg_emlrtBCI, sp) + dist->size[0] *
                       (emlrtDynamicBoundsCheckFastR2012b(c_affectedParticles, 1,
                         loop_ub, &kg_emlrtBCI, sp) - 1)) - 1] * dist->data
                      [(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                        &lg_emlrtBCI, sp) + dist->size[0] *
                        (emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
                         &mg_emlrtBCI, sp) - 1)) - 1], r0);
              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = cosTheta0->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r0->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(nd_pos, iv0, &sb_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &te_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ue_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = ib_pos->size[0] * ib_pos->size[1];
              ib_pos->size[0] = 1;
              ib_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)ib_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                ib_pos->data[ib_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = ib_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = jb_pos->size[0] * jb_pos->size[1];
              jb_pos->size[0] = 1;
              jb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)jb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                jb_pos->data[jb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = jb_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &tb_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ve_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &we_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i0 = kb_pos->size[0] * kb_pos->size[1];
              kb_pos->size[0] = 1;
              kb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)kb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                kb_pos->data[kb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = kb_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = lb_pos->size[0] * lb_pos->size[1];
              lb_pos->size[0] = 1;
              lb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)lb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                lb_pos->data[lb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = lb_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &ub_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &cf_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = r1->size[0] * r1->size[1];
              r1->size[0] = 1;
              r1->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                r1->data[r1->size[0] * i0] = 2.0 * pos->data[(i + pos->size[0] *
                  i0) - 1];
              }

              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &df_emlrtBCI, sp);
              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r1->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              i0 = mb_pos->size[0] * mb_pos->size[1];
              mb_pos->size[0] = 1;
              mb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)mb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                mb_pos->data[mb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = mb_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(iv0, md_pos, &vb_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ef_emlrtBCI, sp);
              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r1->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i0 = nb_pos->size[0] * nb_pos->size[1];
              nb_pos->size[0] = 1;
              nb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)nb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                nb_pos->data[nb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = nb_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(iv0, md_pos, &vb_emlrtECI, sp);
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] +
                1.0);
              i0 = r3->size[0] * r3->size[1];
              r3->size[0] = 1;
              r3->size[1] = r1->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)r3, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = r1->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                r3->data[r3->size[0] * i0] = (r1->data[r1->size[0] * i0] -
                  pos->data[(i + pos->size[0] * i0) - 1]) - pos->data
                  [(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              loop_ub = dist->size[1];
              c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
              i1 = dist->size[0];
              i2 = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i3 = dist->size[1];
              i4 = (int32_T)affectedParticles->data[pIdx];
              rdivide(sp, r3, dist->data[(emlrtDynamicBoundsCheckFastR2012b(i, 1,
                        i0, &ng_emlrtBCI, sp) + dist->size[0] *
                       (emlrtDynamicBoundsCheckFastR2012b(c_affectedParticles, 1,
                         loop_ub, &og_emlrtBCI, sp) - 1)) - 1] * dist->data
                      [(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                        &pg_emlrtBCI, sp) + dist->size[0] *
                        (emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
                         &qg_emlrtBCI, sp) - 1)) - 1], r1);
              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = cosTheta0->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r1->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(nd_pos, iv0, &wb_emlrtECI, sp);
              st.site = &k_emlrtRSI;
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i0 = a->size[0] * a->size[1];
              a->size[0] = 1;
              a->size[1] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)a, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                a->data[a->size[0] * i0] = pos->data[(i + pos->size[0] * i0) - 1]
                  - pos->data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] -
                1.0);
              i0 = b->size[0];
              b->size[0] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b->data[i0] = pos->data[(i + pos->size[0] * i0) - 1] - pos->
                  data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              b_st.site = &o_emlrtRSI;
              if (!(a->size[1] == b->size[0])) {
                if ((a->size[1] == 1) || (b->size[0] == 1)) {
                  ab_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv26);
                  for (i = 0; i < 45; i++) {
                    cv0[i] = cv1[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
                  emlrtAssign(&ab_y, m0);
                  c_st.site = &s_emlrtRSI;
                  d_st.site = &u_emlrtRSI;
                  error(&c_st, message(&d_st, ab_y, &emlrtMCI), &b_emlrtMCI);
                } else {
                  bb_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv27);
                  for (i = 0; i < 21; i++) {
                    cv2[i] = cv3[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
                  emlrtAssign(&bb_y, m0);
                  c_st.site = &t_emlrtRSI;
                  d_st.site = &v_emlrtRSI;
                  error(&c_st, message(&d_st, bb_y, &c_emlrtMCI), &d_emlrtMCI);
                }
              }

              if ((a->size[1] == 1) || (b->size[0] == 1)) {
                y = 0.0;
                for (i0 = 0; i0 < a->size[1]; i0++) {
                  y += a->data[a->size[0] * i0] * b->data[i0];
                }
              } else {
                b_st.site = &n_emlrtRSI;
                c_st.site = &p_emlrtRSI;
                e_st.site = &q_emlrtRSI;
                if (a->size[1] < 1) {
                  y = 0.0;
                } else {
                  f_st.site = &r_emlrtRSI;
                  n_t = (ptrdiff_t)(a->size[1]);
                  incx_t = (ptrdiff_t)(1);
                  incy_t = (ptrdiff_t)(1);
                  xix0_t = (double *)(&a->data[0]);
                  i0 = b->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &vf_emlrtBCI,
                    &f_st);
                  yiy0_t = (double *)(&b->data[0]);
                  y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
                }
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ne_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &oe_emlrtBCI, sp);
              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &pe_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &qe_emlrtBCI, sp);
              y /= dist->data[((int32_T)(affectedParticles->data[pIdx] - 2.0) +
                               dist->size[0] * ((int32_T)
                (affectedParticles->data[pIdx] - 1.0) - 1)) - 1] * dist->data
                [((int32_T)(affectedParticles->data[pIdx] - 1.0) + dist->size[0]
                  * ((int32_T)affectedParticles->data[pIdx] - 1)) - 1];
              i0 = r0->size[0] * r0->size[1];
              r0->size[0] = cosTheta0->size[0];
              r0->size[1] = cosTheta0->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = cosTheta0->size[0] * cosTheta0->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                r0->data[i0] *= y - cosTheta0->data[i0];
              }

              st.site = &l_emlrtRSI;
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
              i0 = a->size[0] * a->size[1];
              a->size[0] = 1;
              a->size[1] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)a, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                a->data[a->size[0] * i0] = pos->data[(i + pos->size[0] * i0) - 1]
                  - pos->data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              c_affectedParticles = (int32_T)affectedParticles->data[pIdx];
              i0 = b->size[0];
              b->size[0] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b->data[i0] = pos->data[(i + pos->size[0] * i0) - 1] - pos->
                  data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              b_st.site = &o_emlrtRSI;
              if (!(a->size[1] == b->size[0])) {
                if ((a->size[1] == 1) || (b->size[0] == 1)) {
                  cb_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv28);
                  for (i = 0; i < 45; i++) {
                    cv0[i] = cv1[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
                  emlrtAssign(&cb_y, m0);
                  c_st.site = &s_emlrtRSI;
                  d_st.site = &u_emlrtRSI;
                  error(&c_st, message(&d_st, cb_y, &emlrtMCI), &b_emlrtMCI);
                } else {
                  db_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv29);
                  for (i = 0; i < 21; i++) {
                    cv2[i] = cv3[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
                  emlrtAssign(&db_y, m0);
                  c_st.site = &t_emlrtRSI;
                  d_st.site = &v_emlrtRSI;
                  error(&c_st, message(&d_st, db_y, &c_emlrtMCI), &d_emlrtMCI);
                }
              }

              if ((a->size[1] == 1) || (b->size[0] == 1)) {
                y = 0.0;
                for (i0 = 0; i0 < a->size[1]; i0++) {
                  y += a->data[a->size[0] * i0] * b->data[i0];
                }
              } else {
                b_st.site = &n_emlrtRSI;
                c_st.site = &p_emlrtRSI;
                e_st.site = &q_emlrtRSI;
                if (a->size[1] < 1) {
                  y = 0.0;
                } else {
                  f_st.site = &r_emlrtRSI;
                  n_t = (ptrdiff_t)(a->size[1]);
                  incx_t = (ptrdiff_t)(1);
                  incy_t = (ptrdiff_t)(1);
                  xix0_t = (double *)(&a->data[0]);
                  i0 = b->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &vf_emlrtBCI,
                    &f_st);
                  yiy0_t = (double *)(&b->data[0]);
                  y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
                }
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] - 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &xe_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ye_emlrtBCI, sp);
              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &af_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &bf_emlrtBCI, sp);
              y /= dist->data[((int32_T)(affectedParticles->data[pIdx] - 1.0) +
                               dist->size[0] * ((int32_T)affectedParticles->
                data[pIdx] - 1)) - 1] * dist->data[((int32_T)
                (affectedParticles->data[pIdx] + 1.0) + dist->size[0] *
                ((int32_T)affectedParticles->data[pIdx] - 1)) - 1];
              i0 = r1->size[0] * r1->size[1];
              r1->size[0] = cosTheta0->size[0];
              r1->size[1] = cosTheta0->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = cosTheta0->size[0] * cosTheta0->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                r1->data[i0] *= y - cosTheta0->data[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r0->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = r1->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(iv0, nd_pos, &sb_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &ff_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &gf_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              i0 = ob_pos->size[0] * ob_pos->size[1];
              ob_pos->size[0] = 1;
              ob_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)ob_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                ob_pos->data[ob_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = ob_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i0 = pb_pos->size[0] * pb_pos->size[1];
              pb_pos->size[0] = 1;
              pb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)pb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                pb_pos->data[pb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = pb_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &xb_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &hf_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &if_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = qb_pos->size[0] * qb_pos->size[1];
              qb_pos->size[0] = 1;
              qb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)qb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                qb_pos->data[qb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = qb_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i0 = rb_pos->size[0] * rb_pos->size[1];
              rb_pos->size[0] = 1;
              rb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)rb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                rb_pos->data[rb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = rb_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &yb_emlrtECI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &nf_emlrtBCI, sp);
              i0 = pos->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &of_emlrtBCI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              i0 = sb_pos->size[0] * sb_pos->size[1];
              sb_pos->size[0] = 1;
              sb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)sb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                sb_pos->data[sb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                md_pos[i0] = sb_pos->size[i0];
              }

              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              i0 = tb_pos->size[0] * tb_pos->size[1];
              tb_pos->size[0] = 1;
              tb_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)tb_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                tb_pos->data[tb_pos->size[0] * i0] = pos->data[(i + pos->size[0]
                  * i0) - 1];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = tb_pos->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(md_pos, nd_pos, &ac_emlrtECI, sp);
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] +
                1.0);
              i0 = b_pos->size[0] * b_pos->size[1];
              b_pos->size[0] = 1;
              b_pos->size[1] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)b_pos, i0, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b_pos->data[b_pos->size[0] * i0] = pos->data[(i + pos->size[0] *
                  i0) - 1] - pos->data[(c_affectedParticles + pos->size[0] * i0)
                  - 1];
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              loop_ub = dist->size[1];
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] +
                1.0);
              i1 = dist->size[0];
              i2 = (int32_T)affectedParticles->data[pIdx];
              i3 = dist->size[1];
              i4 = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              rdivide(sp, b_pos, dist->data[(emlrtDynamicBoundsCheckFastR2012b(i,
                        1, i0, &rg_emlrtBCI, sp) + dist->size[0] *
                       (emlrtDynamicBoundsCheckFastR2012b(c_affectedParticles, 1,
                         loop_ub, &sg_emlrtBCI, sp) - 1)) - 1] * dist->data
                      [(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                        &tg_emlrtBCI, sp) + dist->size[0] *
                        (emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
                         &ug_emlrtBCI, sp) - 1)) - 1], r2);
              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = cosTheta0->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r2->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(nd_pos, iv0, &bc_emlrtECI, sp);
              st.site = &m_emlrtRSI;
              loop_ub = pos->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] +
                1.0);
              i0 = a->size[0] * a->size[1];
              a->size[0] = 1;
              a->size[1] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)a, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                a->data[a->size[0] * i0] = pos->data[(i + pos->size[0] * i0) - 1]
                  - pos->data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              loop_ub = pos->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              c_affectedParticles = (int32_T)(affectedParticles->data[pIdx] +
                1.0);
              i0 = b->size[0];
              b->size[0] = loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              for (i0 = 0; i0 < loop_ub; i0++) {
                b->data[i0] = pos->data[(i + pos->size[0] * i0) - 1] - pos->
                  data[(c_affectedParticles + pos->size[0] * i0) - 1];
              }

              b_st.site = &o_emlrtRSI;
              if (!(a->size[1] == b->size[0])) {
                if ((a->size[1] == 1) || (b->size[0] == 1)) {
                  eb_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv30);
                  for (i = 0; i < 45; i++) {
                    cv0[i] = cv1[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
                  emlrtAssign(&eb_y, m0);
                  c_st.site = &s_emlrtRSI;
                  d_st.site = &u_emlrtRSI;
                  error(&c_st, message(&d_st, eb_y, &emlrtMCI), &b_emlrtMCI);
                } else {
                  fb_y = NULL;
                  m0 = emlrtCreateCharArray(2, iv31);
                  for (i = 0; i < 21; i++) {
                    cv2[i] = cv3[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
                  emlrtAssign(&fb_y, m0);
                  c_st.site = &t_emlrtRSI;
                  d_st.site = &v_emlrtRSI;
                  error(&c_st, message(&d_st, fb_y, &c_emlrtMCI), &d_emlrtMCI);
                }
              }

              if ((a->size[1] == 1) || (b->size[0] == 1)) {
                y = 0.0;
                for (i0 = 0; i0 < a->size[1]; i0++) {
                  y += a->data[a->size[0] * i0] * b->data[i0];
                }
              } else {
                b_st.site = &n_emlrtRSI;
                c_st.site = &p_emlrtRSI;
                e_st.site = &q_emlrtRSI;
                if (a->size[1] < 1) {
                  y = 0.0;
                } else {
                  f_st.site = &r_emlrtRSI;
                  n_t = (ptrdiff_t)(a->size[1]);
                  incx_t = (ptrdiff_t)(1);
                  incy_t = (ptrdiff_t)(1);
                  xix0_t = (double *)(&a->data[0]);
                  i0 = b->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &vf_emlrtBCI,
                    &f_st);
                  yiy0_t = (double *)(&b->data[0]);
                  y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
                }
              }

              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 2.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &jf_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &kf_emlrtBCI, sp);
              i0 = dist->size[0];
              i = (int32_T)(affectedParticles->data[pIdx] + 1.0);
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &lf_emlrtBCI, sp);
              i0 = dist->size[1];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &mf_emlrtBCI, sp);
              y /= dist->data[((int32_T)(affectedParticles->data[pIdx] + 2.0) +
                               dist->size[0] * ((int32_T)
                (affectedParticles->data[pIdx] + 1.0) - 1)) - 1] * dist->data
                [((int32_T)(affectedParticles->data[pIdx] + 1.0) + dist->size[0]
                  * ((int32_T)affectedParticles->data[pIdx] - 1)) - 1];
              i0 = r2->size[0] * r2->size[1];
              r2->size[0] = cosTheta0->size[0];
              r2->size[1] = cosTheta0->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)r2, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = cosTheta0->size[0] * cosTheta0->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                r2->data[i0] *= y - cosTheta0->data[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                iv0[i0] = r0->size[i0];
              }

              for (i0 = 0; i0 < 2; i0++) {
                nd_pos[i0] = r2->size[i0];
              }

              emlrtSizeEqCheck2DFastR2012b(iv0, nd_pos, &sb_emlrtECI, sp);
              i0 = force->size[0];
              i = (int32_T)affectedParticles->data[pIdx];
              emlrtDynamicBoundsCheckFastR2012b(i, 1, i0, &uf_emlrtBCI, sp);
              for (i0 = 0; i0 < 3; i0++) {
                i = force->size[1];
                loop_ub = 1 + i0;
                emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, i, &vg_emlrtBCI,
                  sp);
              }

              if (!b5) {
                for (i0 = 0; i0 < 2; i0++) {
                  iv32[i0] = 1 + (i0 << 1);
                }

                b5 = true;
              }

              emlrtSubAssignSizeCheckR2012b(iv32, 2, *(int32_T (*)[2])r0->size,
                2, &hc_emlrtECI, sp);
              i = (int32_T)affectedParticles->data[pIdx];
              i0 = r8->size[0] * r8->size[1];
              r8->size[0] = 1;
              r8->size[1] = r0->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)r8, i0, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = r0->size[1];
              for (i0 = 0; i0 < loop_ub; i0++) {
                r8->data[r8->size[0] * i0] = (r0->data[r0->size[0] * i0] +
                  r1->data[r1->size[0] * i0]) + r2->data[r2->size[0] * i0];
              }

              for (i0 = 0; i0 < 3; i0++) {
                force->data[(i + force->size[0] * i0) - 1] = r8->data[i0];
              }
            }
          }
        }
      }

      pIdx++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    emxFree_real_T(&ld_pos);
    emxFree_real_T(&kd_pos);
    emxFree_real_T(&jd_pos);
    emxFree_real_T(&id_pos);
    emxFree_real_T(&hd_pos);
    emxFree_real_T(&gd_pos);
    emxFree_real_T(&r10);
    emxFree_real_T(&fd_pos);
    emxFree_real_T(&ed_pos);
    emxFree_real_T(&dd_pos);
    emxFree_real_T(&cd_pos);
    emxFree_real_T(&bd_pos);
    emxFree_real_T(&ad_pos);
    emxFree_real_T(&yc_pos);
    emxFree_real_T(&xc_pos);
    emxFree_real_T(&wc_pos);
    emxFree_real_T(&vc_pos);
    emxFree_real_T(&uc_pos);
    emxFree_real_T(&tc_pos);
    emxFree_real_T(&sc_pos);
    emxFree_real_T(&rc_pos);
    emxFree_real_T(&qc_pos);
    emxFree_real_T(&pc_pos);
    emxFree_real_T(&oc_pos);
    emxFree_real_T(&nc_pos);
    emxFree_real_T(&r9);
    emxFree_real_T(&mc_pos);
    emxFree_real_T(&lc_pos);
    emxFree_real_T(&kc_pos);
    emxFree_real_T(&jc_pos);
    emxFree_real_T(&ic_pos);
    emxFree_real_T(&hc_pos);
    emxFree_real_T(&gc_pos);
    emxFree_real_T(&fc_pos);
    emxFree_real_T(&ec_pos);
    emxFree_real_T(&dc_pos);
    emxFree_real_T(&cc_pos);
    emxFree_real_T(&bc_pos);
    emxFree_real_T(&ac_pos);
    emxFree_real_T(&yb_pos);
    emxFree_real_T(&xb_pos);
    emxFree_real_T(&wb_pos);
    emxFree_real_T(&vb_pos);
    emxFree_real_T(&ub_pos);
    emxFree_real_T(&r8);
    emxFree_real_T(&tb_pos);
    emxFree_real_T(&sb_pos);
    emxFree_real_T(&rb_pos);
    emxFree_real_T(&qb_pos);
    emxFree_real_T(&pb_pos);
    emxFree_real_T(&ob_pos);
    emxFree_real_T(&nb_pos);
    emxFree_real_T(&mb_pos);
    emxFree_real_T(&lb_pos);
    emxFree_real_T(&kb_pos);
    emxFree_real_T(&jb_pos);
    emxFree_real_T(&ib_pos);
    emxFree_real_T(&hb_pos);
    emxFree_real_T(&gb_pos);
    emxFree_real_T(&fb_pos);
    emxFree_real_T(&eb_pos);
    emxFree_real_T(&db_pos);
    emxFree_real_T(&cb_pos);
    emxFree_real_T(&bb_pos);
    emxFree_real_T(&ab_pos);
    emxFree_real_T(&y_pos);
    emxFree_real_T(&x_pos);
    emxFree_real_T(&w_pos);
    emxFree_real_T(&v_pos);
    emxFree_real_T(&u_pos);
    emxFree_real_T(&t_pos);
    emxFree_real_T(&s_pos);
    emxFree_real_T(&r_pos);
    emxFree_real_T(&q_pos);
    emxFree_real_T(&p_pos);
    emxFree_real_T(&o_pos);
    emxFree_real_T(&n_pos);
    emxFree_real_T(&m_pos);
    emxFree_real_T(&l_pos);
    emxFree_real_T(&k_pos);
    emxFree_real_T(&j_pos);
    emxFree_real_T(&i_pos);
    emxFree_real_T(&r7);
    emxFree_real_T(&h_pos);
    emxFree_real_T(&r6);
    emxFree_real_T(&r5);
    emxFree_real_T(&g_pos);
    emxFree_real_T(&f_pos);
    emxFree_real_T(&e_pos);
    emxFree_real_T(&d_y);
    emxFree_real_T(&r4);
    emxFree_real_T(&c_y);
    emxFree_real_T(&d_pos);
    emxFree_real_T(&b_y);
    emxFree_real_T(&c_pos);
    emxFree_real_T(&r3);
    emxFree_real_T(&b_pos);
    emxFree_real_T(&b);
    emxFree_real_T(&a);
    emxFree_real_T(&r2);
    emxFree_real_T(&r1);
    emxFree_real_T(&r0);
    i0 = force->size[0] * force->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)force, i0, (int32_T)sizeof(real_T),
                      &e_emlrtRTEI);
    i = force->size[0];
    loop_ub = force->size[1];
    loop_ub *= i;
    for (i0 = 0; i0 < loop_ub; i0++) {
      force->data[i0] *= -bendingConst;
    }
  }

  emxFree_real_T(&cosTheta0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (BendingElasticity.c) */
