
/*
 * Link: https://leetcode.com/problems/merge-sorted-array/description/
 */

#include <gtest/gtest.h>
#include <vector>

#include "single-number.hpp"

using namespace std;

TEST(leetcode, single_number)
{
  // Example 1:
  // Input: nums = [2,2,1]
  // Output: 1
  std::vector<int> vector1 = {2,2,1};
  EXPECT_EQ(singleNumber(vector1), 1);
  

  // Example 2:
  // Input: nums = [4,1,2,1,2]
  // Output: 4
  std::vector<int> vector2 = {4,1,2,1,2};
  EXPECT_EQ(singleNumber(vector2), 4);

  // Example 3:
  // Input: nums = [1]
  // Output: 1
  std::vector<int> vector3 = {1};
  EXPECT_EQ(singleNumber(vector3),1);
}