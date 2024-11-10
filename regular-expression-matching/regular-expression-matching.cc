
/*
 * Link: https://leetcode.com/problems/regular-expression-matching/description/
 */

#include <gtest/gtest.h>
#include <algorithm>
#include <vector>

#include "regular-expression-matching.hpp"

using namespace std;

TEST(leetcode, regular_expression_matching)
{
  // Example 1:
  // Input: s = "aa", p = "a"
  // Output: false
  // Explanation: "a" does not match the entire string "aa".

  // Example 2:
  // Input: s = "aa", p = "a*"
  // Output: true
  // Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".

  // Example 3:
  // Input: s = "ab", p = ".*"
  // Output: true
  // Explanation: ".*" means "zero or more (*) of any character (.)".
}