#include <bits/stdc++.h>
using namespace std;
void permute(vector<int>&arr,vector<vector<int>>&ans,int index){
    if(arr.size()==index){
        ans.push_back(arr);
        return;
    }
    for (int i = index; i < arr.size();i++){
        swap(arr[index], arr[i]);
        permute(arr, ans, index + 1);
        swap(arr[index], arr[i]);
    }
}
int main(){
     vector<int>arr = {1, 2, 3};
    vector<vector<int>> ans;
    permute(arr, ans, 0);
    for (int i = 0; i < ans.size();i++){
        for (int j = 0; j < ans[i].size();j++){
            cout << ans[i][j];
           
        } cout << endl;
    }
        return 0;
}