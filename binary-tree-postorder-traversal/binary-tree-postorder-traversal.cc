
/*
 * Link: https://leetcode.com/problems/binary-tree-postorder-traversal/description/
 */

#include <gtest/gtest.h>

#include "../utils/tree_node.hpp"
#include "binary-tree-postorder-traversal.hpp"

using namespace std;

TEST(leetcode, binary_tree_postorder_traversal)
{
  TreeNode *root = new TreeNode(1);
  TreeNode *right = new TreeNode(2);
  TreeNode *left = new TreeNode(3);

  root->right = right;
  right->left = left;

  vector<int> res = postorderTraversal(root);
  vector<int> expectedRes1{3, 2, 1};
  ASSERT_EQ(res, expectedRes1);
  // Input: root = [1,null,2,3]
  // Output: [3,2,1]
  // Example 2:

  // Input: root = []
  // Output: []
  // Example 3:

  // Input: root = [1]
  // Output: [1]
}