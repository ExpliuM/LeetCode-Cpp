
/*
 * Link: https://leetcode.com/problems/divide-two-integers/description/
 */

#include <gtest/gtest.h>
#include <algorithm>
#include <vector>

#include "divide-two-integers.hpp"

using namespace std;

TEST(leetcode, divide_two_integers)
{
  EXPECT_EQ(divide(INT32_MIN, -1109186033), 1);
  EXPECT_EQ(divide(10, 3), 3);
  EXPECT_EQ(divide(7, -3), -2);
  EXPECT_EQ(divide(INT32_MAX - 2, 1), INT32_MAX - 2);
  EXPECT_EQ(divide(INT32_MAX - 1, 1), INT32_MAX - 1);
  EXPECT_EQ(divide(INT32_MAX, 1), INT32_MAX);
  EXPECT_EQ(divide(INT32_MAX, -1), -INT32_MAX);
  EXPECT_EQ(divide(INT32_MIN, 1), INT32_MIN);
  EXPECT_EQ(divide(INT32_MIN, -1), INT32_MAX);
  EXPECT_EQ(divide(INT32_MIN, 2), -1073741824);
  EXPECT_EQ(divide(INT32_MIN, -2), 1073741824);
  EXPECT_EQ(divide(INT32_MIN, INT32_MIN), 1);
  EXPECT_EQ(divide(-1010369383, INT32_MIN), 0);
  EXPECT_EQ(divide(0, -2), 0);
  EXPECT_EQ(divide(1, 2), 0);
}