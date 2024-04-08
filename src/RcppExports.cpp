// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// wilkinson_bin_to_right_
IntegerVector wilkinson_bin_to_right_(const NumericVector& x, double width);
RcppExport SEXP _ggdist_wilkinson_bin_to_right_(SEXP xSEXP, SEXP widthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    rcpp_result_gen = Rcpp::wrap(wilkinson_bin_to_right_(x, width));
    return rcpp_result_gen;
END_RCPP
}
// find_var_
SEXP find_var_(Symbol name, Environment env);
RcppExport SEXP _ggdist_find_var_(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(find_var_(name, env));
    return rcpp_result_gen;
END_RCPP
}
// find_promise_
Promise find_promise_(Symbol name, Environment env);
RcppExport SEXP _ggdist_find_promise_(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(find_promise_(name, env));
    return rcpp_result_gen;
END_RCPP
}
// promise_expr_
SEXP promise_expr_(Promise promise);
RcppExport SEXP _ggdist_promise_expr_(SEXP promiseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Promise >::type promise(promiseSEXP);
    rcpp_result_gen = Rcpp::wrap(promise_expr_(promise));
    return rcpp_result_gen;
END_RCPP
}
// promise_env_
SEXP promise_env_(Promise promise);
RcppExport SEXP _ggdist_promise_env_(SEXP promiseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Promise >::type promise(promiseSEXP);
    rcpp_result_gen = Rcpp::wrap(promise_env_(promise));
    return rcpp_result_gen;
END_RCPP
}
// dots_to_list_
List dots_to_list_(DottedPair dots);
RcppExport SEXP _ggdist_dots_to_list_(SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DottedPair >::type dots(dotsSEXP);
    rcpp_result_gen = Rcpp::wrap(dots_to_list_(dots));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ggdist_wilkinson_bin_to_right_", (DL_FUNC) &_ggdist_wilkinson_bin_to_right_, 2},
    {"_ggdist_find_var_", (DL_FUNC) &_ggdist_find_var_, 2},
    {"_ggdist_find_promise_", (DL_FUNC) &_ggdist_find_promise_, 2},
    {"_ggdist_promise_expr_", (DL_FUNC) &_ggdist_promise_expr_, 1},
    {"_ggdist_promise_env_", (DL_FUNC) &_ggdist_promise_env_, 1},
    {"_ggdist_dots_to_list_", (DL_FUNC) &_ggdist_dots_to_list_, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_ggdist(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
