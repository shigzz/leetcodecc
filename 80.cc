#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int slow, fast, count;
    slow = 0, fast = 0, count = 1;
    for (fast = 1; fast < nums.size(); fast++)
    {
        if (nums[fast] == nums[slow])
        {
            count++;
            if (count > 2)
            {
                nums.erase(nums.begin() + (fast--));
            }
        }
        else
        {
            slow = fast;
            count = 1;
        }
    }
    return nums.size();
}