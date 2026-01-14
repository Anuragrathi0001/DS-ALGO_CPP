#include<bits/stdc++.h>
using namespace std;
vector<int> minimmumcoin(vector<int>arr,int k){
    vector<int> ans;
    for (int i = arr.size()-1; i >=0; i--)
    {
        while(k>=arr[i]){
            k -= arr[i];
            ans.emplace_back(arr[i]);
        }
    }
    return ans;
}
int main(){
    int k = 60;
    vector<int> coin = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    vector<int>ans=minimmumcoin(coin, k);
    for(auto it:ans){
        cout << it;
    }
    return 0;
}