#include <bits/stdc++.h>
using namespace std;
vector<int>nse(vector<int>arr){
    vector<int> ans(arr.size(), -1);
    for (int i = 0; i <arr.size(); i++)
    {
        for (int j = i - 1; j >= 0;j--){
            if(arr[i]>arr[j]){
                ans[i] = arr[j];
                break;
            }
        }
    }
    return ans;
}
 int main(){
     vector<int> arr = { 4, 5, 2, 10, 8 };
     vector<int> ans = nse(arr);
     for(auto it :ans){
         cout << it << " ";
     }
     return 0;
 }