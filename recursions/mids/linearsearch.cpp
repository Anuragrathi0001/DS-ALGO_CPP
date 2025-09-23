#include <bits/stdc++.h>
using namespace std;
bool ls(vector<int>arr,int target,int idx){
    if(idx>=arr.size()){
        return -1;
    }
    if(arr[idx]==target){
        return 1;
    }
  return  ls(arr, target, idx + 1);
    
}
int main(){
    vector<int> arr = {1, 23, 4, 5};
    cout<<ls(arr, 4,0);
    return 0;
}