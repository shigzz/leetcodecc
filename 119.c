#include <stdlib.h>

int *getRow(int rowIndex, int *returnSize)
{
    *returnSize = rowIndex + 1;
    int *ans = (int *)calloc(*returnSize, sizeof(int));
    for (int i = 0; i <= rowIndex; i++)
    {
        ans[i] = 1;
        for (int j = i - 1; j > 0; j--)
        {
            ans[j] += ans[j - 1];
        }
    }
    return ans;
}