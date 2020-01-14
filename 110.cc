#include <bits/stdc++.h>
using namespace std;

#include "tree/tree.h"

bool isBalanced(TreeNode *root)
{
    return treehelper(root) != -1;
}
int treehelper(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = treehelper(root->left);
    if (left == -1)
        return -1;
    int right = treehelper(root->right);
    if (right == -1)
        return -1;
    return abs(left - right) < 2 ? max(left, right) + 1 : -1;
}