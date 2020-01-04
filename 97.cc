#include <bits/stdc++.h>
using namespace std;

map<vector<int, int>, bool> isinter;

bool helper(string s1, string s2, string s3, int i1, int i2, int i3)
{
    if (i1 == s1.size())
    {
        if (s2.substr(i2) == s3.substr(i3))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (i2 == s2.size())
    {
        if (s1.substr(i1) == s3.substr(i3))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (i3 == s3.size())
        return false;
    char a1, a2, a3;
    a1 = s1[i1], a2 = s2[i2], a3 = s3[i3];
    if (a1 == a3)
    {
        if (a2 == a3)
        {
        }
    }
    else if (a2 == a3)
    {
    }
    else
    {
        return false;
    }
}

int main()
{
    string s1, s2, s3;
    s1 = "bbbbbabbbbabaababaaaabbababbaaabbabbaaabaaaaababbbababbbbbabbbbababbabaabababbbaabababababbbaaababaa";
    s2 = "babaaaabbababbbabbbbaabaabbaabbbbaabaaabaababaaaabaaabbaaabaaaabaabaabbbbbbbbbbbabaaabbababbabbabaab";
    s3 = "babbbabbbaaabbababbbbababaabbabaabaaabbbbabbbaaabbbaaaaabbbbaabbaaabababbaaaaaabababbababaababbababbbababbbbaaaabaabbabbaaaaabbabbaaaabbbaabaaabaababaababbaaabbbbbabbbbaabbabaabbbbabaaabbababbabbabbab";
    cout << helper(s1, s2, s3, 0, 0, 0) << endl;
    return 0;
}