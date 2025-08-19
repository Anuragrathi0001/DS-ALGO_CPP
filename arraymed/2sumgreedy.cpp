#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(int arr[], int target, int n) {
    int left = 0;
    int right = n - 1;
    for (int i = 0; i < n; i++)
    {
        if(arr[left]+arr[right]==target){
            return {left, right};
        }
        else if(arr[left]+arr[right]>target){
            right--;
        }
        else if(arr[left]+arr[right]<target){
            left++;
        }
    }

    return {-1, -1};
}

int main() {
    int arr[] = {1, 2, 3, 4,6};
    int target = 9;
    vector<int>ans= twosum(arr, target, 5);
    for(auto it:ans){
        cout << it; 
    }
    return 0;
}
