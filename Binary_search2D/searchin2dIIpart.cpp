#include <bits/stdc++.h>
using namespace std;
vector<int>twoDSearch(vector<vector<int>>arr,int key){
    int n=arr.size();
    int m = arr[0].size();
    int row = 0, col = m - 1;
    while(row<n&&col>=0){
        int mid = arr[row][col];
        if(mid==key){
            return {row, col};
        }
        else if(mid>key){
            col--;
        }
        else{
            row++;
        }
    }
    return {-1, -1};
}
int main(){
    vector<vector<int>> arr = {{1,4,7,11,15}, {2,5,8,12,19}, {3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    vector <int>ans=twoDSearch(arr, 14);
    for(auto it:ans){
        cout << it <<" ";
    }
    return 0;
}