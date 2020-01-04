#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isValidBST(TreeNode *root)
{
    stack<TreeNode *> st;
    vector<int> treevals;
    while (root != NULL || (!st.empty()))
    {
        if (root != NULL)
        {
            st.push(root);
            root = root->left;
        }
        else
        {
            TreeNode *tmp = st.top();
            st.pop();
            if (treevals.size() != 0 && tmp->val <= *(treevals.end() - 1))
            {
                return false;
            }
            treevals.push_back(tmp->val);
            root = tmp->right;
        }
    }
    return true;
}