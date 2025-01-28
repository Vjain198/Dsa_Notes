#include <iostream>
#include <vector>

using namespace std;

int getSingleNumber(vector<int> &arr)
{
    int ans = 0;
    for (int val : arr)
    {
        ans = ans ^ val;
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
    cout << getSingleNumber(v) << endl;
}