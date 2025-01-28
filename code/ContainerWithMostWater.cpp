#include <iostream>
using namespace std;

int maxWater(int arr[], int size)
{
    int lp = 0, rp = size - 1, maxWater = 0;
    while (lp < rp)
    {
        int width_of_container = rp - lp;
        int height_of_container = min(arr[lp], arr[rp]);
        int current_water = width_of_container * height_of_container;
        maxWater = max(maxWater, current_water);
        // to update the pointers
        arr[lp] < arr[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main()
{
    int arr[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = 9;
    cout << "Container with max water : " << maxWater(arr, size) << endl;
}