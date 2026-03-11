#include <bits/stdc++.h>
using namespace std;
int f(int i,int j,vector<vector<int>>&dp,vector<vector<int>>&grid){
if(i<0||j<0){
    return 0;
}
if(grid[i][j]==-1){
    return 0;
}
if(i==0&&j==0){
    return 1;
}
if(dp[i][j] != -1){
    return dp[i][j];}
int left = 0, up = 0;
if(i>0){
     left= f(i - 1, j, dp, grid);
}
if(j>0){
    up = f(i, j - 1, dp, grid);
}
return dp[i][j] = up + left;
}
int main(){
    
    vector<vector<int>> grid = {
        {0,0,0},
        {0,-1,0},
        {0,0,0}
    };
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    cout<<f(n-1, m-1,dp, grid);
}