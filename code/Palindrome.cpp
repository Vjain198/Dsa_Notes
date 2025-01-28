#include<iostream>
using namespace std;

bool isPalindrome(int n){
   if(n < 0 ) return false;

   long long rev = 0;
   long long  num = n;
   while(num > 0){
    int lastDigit = num % 10;
    rev = rev * 10 + lastDigit;
    num = num / 10;
   }
   return (rev == n);
}

int main(){
    int n = 121;
    cout<<isPalindrome(n)<<endl;
    return 0;
}