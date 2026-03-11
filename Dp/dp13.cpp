#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> grid = {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };

    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> dp(n, vector<int>(m, -1));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            if(i==0 && j==0){
                dp[i][j] = 1;
                continue;
            }

            int left = 0, up = 0;

            if(i>0){
                up = dp[i-1][j];
            }

            if(j>0){
                left = dp[i][j-1];
            }

            dp[i][j] = up + left;
        }
    }

    cout << dp[n-1][m-1];

    return 0;
}