
/*
 * Link: https://leetcode.com/problems/two-sum/description/
 */

#include <filesystem>
#include <fstream>

#include <gtest/gtest.h>
#include "is_palindrome.hpp"

using namespace std;

TEST(leetcode, is_palindrome)
{
  EXPECT_TRUE(isPalindrome(121));
  EXPECT_FALSE(isPalindrome(-121));
  EXPECT_FALSE(isPalindrome(10));
}