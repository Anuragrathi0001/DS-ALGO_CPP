#include<bits/stdc++.h>
using namespace std;
bool funk(vector<int>arr,int k){
for (int i = 0; i < arr.size(); i++)
{
    int sum = 0;
    for (int j = i; j < arr.size();j++){
        sum = sum + arr[j];
        if(sum==k){
            return true;
            break;
        }
    }
}
return false;
}
int main(){
    vector<int> arr = {1, 2, 3, 4};
    int k = 3;
  cout<<funk(arr, k);
}
