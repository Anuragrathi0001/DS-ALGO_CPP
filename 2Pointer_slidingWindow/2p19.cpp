#include <bits/stdc++.h>
using namespace std;
int countsubarrwithsumeqtok(vector<int>arr,int k){
    int count = 0;
    for (int i = 0; i < arr.size(); i++){
        int sum = 0;
        for (int j = i; j < arr.size();j++){
            sum  = sum + arr[j];
            if(sum==k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> arr = {1, 0, 1, 0, 1};
    int k = 2;
  cout<<  countsubarrwithsumeqtok(arr,k);
    return 0;
}