#include <iostream>
#include <vector>
using namespace std;

int isPossible(vector<int> arr, int N, int C, int minAllowedDistance)
{
    int cows = 1, lastStallPostion = arr[0];

    for (int i = 1; i < N; i++)
    {
        if ((arr[i] - lastStallPostion) >= minAllowedDistance)
        {
            cows++;
            lastStallPostion = arr[i];
        }

        if (cows == C)
            return true;
    }

    return false;
}
int getDistance(vector<int> arr, int N, int C)
{
    // sort the array

    sort(arr.begin(), arr.end());

    int st = 1, end = arr[N - 1] - arr[0], ans = -1;

    while (st <= end)
    {
        int mid = st + ((end - mid) / 2);
        if (isPossible(arr, N, C, mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};
    cout << "largest min distance : " << getDistance(arr, N, C) << endl;
    return 1;
}