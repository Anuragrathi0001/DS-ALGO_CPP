#include <bits/stdc++.h>
using namespace std;
pair<int,int> lswsumloretok(vector<int>arr,int k){
    int maxlen = 0, sum = 0, l = 0, r = 0;
    while(r<arr.size()){
        sum = sum + arr[r];
        if(sum>k){
            sum = sum - arr[l];
            l = l + 1;
        }
        else if(sum<=k){
            sum = sum + arr[r];
            maxlen = max(maxlen, l - r + 1);
            r = r + 1;
        }
    }
    return {l,r};
}
int main(){
    vector<int> arr = {2, 5, 1, 10, 10};
    int k = 14;
    pair<int,int>ans=lswsumloretok(arr, k);
    cout << ans.first<<endl;
    cout << ans.second;
    for (int i = ans.first; i <= ans.second;i++){
        cout << arr[i]<<" ";
    }
        return 0;
}