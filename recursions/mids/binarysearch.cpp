#include<bits/stdc++.h>
using namespace std;
bool binaryS(vector<int>arr,int target,int low,int high){
    int mid = (low + mid) / 2;
    if(arr[mid]==target){
        return 1;
    }
    if(arr[mid]>target){
        return binaryS(arr,target, low, mid - 1);
    }
    else{
        return binaryS(arr,target, mid + 1, high);
    }
    return 0;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
  cout<<  binaryS(arr, 4,0,arr.size()-1);
    return 0;
}