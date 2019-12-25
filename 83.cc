#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *deleteDuplicates(ListNode *head)
{
    if (head == NULL)
    {
        return head;
    }
    ListNode *l1, *l2;
    l1 = head;
    l2 = head->next;
    while (l2 != NULL)
    {
        while (l2 != NULL && l2->val == l1->val)
            l2 = l2->next;
        l1->next = l2;
        l1 = l2;
        l2 = l2 == NULL ? NULL : l2->next;
    }
    return head;
}