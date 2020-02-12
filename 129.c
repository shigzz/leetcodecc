#include <stdio.h>
#include "tree/tree.h"

void helper(struct TreeNode *root, int cur, int *ret);
int sumNumbers(struct TreeNode *root)
{
    int ret = 0;
    int cur = 0;
    helper(root, cur, &ret);
    return ret;
}

void helper(struct TreeNode *root, int cur, int *ret)
{
    if (root == NULL)
    {
        return;
    }
    cur = cur * 10 + root->val;
    if (root->left == NULL && root->right == NULL)
    {
        *ret = *ret + cur;
        return;
    }
    helper(root->left, cur, ret);
    helper(root->right, cur, ret);
}