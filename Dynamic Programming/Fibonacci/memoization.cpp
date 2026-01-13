// Memoization + Recursion
// also called top down approach

#include<iostream>
#include<vector>
using namespace std;

int fibonacci(int n, vector<int> dp){
   if(n == 0){
    return 0;
   }

   if(n == 1){
    return 1;
   }

   if(dp[n] != -1){
    return dp[n];
   }

   dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);
   return dp[n];
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    vector<int> dp(n + 1, -1);  // initialize with -1

    cout<<endl;
    cout<<fibonacci(n, dp)<<endl;
    return 0;
}