#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> arr = {{5,9,6}, {11,5,2}};

    int n = arr.size();
    int m = arr[0].size();

    vector<vector<int>> dp(n, vector<int>(m, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            if(i == 0 && j == 0){
                dp[i][j] = arr[i][j];
            }
            else{
                int up = INT_MAX;
                int left = INT_MAX;

                if(i > 0)
                    up = arr[i][j] + dp[i-1][j];

                if(j > 0)
                    left = arr[i][j] + dp[i][j-1];

                dp[i][j] = min(up, left);
            }
        }
    }

    cout << dp[n-1][m-1];

    return 0;
} 