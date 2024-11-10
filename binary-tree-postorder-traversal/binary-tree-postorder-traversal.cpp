#include "binary-tree-postorder-traversal.hpp"

using namespace std;

vector<int> postorderTraversal(TreeNode *root)
{
    if (root == nullptr)
    {
        return {};
    }

    vector<int> leftRes = postorderTraversal(root->left);
    vector<int> rightRes = postorderTraversal(root->right);

    leftRes.insert(leftRes.end(), rightRes.begin(), rightRes.end());
    leftRes.push_back(root->val);

    return leftRes;
}