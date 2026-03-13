#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {2,3,1,1};
    int k = 4;
    int n = arr.size();

    vector<vector<bool>> dp(n, vector<bool>(k+1,false));

    for(int i=0;i<n;i++)
        dp[i][0] = true;

    if(arr[0] <= k)
        dp[0][arr[0]] = true;

    for(int i=1;i<n;i++){
        for(int target=1; target<=k; target++){

            bool nottake = dp[i-1][target];

            bool take = false;
            if(arr[i] <= target)
                take = dp[i-1][target-arr[i]];

            dp[i][target] = take || nottake;
        }
    }

    cout << dp[n-1][k];
}