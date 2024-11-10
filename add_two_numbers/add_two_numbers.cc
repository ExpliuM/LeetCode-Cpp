
/*
 * Link: https://leetcode.com/problems/add-two-numbers/
 */

#include <vector>
#include <gtest/gtest.h>

#include "add_two_numbers.hpp"
#include "../utils/list_node.hpp"

TEST(leetcode, add_two_numbers)
{
  // UC 1
  std::vector<int> vector1_1 = {2, 4, 3};
  std::vector<int> vector2_1 = {5, 6, 4};
  int expectedValue = 708;

  ListNode *list1 = allocateListNodeFromVector(vector1_1);
  ListNode *list2 = allocateListNodeFromVector(vector2_1);

  ListNode *res = addTwoNumbers(list1, list2);
  int value = getValue(res);
  EXPECT_EQ(value, expectedValue);

  destroyList(list2);
  destroyList(list1);

  // UC2
  std::vector<int> vector1_2 = {0};
  std::vector<int> vector2_2 = {0};
  expectedValue = 0;

  list1 = allocateListNodeFromVector(vector1_2);
  list2 = allocateListNodeFromVector(vector2_2);

  res = addTwoNumbers(list1, list2);
  value = getValue(res);
  EXPECT_EQ(value, expectedValue);

  destroyList(list2);
  destroyList(list1);

  // UC3
  std::vector<int> vector1_3 = {9, 9, 9, 9, 9, 9, 9};
  std::vector<int> vector2_3 = {9, 9, 9, 9};
  expectedValue = 89990001;

  list1 = allocateListNodeFromVector(vector1_3);
  list2 = allocateListNodeFromVector(vector2_3);

  res = addTwoNumbers(list1, list2);
  value = getValue(res);
  EXPECT_EQ(value, expectedValue);
}