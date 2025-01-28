#include <iostream>
#include <vector>
using namespace std;

int subsequencesEqualsToSum(int i, vector<int> arr, int n, int target, int initialSum)
{
    if (i == n)
    {
        if (initialSum == target)
            return 1;
        return 0;
    }

    initialSum += arr[i];
    int l = subsequencesEqualsToSum(i + 1, arr, n, target, initialSum);
    initialSum -= arr[i];
    int r = subsequencesEqualsToSum(i + 1, arr, n, target, initialSum);
    return l + r;
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int n = 3, target = 2;
    vector<int> ds;
    cout << subsequencesEqualsToSum(0, arr, n, target, 0) << endl;
}