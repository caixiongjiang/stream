#include "math.h"
#include "gtest/gtest.h"

// Test case for MathFunction
TEST(AddTest, PositiveNumbers) {
  EXPECT_EQ(3, add(1, 2));
}

TEST(AddTest, NegativeNumbers) {
    EXPECT_EQ(-5, add(-2, -3));
}

TEST(AddTest, PositiveAndNegativeNumbers) {
    EXPECT_EQ(1, add(2, -1));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
