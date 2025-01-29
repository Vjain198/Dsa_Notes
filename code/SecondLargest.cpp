#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 6, 7, 9, 9, 10};
    int n = arr.size();
    int largest = arr[0];
    int second_largest = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second_largest)
        {
            second_largest = arr[i];
        }
    }
    cout << second_largest << endl;
}