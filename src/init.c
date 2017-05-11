#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP LAM_mlnormal_proc_variance_shortcut_XY_restructure(SEXP, SEXP, SEXP, SEXP);
extern SEXP LAM_mlnormal_proc_variance_shortcut_Z_restructure(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP LAM_mlnormal_update_beta_rcpp_helper(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP LAM_mlnormal_update_V_rcpp_helper(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"LAM_mlnormal_proc_variance_shortcut_XY_restructure", (DL_FUNC) &LAM_mlnormal_proc_variance_shortcut_XY_restructure,  4},
    {"LAM_mlnormal_proc_variance_shortcut_Z_restructure",  (DL_FUNC) &LAM_mlnormal_proc_variance_shortcut_Z_restructure,   8},
    {"LAM_mlnormal_update_beta_rcpp_helper",               (DL_FUNC) &LAM_mlnormal_update_beta_rcpp_helper,                7},
    {"LAM_mlnormal_update_V_rcpp_helper",                  (DL_FUNC) &LAM_mlnormal_update_V_rcpp_helper,                  11},
    {NULL, NULL, 0}
};

void R_init_LAM(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
