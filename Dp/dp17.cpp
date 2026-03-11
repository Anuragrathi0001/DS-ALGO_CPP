#include <bits/stdc++.h>
using namespace std;
int f(int i,int j,vector<vector<int>>arr){
    if(i==0&&j==0){
        return arr[i][j];
    }
    if(i<0||j<0){
        return INT_MAX;
    }
    int left = INT_MAX, up = INT_MAX;
    if(i>0){
        left = f(i - 1, j, arr);
    }
    if(j>0){
        up = f(i, j - 1, arr);
    }
    return arr[i][j]+ min(left, up);
}
int main(){
    vector<vector<int>> arr = {{5,9,6}, {11,5,2}};
    int n = arr.size();
    int m = arr[0].size();
    cout<<f(n-1, m-1, arr);
    return 0;
}
