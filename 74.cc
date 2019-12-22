#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    if (matrix.size() == 0 || matrix[0].size() == 0)
        return false;
    for (vector<vector<int>>::iterator it = matrix.begin(); it < matrix.end(); it++)
    {
        if ((*it)[0] == target)
            return true;
        if ((*it)[0] < target)
        {
            if (it + 1 == matrix.end())
            {
                return searchVector((*it), target);
            }
            if (target < (*(it + 1))[0])
            {
                return searchVector((*it), target);
            }
        }
    }
    return false;
}

bool searchVector(vector<int> nums, int target)
{
    int low, high;
    low = 0;
    high = nums.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            return true;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return false;
}

int main()
{

    return 0;
}