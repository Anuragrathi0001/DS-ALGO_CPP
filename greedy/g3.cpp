#include <bits/stdc++.h>
using namespace std;
int sjf(vector<int>arr){
    sort(arr.begin(), arr.end());
    int t = 0;
    int wt = 0;
    for (int i = 0; i < arr.size();i++){
        t += wt;
        t += arr[i];
    }
    return t / arr.size();
}
int main(){
    vector<int> arr = {4, 3, 7, 1, 2};
   cout<< sjf(arr);
    return 0;
}