#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *reverseBetween(ListNode *head, int m, int n)
{
    vector<ListNode *> list;
    int nn = 1;
    ListNode *l1 = head;
    ListNode *root = new ListNode(0);
    root->next = head;
    ListNode *l2 = root;
    while (nn < m)
    {
        l1 = l1->next;
        l2 = l2->next;
        nn++;
    }
    while (nn <= n)
    {
        list.push_back(l1);
        l1 = l1->next;
        nn++;
    }
    while (list.size())
    {
        ListNode *tmp = list[list.size() - 1];
        list.pop_back();
        l2->next = tmp;
        l2 = tmp;
    }
    l2->next = l1;
    return root->next;
}