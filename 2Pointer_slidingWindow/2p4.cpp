#include<bits/stdc++.h>
using namespace std;
int lswsumloretok(vector<int>arr,int k){
    int maxlen = 0;
    int l = 0, r = 0;
    int sum = 0;
    while (r<arr.size()){
        sum = sum + arr[r];
        while(sum>k){
            sum = sum - arr[l];
            l = l + 1;
        }
        if(sum<=k){
            maxlen = max(maxlen, r - l+1 );
            r = r + 1;
        }
    }
    return maxlen;
}
int main(){
    int k = 14;
    vector<int> arr = {2, 3, 1, 7, 10};
  cout<<  lswsumloretok(arr, k);
    return 0;
}