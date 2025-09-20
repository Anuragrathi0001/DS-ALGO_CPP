#include <bits/stdc++.h>
using namespace std;
int findMaxColIdx(vector<vector<int>>arr, int mid){
    int maxelm = -1, index = -1;
    int n = arr.size();
    int m = arr[0].size();
    for (int i = 0; i < n;i++)
    {
        if (arr[i][mid] > maxelm)
        {
            maxelm = arr[i][mid];
            index = i;
        }
    }
    return index;
}
vector<int>findPeakRowCol(vector<vector<int>>arr){
    int low = 0,  high = arr[0].size();
     while(low<=high){
         int mid = (low + high) / 2;
         int col = findMaxColIdx(arr,mid);
       int left=   arr[col][mid - 1] > 0 ? arr[col][mid - 1] : -1;
      int  right= arr[col][mid + 1] > 0 ? arr[col][mid + 1] : -1;
         if(arr[col][mid]>left&&arr[col][mid]>right){
             return {col, mid};
             break;
         }
         else if(arr[col][mid]>arr[col][mid-1]){
             high = mid - 1;
         }
         else{
             low = mid + 1;
         }
}
    return {-1, -1};
}
int main(){
    vector<vector<int>> arr = {{4,2,5,1,4,5}, {2,9,3,2,3,2}, {1,7,6,0,1,3},{13,6,2,3,7,2}};
    vector <int>ans=findPeakRowCol(arr);
    for(auto it:ans){
        cout << it <<" ";
    }
    return 0;
}