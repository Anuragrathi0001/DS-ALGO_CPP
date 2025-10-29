#include<bits/stdc++.h>
using namespace std;
int sumSubarrMin(vector<int>arr){
    int sum = 0;
    for (int i = 0; i < arr.size();i++){
        int mini = arr[i];
        for (int j = i; j < arr.size();j++)
        {
            mini = min(arr[j], mini);
            sum = sum + mini;
        }
    }
    return sum;
}
int main(){
    vector<int> arr = {3, 1, 2, 4};
    cout<<sumSubarrMin(arr);
    return 0;
}