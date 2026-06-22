#include<bits/stdc++.h>
using namespace std;
pair<int,int>findpair(vector<int>arr,int k){
    int i = 0, j = arr.size() - 1;
    while(i<j){
        if(arr[i]+arr[j]==k){
            return {i, j};
        }
        if(i+j<k){
            i++;
        }
        else{
            j--;
        }
    }
    return {-1, -1};
}
int main(){
    vector<int> arr = {1, 3, 2, 5, 7};
    pair<int,int>p=findpair(arr,9);
    cout <<p.first << " " << p.second;
}