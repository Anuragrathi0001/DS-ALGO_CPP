#include<bits/stdc++.h>
using namespace std;
int fiboStuff(int n,vector<int>dp){
if(n==0){
    return dp[0];
}
else if(n==1){
    return dp[1];
}
for (int i = 2;i<=n;i++){
    dp[i]= dp[i - 1] + dp[i - 2];}
return dp[n];
}
int main(){
    int n = 5;
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    cout<<fiboStuff(n, dp);
    return 0;
}