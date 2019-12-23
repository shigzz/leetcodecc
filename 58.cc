#include <bits/stdc++.h>

using namespace std;

int lengthOfLastWord(string s)
{
    if (s[s.length() - 1] == ' ')
    {
        return lengthOfLastWord(s.substr(0, s.length() - 1));
    }
    int i, j = 0;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            j = i + 1;
        }
    }
    return i - j;
}

int main()
{
    cout << lengthOfLastWord("a ");
    return 0;
}