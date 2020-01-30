#include <stdlib.h>

int **generate(int numRows, int *returnSize, int **returnColumnSizes)
{
    *returnSize = numRows;
    int i, j;
    int **trangle = (int **)calloc(numRows, sizeof(int *));
    (*returnColumnSizes) = (int *)calloc(numRows, sizeof(int));

    for (int i = 0; i < numRows; i++)
    {
        (*returnColumnSizes)[i] = i + 1;
        trangle[i] = (int *)calloc(i + 1, sizeof(int));
        trangle[i][0] = 1;
        for (j = 1; j < i; j++)
        {
            trangle[i][j] = trangle[i - 1][j - 1] + trangle[i - 1][j];
        }
        trangle[i][i] = 1;
    }
    return trangle;
}