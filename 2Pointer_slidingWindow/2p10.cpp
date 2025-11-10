#include<bits/stdc++.h>
using namespace std;
int maxconsecutiveones3(vector<int>arr,int k){
    int maxlen = 0;
    for (int i = 0; i < arr.size();i++){
        int zeroes = 0;
        for (int j = i; j < arr.size();j++){
            if(arr[j]==0){
                zeroes++;
            }
            if(zeroes<=k){
                int len = j - i + 1;
                maxlen = max(maxlen, len);
            }
            else{
                break;
            }
        }
    }
    return maxlen;
}
int main(){
    vector<int> arr = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 2;
    cout<<maxconsecutiveones3(arr, k);
    return 0;
}