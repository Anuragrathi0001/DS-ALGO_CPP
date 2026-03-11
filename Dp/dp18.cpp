#include<bits/stdc++.h>
using namespace std;
int f(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&dp){
if(i==0&&j==0){
    return arr[i][j];
}
if(i<0||j<0){
    return 0;
}
int left = INT_MAX, up = INT_MAX;
if(dp[i][j]!=-1){
    return dp[i][j];
}
if(i>0){
    left = f(i - 1, j, arr, dp);
}
if(j>0){
    up = f(i, j - 1, arr, dp);
}
return dp[i][j] = arr[i][j] + min(left, up);
}
int main(){
    vector<vector<int>> arr = {{5,9,6}, {11,5,2}};
    int n = arr.size();
    int m = arr[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    cout<<f(n-1, m-1, arr,dp);
    return 0;
}