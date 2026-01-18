#include <bits/stdc++.h>
using namespace std;
int maxtracks(vector<int>arr,vector<int>dep){
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
    int i = 0, j = 0, count = 0, maxcnt = 0;
    while(i<=arr.size()&&j<=dep.size()){
        if(arr[i]<dep[j]){
            count += 1;
            i++;
        }
        else{
            count -= 1;
            j++;
        }
        maxcnt = max(maxcnt, count);
    }
    return maxcnt;
}
int main(){
    vector<int> arr{900, 945, 955, 1100, 1500, 1800};
    vector<int> dep = {920, 1200, 1130, 1150, 1900, 2000};
    cout<<maxtracks(arr, dep);
    return 0;
}