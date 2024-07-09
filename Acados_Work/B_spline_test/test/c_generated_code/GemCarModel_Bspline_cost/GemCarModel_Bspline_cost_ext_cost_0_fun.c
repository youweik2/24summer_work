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
  #define CASADI_PREFIX(ID) GemCarModel_Bspline_cost_ext_cost_0_fun_ ## ID
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

static const casadi_int casadi_s0[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s1[12] = {8, 1, 0, 8, 0, 1, 2, 3, 4, 5, 6, 7};
static const casadi_int casadi_s2[3] = {0, 0, 0};
static const casadi_int casadi_s3[5] = {1, 1, 0, 1, 0};

/* GemCarModel_Bspline_cost_ext_cost_0_fun:(i0[3],i1[8],i2[],i3[3])->(o0) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=10.;
  a1=arg[0]? arg[0][0] : 0;
  a2=(a0*a1);
  a2=(a2*a1);
  a1=40.;
  a3=arg[0]? arg[0][1] : 0;
  a1=(a1-a3);
  a0=(a0*a1);
  a0=(a0*a1);
  a2=(a2+a0);
  a0=1.0000000000000000e-02;
  a1=1.5707963267948966e+00;
  a3=arg[0]? arg[0][2] : 0;
  a1=(a1-a3);
  a0=(a0*a1);
  a0=(a0*a1);
  a2=(a2+a0);
  a0=1.4285714285714285e-01;
  a1=arg[1]? arg[1][0] : 0;
  a3=(a0*a1);
  a3=(a3*a1);
  a4=arg[1]? arg[1][1] : 0;
  a5=(a0*a4);
  a5=(a5*a4);
  a3=(a3+a5);
  a5=7.1428571428571425e-02;
  a6=arg[1]? arg[1][2] : 0;
  a7=(a5*a6);
  a7=(a7*a1);
  a8=arg[1]? arg[1][3] : 0;
  a9=(a5*a8);
  a9=(a9*a4);
  a7=(a7+a9);
  a3=(a3+a7);
  a7=2.8571428571428571e-02;
  a9=arg[1]? arg[1][4] : 0;
  a10=(a7*a9);
  a10=(a10*a1);
  a11=arg[1]? arg[1][5] : 0;
  a12=(a7*a11);
  a12=(a12*a4);
  a10=(a10+a12);
  a3=(a3+a10);
  a10=7.1428571428571426e-03;
  a12=arg[1]? arg[1][6] : 0;
  a13=(a10*a12);
  a13=(a13*a1);
  a14=arg[1]? arg[1][7] : 0;
  a15=(a10*a14);
  a15=(a15*a4);
  a13=(a13+a15);
  a3=(a3+a13);
  a13=(a5*a1);
  a13=(a13*a6);
  a15=(a5*a4);
  a15=(a15*a8);
  a13=(a13+a15);
  a3=(a3+a13);
  a13=8.5714285714285715e-02;
  a15=(a13*a6);
  a15=(a15*a6);
  a16=(a13*a8);
  a16=(a16*a8);
  a15=(a15+a16);
  a3=(a3+a15);
  a15=6.4285714285714279e-02;
  a16=(a15*a9);
  a16=(a16*a6);
  a17=(a15*a11);
  a17=(a17*a8);
  a16=(a16+a17);
  a3=(a3+a16);
  a16=(a7*a12);
  a16=(a16*a6);
  a17=(a7*a14);
  a17=(a17*a8);
  a16=(a16+a17);
  a3=(a3+a16);
  a16=(a7*a1);
  a16=(a16*a9);
  a17=(a7*a4);
  a17=(a17*a11);
  a16=(a16+a17);
  a3=(a3+a16);
  a16=(a15*a6);
  a16=(a16*a9);
  a15=(a15*a8);
  a15=(a15*a11);
  a16=(a16+a15);
  a3=(a3+a16);
  a16=(a13*a9);
  a16=(a16*a9);
  a13=(a13*a11);
  a13=(a13*a11);
  a16=(a16+a13);
  a3=(a3+a16);
  a16=(a5*a12);
  a16=(a16*a9);
  a13=(a5*a14);
  a13=(a13*a11);
  a16=(a16+a13);
  a3=(a3+a16);
  a1=(a10*a1);
  a1=(a1*a12);
  a10=(a10*a4);
  a10=(a10*a14);
  a1=(a1+a10);
  a3=(a3+a1);
  a6=(a7*a6);
  a6=(a6*a12);
  a7=(a7*a8);
  a7=(a7*a14);
  a6=(a6+a7);
  a3=(a3+a6);
  a9=(a5*a9);
  a9=(a9*a12);
  a5=(a5*a11);
  a5=(a5*a14);
  a9=(a9+a5);
  a3=(a3+a9);
  a9=(a0*a12);
  a9=(a9*a12);
  a0=(a0*a14);
  a0=(a0*a14);
  a9=(a9+a0);
  a3=(a3+a9);
  a2=(a2+a3);
  if (res[0]!=0) res[0][0]=a2;
  return 0;
}

CASADI_SYMBOL_EXPORT int GemCarModel_Bspline_cost_ext_cost_0_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int GemCarModel_Bspline_cost_ext_cost_0_fun_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int GemCarModel_Bspline_cost_ext_cost_0_fun_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void GemCarModel_Bspline_cost_ext_cost_0_fun_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int GemCarModel_Bspline_cost_ext_cost_0_fun_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void GemCarModel_Bspline_cost_ext_cost_0_fun_release(int mem) {
}

CASADI_SYMBOL_EXPORT void GemCarModel_Bspline_cost_ext_cost_0_fun_incref(void) {
}

CASADI_SYMBOL_EXPORT void GemCarModel_Bspline_cost_ext_cost_0_fun_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int GemCarModel_Bspline_cost_ext_cost_0_fun_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int GemCarModel_Bspline_cost_ext_cost_0_fun_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real GemCarModel_Bspline_cost_ext_cost_0_fun_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* GemCarModel_Bspline_cost_ext_cost_0_fun_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* GemCarModel_Bspline_cost_ext_cost_0_fun_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* GemCarModel_Bspline_cost_ext_cost_0_fun_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    case 3: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* GemCarModel_Bspline_cost_ext_cost_0_fun_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s3;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int GemCarModel_Bspline_cost_ext_cost_0_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
