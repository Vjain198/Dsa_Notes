#include<iostream>
using namespace std;

void printSubArrays(int arr[], int n) {
    for(int start=0; start<n; start++) {
        for(int end = start; end < n; end ++){
            for(int i=start; i<=end; i++) {
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
  int size = 5;
  int arr[] = {1,2,5,7,8};
  printSubArrays(arr,size);
}
