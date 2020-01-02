#include <bits/stdc++.h>
using namespace std;

vector<string> restoreIpAddresses(string s)
{
    vector<string> tmp;
    vector<string> res;
    findIpAddress(s, tmp, &res);
    return res;
}

void findIpAddress(string s, vector<string> tmp, vector<string> *res)
{
    if (s.size() == 0)
    {
        if (tmp.size() == 4)
        {
            //条件符合，处理IP地址
            string tres;
            for (int i = 0; i < 3; i++)
            {
                tres = tres + tmp[i] + ".";
            }
            tres = tres + tmp[3];
            (*res).push_back(tres);
        }
    }
    for (int i = s.size() > 3 ? 3 : s.size(); i > 0; i--)
    {
        if (3 * tmp.size() + s.size() - i > 9)
        {
            break;
        }
        //tmp.push_back(s.substr(0,i));
        string tp = s.substr(0, i);
        int tpp = stoi(tp);
        if (tpp > 255)
            continue;
        if (tp.size() > 1 && tp[0] == '0')
            continue;
        tmp.push_back(tp);
        findIpAddress(s.substr(i), tmp, res);
        tmp.pop_back();
    }
}