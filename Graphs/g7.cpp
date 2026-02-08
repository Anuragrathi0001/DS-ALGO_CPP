#include<bits/stdc++.h>
using namespace std;
int findenclaves(vector<vector<int>>&mat,vector<vector<int>>&vis,int numrows,int numcols){
    queue<pair<int,int>> q;
    int count = 0;
    int delrow[]={-1,0,1,0};
    int delcol[] = {0, 1, 0, -1};
    for (int i = 0; i < numcols; i++)
    { //firstROw
        if(!vis[numrows-1][i]){
            q.push({0, i});
            vis[0][i] = 1;
        }
        //last row
        if(mat[numrows-1][i]==1&&!vis[0][numrows-1]){
            q.push({numrows-1, i});
            
            vis[numrows-1][i] = 1;
        }        
    }
    for (int i = 0; i < numrows; i++)
    { //firstCol
        if(mat[i][0]==1&&!vis[i][0]){
            q.push({i, 0});
            vis[i][0] = 1;
        }
        //lastcol
        if(mat[i][numcols-1]==1&&!vis[i][numcols-1]){
            q.push({i,numcols-1});
            vis[i][numcols-1] = 1;
        }        
    }    
    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol = col + delcol[i];
            if(nrow >= 0 && nrow < numrows &&
                ncol >= 0 && ncol < numcols &&
                mat[nrow][ncol] == 1 &&
                !vis[nrow][ncol]){
                vis[nrow][ncol] = 1;
                q.push({nrow, ncol});
            }
        }
    }
    for (int i = 0; i < numrows;i++){
        for (int j = 0; j < numcols;j++){
            if(mat[i][j]==1&&vis[i][j]!=1){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<vector<int>> mat = {{0,0,0,1,1}, {0,0,1,1,0}, {0,1,0,0,0}, {0,1,1,0,0}, {0,0,0,1,1}};
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>>vis(n, vector<int>(m, 0));
  cout<< findenclaves(mat, vis, n, m);
    return 0;
}