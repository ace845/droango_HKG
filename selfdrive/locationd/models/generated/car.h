/******************************************************************************
 *                      Code generated with sympy 1.6.1                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_2096797761860724736);
void inv_err_fun(double *nom_x, double *true_x, double *out_1242177006640040221);
void H_mod_fun(double *state, double *out_839991686011841322);
void f_fun(double *state, double dt, double *out_8968869380993841345);
void F_fun(double *state, double dt, double *out_9066980544323249498);
void h_25(double *state, double *unused, double *out_3799164365426558775);
void H_25(double *state, double *unused, double *out_5870618370489339342);
void h_24(double *state, double *unused, double *out_8968240803861116838);
void H_24(double *state, double *unused, double *out_1590583098504404245);
void h_30(double *state, double *unused, double *out_3956351033777687920);
void H_30(double *state, double *unused, double *out_2962226792271028994);
void h_26(double *state, double *unused, double *out_5025618138229152845);
void H_26(double *state, double *unused, double *out_166025215550130069);
void h_27(double *state, double *unused, double *out_1202508902234286870);
void H_27(double *state, double *unused, double *out_1674644804434403682);
void h_29(double *state, double *unused, double *out_1045322233883157725);
void H_29(double *state, double *unused, double *out_6184457311777053866);
void h_28(double *state, double *unused, double *out_4530281957823404855);
void H_28(double *state, double *unused, double *out_5427249379732090621);
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
void set_mass(double x);

void set_rotational_inertia(double x);

void set_center_to_front(double x);

void set_center_to_rear(double x);

void set_stiffness_front(double x);

void set_stiffness_rear(double x);
