#include<iostream>
using namespace std;


// Array Revese 

void ArrayReverse(int arr[] , int size){
    int start = 0;
    int end = size-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
  int arr[] = {1,3,6,2,5};
  int size = 5;

  ArrayReverse(arr , size);

  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}