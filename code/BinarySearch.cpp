#include<iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int> arr, int target){
    int start = 0 , end = arr.size() - 1;
    while(start<=end){
        int mid = start + ((end - start)/2);
        if(target > arr[mid]){ // search in 2nd half
          start = mid + 1;

        }
        else if(target < arr[mid]){ // search in first half
            end = mid -1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int>arr = {-1,0,3,4,5,9,12};
    int target = 3;
    cout << binarySearch(arr , target) << endl;

}