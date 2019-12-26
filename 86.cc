#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *partition(ListNode *head, int x)
{
    ListNode *root = new ListNode(0);
    root->next = head;
    ListNode *l1 = root, *l2, *l3, *l4;
    for (l2 = l1->next; l2 != NULL && l2->val < x; l1 = l1->next, l2 = l2->next)
        ;
    l3 = l2, l4 = l2 != NULL ? l2->next : NULL;
    while (l4 != NULL)
    {
        if (l4->val < x)
        {
            l3->next = l4->next;
            l1->next = l4;
            l4->next = l2;
            l1 = l1->next;
            l4 = l3->next;
        }
        else
        {
            l3 = l3->next;
            l4 = l4->next;
        }
    }
    return root->next;
}