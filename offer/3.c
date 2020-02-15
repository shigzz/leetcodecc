#include <stdio.h>

int findRepeatNumber(int *nums, int numsSize)
{
    int *unique = (int *)calloc(numsSize, sizeof(int));
    //int res[numsSize/2];
    //int size = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (unique[nums[i]] == 0)
        {
            unique[nums[i]] = 1;
        }
        else
        {
            //printf("%d,%d,%d",i,nums[i],unique[nums[i]]);
            return nums[i];
        }
    }
    return 0;
