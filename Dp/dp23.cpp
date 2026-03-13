#include <bits/stdc++.h>
using namespace std;
int f(int i,int j,vector<vector<int>>matrix,vector<vector<int>>dp){
    if(j<0||j>=matrix[0].size()){
        return -1e9;
    }
    if(i==0){
        return matrix[0][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int left = matrix[i][j] + f(i - 1, j - 1, matrix,dp);
    int right = matrix[i][j] + f(i - 1, j + 1, matrix,dp);
    int up = matrix[i][j] + f(i - 1, j, matrix,dp);
    return dp[i][j]= max(left, max(right, up));
}
int main(){
    vector<vector<int>> matrix = {
    {10, 2, 3, 4},
    {3, 7, 1, 6},
    {8, 5, 9, 3},
    {4, 6, 2, 8}
};
    int stuff = 0;
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    for (int i = 0; i < m;i++){
    stuff=max(stuff,f(n-1,i, matrix,dp));
}
cout << stuff;
}