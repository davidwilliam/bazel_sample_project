#include "gamma.h"
#include <cmath>

double gamma_function(double x) {
    return std::tgamma(x + 1);
}
