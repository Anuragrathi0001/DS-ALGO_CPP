#include<bits/stdc++.h>
using namespace std;

bool funk(vector<int> arr, int k, int sum, int i){

    if(sum == k) return true;

    if(i == arr.size()) return false;

    // pick
    if(funk(arr, k, sum + arr[i], i + 1)) return true;

    // not pick
    if(funk(arr, k, sum, i + 1)) return true;

    return false;
}

int main(){
    vector<int> arr = {1, 2, 3, 4};
    int k = 3;

    cout << funk(arr, k, 0, 0);
}