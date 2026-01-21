#include<bits/stdc++.h>
using namespace std;
bool ifsorted(vector<int>arr){
    int ifsorted = true;
    for (int i = 1; i < arr.size();i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;

}
int main(){
    vector<int> arr = {1, 2, 3, 6, 5};
    cout<<ifsorted(arr);
}