#include "binary-tree-preorder-traversal.hpp"

using namespace std;

vector<int> preorderTraversal(TreeNode *root)
{
    if (root == nullptr)
    {
        return {};
    }

    vector<int> leftRes = preorderTraversal(root->left);
    vector<int> rightRes = preorderTraversal(root->right);

    vector<int> res = {root->val};
    res.insert(res.end(), leftRes.begin(), leftRes.end());
    res.insert(res.end(), rightRes.begin(), rightRes.end());

    return res;
}