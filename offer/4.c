#include <stdio.h>
#include <stdlib.h>

bool findNumberIn2DArray(int **matrix, int matrixSize, int *matrixColSize, int target)
{
    if (matrixSize == 0)
    {
        return false;
    }
    int i = 0;
    int j = matrixColSize[0] - 1;
    while (i < matrixSize && j >= 0)
    {
        if (matrix[i][j] == target)
        {
            return true;
        }
        else if (matrix[i][j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}