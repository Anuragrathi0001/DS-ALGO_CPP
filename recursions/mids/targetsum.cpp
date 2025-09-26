#include <bits/stdc++.h>
using namespace std;
int targetsum(int arr[],int index,int n,int target){
    if(target==0){
        return 1;
    }
    if(index==n||target<0){
        return 0;
    }
    return targetsum(arr, index + 1, n, target)||targetsum(arr, index + 1, n, target - arr[index]);
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
 cout<<   targetsum(arr, 0, 5, 5);
    return 0;
}