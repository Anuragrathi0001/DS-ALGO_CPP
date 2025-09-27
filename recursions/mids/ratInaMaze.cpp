#include<bits/stdc++.h>
using namespace std;
bool valid(int i,int j,int n){
    return i < n && j < n && i >= 0 && j >= 0;
}
void total(vector<vector<int>>&matrix,int i,int j,int n,string path,vector<string>&ans,vector<vector<bool>>&visited){
if(i==n-1&&j==n-1){
    ans.push_back(path);
    return;}
    int row[4]={-1,1,0,0};
    int col[4] = {0,0,-1,1};
    string dir = "UDLR";
    visited[i][j] = true;
    for (int k = 0; k < 4;k++){
        if(valid(i+row[k],j+col[k],n)&&!visited[i+row[k]][j+col[k]]&&matrix[i+row[k]][j+col[k]]){
            path.push_back(dir[k]);
            total(matrix, i + row[k], j + col[k], n, path, ans, visited);
            path.pop_back();
        }
    }
    visited[i][j]=0;
}

int main(){
    vector<vector<int>> matrix = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    string path;
    vector<string> ans;
     vector<vector<bool>> visited(4, vector<bool>(4, false));
    if (matrix[0][0] == 1) { 
        total(matrix, 0, 0, 4, path, ans, visited);
    }
  
    
    
    return 0;
}