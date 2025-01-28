#include <iostream>
#include <vector>
using namespace std;

bool subsequencesEqualsToSum(int i, vector<int> arr, int n, vector<int> &ds, int target, int initialSum)
{
    if (i == n)
    {
        if (initialSum == target)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        else
            return false;
    }
    ds.push_back(arr[i]);
    initialSum += arr[i];
    if (subsequencesEqualsToSum(i + 1, arr, n, ds, target, initialSum))
        return true;
    ds.pop_back();
    initialSum -= arr[i];
    if (subsequencesEqualsToSum(i + 1, arr, n, ds, target, initialSum))
        return true;
    return false;
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int n = 3, target = 2;
    vector<int> ds;
    subsequencesEqualsToSum(0, arr, n, ds, target, 0);
}