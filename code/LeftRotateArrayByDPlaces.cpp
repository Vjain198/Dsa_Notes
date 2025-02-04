#include <iostream>
#include <vector>
using namespace std;

void leftRotateArrayByDPlaces(vector<int> &arr, int n, int d)
{
    d = d % n;
    vector<int> temp;
    for (int i = 0; i < d; i++)
    {
        temp.push_back(arr[i]);
    }
    // shifiting
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    // push the temp elements in the arr
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    leftRotateArrayByDPlaces(arr, n, 3);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}