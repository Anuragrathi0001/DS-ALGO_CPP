#include <bits/stdc++.h>
using namespace std;
int maxsuminkthwindow(vector<int>arr,int k){
    int maxi = 0;
    if(k>arr.size()){
        return -1;
    }
    int low = 0;
    int high = k - 1;
    for (int j = k - 1; j < arr.size();j++){
        int sum = 0;
        for (int i = low; i <= high;i++){
            sum = sum + arr[i];
        }
        maxi = max(maxi, sum);
        low++, high++;
    }
    return maxi;
}
int main(){
    vector<int> arr = {-1, 2, 3, 3, 4, 5, -1};
    int k = 4;
 cout<<   maxsuminkthwindow(arr,k);

    return 0;
}