
extern "C"{

double mass;

void set_mass(double x){ mass = x;}

double rotational_inertia;

void set_rotational_inertia(double x){ rotational_inertia = x;}

double center_to_front;

void set_center_to_front(double x){ center_to_front = x;}

double center_to_rear;

void set_center_to_rear(double x){ center_to_rear = x;}

double stiffness_front;

void set_stiffness_front(double x){ stiffness_front = x;}

double stiffness_rear;

void set_stiffness_rear(double x){ stiffness_rear = x;}

}
extern "C" {
#include <math.h>
/******************************************************************************
 *                      Code generated with sympy 1.6.1                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_2096797761860724736) {
   out_2096797761860724736[0] = delta_x[0] + nom_x[0];
   out_2096797761860724736[1] = delta_x[1] + nom_x[1];
   out_2096797761860724736[2] = delta_x[2] + nom_x[2];
   out_2096797761860724736[3] = delta_x[3] + nom_x[3];
   out_2096797761860724736[4] = delta_x[4] + nom_x[4];
   out_2096797761860724736[5] = delta_x[5] + nom_x[5];
   out_2096797761860724736[6] = delta_x[6] + nom_x[6];
   out_2096797761860724736[7] = delta_x[7] + nom_x[7];
}
void inv_err_fun(double *nom_x, double *true_x, double *out_1242177006640040221) {
   out_1242177006640040221[0] = -nom_x[0] + true_x[0];
   out_1242177006640040221[1] = -nom_x[1] + true_x[1];
   out_1242177006640040221[2] = -nom_x[2] + true_x[2];
   out_1242177006640040221[3] = -nom_x[3] + true_x[3];
   out_1242177006640040221[4] = -nom_x[4] + true_x[4];
   out_1242177006640040221[5] = -nom_x[5] + true_x[5];
   out_1242177006640040221[6] = -nom_x[6] + true_x[6];
   out_1242177006640040221[7] = -nom_x[7] + true_x[7];
}
void H_mod_fun(double *state, double *out_839991686011841322) {
   out_839991686011841322[0] = 1.0;
   out_839991686011841322[1] = 0.0;
   out_839991686011841322[2] = 0.0;
   out_839991686011841322[3] = 0.0;
   out_839991686011841322[4] = 0.0;
   out_839991686011841322[5] = 0.0;
   out_839991686011841322[6] = 0.0;
   out_839991686011841322[7] = 0.0;
   out_839991686011841322[8] = 0.0;
   out_839991686011841322[9] = 1.0;
   out_839991686011841322[10] = 0.0;
   out_839991686011841322[11] = 0.0;
   out_839991686011841322[12] = 0.0;
   out_839991686011841322[13] = 0.0;
   out_839991686011841322[14] = 0.0;
   out_839991686011841322[15] = 0.0;
   out_839991686011841322[16] = 0.0;
   out_839991686011841322[17] = 0.0;
   out_839991686011841322[18] = 1.0;
   out_839991686011841322[19] = 0.0;
   out_839991686011841322[20] = 0.0;
   out_839991686011841322[21] = 0.0;
   out_839991686011841322[22] = 0.0;
   out_839991686011841322[23] = 0.0;
   out_839991686011841322[24] = 0.0;
   out_839991686011841322[25] = 0.0;
   out_839991686011841322[26] = 0.0;
   out_839991686011841322[27] = 1.0;
   out_839991686011841322[28] = 0.0;
   out_839991686011841322[29] = 0.0;
   out_839991686011841322[30] = 0.0;
   out_839991686011841322[31] = 0.0;
   out_839991686011841322[32] = 0.0;
   out_839991686011841322[33] = 0.0;
   out_839991686011841322[34] = 0.0;
   out_839991686011841322[35] = 0.0;
   out_839991686011841322[36] = 1.0;
   out_839991686011841322[37] = 0.0;
   out_839991686011841322[38] = 0.0;
   out_839991686011841322[39] = 0.0;
   out_839991686011841322[40] = 0.0;
   out_839991686011841322[41] = 0.0;
   out_839991686011841322[42] = 0.0;
   out_839991686011841322[43] = 0.0;
   out_839991686011841322[44] = 0.0;
   out_839991686011841322[45] = 1.0;
   out_839991686011841322[46] = 0.0;
   out_839991686011841322[47] = 0.0;
   out_839991686011841322[48] = 0.0;
   out_839991686011841322[49] = 0.0;
   out_839991686011841322[50] = 0.0;
   out_839991686011841322[51] = 0.0;
   out_839991686011841322[52] = 0.0;
   out_839991686011841322[53] = 0.0;
   out_839991686011841322[54] = 1.0;
   out_839991686011841322[55] = 0.0;
   out_839991686011841322[56] = 0.0;
   out_839991686011841322[57] = 0.0;
   out_839991686011841322[58] = 0.0;
   out_839991686011841322[59] = 0.0;
   out_839991686011841322[60] = 0.0;
   out_839991686011841322[61] = 0.0;
   out_839991686011841322[62] = 0.0;
   out_839991686011841322[63] = 1.0;
}
void f_fun(double *state, double dt, double *out_8968869380993841345) {
   out_8968869380993841345[0] = state[0];
   out_8968869380993841345[1] = state[1];
   out_8968869380993841345[2] = state[2];
   out_8968869380993841345[3] = state[3];
   out_8968869380993841345[4] = state[4];
   out_8968869380993841345[5] = dt*((-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]))*state[6] + stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*state[1]) + (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*state[4])) + state[5];
   out_8968869380993841345[6] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*state[4])) + state[6];
   out_8968869380993841345[7] = state[7];
}
void F_fun(double *state, double dt, double *out_9066980544323249498) {
   out_9066980544323249498[0] = 1;
   out_9066980544323249498[1] = 0;
   out_9066980544323249498[2] = 0;
   out_9066980544323249498[3] = 0;
   out_9066980544323249498[4] = 0;
   out_9066980544323249498[5] = 0;
   out_9066980544323249498[6] = 0;
   out_9066980544323249498[7] = 0;
   out_9066980544323249498[8] = 0;
   out_9066980544323249498[9] = 1;
   out_9066980544323249498[10] = 0;
   out_9066980544323249498[11] = 0;
   out_9066980544323249498[12] = 0;
   out_9066980544323249498[13] = 0;
   out_9066980544323249498[14] = 0;
   out_9066980544323249498[15] = 0;
   out_9066980544323249498[16] = 0;
   out_9066980544323249498[17] = 0;
   out_9066980544323249498[18] = 1;
   out_9066980544323249498[19] = 0;
   out_9066980544323249498[20] = 0;
   out_9066980544323249498[21] = 0;
   out_9066980544323249498[22] = 0;
   out_9066980544323249498[23] = 0;
   out_9066980544323249498[24] = 0;
   out_9066980544323249498[25] = 0;
   out_9066980544323249498[26] = 0;
   out_9066980544323249498[27] = 1;
   out_9066980544323249498[28] = 0;
   out_9066980544323249498[29] = 0;
   out_9066980544323249498[30] = 0;
   out_9066980544323249498[31] = 0;
   out_9066980544323249498[32] = 0;
   out_9066980544323249498[33] = 0;
   out_9066980544323249498[34] = 0;
   out_9066980544323249498[35] = 0;
   out_9066980544323249498[36] = 1;
   out_9066980544323249498[37] = 0;
   out_9066980544323249498[38] = 0;
   out_9066980544323249498[39] = 0;
   out_9066980544323249498[40] = dt*(stiffness_front*(-state[2] - state[3] + state[7])/(mass*state[1]) + (-stiffness_front - stiffness_rear)*state[5]/(mass*state[4]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[6]/(mass*state[4]));
   out_9066980544323249498[41] = -dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*pow(state[1], 2));
   out_9066980544323249498[42] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_9066980544323249498[43] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_9066980544323249498[44] = dt*((-1 - (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*pow(state[4], 2)))*state[6] - (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*pow(state[4], 2)));
   out_9066980544323249498[45] = dt*(-stiffness_front*state[0] - stiffness_rear*state[0])/(mass*state[4]) + 1;
   out_9066980544323249498[46] = dt*(-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]));
   out_9066980544323249498[47] = dt*stiffness_front*state[0]/(mass*state[1]);
   out_9066980544323249498[48] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front - pow(center_to_rear, 2)*stiffness_rear)*state[6]/(rotational_inertia*state[4]));
   out_9066980544323249498[49] = -center_to_front*dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*pow(state[1], 2));
   out_9066980544323249498[50] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_9066980544323249498[51] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_9066980544323249498[52] = dt*(-(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*pow(state[4], 2)) - (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*pow(state[4], 2)));
   out_9066980544323249498[53] = dt*(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(rotational_inertia*state[4]);
   out_9066980544323249498[54] = dt*(-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])/(rotational_inertia*state[4]) + 1;
   out_9066980544323249498[55] = center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_9066980544323249498[56] = 0;
   out_9066980544323249498[57] = 0;
   out_9066980544323249498[58] = 0;
   out_9066980544323249498[59] = 0;
   out_9066980544323249498[60] = 0;
   out_9066980544323249498[61] = 0;
   out_9066980544323249498[62] = 0;
   out_9066980544323249498[63] = 1;
}
void h_25(double *state, double *unused, double *out_3799164365426558775) {
   out_3799164365426558775[0] = state[6];
}
void H_25(double *state, double *unused, double *out_5870618370489339342) {
   out_5870618370489339342[0] = 0;
   out_5870618370489339342[1] = 0;
   out_5870618370489339342[2] = 0;
   out_5870618370489339342[3] = 0;
   out_5870618370489339342[4] = 0;
   out_5870618370489339342[5] = 0;
   out_5870618370489339342[6] = 1;
   out_5870618370489339342[7] = 0;
}
void h_24(double *state, double *unused, double *out_8968240803861116838) {
   out_8968240803861116838[0] = state[4];
   out_8968240803861116838[1] = state[5];
}
void H_24(double *state, double *unused, double *out_1590583098504404245) {
   out_1590583098504404245[0] = 0;
   out_1590583098504404245[1] = 0;
   out_1590583098504404245[2] = 0;
   out_1590583098504404245[3] = 0;
   out_1590583098504404245[4] = 1;
   out_1590583098504404245[5] = 0;
   out_1590583098504404245[6] = 0;
   out_1590583098504404245[7] = 0;
   out_1590583098504404245[8] = 0;
   out_1590583098504404245[9] = 0;
   out_1590583098504404245[10] = 0;
   out_1590583098504404245[11] = 0;
   out_1590583098504404245[12] = 0;
   out_1590583098504404245[13] = 1;
   out_1590583098504404245[14] = 0;
   out_1590583098504404245[15] = 0;
}
void h_30(double *state, double *unused, double *out_3956351033777687920) {
   out_3956351033777687920[0] = state[4];
}
void H_30(double *state, double *unused, double *out_2962226792271028994) {
   out_2962226792271028994[0] = 0;
   out_2962226792271028994[1] = 0;
   out_2962226792271028994[2] = 0;
   out_2962226792271028994[3] = 0;
   out_2962226792271028994[4] = 1;
   out_2962226792271028994[5] = 0;
   out_2962226792271028994[6] = 0;
   out_2962226792271028994[7] = 0;
}
void h_26(double *state, double *unused, double *out_5025618138229152845) {
   out_5025618138229152845[0] = state[7];
}
void H_26(double *state, double *unused, double *out_166025215550130069) {
   out_166025215550130069[0] = 0;
   out_166025215550130069[1] = 0;
   out_166025215550130069[2] = 0;
   out_166025215550130069[3] = 0;
   out_166025215550130069[4] = 0;
   out_166025215550130069[5] = 0;
   out_166025215550130069[6] = 0;
   out_166025215550130069[7] = 1;
}
void h_27(double *state, double *unused, double *out_1202508902234286870) {
   out_1202508902234286870[0] = state[3];
}
void H_27(double *state, double *unused, double *out_1674644804434403682) {
   out_1674644804434403682[0] = 0;
   out_1674644804434403682[1] = 0;
   out_1674644804434403682[2] = 0;
   out_1674644804434403682[3] = 1;
   out_1674644804434403682[4] = 0;
   out_1674644804434403682[5] = 0;
   out_1674644804434403682[6] = 0;
   out_1674644804434403682[7] = 0;
}
void h_29(double *state, double *unused, double *out_1045322233883157725) {
   out_1045322233883157725[0] = state[1];
}
void H_29(double *state, double *unused, double *out_6184457311777053866) {
   out_6184457311777053866[0] = 0;
   out_6184457311777053866[1] = 1;
   out_6184457311777053866[2] = 0;
   out_6184457311777053866[3] = 0;
   out_6184457311777053866[4] = 0;
   out_6184457311777053866[5] = 0;
   out_6184457311777053866[6] = 0;
   out_6184457311777053866[7] = 0;
}
void h_28(double *state, double *unused, double *out_4530281957823404855) {
   out_4530281957823404855[0] = state[5];
   out_4530281957823404855[1] = state[6];
}
void H_28(double *state, double *unused, double *out_5427249379732090621) {
   out_5427249379732090621[0] = 0;
   out_5427249379732090621[1] = 0;
   out_5427249379732090621[2] = 0;
   out_5427249379732090621[3] = 0;
   out_5427249379732090621[4] = 0;
   out_5427249379732090621[5] = 1;
   out_5427249379732090621[6] = 0;
   out_5427249379732090621[7] = 0;
   out_5427249379732090621[8] = 0;
   out_5427249379732090621[9] = 0;
   out_5427249379732090621[10] = 0;
   out_5427249379732090621[11] = 0;
   out_5427249379732090621[12] = 0;
   out_5427249379732090621[13] = 0;
   out_5427249379732090621[14] = 1;
   out_5427249379732090621[15] = 0;
}
}

extern "C"{
#define DIM 8
#define EDIM 8
#define MEDIM 8
typedef void (*Hfun)(double *, double *, double *);

void predict(double *x, double *P, double *Q, double dt);
const static double MAHA_THRESH_25 = 3.841459;
void update_25(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_24 = 5.991465;
void update_24(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_30 = 3.841459;
void update_30(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_26 = 3.841459;
void update_26(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_27 = 3.841459;
void update_27(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_29 = 3.841459;
void update_29(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_28 = 5.991465;
void update_28(double *, double *, double *, double *, double *);
}

#include <eigen3/Eigen/Dense>
#include <iostream>

typedef Eigen::Matrix<double, DIM, DIM, Eigen::RowMajor> DDM;
typedef Eigen::Matrix<double, EDIM, EDIM, Eigen::RowMajor> EEM;
typedef Eigen::Matrix<double, DIM, EDIM, Eigen::RowMajor> DEM;

void predict(double *in_x, double *in_P, double *in_Q, double dt) {
  typedef Eigen::Matrix<double, MEDIM, MEDIM, Eigen::RowMajor> RRM;

  double nx[DIM] = {0};
  double in_F[EDIM*EDIM] = {0};

  // functions from sympy
  f_fun(in_x, dt, nx);
  F_fun(in_x, dt, in_F);


  EEM F(in_F);
  EEM P(in_P);
  EEM Q(in_Q);

  RRM F_main = F.topLeftCorner(MEDIM, MEDIM);
  P.topLeftCorner(MEDIM, MEDIM) = (F_main * P.topLeftCorner(MEDIM, MEDIM)) * F_main.transpose();
  P.topRightCorner(MEDIM, EDIM - MEDIM) = F_main * P.topRightCorner(MEDIM, EDIM - MEDIM);
  P.bottomLeftCorner(EDIM - MEDIM, MEDIM) = P.bottomLeftCorner(EDIM - MEDIM, MEDIM) * F_main.transpose();

  P = P + dt*Q;

  // copy out state
  memcpy(in_x, nx, DIM * sizeof(double));
  memcpy(in_P, P.data(), EDIM * EDIM * sizeof(double));
}

// note: extra_args dim only correct when null space projecting
// otherwise 1
template <int ZDIM, int EADIM, bool MAHA_TEST>
void update(double *in_x, double *in_P, Hfun h_fun, Hfun H_fun, Hfun Hea_fun, double *in_z, double *in_R, double *in_ea, double MAHA_THRESHOLD) {
  typedef Eigen::Matrix<double, ZDIM, ZDIM, Eigen::RowMajor> ZZM;
  typedef Eigen::Matrix<double, ZDIM, DIM, Eigen::RowMajor> ZDM;
  typedef Eigen::Matrix<double, Eigen::Dynamic, EDIM, Eigen::RowMajor> XEM;
  //typedef Eigen::Matrix<double, EDIM, ZDIM, Eigen::RowMajor> EZM;
  typedef Eigen::Matrix<double, Eigen::Dynamic, 1> X1M;
  typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> XXM;

  double in_hx[ZDIM] = {0};
  double in_H[ZDIM * DIM] = {0};
  double in_H_mod[EDIM * DIM] = {0};
  double delta_x[EDIM] = {0};
  double x_new[DIM] = {0};


  // state x, P
  Eigen::Matrix<double, ZDIM, 1> z(in_z);
  EEM P(in_P);
  ZZM pre_R(in_R);

  // functions from sympy
  h_fun(in_x, in_ea, in_hx);
  H_fun(in_x, in_ea, in_H);
  ZDM pre_H(in_H);

  // get y (y = z - hx)
  Eigen::Matrix<double, ZDIM, 1> pre_y(in_hx); pre_y = z - pre_y;
  X1M y; XXM H; XXM R;
  if (Hea_fun){
    typedef Eigen::Matrix<double, ZDIM, EADIM, Eigen::RowMajor> ZAM;
    double in_Hea[ZDIM * EADIM] = {0};
    Hea_fun(in_x, in_ea, in_Hea);
    ZAM Hea(in_Hea);
    XXM A = Hea.transpose().fullPivLu().kernel();


    y = A.transpose() * pre_y;
    H = A.transpose() * pre_H;
    R = A.transpose() * pre_R * A;
  } else {
    y = pre_y;
    H = pre_H;
    R = pre_R;
  }
  // get modified H
  H_mod_fun(in_x, in_H_mod);
  DEM H_mod(in_H_mod);
  XEM H_err = H * H_mod;

  // Do mahalobis distance test
  if (MAHA_TEST){
    XXM a = (H_err * P * H_err.transpose() + R).inverse();
    double maha_dist = y.transpose() * a * y;
    if (maha_dist > MAHA_THRESHOLD){
      R = 1.0e16 * R;
    }
  }

  // Outlier resilient weighting
  double weight = 1;//(1.5)/(1 + y.squaredNorm()/R.sum());

  // kalman gains and I_KH
  XXM S = ((H_err * P) * H_err.transpose()) + R/weight;
  XEM KT = S.fullPivLu().solve(H_err * P.transpose());
  //EZM K = KT.transpose(); TODO: WHY DOES THIS NOT COMPILE?
  //EZM K = S.fullPivLu().solve(H_err * P.transpose()).transpose();
  //std::cout << "Here is the matrix rot:\n" << K << std::endl;
  EEM I_KH = Eigen::Matrix<double, EDIM, EDIM>::Identity() - (KT.transpose() * H_err);

  // update state by injecting dx
  Eigen::Matrix<double, EDIM, 1> dx(delta_x);
  dx  = (KT.transpose() * y);
  memcpy(delta_x, dx.data(), EDIM * sizeof(double));
  err_fun(in_x, delta_x, x_new);
  Eigen::Matrix<double, DIM, 1> x(x_new);

  // update cov
  P = ((I_KH * P) * I_KH.transpose()) + ((KT.transpose() * R) * KT);

  // copy out state
  memcpy(in_x, x.data(), DIM * sizeof(double));
  memcpy(in_P, P.data(), EDIM * EDIM * sizeof(double));
  memcpy(in_z, y.data(), y.rows() * sizeof(double));
}



extern "C"{

      void update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_25, H_25, NULL, in_z, in_R, in_ea, MAHA_THRESH_25);
      }
    
      void update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<2,3,0>(in_x, in_P, h_24, H_24, NULL, in_z, in_R, in_ea, MAHA_THRESH_24);
      }
    
      void update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_30, H_30, NULL, in_z, in_R, in_ea, MAHA_THRESH_30);
      }
    
      void update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_26, H_26, NULL, in_z, in_R, in_ea, MAHA_THRESH_26);
      }
    
      void update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_27, H_27, NULL, in_z, in_R, in_ea, MAHA_THRESH_27);
      }
    
      void update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_29, H_29, NULL, in_z, in_R, in_ea, MAHA_THRESH_29);
      }
    
      void update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<2,3,0>(in_x, in_P, h_28, H_28, NULL, in_z, in_R, in_ea, MAHA_THRESH_28);
      }
    
}
