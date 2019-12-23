#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> res(2);
    map<int, int> dic;
    for (int i = 0; i < nums.size(); i++)
    {
        if (dic.find(target - nums[i]) == dic.end())
        {
            dic[nums[i]] = i;
        }
        else
        {
            res[0] = dic[nums[i]];
            res[1] = i;
            return res;
        }
    }
    return res;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    vector<int> vi(begin(nums), end(nums));
    vector<int> res = twoSum(vi, 9);
    cout << res[0] << " " << res[1] << endl;
}