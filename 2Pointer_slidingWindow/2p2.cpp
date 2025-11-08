#include <bits/stdc++.h>
using namespace std;

int maxsuminkthwindow(vector<int> arr, int k){
    if(k > arr.size()) return -1;

    int initialsum = 0;
    for(int i = 0; i < k; i++){
        initialsum += arr[i];
    }

    int maxi = initialsum;     // important correction
    int l = 0, r = k - 1;

    while(r < arr.size() - 1){
        initialsum -= arr[l];
        l++;
        r++;
        initialsum += arr[r];
        maxi = max(maxi, initialsum); // update after sliding
    }

    return maxi;
}

int main(){
    vector<int> arr = {-1, 2, 3, 3, 4, 5, -1};
    int k = 4;
    cout << maxsuminkthwindow(arr, k);
    return 0;
}
