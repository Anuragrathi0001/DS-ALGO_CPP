#include <bits/stdc++.h>
using namespace std;
int funk(int ind,vector<int>&arr,vector<int>&dp){
    for (int i = 1; i < ind;i++){
        int take = arr[ind];
        if(i>1){
            take += dp[i - 2];
        }
        int ntake = 0 + dp[i - 1];
        dp[i] = max(take, ntake);
    }
    return dp[ind - 1];
}
int main(){
    vector<int> arr = {2, 1, 4, 9};
    int ind = arr.size();
    vector<int> dp(ind, -1);
    dp[0] = arr[0];
    int neg = 0;
    cout<<funk(ind, arr, dp);
}