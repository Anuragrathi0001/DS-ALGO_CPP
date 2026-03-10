#include <bits/stdc++.h>
using namespace std;
int f(int ind,vector<int>arr,vector<int>dp){
    if(ind==0){
        return arr[ind];
    }
    if(ind<0){
        return 0;
    }
    if(dp[ind]!=-1){
        return dp[ind];
    }
    int pick = arr[ind] + f(ind - 2, arr, dp);
    int npick = f(ind - 1, arr, dp);
    return dp[ind] = max(pick, npick);
}
int main(){
    vector<int> arr = {2, 1, 4, 9};
    int ind = arr.size();
    vector<int> dp(ind, -1);
   cout<< f(ind-1, arr, dp);
    return 0;
}