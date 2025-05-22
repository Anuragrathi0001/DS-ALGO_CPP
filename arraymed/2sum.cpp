#include <bits/stdc++.h>
using namespace std;
bool twosum(int arr[],int n,int k){
    for (int i = 0; i < n;i++){
        for (int j = i + 1; i < n;i++){
            if(arr[i]+arr[j]){
                return true;
                break;
            }
        }
    }
    return false;
}
int main(){
    int arr[] = {
        1,
        2,
        3,
        4,
        5,
    };
    int k = 5;
    cout <<twosum(arr, 5, 5);
    return 0;
}