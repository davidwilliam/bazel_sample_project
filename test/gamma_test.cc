#include "gtest/gtest.h"
#include "lib/gamma.h"

TEST(GammaTest, ComputesCorrectly) {
    EXPECT_NEAR(gamma_function(5.5), 287.885, 0.001);
}
