#include "tree/tree.h"
#include <stdio.h>
#include <stdbool.h>

bool treehelper(struct TreeNode *root, int sum, int cur);

bool hasPathSum(struct TreeNode *root, int sum)
{
    if (root == NULL)
    {
        return false;
    }
    return treehelper(root, sum, 0);
}

bool treehelper(struct TreeNode *root, int sum, int cur)
{
    cur = cur + root->val;
    if (root->left == NULL && root->right == NULL)
    {
        if (cur == sum)
        {
            return true;
        }
        return false;
    }
    else
    {
        bool bl = root->left == NULL ? false : treehelper(root->left, sum, cur);
        bool br = root->right == NULL ? false : treehelper(root->right, sum, cur);
        return bl || br;
    }
}