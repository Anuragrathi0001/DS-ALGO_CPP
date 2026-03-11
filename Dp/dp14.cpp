#include<bits/stdc++.h>
using namespace std;
int f(int i,int j,vector<vector<int>>grid){
if(i>0&&j>0&&grid[i][j]==-1){
    return 0;
}
if(i<0||j<0){
    return 0;
}
if(i==0&&j==0){
    return 1;
}
int left = 0, up = 0;
if(i>0){
   left= f(i - 1, j,grid);
}
if(j>0){
    up = f(i, j - 1, grid);
}
return left + up;
}
int main(){

    vector<vector<int>> grid = {
        {0,0,0},
        {0,-1,0},
        {0,0,0}
    };

    int n = grid.size();
    int m = grid[0].size();
    cout<<f(n-1, m-1, grid);
    return 0;
}