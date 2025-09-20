#include <bits/stdc++.h>
using namespace std;
int lowcol(vector<vector<int>>arr){
    int mini = arr[0][0];
    for (int i = 0;i<arr.size();i++){
        if(arr[i][0]<mini){
            mini = arr[i][0];
        }
    }
    return mini;
}
int highcol(vector<vector<int>>arr){
    int m = arr[0].size();
    int maxi = -1;
    for (int i = 0; i < arr.size();i++){
        if(arr[i][m]>maxi){
            maxi = arr[i][m];
        }
    }
    return maxi;
}
 int medianofmat(vector<vector<int>>arr){
     int low = lowcol(arr);
     int high = highcol(arr);
 }
int main(){
  vector<vector<int>> arr = {{4,2,5,1,4,5}, {2,9,3,2,3,2}, {1,7,6,0,1,3},{13,6,2,3,7,2}};
    cout<<medianofmat(arr);
    return 0;
}