#include<bits/stdc++.h>
using namespace std;
void rotatenine(vector<vector<int>>&arr){
    for (int i = 0; i < arr.size();i++){
        for (int j = i+1; j < arr[0].size();j++){
            if(i==j){
                continue;
            }
            else {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }
    for (int i = 0;i<arr.size();i++){
        reverse(arr[i].begin(), arr[i].end());
    }
}
int main(){
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotatenine(arr);
    for(auto it:arr){
        for(auto at:it){
            cout << at<<" ";
        }
        cout << endl;
    }
}