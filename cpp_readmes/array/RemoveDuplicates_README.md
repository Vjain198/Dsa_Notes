# Remove Duplicates from Array

## Description
This program removes duplicates from a sorted array of integers in-place.

## Code
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3};
    int n = arr.size();
    int i = 0;

    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    // Print only unique elements
    for (int j = 0; j <= i; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}
```
