#include<bits/stdc++.h>
using namespace std;
int fiboStuff(int n,vector<int>dp){
if(n<=1){
    return n;
}
if(dp[n]!=-1){
    return dp[n];
}
return dp[n] = fiboStuff(n-1,dp) + fiboStuff(n-2,dp);
}
int main(){
    int n = 5;
    vector<int> dp(n + 1, -1);
   cout<< fiboStuff(n, dp);
   return 0;
}