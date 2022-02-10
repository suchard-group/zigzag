// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _hzz_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// createEngine
Rcpp::List createEngine(int dimension, std::vector<double>& mask, std::vector<double>& observed, std::vector<double>& parameterSign, long flags, long info, long seed, NumericVector& mean, NumericMatrix& precision);
RcppExport SEXP _hzz_createEngine(SEXP dimensionSEXP, SEXP maskSEXP, SEXP observedSEXP, SEXP parameterSignSEXP, SEXP flagsSEXP, SEXP infoSEXP, SEXP seedSEXP, SEXP meanSEXP, SEXP precisionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type dimension(dimensionSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type mask(maskSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type observed(observedSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type parameterSign(parameterSignSEXP);
    Rcpp::traits::input_parameter< long >::type flags(flagsSEXP);
    Rcpp::traits::input_parameter< long >::type info(infoSEXP);
    Rcpp::traits::input_parameter< long >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type precision(precisionSEXP);
    rcpp_result_gen = Rcpp::wrap(createEngine(dimension, mask, observed, parameterSign, flags, info, seed, mean, precision));
    return rcpp_result_gen;
END_RCPP
}
// createNutsEngine
Rcpp::List createNutsEngine(int dimension, std::vector<double>& mask, std::vector<double>& observed, std::vector<double>& parameterSign, long flags, long info, long seed, double stepSize, NumericVector& mean, NumericMatrix& precision);
RcppExport SEXP _hzz_createNutsEngine(SEXP dimensionSEXP, SEXP maskSEXP, SEXP observedSEXP, SEXP parameterSignSEXP, SEXP flagsSEXP, SEXP infoSEXP, SEXP seedSEXP, SEXP stepSizeSEXP, SEXP meanSEXP, SEXP precisionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type dimension(dimensionSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type mask(maskSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type observed(observedSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type parameterSign(parameterSignSEXP);
    Rcpp::traits::input_parameter< long >::type flags(flagsSEXP);
    Rcpp::traits::input_parameter< long >::type info(infoSEXP);
    Rcpp::traits::input_parameter< long >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type stepSize(stepSizeSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type precision(precisionSEXP);
    rcpp_result_gen = Rcpp::wrap(createNutsEngine(dimension, mask, observed, parameterSign, flags, info, seed, stepSize, mean, precision));
    return rcpp_result_gen;
END_RCPP
}
// doSomething
void doSomething(SEXP sexp, std::vector<double>& data);
RcppExport SEXP _hzz_doSomething(SEXP sexpSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type data(dataSEXP);
    doSomething(sexp, data);
    return R_NilValue;
END_RCPP
}
// getNextEvent
Rcpp::List getNextEvent(SEXP sexp, NumericVector& position, NumericVector& velocity, NumericVector& action, NumericVector& logpdfGradient, NumericVector& momentum);
RcppExport SEXP _hzz_getNextEvent(SEXP sexpSEXP, SEXP positionSEXP, SEXP velocitySEXP, SEXP actionSEXP, SEXP logpdfGradientSEXP, SEXP momentumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type position(positionSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type velocity(velocitySEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type action(actionSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type logpdfGradient(logpdfGradientSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type momentum(momentumSEXP);
    rcpp_result_gen = Rcpp::wrap(getNextEvent(sexp, position, velocity, action, logpdfGradient, momentum));
    return rcpp_result_gen;
END_RCPP
}
// oneIteration
Rcpp::List oneIteration(SEXP sexp, NumericVector& position, NumericVector& velocity, NumericVector& action, NumericVector& gradient, NumericVector& momentum, double time);
RcppExport SEXP _hzz_oneIteration(SEXP sexpSEXP, SEXP positionSEXP, SEXP velocitySEXP, SEXP actionSEXP, SEXP gradientSEXP, SEXP momentumSEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type position(positionSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type velocity(velocitySEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type action(actionSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type gradient(gradientSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type momentum(momentumSEXP);
    Rcpp::traits::input_parameter< double >::type time(timeSEXP);
    rcpp_result_gen = Rcpp::wrap(oneIteration(sexp, position, velocity, action, gradient, momentum, time));
    return rcpp_result_gen;
END_RCPP
}
// oneNutsIteration
Rcpp::List oneNutsIteration(SEXP sexp, NumericVector& position, NumericVector& momentum, NumericVector& gradient, double stepsize);
RcppExport SEXP _hzz_oneNutsIteration(SEXP sexpSEXP, SEXP positionSEXP, SEXP momentumSEXP, SEXP gradientSEXP, SEXP stepsizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp(sexpSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type position(positionSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type momentum(momentumSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type gradient(gradientSEXP);
    Rcpp::traits::input_parameter< double >::type stepsize(stepsizeSEXP);
    rcpp_result_gen = Rcpp::wrap(oneNutsIteration(sexp, position, momentum, gradient, stepsize));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_hzz_rcpp_hello_world", (DL_FUNC) &_hzz_rcpp_hello_world, 0},
    {"_hzz_createEngine", (DL_FUNC) &_hzz_createEngine, 9},
    {"_hzz_createNutsEngine", (DL_FUNC) &_hzz_createNutsEngine, 10},
    {"_hzz_doSomething", (DL_FUNC) &_hzz_doSomething, 2},
    {"_hzz_getNextEvent", (DL_FUNC) &_hzz_getNextEvent, 6},
    {"_hzz_oneIteration", (DL_FUNC) &_hzz_oneIteration, 7},
    {"_hzz_oneNutsIteration", (DL_FUNC) &_hzz_oneNutsIteration, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_hzz(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
