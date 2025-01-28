#include <iostream>
#include <vector>
using namespace std;

void subsequencesEqualsToSum(int i, vector<int> arr, int n, vector<int> &ds, int target, int initialSum)
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
                }
        return;
    }
    ds.push_back(arr[i]);
    initialSum += arr[i];
    subsequencesEqualsToSum(i + 1, arr, n, ds, target, initialSum);
    ds.pop_back();
    initialSum -= arr[i];
    subsequencesEqualsToSum(i + 1, arr, n, ds, target, initialSum);
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int n = 3, target = 2;
    vector<int> ds;
    subsequencesEqualsToSum(0, arr, n, ds, target, 0);
}