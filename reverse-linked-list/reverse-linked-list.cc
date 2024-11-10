
/*
 * Link: https://leetcode.com/problems/reverse-linked-list/description/
 */

#include <gtest/gtest.h>
#include <algorithm>
#include <vector>

#include "../utils/list_node.hpp"
#include "reverse-linked-list.hpp"

using namespace std;

TEST(leetcode, reverse_linked_list)
{

  // Example 1:
  // Input: head = [1,2,3,4,5]
  // Output: [5,4,3,2,1]
  vector<vector<int>> vectors = {
      {1, 2, 3, 4, 5},
      {1, 2},
      {}};

  for (vector<int> &inputVector : vectors)
  {
    vector<int> rVector(inputVector.size());
    reverse_copy(inputVector.begin(), inputVector.end(), rVector.begin());

    ListNode *inputList = allocateListNodeFromVector(inputVector);
    ListNode *expectedList = allocateListNodeFromVector(rVector);

    ListNode *res = reverseList(inputList);
    EXPECT_TRUE(compareListNodes(res, expectedList));

    destroyList(expectedList);
    destroyList(inputList);
  }
}