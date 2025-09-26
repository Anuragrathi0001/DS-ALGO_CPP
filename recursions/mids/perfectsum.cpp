#include<bits/stdc++.h>
using namespace std;
int perfectsum(int arr[],int index,int sum,int n){
    if(index==n){
        if(sum==0){
            return 1;
        }
        else{
            return 0;
        }
        }
     return perfectsum(arr, index + 1, sum, 5) + perfectsum(arr, index + 1, sum - arr[index], 5);
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
 cout<< perfectsum(arr, 0, 7, 5);
    return 0;
}