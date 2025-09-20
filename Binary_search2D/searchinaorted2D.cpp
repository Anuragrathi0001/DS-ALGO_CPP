#include <bits/stdc++.h>
using namespace std;
bool twoDSearch(vector<vector<int>>arr,int key){
    bool ans = false;
    int n=arr.size();
    int m = arr[0].size();
    for (int i = 0; i < n;i++){
        if(key>=arr[i][0]&&key<=arr[i][m-1]){
            int low = 0;
            int high = m - 1;
            while(low<=high){
                int mid = (low + high) / 2;
                if(arr[i][mid]==key){
                    ans = true;
                    break;
                }
                else if(arr[i][mid]>key){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            return ans;
                }
    }
    return false;
}
int main(){
    vector<vector<int>> arr = {
        {3, 4, 7, 9}, {12, 13, 16, 18}, {20, 21, 23, 29}};
    cout<<twoDSearch(arr, 18);
    return 0;
}