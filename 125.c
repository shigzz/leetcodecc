#include <stdio.h>
#include <stdlib.h>

bool isPalindrome(char *s)
{
    int len = strlen(s);
    int i = 0;
    int j = len - 1;
    while (i < j)
    {
        if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')))
        {
            i++;
            continue;
        }
        if (!((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9')))
        {
            j--;
            continue;
        }
        //printf("1%c2%c\ %c%c\n",s[i],s[j],s[j]);
        if (s[i] == s[j] || (s[i] + 'A' - 'a' == s[j] && s[i] != 'P') || (s[i] + 'a' - 'A' == s[j] && s[i] != '0'))
        {
            i++;
            j--;
        }
        else
        {
            //printf("1");
            return false;
        }
    }
    return true;
}