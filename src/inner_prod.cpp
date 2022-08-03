#include <RcppArmadillo.h>

// [[Rcpp::export]]
double inner_prod (arma::vec x, arma::vec y) {
  arma::mat z = x.t() * y ;
  return(z(0)) ;
}
