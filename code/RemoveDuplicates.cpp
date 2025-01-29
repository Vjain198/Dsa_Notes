#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3};
    int n = arr.size();
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    // Print only unique elements
    for (int j = 0; j <= i; j++) // Change made here to include the last unique element
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}