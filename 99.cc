#include <bits/stdc++.h>
using namespace std;

void recoverTree(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    TreeNode *node1 = NULL;
    TreeNode *node2 = NULL;

    TreeNode *mostRight = NULL;
    TreeNode *cur = root;

    TreeNode *pre = NULL;
    while (cur != NULL)
    {
        mostRight = cur->left;
        if (mostRight != NULL)
        {
            while (mostRight->right != NULL && mostRight->right != cur)
            {
                mostRight = mostRight->right;
            }
            if (mostRight->right == NULL)
            {
                mostRight->right = cur;
                cur = cur->left;
                continue;
            }
            else
            { // 第二次遍历到了
                mostRight->right = NULL;
            }
        }

        if (pre != NULL && pre->val > cur->val)
        {
            node1 = node1 == NULL ? pre : node1;
            node2 = cur;
        }

        pre = cur;
        cur = cur->right;
    }

    int temp = node1->val;
    node1->val = node2->val;
    node2->val = temp;
}