#include <bits/stdc++.h>
using namespace std;
int targetSumRep(int arr[],int index,int n,int sum){
    if(sum==0){
        return 1;
    }
    if(index== n||sum<0){
        return 0;
    }
   return targetSumRep(arr, index + 1, n, sum) + targetSumRep(arr, index, n, sum - arr[index]);
}
 int main()
{
    int arr[] = {2,3,4};
  cout<<  targetSumRep(arr, 0, 3, 6);
    return 0;
}