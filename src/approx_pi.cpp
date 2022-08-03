#include <Rcpp.h>
#include <dqrng.h>
using namespace Rcpp;
using namespace dqrng;

// [[Rcpp::export]]
double approx_pi(const int N) {
  NumericVector x = runif(N);
  NumericVector y = runif(N);
  NumericVector d = sqrt(x*x + y*y);
  return 4.0 * sum(d < 1.0) / N;
}

// [[Rcpp::export]]
double approx_pi_dq(const int N) {
  NumericVector x = dqrunif(N);
  NumericVector y = dqrunif(N);
  NumericVector d = sqrt(x*x + y*y);
  return 4.0 * sum(d < 1.0) / N;
}
