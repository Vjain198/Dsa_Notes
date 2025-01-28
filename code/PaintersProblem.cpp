#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int maxAllowedMins)
{
    int painters = 1, mins = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedMins)
            return false;

        if (mins + arr[i] <= maxAllowedMins)
        {
            mins += arr[i];
        }
        else
        {
            painters++;
            mins = arr[i];
        }
    }

    return painters > m ? false : true;
}

int painterProblem(vector<int> arr, int n, int m)
{
    if (m > n)
        return -1;
    int sum = 0, max_arr = INT_MIN;
    ;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        max_arr = max(max_arr, arr[i]);
    }

    int ans = -1;
    int st = max_arr, end = sum;

    while (st <= end)
    {
        int mid = st + ((end - st) / 2);

        if (isValid(arr, n, m, mid))
        { // move to left
            ans = mid;
            end = mid - 1;
        }
        else
        { // move to right
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;
    cout << "minimum time : " << painterProblem(arr, n, m) << endl;
}