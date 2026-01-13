#include <bits/stdc++.h>
using namespace std;
int jumpbitch(vector<int>arr){
  int maxidx = 0;
    for (int i = 0; i < arr.size();i++){
        if(i>maxidx){
            return false;
        }
        if(maxidx>arr.size()){
            return true;
        }
    }
    return true;
}
int main(){
    vector<int>arr={1,2,4,1,1,0,2,5};
   cout<< jumpbitch(arr);
    return 0;
}