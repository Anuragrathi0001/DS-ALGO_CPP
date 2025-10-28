#include<bits/stdc++.h>
using namespace std;
vector<int>ngeRight(vector<int>arr){
    vector<int> ans(arr.size(), 0);
    for (int i = 0; i < arr.size();i++){ int count = 0;
        for (int j = i+1; j < arr.size(); j++)
        {  if(arr[j]>arr[i]){
                count++;
            }
        }
        ans[i] = count;
    }
    return ans;
}
int main(){
    vector<int> arr = {3, 4, 2, 7, 5, 8, 10, 6};
  vector<int>ans=ngeRight(arr);
  for(auto it:ans){
      cout << it << " ";
  }
    return 0;
}