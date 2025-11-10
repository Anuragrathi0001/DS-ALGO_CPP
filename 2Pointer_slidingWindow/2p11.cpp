#include <bits/stdc++.h>
using namespace std;
int maxcone(vector<int>arr,int k){
    int maxlen = 0, zeroes = 0;
    int l = 0, r = 0;
    while(r<arr.size()){
        if(arr[r]==0){
            zeroes++;
        }
        while(zeroes>k){
            if(arr[l]==0){
                zeroes--;
            }   l++;
        }
        if(zeroes<=k){
            int len = r - l + 1;
            maxlen = max(maxlen, len);
        }
        r++;
    }
    return maxlen;
}
int main(){
    vector<int> arr = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 2;
  cout<<  maxcone(arr, k);
    return 0;
}