#include<bits/stdc++.h>
using namespace std;
vector<int> nxtgreater2(int arr[]){
   vector<int> ans(5, -1);
    for (int i = 0; i < 5;i++){
        for (int j = i+1; j < i+5-1; j++)
        {    
            int ind = j % 5;
            if(arr[ind]>arr[i]){
                ans[i] = arr[ind];
                break;
            }
        }
        
    }
    return ans;
}
int main(){
    int arr[] = {2, 10, 12, 1, 11};
  vector<int>ans=  nxtgreater2(arr);
  for(auto it:ans){
      cout << it <<" ";
  }
    return 0;
}