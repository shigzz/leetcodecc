#include <stddef.h>
#include "tree/tree.h"

int minDepth(struct TreeNode *root)
{
    if (root == NULL)
        return 0;
    int mindep = 0;
    int curdep = 1;
    findmindep(root, &mindep, curdep);
    return mindep;
}

void findmindep(struct TreeNode *root, int *mindep, int curdep)
{
    if (root->left == NULL && root->right == NULL)
    {
        if (*mindep == 0 || *mindep > curdep)
        {
            *mindep = curdep;
        }
    }
    if (root->left != NULL)
    {
        findmindep(root->left, mindep, curdep + 1);
    }
    if (root->right != NULL)
    {
        findmindep(root->right, mindep, curdep + 1);
    }
}