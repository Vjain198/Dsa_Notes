#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = arr.size();
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << largest << endl;
}