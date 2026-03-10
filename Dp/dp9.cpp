#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {2, 1, 4, 9};
    int ind = arr.size();
    int prev2 = 0;
    int prev = arr[0];
    for (int i = 1; i < ind;i++){
        int take = arr[i];
        if(i>1){
            take += prev2;
        }
        int ntake = prev;
        int curr = max(take, ntake);
        prev2 = prev;
        prev = curr;
    }
    cout << prev;
    return 0;
}