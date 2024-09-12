#include "gtest/gtest.h"
#include "lib/factorial.h"

TEST(FactorialTest, ComputesCorrectly) {
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(5), 120);
}
