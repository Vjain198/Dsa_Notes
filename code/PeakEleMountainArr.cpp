#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &A)
{
    int st = 1, end = A.size() - 2;

    while (st <= end)
    {
        int mid = st + ((end - st) / 2);

        if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1])
        {
            return mid;
        }
        if (A[mid - 1] < A[mid])
        { // mid lies in left side will do bs in the right side
            st = mid + 1;
        }
        else
        { // mid lies in right side so will do bs in the left side
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> A = {0, 1, 0};
    cout << "Element found at index : " << peakIndexInMountainArray(A) << endl;

    return 0;
}