
#include <Rcpp.h>

extern "C" void foobar_() {
BEGIN_RCPP
  Rcpp::stop("foobar");
VOID_END_RCPP
}
