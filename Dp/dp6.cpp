#include<bits/stdc++.h>
using namespace std;

int f(int ind, vector<int> arr){
    if(ind == 0){
        return arr[ind];
    }
    if(ind < 0){
        return 0;
    }

    int pick = arr[ind] + f(ind - 2, arr);
    int npick = f(ind - 1, arr);

    return max(pick, npick);
}

int main(){
    vector<int> arr = {2, 1, 4, 9};
    int ind = arr.size() - 1;
    cout << f(ind, arr);
    return 0;
}