#include <iostream>
#include <vector>
using namespace std;

vector<int> getPairSum(vector<int> &nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int ps = nums[i] + nums[j];
        if (ps > target)
        {
            j--;
        }
        else if (ps < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {
        4,
        2,
        1,
        2,
        1,
        4,
        5,
    };
    int target = 9;

    vector<int> result = getPairSum(v, target);
    cout << "Painr sum is : [" << result[0] << "," << result[1] << "]" << endl;
}