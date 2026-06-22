#include<bits/stdc++.h>
using namespace std;
vector<int>remDupli(vector<int>arr){
    int fs = 0;
    int sec = 1;
    vector<int> ans;
    for (int i = 0; i < arr.size();i++){
        if(arr[fs]==arr[sec]){
            fs++;
            sec++;
        }
        if(arr[fs]!=arr[sec]){
            ans.push_back(arr[fs]);
            fs++;
            sec++;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={1,1,1,2,2,3,4,5};
    vector<int>p=remDupli(arr);
    for(auto it:p){
    cout <<it << " ";
}}