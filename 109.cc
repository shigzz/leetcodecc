#include <bits/stdc++.h>
#include "tree/tree.h"
#include "list/list.h"
using namespace std;

TreeNode *sortedListToBST(ListNode *head)
{
    vector<int> list;
    while (head != NULL)
    {
        list.push_back(head->val);
        head = head->next;
    }
    return build(list);
}

TreeNode *build(vector<int> list)
{
    if (list.size() == 0)
    {
        return NULL;
    }
    int pos = list.size() / 2;
    int tmp = list[pos];
    TreeNode *root = new TreeNode(tmp);
    vector<int> llist(list.begin(), list.begin() + pos);
    vector<int> rlist(list.begin() + pos + 1, list.end());
    root->left = build(llist);
    root->right = build(rlist);
    return root;
}