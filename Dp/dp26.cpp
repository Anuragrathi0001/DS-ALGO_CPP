#include<bits/stdc++.h>
using namespace std;
bool f(vector<int>&arr,int target,int index){
if(target==0){
    return 0;
}
if(index==0){
    return arr[0] == target;
}
bool nottake = f(arr, target, index-1);
bool take = false;
if(target>=arr[index]){
  take = f(arr, target - arr[index], index - 1);}
return nottake || take;
}
int main(){
    vector<int> arr = {2, 3, 1, 1};
    int target = 4;
    int index = arr.size() - 1;
    cout<<f(arr, target, index);
}