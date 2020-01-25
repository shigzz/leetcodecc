#include <bits/stdc++.h>

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node *_left, Node *_right, Node *_next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution
{
public:
    Node *connect(Node *root)
    {
        if (root == NULL)
            return root;
        int front, end, last;
        front = -1, end = -1, last = 0;
        vector<Node *> que;
        que.push_back(root);
        end++;
        while (front != end)
        {
            for (int i = front + 1; i < last; i++)
            {
                que[i]->next = que[i + 1];
            }
            que[last]->next = NULL;
            for (int i = front + 1; i <= last; i++)
            {
                if (que[i]->left != NULL)
                {
                    que.push_back(que[i]->left);
                    end++;
                }
                if (que[i]->right != NULL)
                {
                    que.push_back(que[i]->right);
                    end++;
                }
            }
            front = last;
            last = end;
        }
        return root;
    }
};