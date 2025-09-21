#include <bits/stdc++.h>
using namespace std;
long long sumarr(vector<int>arr, int idx){
    if(idx==arr.size()){
        return 0;
    }
    return arr[idx] + sumarr(arr, idx + 1);
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7,8,9,10};
    cout<< sumarr(arr,0);
}