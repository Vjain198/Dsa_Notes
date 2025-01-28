#include <iostream>
#include <vector>
using namespace std;

void printSubsequences(int i, vector<int> arr, int n, vector<int> &ds)
{
    if (i == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    // take the particular index into the susequence
    ds.push_back(arr[i]);
    printSubsequences(i + 1, arr, n, ds);
    ds.pop_back();
    // not take the particular index into the susequence
    printSubsequences(i + 1, arr, n, ds);
}

int main()
{
    vector<int> arr = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printSubsequences(0, arr, n, ds);
}