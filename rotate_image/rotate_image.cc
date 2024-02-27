
/*
 * Link: https://leetcode.com/problems/rotate-image/description/
 */

#include <gtest/gtest.h>

#include "rotate_image.hpp"

using namespace std;

TEST(leetcode, rotate_image)
{
  vector<vector<int>> matrix1{{1, 2}, {3, 4}};
  vector<vector<int>> expectedMatrix1{{3, 1}, {4, 2}};
  rotate(matrix1);
  ASSERT_EQ(matrix1, expectedMatrix1);

  vector<vector<int>> matrix2{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector<vector<int>> expectedMatrix2{{7, 4, 1}, {8, 5, 2}, {9, 6, 3}};
  rotate(matrix2);
  ASSERT_EQ(matrix2, expectedMatrix2);

  vector<vector<int>> matrix3{{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
  vector<vector<int>> expectedMatrix3{{15, 13, 2, 5}, {14, 3, 4, 1}, {12, 6, 8, 9}, {16, 7, 10, 11}};
  rotate(matrix3);
  ASSERT_EQ(matrix3, expectedMatrix3);
}