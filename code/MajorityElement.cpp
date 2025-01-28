#include<iostream>
using namespace std;

int getMajorityEle(int arr[] , int n ){
    int freq = 0 , ans = 0;
    for(int i =0; i<n; i++){
        if(freq == 0){
            ans = arr[i];
        }
        if(ans == arr[i]){
            freq = freq + 1;
        }
        else{
            freq = freq - 1;
        }
    }

    return ans;
}


int main (){
    int arr[] = {1,2,2,2,1};
    int mj = getMajorityEle(arr ,5);
    cout<<"majority element is : "<<mj<<endl;
}