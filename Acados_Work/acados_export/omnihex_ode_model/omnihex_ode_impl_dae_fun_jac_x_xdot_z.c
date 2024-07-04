/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) omnihex_ode_impl_dae_fun_jac_x_xdot_z_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[23] = {19, 1, 0, 19, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
static const casadi_int casadi_s1[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s2[3] = {0, 0, 0};
static const casadi_int casadi_s3[118] = {19, 19, 0, 0, 0, 0, 9, 18, 27, 36, 41, 46, 51, 60, 69, 78, 82, 86, 87, 90, 93, 96, 0, 1, 2, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 7, 8, 9, 0, 1, 2, 8, 9, 0, 1, 2, 7, 9, 0, 1, 2, 7, 8, 3, 4, 5, 6, 8, 9, 10, 11, 12, 3, 4, 5, 6, 7, 9, 10, 11, 12, 3, 4, 5, 6, 7, 8, 10, 11, 12, 7, 10, 11, 12, 8, 10, 11, 12, 9, 10, 11, 12, 10, 11, 12, 10, 11, 12};
static const casadi_int casadi_s4[41] = {19, 19, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
static const casadi_int casadi_s5[3] = {19, 0, 0};

/* omnihex_ode_impl_dae_fun_jac_x_xdot_z:(i0[19],i1[19],i2[6],i3[],i4[],i5[])->(o0[19],o1[19x19,96nz],o2[19x19,19nz],o3[19x0]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a8, a9;
  a0=arg[1]? arg[1][0] : 0;
  a1=arg[0]? arg[0][4] : 0;
  a2=arg[0]? arg[0][7] : 0;
  a3=(a1*a2);
  a4=arg[0]? arg[0][5] : 0;
  a5=arg[0]? arg[0][8] : 0;
  a6=(a4*a5);
  a3=(a3+a6);
  a6=arg[0]? arg[0][6] : 0;
  a7=arg[0]? arg[0][9] : 0;
  a8=(a6*a7);
  a3=(a3+a8);
  a8=arg[0]? arg[0][3] : 0;
  a9=casadi_sq(a8);
  a10=casadi_sq(a1);
  a9=(a9+a10);
  a10=casadi_sq(a4);
  a9=(a9+a10);
  a10=casadi_sq(a6);
  a9=(a9+a10);
  a10=(a1/a9);
  a11=(a3*a10);
  a12=(a8/a9);
  a13=(a8*a2);
  a14=(a4*a7);
  a15=(a6*a5);
  a14=(a14-a15);
  a13=(a13+a14);
  a14=(a12*a13);
  a11=(a11+a14);
  a14=(a8*a7);
  a15=(a1*a5);
  a16=(a4*a2);
  a15=(a15-a16);
  a14=(a14+a15);
  a15=(a4/a9);
  a16=(a14*a15);
  a17=(a8*a5);
  a18=(a6*a2);
  a19=(a1*a7);
  a18=(a18-a19);
  a17=(a17+a18);
  a18=(a6/a9);
  a19=(a17*a18);
  a16=(a16-a19);
  a11=(a11+a16);
  a0=(a0-a11);
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[1]? arg[1][1] : 0;
  a11=(a3*a15);
  a16=(a12*a17);
  a11=(a11+a16);
  a16=(a13*a18);
  a19=(a14*a10);
  a16=(a16-a19);
  a11=(a11+a16);
  a0=(a0-a11);
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[1]? arg[1][2] : 0;
  a11=(a3*a18);
  a16=(a12*a14);
  a11=(a11+a16);
  a16=(a17*a10);
  a19=(a13*a15);
  a16=(a16-a19);
  a11=(a11+a16);
  a0=(a0-a11);
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[1]? arg[1][3] : 0;
  a11=arg[0]? arg[0][10] : 0;
  a16=(a1*a11);
  a19=arg[0]? arg[0][11] : 0;
  a20=(a4*a19);
  a16=(a16+a20);
  a20=arg[0]? arg[0][12] : 0;
  a21=(a6*a20);
  a16=(a16+a21);
  a21=2.;
  a16=(a16/a21);
  a0=(a0+a16);
  if (res[0]!=0) res[0][3]=a0;
  a0=arg[1]? arg[1][4] : 0;
  a16=(a8*a11);
  a22=(a4*a20);
  a23=(a6*a19);
  a22=(a22-a23);
  a16=(a16+a22);
  a16=(a16/a21);
  a0=(a0-a16);
  if (res[0]!=0) res[0][4]=a0;
  a0=arg[1]? arg[1][5] : 0;
  a16=(a8*a19);
  a22=(a6*a11);
  a23=(a1*a20);
  a22=(a22-a23);
  a16=(a16+a22);
  a16=(a16/a21);
  a0=(a0-a16);
  if (res[0]!=0) res[0][5]=a0;
  a0=arg[1]? arg[1][6] : 0;
  a16=(a8*a20);
  a22=(a1*a19);
  a23=(a4*a11);
  a22=(a22-a23);
  a16=(a16+a22);
  a16=(a16/a21);
  a0=(a0-a16);
  if (res[0]!=0) res[0][6]=a0;
  a0=arg[1]? arg[1][7] : 0;
  a16=arg[0]? arg[0][13] : 0;
  a21=4.;
  a22=(a16/a21);
  a23=9.8000000000000007e+00;
  a24=casadi_sq(a8);
  a25=casadi_sq(a1);
  a24=(a24+a25);
  a25=casadi_sq(a4);
  a24=(a24+a25);
  a25=casadi_sq(a6);
  a24=(a24+a25);
  a25=(a6/a24);
  a26=(a23*a25);
  a27=(a1/a24);
  a28=(a8/a24);
  a29=casadi_sq(a28);
  a30=casadi_sq(a27);
  a29=(a29+a30);
  a30=(a4/a24);
  a31=casadi_sq(a30);
  a29=(a29+a31);
  a31=casadi_sq(a25);
  a29=(a29+a31);
  a31=(a27/a29);
  a32=(a26*a31);
  a33=(a28/a29);
  a34=(a23*a30);
  a35=(a33*a34);
  a32=(a32-a35);
  a35=(a23*a27);
  a36=(a25/a29);
  a37=(a35*a36);
  a38=(a23*a28);
  a39=(a30/a29);
  a40=(a38*a39);
  a37=(a37-a40);
  a32=(a32+a37);
  a22=(a22+a32);
  a32=(a19*a7);
  a37=(a20*a5);
  a32=(a32-a37);
  a22=(a22-a32);
  a0=(a0-a22);
  if (res[0]!=0) res[0][7]=a0;
  a0=arg[1]? arg[1][8] : 0;
  a22=arg[0]? arg[0][14] : 0;
  a32=(a22/a21);
  a37=(a26*a39);
  a40=(a33*a35);
  a37=(a37+a40);
  a40=(a38*a31);
  a41=(a34*a36);
  a40=(a40+a41);
  a37=(a37+a40);
  a32=(a32+a37);
  a37=(a20*a2);
  a40=(a11*a7);
  a37=(a37-a40);
  a32=(a32-a37);
  a0=(a0-a32);
  if (res[0]!=0) res[0][8]=a0;
  a0=arg[1]? arg[1][9] : 0;
  a32=arg[0]? arg[0][15] : 0;
  a32=(a32/a21);
  a21=(a26*a36);
  a37=(a33*a38);
  a21=(a21+a37);
  a37=(a34*a39);
  a40=(a35*a31);
  a37=(a37+a40);
  a21=(a21-a37);
  a32=(a32+a21);
  a21=(a11*a5);
  a37=(a19*a2);
  a21=(a21-a37);
  a32=(a32-a21);
  a0=(a0-a32);
  if (res[0]!=0) res[0][9]=a0;
  a0=arg[1]? arg[1][10] : 0;
  a32=1.1902282157253749e+01;
  a21=arg[0]? arg[0][16] : 0;
  a37=2.9999999999999999e-02;
  a22=(a37*a22);
  a21=(a21-a22);
  a22=1.4163104999999999e-04;
  a40=(a22*a11);
  a41=-9.3637199999999995e-06;
  a42=(a41*a19);
  a40=(a40+a42);
  a42=1.4273598018000000e-01;
  a43=(a42*a20);
  a40=(a40+a43);
  a43=(a19*a40);
  a44=-4.4513500000000002e-06;
  a45=(a44*a11);
  a46=8.1696899919999996e-02;
  a47=(a46*a19);
  a45=(a45+a47);
  a47=(a41*a20);
  a45=(a45+a47);
  a47=(a20*a45);
  a43=(a43-a47);
  a21=(a21-a43);
  a43=(a32*a21);
  a47=6.4715597816703062e-04;
  a48=arg[0]? arg[0][17] : 0;
  a37=(a37*a16);
  a48=(a48+a37);
  a37=8.4017641520000005e-02;
  a16=(a37*a11);
  a49=(a44*a19);
  a16=(a16+a49);
  a49=(a22*a20);
  a16=(a16+a49);
  a49=(a20*a16);
  a50=(a11*a40);
  a49=(a49-a50);
  a48=(a48-a49);
  a49=(a47*a48);
  a43=(a43+a49);
  a49=-1.1810103222851866e-02;
  a50=arg[0]? arg[0][18] : 0;
  a51=(a11*a45);
  a52=(a19*a16);
  a51=(a51-a52);
  a50=(a50-a51);
  a51=(a49*a50);
  a43=(a43+a51);
  a0=(a0-a43);
  if (res[0]!=0) res[0][10]=a0;
  a0=arg[1]? arg[1][11] : 0;
  a43=(a47*a21);
  a51=1.2240366664743643e+01;
  a52=(a51*a48);
  a43=(a43+a52);
  a52=8.0234646247476921e-04;
  a53=(a52*a50);
  a43=(a43+a53);
  a0=(a0-a43);
  if (res[0]!=0) res[0][11]=a0;
  a0=arg[1]? arg[1][12] : 0;
  a21=(a49*a21);
  a48=(a52*a48);
  a21=(a21+a48);
  a48=7.0059537821451618e+00;
  a50=(a48*a50);
  a21=(a21+a50);
  a0=(a0-a21);
  if (res[0]!=0) res[0][12]=a0;
  a0=arg[1]? arg[1][13] : 0;
  a21=arg[2]? arg[2][0] : 0;
  a0=(a0-a21);
  if (res[0]!=0) res[0][13]=a0;
  a0=arg[1]? arg[1][14] : 0;
  a21=arg[2]? arg[2][1] : 0;
  a0=(a0-a21);
  if (res[0]!=0) res[0][14]=a0;
  a0=arg[1]? arg[1][15] : 0;
  a21=arg[2]? arg[2][2] : 0;
  a0=(a0-a21);
  if (res[0]!=0) res[0][15]=a0;
  a0=arg[1]? arg[1][16] : 0;
  a21=arg[2]? arg[2][3] : 0;
  a0=(a0-a21);
  if (res[0]!=0) res[0][16]=a0;
  a0=arg[1]? arg[1][17] : 0;
  a21=arg[2]? arg[2][4] : 0;
  a0=(a0-a21);
  if (res[0]!=0) res[0][17]=a0;
  a0=arg[1]? arg[1][18] : 0;
  a21=arg[2]? arg[2][5] : 0;
  a0=(a0-a21);
  if (res[0]!=0) res[0][18]=a0;
  a0=(1./a9);
  a21=(a12/a9);
  a50=(a8+a8);
  a43=(a21*a50);
  a0=(a0-a43);
  a43=(a13*a0);
  a53=(a12*a2);
  a43=(a43+a53);
  a53=(a10/a9);
  a54=(a53*a50);
  a55=(a3*a54);
  a43=(a43-a55);
  a55=(a15*a7);
  a56=(a15/a9);
  a57=(a56*a50);
  a58=(a14*a57);
  a55=(a55-a58);
  a58=(a18*a5);
  a59=(a18/a9);
  a50=(a59*a50);
  a60=(a17*a50);
  a58=(a58-a60);
  a55=(a55-a58);
  a43=(a43+a55);
  a43=(-a43);
  if (res[1]!=0) res[1][0]=a43;
  a43=(a17*a0);
  a55=(a12*a5);
  a43=(a43+a55);
  a55=(a3*a57);
  a43=(a43-a55);
  a55=(a18*a2);
  a58=(a13*a50);
  a55=(a55-a58);
  a58=(a10*a7);
  a60=(a14*a54);
  a58=(a58-a60);
  a55=(a55-a58);
  a43=(a43+a55);
  a43=(-a43);
  if (res[1]!=0) res[1][1]=a43;
  a0=(a14*a0);
  a43=(a12*a7);
  a0=(a0+a43);
  a50=(a3*a50);
  a0=(a0-a50);
  a50=(a10*a5);
  a54=(a17*a54);
  a50=(a50-a54);
  a54=(a15*a2);
  a57=(a13*a57);
  a54=(a54-a57);
  a50=(a50-a54);
  a0=(a0+a50);
  a0=(-a0);
  if (res[1]!=0) res[1][2]=a0;
  a0=5.0000000000000000e-01;
  a50=(a0*a11);
  a50=(-a50);
  if (res[1]!=0) res[1][3]=a50;
  a50=(a0*a19);
  a50=(-a50);
  if (res[1]!=0) res[1][4]=a50;
  a50=(a0*a20);
  a50=(-a50);
  if (res[1]!=0) res[1][5]=a50;
  a50=(a25/a24);
  a54=(a8+a8);
  a57=(a50*a54);
  a43=(a23*a57);
  a55=(a31*a43);
  a58=(a27/a24);
  a60=(a58*a54);
  a61=(a60/a29);
  a62=(a31/a29);
  a63=(a28+a28);
  a64=(1./a24);
  a28=(a28/a24);
  a65=(a28*a54);
  a64=(a64-a65);
  a65=(a63*a64);
  a27=(a27+a27);
  a66=(a27*a60);
  a65=(a65-a66);
  a66=(a30+a30);
  a30=(a30/a24);
  a54=(a30*a54);
  a67=(a66*a54);
  a65=(a65-a67);
  a25=(a25+a25);
  a67=(a25*a57);
  a65=(a65-a67);
  a67=(a62*a65);
  a61=(a61+a67);
  a67=(a26*a61);
  a55=(a55+a67);
  a67=(a64/a29);
  a68=(a33/a29);
  a69=(a68*a65);
  a67=(a67-a69);
  a69=(a34*a67);
  a70=(a23*a54);
  a71=(a33*a70);
  a69=(a69-a71);
  a55=(a55+a69);
  a60=(a23*a60);
  a69=(a36*a60);
  a57=(a57/a29);
  a71=(a36/a29);
  a72=(a71*a65);
  a57=(a57+a72);
  a72=(a35*a57);
  a69=(a69+a72);
  a64=(a23*a64);
  a72=(a39*a64);
  a54=(a54/a29);
  a73=(a39/a29);
  a65=(a73*a65);
  a54=(a54+a65);
  a65=(a38*a54);
  a72=(a72-a65);
  a69=(a69+a72);
  a55=(a55+a69);
  if (res[1]!=0) res[1][6]=a55;
  a55=(a35*a67);
  a69=(a33*a60);
  a55=(a55-a69);
  a69=(a39*a43);
  a72=(a26*a54);
  a69=(a69+a72);
  a55=(a55-a69);
  a69=(a31*a64);
  a72=(a38*a61);
  a69=(a69-a72);
  a72=(a36*a70);
  a65=(a34*a57);
  a72=(a72+a65);
  a69=(a69-a72);
  a55=(a55+a69);
  a55=(-a55);
  if (res[1]!=0) res[1][7]=a55;
  a67=(a38*a67);
  a64=(a33*a64);
  a67=(a67+a64);
  a43=(a36*a43);
  a57=(a26*a57);
  a43=(a43+a57);
  a67=(a67-a43);
  a70=(a39*a70);
  a54=(a34*a54);
  a70=(a70+a54);
  a60=(a31*a60);
  a61=(a35*a61);
  a60=(a60+a61);
  a70=(a70+a60);
  a67=(a67+a70);
  a67=(-a67);
  if (res[1]!=0) res[1][8]=a67;
  a67=(a10*a2);
  a70=(1./a9);
  a60=(a1+a1);
  a61=(a53*a60);
  a70=(a70-a61);
  a61=(a3*a70);
  a67=(a67+a61);
  a61=(a21*a60);
  a54=(a13*a61);
  a67=(a67-a54);
  a54=(a15*a5);
  a43=(a56*a60);
  a57=(a14*a43);
  a54=(a54-a57);
  a57=(a18*a7);
  a60=(a59*a60);
  a64=(a17*a60);
  a57=(a57+a64);
  a54=(a54+a57);
  a67=(a67+a54);
  a67=(-a67);
  if (res[1]!=0) res[1][9]=a67;
  a67=(a15*a2);
  a54=(a3*a43);
  a67=(a67-a54);
  a54=(a17*a61);
  a57=(a12*a7);
  a54=(a54+a57);
  a67=(a67-a54);
  a54=(a13*a60);
  a57=(a10*a5);
  a64=(a14*a70);
  a57=(a57+a64);
  a54=(a54+a57);
  a67=(a67-a54);
  a67=(-a67);
  if (res[1]!=0) res[1][10]=a67;
  a67=(a18*a2);
  a60=(a3*a60);
  a67=(a67-a60);
  a60=(a12*a5);
  a61=(a14*a61);
  a60=(a60-a61);
  a67=(a67+a60);
  a70=(a17*a70);
  a60=(a10*a7);
  a70=(a70-a60);
  a43=(a13*a43);
  a70=(a70+a43);
  a67=(a67+a70);
  a67=(-a67);
  if (res[1]!=0) res[1][11]=a67;
  a67=(a0*a11);
  if (res[1]!=0) res[1][12]=a67;
  a67=(a0*a20);
  if (res[1]!=0) res[1][13]=a67;
  a67=(a0*a19);
  a67=(-a67);
  if (res[1]!=0) res[1][14]=a67;
  a67=(1./a24);
  a70=(a1+a1);
  a43=(a58*a70);
  a67=(a67-a43);
  a43=(a67/a29);
  a60=(a27*a67);
  a61=(a28*a70);
  a54=(a63*a61);
  a60=(a60-a54);
  a54=(a30*a70);
  a57=(a66*a54);
  a60=(a60-a57);
  a70=(a50*a70);
  a57=(a25*a70);
  a60=(a60-a57);
  a57=(a62*a60);
  a43=(a43-a57);
  a57=(a26*a43);
  a64=(a23*a70);
  a55=(a31*a64);
  a57=(a57-a55);
  a55=(a61/a29);
  a69=(a68*a60);
  a55=(a55+a69);
  a69=(a34*a55);
  a72=(a23*a54);
  a65=(a33*a72);
  a69=(a69+a65);
  a57=(a57+a69);
  a67=(a23*a67);
  a69=(a36*a67);
  a70=(a70/a29);
  a65=(a71*a60);
  a70=(a70+a65);
  a65=(a35*a70);
  a69=(a69-a65);
  a61=(a23*a61);
  a65=(a39*a61);
  a54=(a54/a29);
  a60=(a73*a60);
  a54=(a54+a60);
  a60=(a38*a54);
  a65=(a65+a60);
  a69=(a69+a65);
  a57=(a57+a69);
  a57=(-a57);
  if (res[1]!=0) res[1][15]=a57;
  a57=(a33*a67);
  a69=(a35*a55);
  a57=(a57-a69);
  a69=(a39*a64);
  a65=(a26*a54);
  a69=(a69+a65);
  a57=(a57-a69);
  a69=(a38*a43);
  a65=(a31*a61);
  a69=(a69-a65);
  a65=(a36*a72);
  a60=(a34*a70);
  a65=(a65+a60);
  a69=(a69-a65);
  a57=(a57+a69);
  a57=(-a57);
  if (res[1]!=0) res[1][16]=a57;
  a64=(a36*a64);
  a70=(a26*a70);
  a64=(a64+a70);
  a55=(a38*a55);
  a61=(a33*a61);
  a55=(a55+a61);
  a64=(a64+a55);
  a67=(a31*a67);
  a43=(a35*a43);
  a67=(a67+a43);
  a72=(a39*a72);
  a54=(a34*a54);
  a72=(a72+a54);
  a67=(a67-a72);
  a64=(a64+a67);
  if (res[1]!=0) res[1][17]=a64;
  a64=(a10*a5);
  a67=(a4+a4);
  a72=(a53*a67);
  a54=(a3*a72);
  a64=(a64-a54);
  a54=(a12*a7);
  a43=(a21*a67);
  a55=(a13*a43);
  a54=(a54-a55);
  a64=(a64+a54);
  a54=(1./a9);
  a55=(a56*a67);
  a54=(a54-a55);
  a55=(a14*a54);
  a61=(a15*a2);
  a55=(a55-a61);
  a67=(a59*a67);
  a61=(a17*a67);
  a55=(a55+a61);
  a64=(a64+a55);
  a64=(-a64);
  if (res[1]!=0) res[1][18]=a64;
  a64=(a15*a5);
  a55=(a3*a54);
  a64=(a64+a55);
  a55=(a17*a43);
  a64=(a64-a55);
  a55=(a18*a7);
  a61=(a13*a67);
  a55=(a55-a61);
  a61=(a10*a2);
  a70=(a14*a72);
  a61=(a61+a70);
  a55=(a55+a61);
  a64=(a64+a55);
  a64=(-a64);
  if (res[1]!=0) res[1][19]=a64;
  a64=(a18*a5);
  a67=(a3*a67);
  a64=(a64-a67);
  a43=(a14*a43);
  a67=(a12*a2);
  a43=(a43+a67);
  a64=(a64-a43);
  a72=(a17*a72);
  a43=(a15*a7);
  a54=(a13*a54);
  a43=(a43+a54);
  a72=(a72+a43);
  a64=(a64-a72);
  a64=(-a64);
  if (res[1]!=0) res[1][20]=a64;
  a64=(a0*a19);
  if (res[1]!=0) res[1][21]=a64;
  a64=(a0*a20);
  a64=(-a64);
  if (res[1]!=0) res[1][22]=a64;
  a64=(a0*a11);
  if (res[1]!=0) res[1][23]=a64;
  a64=(a4+a4);
  a72=(a50*a64);
  a43=(a23*a72);
  a54=(a31*a43);
  a67=(a58*a64);
  a55=(a67/a29);
  a61=(1./a24);
  a70=(a30*a64);
  a61=(a61-a70);
  a70=(a66*a61);
  a64=(a28*a64);
  a57=(a63*a64);
  a69=(a27*a67);
  a57=(a57+a69);
  a70=(a70-a57);
  a57=(a25*a72);
  a70=(a70-a57);
  a57=(a62*a70);
  a55=(a55+a57);
  a57=(a26*a55);
  a54=(a54+a57);
  a57=(a23*a61);
  a69=(a33*a57);
  a65=(a64/a29);
  a60=(a68*a70);
  a65=(a65+a60);
  a60=(a34*a65);
  a69=(a69-a60);
  a54=(a54+a69);
  a67=(a23*a67);
  a69=(a36*a67);
  a72=(a72/a29);
  a60=(a71*a70);
  a72=(a72+a60);
  a60=(a35*a72);
  a69=(a69+a60);
  a61=(a61/a29);
  a70=(a73*a70);
  a61=(a61-a70);
  a70=(a38*a61);
  a64=(a23*a64);
  a60=(a39*a64);
  a70=(a70-a60);
  a69=(a69+a70);
  a54=(a54+a69);
  if (res[1]!=0) res[1][24]=a54;
  a54=(a26*a61);
  a69=(a39*a43);
  a54=(a54-a69);
  a69=(a35*a65);
  a70=(a33*a67);
  a69=(a69+a70);
  a54=(a54-a69);
  a69=(a36*a57);
  a70=(a34*a72);
  a69=(a69-a70);
  a70=(a31*a64);
  a60=(a38*a55);
  a70=(a70+a60);
  a69=(a69-a70);
  a54=(a54+a69);
  a54=(-a54);
  if (res[1]!=0) res[1][25]=a54;
  a43=(a36*a43);
  a72=(a26*a72);
  a43=(a43+a72);
  a65=(a38*a65);
  a64=(a33*a64);
  a65=(a65+a64);
  a43=(a43+a65);
  a57=(a39*a57);
  a61=(a34*a61);
  a57=(a57+a61);
  a67=(a31*a67);
  a55=(a35*a55);
  a67=(a67+a55);
  a57=(a57-a67);
  a43=(a43+a57);
  if (res[1]!=0) res[1][26]=a43;
  a43=(a10*a7);
  a57=(a6+a6);
  a53=(a53*a57);
  a67=(a3*a53);
  a43=(a43-a67);
  a21=(a21*a57);
  a67=(a13*a21);
  a55=(a12*a5);
  a67=(a67+a55);
  a43=(a43-a67);
  a56=(a56*a57);
  a67=(a14*a56);
  a55=(a18*a2);
  a9=(1./a9);
  a59=(a59*a57);
  a9=(a9-a59);
  a59=(a17*a9);
  a55=(a55+a59);
  a67=(a67+a55);
  a43=(a43-a67);
  a43=(-a43);
  if (res[1]!=0) res[1][27]=a43;
  a43=(a15*a7);
  a67=(a3*a56);
  a43=(a43-a67);
  a67=(a12*a2);
  a55=(a17*a21);
  a67=(a67-a55);
  a43=(a43+a67);
  a67=(a13*a9);
  a55=(a18*a5);
  a67=(a67-a55);
  a55=(a14*a53);
  a67=(a67+a55);
  a43=(a43+a67);
  a43=(-a43);
  if (res[1]!=0) res[1][28]=a43;
  a43=(a18*a7);
  a3=(a3*a9);
  a43=(a43+a3);
  a14=(a14*a21);
  a43=(a43-a14);
  a14=(a10*a2);
  a17=(a17*a53);
  a14=(a14-a17);
  a17=(a15*a5);
  a13=(a13*a56);
  a17=(a17+a13);
  a14=(a14+a17);
  a43=(a43+a14);
  a43=(-a43);
  if (res[1]!=0) res[1][29]=a43;
  a43=(a0*a20);
  if (res[1]!=0) res[1][30]=a43;
  a43=(a0*a19);
  if (res[1]!=0) res[1][31]=a43;
  a43=(a0*a11);
  a43=(-a43);
  if (res[1]!=0) res[1][32]=a43;
  a24=(1./a24);
  a43=(a6+a6);
  a50=(a50*a43);
  a24=(a24-a50);
  a50=(a23*a24);
  a14=(a31*a50);
  a58=(a58*a43);
  a17=(a58/a29);
  a25=(a25*a24);
  a28=(a28*a43);
  a63=(a63*a28);
  a27=(a27*a58);
  a63=(a63+a27);
  a30=(a30*a43);
  a66=(a66*a30);
  a63=(a63+a66);
  a25=(a25-a63);
  a62=(a62*a25);
  a17=(a17+a62);
  a62=(a26*a17);
  a14=(a14-a62);
  a62=(a28/a29);
  a68=(a68*a25);
  a62=(a62+a68);
  a68=(a34*a62);
  a63=(a23*a30);
  a66=(a33*a63);
  a68=(a68+a66);
  a14=(a14+a68);
  a24=(a24/a29);
  a71=(a71*a25);
  a24=(a24-a71);
  a71=(a35*a24);
  a58=(a23*a58);
  a68=(a36*a58);
  a71=(a71-a68);
  a23=(a23*a28);
  a28=(a39*a23);
  a30=(a30/a29);
  a73=(a73*a25);
  a30=(a30+a73);
  a73=(a38*a30);
  a28=(a28+a73);
  a71=(a71+a28);
  a14=(a14+a71);
  a14=(-a14);
  if (res[1]!=0) res[1][33]=a14;
  a14=(a39*a50);
  a71=(a26*a30);
  a14=(a14-a71);
  a71=(a35*a62);
  a28=(a33*a58);
  a71=(a71+a28);
  a14=(a14-a71);
  a71=(a34*a24);
  a28=(a36*a63);
  a71=(a71-a28);
  a28=(a31*a23);
  a73=(a38*a17);
  a28=(a28+a73);
  a71=(a71-a28);
  a14=(a14+a71);
  a14=(-a14);
  if (res[1]!=0) res[1][34]=a14;
  a36=(a36*a50);
  a26=(a26*a24);
  a36=(a36+a26);
  a38=(a38*a62);
  a33=(a33*a23);
  a38=(a38+a33);
  a36=(a36-a38);
  a39=(a39*a63);
  a34=(a34*a30);
  a39=(a39+a34);
  a31=(a31*a58);
  a35=(a35*a17);
  a31=(a31+a35);
  a39=(a39+a31);
  a36=(a36+a39);
  a36=(-a36);
  if (res[1]!=0) res[1][35]=a36;
  a36=(a10*a1);
  a39=(a12*a8);
  a36=(a36+a39);
  a39=(a15*a4);
  a31=(a18*a6);
  a39=(a39+a31);
  a36=(a36-a39);
  a36=(-a36);
  if (res[1]!=0) res[1][36]=a36;
  a36=(a15*a1);
  a39=(a12*a6);
  a36=(a36+a39);
  a39=(a18*a8);
  a31=(a10*a4);
  a39=(a39+a31);
  a36=(a36+a39);
  a36=(-a36);
  if (res[1]!=0) res[1][37]=a36;
  a36=(a18*a1);
  a39=(a12*a4);
  a36=(a36-a39);
  a39=(a10*a6);
  a31=(a15*a8);
  a39=(a39-a31);
  a36=(a36+a39);
  a36=(-a36);
  if (res[1]!=0) res[1][38]=a36;
  if (res[1]!=0) res[1][39]=a20;
  a36=(-a19);
  if (res[1]!=0) res[1][40]=a36;
  a36=(a10*a4);
  a39=(a12*a6);
  a36=(a36-a39);
  a39=(a15*a1);
  a31=(a18*a8);
  a39=(a39-a31);
  a36=(a36+a39);
  a36=(-a36);
  if (res[1]!=0) res[1][41]=a36;
  a36=(a15*a4);
  a39=(a12*a8);
  a36=(a36+a39);
  a39=(a18*a6);
  a31=(a10*a1);
  a39=(a39+a31);
  a36=(a36-a39);
  a36=(-a36);
  if (res[1]!=0) res[1][42]=a36;
  a36=(a18*a4);
  a39=(a12*a1);
  a36=(a36+a39);
  a39=(a10*a8);
  a31=(a15*a6);
  a39=(a39+a31);
  a36=(a36+a39);
  a36=(-a36);
  if (res[1]!=0) res[1][43]=a36;
  a36=(-a20);
  if (res[1]!=0) res[1][44]=a36;
  if (res[1]!=0) res[1][45]=a11;
  a36=(a10*a6);
  a39=(a12*a4);
  a36=(a36+a39);
  a39=(a15*a8);
  a31=(a18*a1);
  a39=(a39+a31);
  a36=(a36+a39);
  a36=(-a36);
  if (res[1]!=0) res[1][46]=a36;
  a36=(a15*a6);
  a39=(a12*a1);
  a36=(a36-a39);
  a39=(a18*a4);
  a31=(a10*a8);
  a39=(a39-a31);
  a36=(a36+a39);
  a36=(-a36);
  if (res[1]!=0) res[1][47]=a36;
  a18=(a18*a6);
  a12=(a12*a8);
  a18=(a18+a12);
  a10=(a10*a1);
  a15=(a15*a4);
  a10=(a10+a15);
  a18=(a18-a10);
  a18=(-a18);
  if (res[1]!=0) res[1][48]=a18;
  if (res[1]!=0) res[1][49]=a19;
  a18=(-a11);
  if (res[1]!=0) res[1][50]=a18;
  a18=(a0*a1);
  if (res[1]!=0) res[1][51]=a18;
  a18=(a0*a8);
  a18=(-a18);
  if (res[1]!=0) res[1][52]=a18;
  a18=(a0*a6);
  a18=(-a18);
  if (res[1]!=0) res[1][53]=a18;
  a18=(a0*a4);
  if (res[1]!=0) res[1][54]=a18;
  a18=(-a7);
  if (res[1]!=0) res[1][55]=a18;
  if (res[1]!=0) res[1][56]=a5;
  a18=(a22*a19);
  a10=(a44*a20);
  a18=(a18-a10);
  a10=(a32*a18);
  a15=(a37*a20);
  a12=(a22*a11);
  a12=(a40+a12);
  a15=(a15-a12);
  a12=(a47*a15);
  a10=(a10+a12);
  a12=(a44*a11);
  a12=(a45+a12);
  a37=(a37*a19);
  a12=(a12-a37);
  a37=(a49*a12);
  a10=(a10+a37);
  if (res[1]!=0) res[1][57]=a10;
  a10=(a47*a18);
  a37=(a51*a15);
  a10=(a10+a37);
  a37=(a52*a12);
  a10=(a10+a37);
  if (res[1]!=0) res[1][58]=a10;
  a18=(a49*a18);
  a15=(a52*a15);
  a18=(a18+a15);
  a12=(a48*a12);
  a18=(a18+a12);
  if (res[1]!=0) res[1][59]=a18;
  a18=(a0*a4);
  if (res[1]!=0) res[1][60]=a18;
  a18=(a0*a6);
  if (res[1]!=0) res[1][61]=a18;
  a18=(a0*a8);
  a18=(-a18);
  if (res[1]!=0) res[1][62]=a18;
  a18=(a0*a1);
  a18=(-a18);
  if (res[1]!=0) res[1][63]=a18;
  if (res[1]!=0) res[1][64]=a7;
  a7=(-a2);
  if (res[1]!=0) res[1][65]=a7;
  a7=(a41*a19);
  a40=(a40+a7);
  a7=(a46*a20);
  a40=(a40-a7);
  a7=(a32*a40);
  a18=(a44*a20);
  a12=(a41*a11);
  a18=(a18-a12);
  a12=(a47*a18);
  a7=(a7+a12);
  a46=(a46*a11);
  a44=(a44*a19);
  a44=(a16+a44);
  a46=(a46-a44);
  a44=(a49*a46);
  a7=(a7+a44);
  if (res[1]!=0) res[1][66]=a7;
  a7=(a47*a40);
  a44=(a51*a18);
  a7=(a7+a44);
  a44=(a52*a46);
  a7=(a7+a44);
  if (res[1]!=0) res[1][67]=a7;
  a40=(a49*a40);
  a18=(a52*a18);
  a40=(a40+a18);
  a46=(a48*a46);
  a40=(a40+a46);
  if (res[1]!=0) res[1][68]=a40;
  a6=(a0*a6);
  if (res[1]!=0) res[1][69]=a6;
  a4=(a0*a4);
  a4=(-a4);
  if (res[1]!=0) res[1][70]=a4;
  a1=(a0*a1);
  if (res[1]!=0) res[1][71]=a1;
  a0=(a0*a8);
  a0=(-a0);
  if (res[1]!=0) res[1][72]=a0;
  a5=(-a5);
  if (res[1]!=0) res[1][73]=a5;
  if (res[1]!=0) res[1][74]=a2;
  a2=(a42*a19);
  a5=(a41*a20);
  a45=(a45+a5);
  a2=(a2-a45);
  a32=(a32*a2);
  a20=(a22*a20);
  a16=(a16+a20);
  a42=(a42*a11);
  a16=(a16-a42);
  a42=(a47*a16);
  a32=(a32+a42);
  a41=(a41*a11);
  a22=(a22*a19);
  a41=(a41-a22);
  a22=(a49*a41);
  a32=(a32+a22);
  if (res[1]!=0) res[1][75]=a32;
  a47=(a47*a2);
  a51=(a51*a16);
  a47=(a47+a51);
  a51=(a52*a41);
  a47=(a47+a51);
  if (res[1]!=0) res[1][76]=a47;
  a49=(a49*a2);
  a52=(a52*a16);
  a49=(a49+a52);
  a48=(a48*a41);
  a49=(a49+a48);
  if (res[1]!=0) res[1][77]=a49;
  a49=-2.5000000000000000e-01;
  if (res[1]!=0) res[1][78]=a49;
  a48=-1.9414679345010917e-05;
  if (res[1]!=0) res[1][79]=a48;
  a48=-3.6721099994230927e-01;
  if (res[1]!=0) res[1][80]=a48;
  a48=-2.4070393874243074e-05;
  if (res[1]!=0) res[1][81]=a48;
  if (res[1]!=0) res[1][82]=a49;
  a48=3.5706846471761244e-01;
  if (res[1]!=0) res[1][83]=a48;
  a48=1.9414679345010917e-05;
  if (res[1]!=0) res[1][84]=a48;
  a48=-3.5430309668555598e-04;
  if (res[1]!=0) res[1][85]=a48;
  if (res[1]!=0) res[1][86]=a49;
  a49=-1.1902282157253749e+01;
  if (res[1]!=0) res[1][87]=a49;
  a49=-6.4715597816703062e-04;
  if (res[1]!=0) res[1][88]=a49;
  a48=1.1810103222851866e-02;
  if (res[1]!=0) res[1][89]=a48;
  if (res[1]!=0) res[1][90]=a49;
  a49=-1.2240366664743643e+01;
  if (res[1]!=0) res[1][91]=a49;
  a49=-8.0234646247476921e-04;
  if (res[1]!=0) res[1][92]=a49;
  if (res[1]!=0) res[1][93]=a48;
  if (res[1]!=0) res[1][94]=a49;
  a49=-7.0059537821451618e+00;
  if (res[1]!=0) res[1][95]=a49;
  a49=1.;
  if (res[2]!=0) res[2][0]=a49;
  if (res[2]!=0) res[2][1]=a49;
  if (res[2]!=0) res[2][2]=a49;
  if (res[2]!=0) res[2][3]=a49;
  if (res[2]!=0) res[2][4]=a49;
  if (res[2]!=0) res[2][5]=a49;
  if (res[2]!=0) res[2][6]=a49;
  if (res[2]!=0) res[2][7]=a49;
  if (res[2]!=0) res[2][8]=a49;
  if (res[2]!=0) res[2][9]=a49;
  if (res[2]!=0) res[2][10]=a49;
  if (res[2]!=0) res[2][11]=a49;
  if (res[2]!=0) res[2][12]=a49;
  if (res[2]!=0) res[2][13]=a49;
  if (res[2]!=0) res[2][14]=a49;
  if (res[2]!=0) res[2][15]=a49;
  if (res[2]!=0) res[2][16]=a49;
  if (res[2]!=0) res[2][17]=a49;
  if (res[2]!=0) res[2][18]=a49;
  return 0;
}

CASADI_SYMBOL_EXPORT int omnihex_ode_impl_dae_fun_jac_x_xdot_z(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int omnihex_ode_impl_dae_fun_jac_x_xdot_z_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int omnihex_ode_impl_dae_fun_jac_x_xdot_z_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void omnihex_ode_impl_dae_fun_jac_x_xdot_z_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int omnihex_ode_impl_dae_fun_jac_x_xdot_z_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void omnihex_ode_impl_dae_fun_jac_x_xdot_z_release(int mem) {
}

CASADI_SYMBOL_EXPORT void omnihex_ode_impl_dae_fun_jac_x_xdot_z_incref(void) {
}

CASADI_SYMBOL_EXPORT void omnihex_ode_impl_dae_fun_jac_x_xdot_z_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int omnihex_ode_impl_dae_fun_jac_x_xdot_z_n_in(void) { return 6;}

CASADI_SYMBOL_EXPORT casadi_int omnihex_ode_impl_dae_fun_jac_x_xdot_z_n_out(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_real omnihex_ode_impl_dae_fun_jac_x_xdot_z_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* omnihex_ode_impl_dae_fun_jac_x_xdot_z_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    case 4: return "i4";
    case 5: return "i5";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* omnihex_ode_impl_dae_fun_jac_x_xdot_z_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    case 3: return "o3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* omnihex_ode_impl_dae_fun_jac_x_xdot_z_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    case 3: return casadi_s2;
    case 4: return casadi_s2;
    case 5: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* omnihex_ode_impl_dae_fun_jac_x_xdot_z_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s3;
    case 2: return casadi_s4;
    case 3: return casadi_s5;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int omnihex_ode_impl_dae_fun_jac_x_xdot_z_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 6;
  if (sz_res) *sz_res = 4;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
