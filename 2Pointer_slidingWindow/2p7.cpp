#include <bits/stdc++.h>
using namespace std;
int maxsumHelper(vector<int>arr,int k){
    int r = arr.size()-1;
    int maxsum = 0, leftsum = 0, rightsum=0;
    for (int i = 0; i < k;i++){
        leftsum= leftsum + arr[i];
    }
    maxsum = leftsum;
    for (int i = k - 1; i >= 0;i--)
    {
        leftsum = leftsum- arr[i];  
        rightsum = rightsum + arr[r];  
        maxsum = max(maxsum, leftsum + rightsum);
         r--;
 
    }
    return maxsum;
}
int main(){
    int k = 4;
    vector<int> arr = {6,2,3,4,7,2,1,7,1};
   cout<< maxsumHelper(arr, k);
    return 0;
}