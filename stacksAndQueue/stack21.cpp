#include<bits/stdc++.h>
using namespace std;  
int sumSubarrayranges(vector<int>arr){
    int sum= 0;
    for (int i = 0; i < arr.size();i++){
        int maxi = arr[i], mini = arr[i];
        for (int j = i; j < arr.size();j++){
            maxi = max(maxi, arr[j]);
            mini = min(mini, arr[j]);
            sum += (maxi - mini);
        }
    }
    return sum;
    }
int main(){
    vector<int> arr = {1, 4, 3, 2};
    cout << sumSubarrayranges(arr);
    return 0;
}