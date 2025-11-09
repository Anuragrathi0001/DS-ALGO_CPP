#include<bits/stdc++.h>
using namespace std;
int sizeofsubarr(vector<int>arr,int k){
    int maxlen = 0;
    for (int i = 0; i < arr.size();i++){
        int sum = 0;
        for (int j = i; j < arr.size();j++){
            sum = sum + arr[j];
            if(sum<=k){
                maxlen = max(maxlen, (j - i + 1));
            }
            else if(sum>k){ 
                break;
            }
        }
    }
    return maxlen;
}
int main(){
    vector<int> arr = {2, 5, 1, 7, 10};
    int k = 14;
   cout<< sizeofsubarr(arr, k);
    return 0;
}