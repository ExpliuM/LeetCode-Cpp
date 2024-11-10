
/*
 * Link: https://leetcode.com/problems/two-sum/description/
 */

#include <filesystem>
#include <fstream>
#include <gtest/gtest.h>

#include "two_sum.hpp"

using namespace std;

TEST(leetcode, two_sum)
{
  // Input 1
  int target1 = 9;
  vector<int> expectedResult1{0, 1};
  vector<int> input1{2, 7, 11, 15};

  vector<int> result1 = twoSum(input1, target1);

  ASSERT_EQ(result1.size(), expectedResult1.size());
  for (int idx = 0; idx < result1.size(); ++idx)
  {
    EXPECT_EQ(result1[idx], expectedResult1[idx]);
  }

  // Input 2
  int target2 = 6;
  vector<int> expectedResult2{1, 2};
  vector<int> input2{3, 2, 4};
  
  vector<int> result2 = twoSum(input2, target2);

  ASSERT_EQ(result2.size(), expectedResult2.size());
  for (int idx = 0; idx < result2.size(); ++idx)
  {
    EXPECT_EQ(result2[idx], expectedResult2[idx]);
  }

  // Input 3
  int target3 = 6;
  vector<int> expectedResult3{0, 1};
  vector<int> input3{3, 3};
  
  vector<int> result3 = twoSum(input3, target3);

  ASSERT_EQ(result3.size(), expectedResult3.size());
  for (int idx = 0; idx < result3.size(); ++idx)
  {
    EXPECT_EQ(result3[idx], expectedResult3[idx]);
  }
}