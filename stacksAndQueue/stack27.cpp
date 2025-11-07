#include <bits/stdc++.h>
using namespace std;
vector<int>slidewindowmax(vector<int>arr,int n){
    vector<int> ans;
    for (int i = 0; i <= arr.size() - n;i++){
        int maxi = arr[i];
        for (int j = i; j < i + 3;j++){
            maxi = max(maxi, arr[j]);
        }
        ans.push_back(maxi);
    }
    return ans;
}
int main(){
    vector<int> arr= {1, 3, -1, -3, 5, 3, 2, 1, 6};
    vector<int> ans = slidewindowmax(arr,3);
    for(auto it:ans){
        cout << it;
    }
    return 0;
}