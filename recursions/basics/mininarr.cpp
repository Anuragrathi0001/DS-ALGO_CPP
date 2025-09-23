#include <bits/stdc++.h>
using namespace std;
int minElminarr(vector<int>arr,int idx){
    if(idx==arr.size()-1){
        return arr[idx];
    }
    return min(arr[idx], minElminarr(arr, idx + 1));
}
int main(){

    vector<int> arr = {2, 3, 1, 4, 5, 7, 8};
   cout<< minElminarr(arr,0);
   return 0;
}