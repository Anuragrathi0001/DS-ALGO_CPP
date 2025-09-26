#include <bits/stdc++.h>
using namespace std;
void printsum(int arr[],int index,int n,int sum){
    if(index==n){
        cout << sum << endl;
        return;
    }
    //not choose
    printsum(arr, index + 1, n, sum);
    //choose
    printsum(arr, index + 1, n, sum + arr[index]);
}
int main(){
    int arr[] = {1, 2, 3};
    int sum = 0;
    printsum(arr, 0, 3, sum);
    
    return 0;
}