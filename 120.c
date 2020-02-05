#include <stdio.h>

int minimumTotal(int **triangle, int triangleSize, int *triangleColSize)
{
    int *pre = (int *)calloc(triangleSize, sizeof(int));
    int *dp = (int *)calloc(triangleSize, sizeof(int));
    pre[0] = triangle[0][0];
    for (int i = 1; i < triangleSize; i++)
    {
        dp[0] = pre[0] + triangle[i][0];
        for (int j = 1; j < i; j++)
        {
            dp[j] = triangle[i][j] + (pre[j - 1] < pre[j] ? pre[j - 1] : pre[j]);
        }
        dp[i] = pre[i - 1] + triangle[i][i];

        for (int k = 0; k < triangleColSize[i]; k++)
        {
            pre[k] = dp[k];
        }
    }

    int ans = pre[0];
    for (int i = 1; i < triangleSize; i++)
    {
        if (pre[i] < ans)
        {
            ans = pre[i];
        }
    }

    return ans;
}