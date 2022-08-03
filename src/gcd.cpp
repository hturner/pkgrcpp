#include <Rcpp.h>
#include <boost/integer/common_factor.hpp>

// [[Rcpp::export]]
int computeGCD(int a, int b) {
  return boost::integer::gcd(a, b);
}
