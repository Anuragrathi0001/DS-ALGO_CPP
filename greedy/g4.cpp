#include <bits/stdc++.h>
using namespace std;
int jumpbitch(vector<int>arr){
  int maxidx = 0;
    for (int i = 0; i < arr.size();i++){
        int   idx = arr[i] + i;
        maxidx = max(maxidx, idx);
        if(arr[maxidx]==0){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int>arr={1,2,4,1,1,0,2,5};
   cout<< jumpbitch(arr);
    return 0;
}