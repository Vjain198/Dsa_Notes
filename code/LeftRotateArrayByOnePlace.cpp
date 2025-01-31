#include <iostream>
#include <vector>
using namespace std;

void leftRotateArrayByOnePlace(vector<int> &arr, int n)
{
    int tem = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = tem;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    leftRotateArrayByOnePlace(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}