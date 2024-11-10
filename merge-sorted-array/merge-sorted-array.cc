
/*
 * Link: https://leetcode.com/problems/merge-sorted-array/description/
 */

#include <gtest/gtest.h>
#include <vector>

#include "merge-sorted-array.hpp"

using namespace std;

TEST(leetcode, merge_sorted_array)
{
  // Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
  // Output: [1,2,2,3,5,6]
  std::vector<int> vector1_1 = {1, 2, 3, 0, 0, 0};
  std::vector<int> vector2_1 = {2, 5, 6};
  int m = 3;
  int n = vector2_1.size();

  std::vector<int> expected_1 = {1, 2, 2, 3, 5, 6};
  merge(vector1_1, m, vector2_1, n);
  EXPECT_EQ(vector1_1, expected_1);

  // Input: nums1 = [1], m = 1, nums2 = [], n = 0
  // Output: [1]
  std::vector<int> vector1_2 = {1};
  std::vector<int> vector2_2 = {};
  m = 1;
  n = vector2_2.size();

  std::vector<int> expected_2 = {1};
  merge(vector1_2, m, vector2_2, n);
  EXPECT_EQ(vector1_2, expected_2);

  // Input: nums1 = [0], m = 0, nums2 = [1], n = 1
  // Output: [1]
  std::vector<int> vector1_3 = {0};
  std::vector<int> vector2_3 = {1};
  m = 0;
  n = vector2_3.size();

  std::vector<int> expected_3 = {1};
  merge(vector1_3, m, vector2_3, n);
  EXPECT_EQ(vector1_3, expected_3);

  // Input: nums1 = [2,0], m = 1, nums2 = [1], n = 1
  // Output: [1]
  std::vector<int> vector1_4 = {2, 0};
  std::vector<int> vector2_4 = {1};
  m = 1;
  n = vector2_4.size();

  std::vector<int> expected_4 = {1,2};
  merge(vector1_4, m, vector2_4, n);
  EXPECT_EQ(vector1_4, expected_4);
}