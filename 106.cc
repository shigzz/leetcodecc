#include <bits/stdc++.h>
using namespace std;

TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    if (inorder.size() == 0)
        return NULL;
    int rootval = *(postorder.end() - 1);
    TreeNode *root = new TreeNode(rootval);
    vector<int>::iterator element = find(inorder.begin(), inorder.end(), rootval);
    int pos = distance(inorder.begin(), element);
    vector<int> lin(inorder.begin(), inorder.begin() + pos);
    vector<int> lpo(postorder.begin(), postorder.begin() + pos);
    root->left = buildTree(lin, lpo);
    vector<int> rin(inorder.begin() + pos + 1, inorder.end());
    vector<int> rpo(postorder.begin() + pos, postorder.end() - 1);
    root->right = buildTree(rin, rpo);
    return root;
}