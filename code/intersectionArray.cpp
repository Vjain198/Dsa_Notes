#include <iostream>
#include <vector>
using namespace std;

vector<int> findIntersection(vector<int> &a, vector<int> &b, int n, int m)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> arr2 = {2, 3, 3, 5, 6, 7};
    vector<int> ans = findIntersection(arr1, arr2, 8, 6);
    for (auto &val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
