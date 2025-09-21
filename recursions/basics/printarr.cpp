#include<bits/stdc++.h>
using namespace std;
 void printarrrec(vector<int>arr,int size){
if(size==0){
    return;
}
printarrrec(arr, size - 1);
cout << arr[size-1]<<" ";
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    printarrrec(arr,6);
}