#include<bits/stdc++.h>
using namespace std;
int remduplicates(vector<int>arr){
    int i = 0;
    for (int j = 0; j < arr.size();j++){
        if(arr[j]==arr[i]){
            continue;
        }
        else{
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    vector<int> arr = {1, 1,2,2,3,3,6};
    cout<<remduplicates(arr);
}