#include <bits/stdc++.h>
using namespace std;
void arrev(vector<int>&arr,int st,int end){
    if(st>end){
        return;
    }
    swap(arr[st], arr[end]);
    arrev(arr, st+1, end-1);
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    for(auto it:arr){
        cout <<it<< " ";
    }
    cout << endl;
    arrev(arr,0,arr.size()-1);
    for(auto it:arr){
        cout <<it<< " ";
    }
}