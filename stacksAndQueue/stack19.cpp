#include<bits/stdc++.h>
using namespace std;
void   findpreandsuf(vector<int>arr,vector<int>&prefix,vector<int>&suffix){
    int n = arr.size();
    prefix[0] = arr[0];
    for (int i = 1; i <n;i++){
        prefix[i] = max(arr[i], prefix[i - 1]);
    }
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0;i--){
        suffix[i] = max(arr[i], suffix[i + 1]);
    }
}
int trappedRainWater(vector<int>arr,vector<int>prefixmax,vector<int>suffixmax){
    int totalWater = 0;
    for (int i = 0; i < arr.size();i++){
        int leftmax = prefixmax[i];
        int rightmax = suffixmax[i];
        if(leftmax>arr[i]&&rightmax>arr[i]){
            totalWater += min(leftmax, rightmax) - arr[i];
        }
    }
    return totalWater;
}
int main(){
    vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2};
    vector<int> prefix(arr.size());
    vector<int> suffix(arr.size());
    findpreandsuf(arr, prefix, suffix);
    cout << trappedRainWater(arr,prefix,suffix);
    return 0;
}