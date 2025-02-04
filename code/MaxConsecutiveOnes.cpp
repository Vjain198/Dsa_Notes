#include <iostream>
#include <vector>
using namespace std;
int consecutiveOnes(vector<int> &arr)
{
    int maxi = 0, count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            count = count + 1;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr = {1, 1, 0, 0, 1, 1, 1, 0, 1, 1};
    cout << consecutiveOnes(arr) << endl;
}