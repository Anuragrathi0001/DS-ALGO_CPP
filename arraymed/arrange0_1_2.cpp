#include<bits/stdc++.h>
using namespace std;
vector <int>zeroOneTwo(int arr[],int n){
    int zero = 0;
    int one = 0;
    int two = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
        else{
            two++;
        }
    }
      return {zero, one, two};
    
}
int main(){
    int arr[] = {0, 2, 1, 0, 2, 1, 1, 0, 0, 2};
  vector<int>ans=  zeroOneTwo(arr, 10);
  for(auto it:ans){
      cout << it;
  }
    return 0;
}