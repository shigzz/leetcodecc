#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> combine(int n, int k)
{
    vector<vector<int>> res;
    vector<int> tmp;
    backward(1, n, k, tmp, &res);
    return res;
}

void backward(int c, int n, int k, vector<int> curr, vector<vector<int>> *res)
{
    if (curr.size() == k)
    {
        (*res).push_back(curr);
        return;
    }
    for (int i = c; i <= n; i++)
    {
        curr.push_back(i);
        backward(i + 1, n, k, curr, res);
        curr.pop_back();
    }
}