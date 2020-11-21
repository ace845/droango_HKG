/******************************************************************************
 *                      Code generated with sympy 1.6.1                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_6246294893384355526);
void inv_err_fun(double *nom_x, double *true_x, double *out_8775849645493930010);
void H_mod_fun(double *state, double *out_9211103130789629103);
void f_fun(double *state, double dt, double *out_8004420923742552556);
void F_fun(double *state, double dt, double *out_7012479932737411435);
void h_3(double *state, double *unused, double *out_1621068791232358754);
void H_3(double *state, double *unused, double *out_9087367236554766090);
void h_4(double *state, double *unused, double *out_597860647450405187);
void H_4(double *state, double *unused, double *out_5680878261336214082);
void h_9(double *state, double *unused, double *out_2010742588353096871);
void H_9(double *state, double *unused, double *out_8003383805207070052);
void h_10(double *state, double *unused, double *out_2606838861158064797);
void H_10(double *state, double *unused, double *out_1935430786993050325);
void h_12(double *state, double *unused, double *out_5034429090909953958);
void H_12(double *state, double *unused, double *out_7787433773075423651);
void h_31(double *state, double *unused, double *out_8388695514356242668);
void H_31(double *state, double *unused, double *out_5112343997932003830);
void h_32(double *state, double *unused, double *out_6042303588509071481);
void H_32(double *state, double *unused, double *out_587982548323242715);
void h_13(double *state, double *unused, double *out_2023223870387151469);
void H_13(double *state, double *unused, double *out_6794622663981775957);
void h_14(double *state, double *unused, double *out_2010742588353096871);
void H_14(double *state, double *unused, double *out_8003383805207070052);
void h_19(double *state, double *unused, double *out_8221725318987855363);
void H_19(double *state, double *unused, double *out_6010680417400050383);
#define DIM 23
#define EDIM 22
#define MEDIM 22
typedef void (*Hfun)(double *, double *, double *);

void predict(double *x, double *P, double *Q, double dt);
const static double MAHA_THRESH_3 = 3.841459;
void update_3(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_4 = 7.814728;
void update_4(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_9 = 7.814728;
void update_9(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_10 = 7.814728;
void update_10(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_12 = 7.814728;
void update_12(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_31 = 7.814728;
void update_31(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_32 = 9.487729;
void update_32(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_13 = 7.814728;
void update_13(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_14 = 7.814728;
void update_14(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_19 = 7.814728;
void update_19(double *, double *, double *, double *, double *);