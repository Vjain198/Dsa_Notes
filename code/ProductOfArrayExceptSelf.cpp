#include <iostream>
#include<vector>
using namespace std;

vector<int>getArrayProduct(vector<int> &nums)
{
    int n = nums.size();
    vector<int>ans(n , 1);

    // calculating and storing prefix in ans arr

    for(int i = 0; i<n; i++){
        ans[i] = ans[i-1] * nums[i-1];
    }

    // calculating and storing suffix in ans arr

    int suffix = 1;
    for(int i=n-2; i>=0; i--){
        suffix = suffix * nums[i+1];
        ans[i] = ans[i + 1] * suffix;
    }
    return ans;
}


  
int main()
   {
       vector<int> nums = {1, 2, 3, 4, 5};
       cout<<getArrayProduct(nums);
   
       return 0;
   }

