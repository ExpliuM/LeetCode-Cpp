
/*
 * Link: https://leetcode.com/problems/reverse-integer/description/
 */

#include <filesystem>
#include <fstream>
#include <gtest/gtest.h>

#include "reverse_integer.hpp"

using namespace std;

TEST(leetcode, reverse_integer)
{
  EXPECT_EQ(reverse(1), 1);
  EXPECT_EQ(reverse(-1), -1);
  EXPECT_EQ(reverse(123), 321);
  EXPECT_EQ(reverse(12), 21);
  EXPECT_EQ(reverse(11), 11);
  EXPECT_EQ(reverse(10), 1);
  EXPECT_EQ(reverse(100), 1);
  EXPECT_EQ(reverse(-123), -321);
  EXPECT_EQ(reverse(1534236469), 0);
  EXPECT_EQ(reverse(INT32_MAX), 0); // Max int = 2147483647

  EXPECT_EQ(reverse(1463847412), 2147483641);
  EXPECT_EQ(reverse(2147447413), 0);
  EXPECT_EQ(reverse(2147447422), 0);
  EXPECT_EQ(reverse(2147447512), 0);
  EXPECT_EQ(reverse(2147448412), 0);
  EXPECT_EQ(reverse(2147457412), 0);
  EXPECT_EQ(reverse(INT32_MIN), 0); // Max int = -2147483648
  EXPECT_EQ(reverse(-1000047412), -2147400001);
  EXPECT_EQ(reverse(-2147447413), 0);
  EXPECT_EQ(reverse(-2147447422), 0);
  EXPECT_EQ(reverse(-2147447512), 0);
  EXPECT_EQ(reverse(-2147448412), 0);
  EXPECT_EQ(reverse(-2147457412), 0);
}