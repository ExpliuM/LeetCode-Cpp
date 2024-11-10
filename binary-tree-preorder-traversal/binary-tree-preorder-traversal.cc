
// /*
//  * Link: https://leetcode.com/problems/binary-tree-preorder-traversal//description/
//  */

// #include <gtest/gtest.h>

// #include "../utils/tree_node.hpp"
// #include "binary-tree-preorder-traversal.hpp"

// using namespace std;

// TEST(leetcode, binary_tree_preorder_traversal)
// {
//   // Input: root = [1,null,2,3]
//   // Output: [1,2,3]
//   TreeNode *root1 = new TreeNode(1);
//   TreeNode *right1 = new TreeNode(2);
//   TreeNode *left1 = new TreeNode(3);

//   root1->right = right1;
//   right1->left = left1;

//   vector<int> res1 = preorderTraversal(root1);
//   vector<int> expectedRes1{1, 2, 3};
//   ASSERT_EQ(res1, expectedRes1);

//   delete root1;
//   delete right1;
//   delete left1;

//   // Input: root = []
//   // Output: []
//   vector<int> res2 = preorderTraversal(nullptr);
//   vector<int> expectedRes2{};
//   ASSERT_EQ(res2, expectedRes2);

//   // Input: root = [1]
//   // Output: [1]
//   TreeNode *root3 = new TreeNode(1);
//   vector<int> res3 = preorderTraversal(root3);
//   vector<int> expectedRes3{};
//   ASSERT_EQ(res3, expectedRes3);
//   delete root3;
// }