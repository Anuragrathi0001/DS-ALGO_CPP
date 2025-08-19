#include <bits/stdc++.h>
using namespace std;

bool twosum(int arr[], int target, int n) {
    map<int, int> mpp; // Declare map outside the loop
    for (int i = 0; i < n; i++) {
        int diff = target - arr[i];
        if (mpp.find(diff) != mpp.end()) {
            // If you want to return indices: return [mpp[diff], i];
            return true;
        }
        mpp[arr[i]] = i;
    }
    return false;
}

int main() {
    int arr[] = {1, 3, 3, 2, 6, 2};
    int target = 9;
    cout << boolalpha << twosum(arr, target, 6);\
    return 0;
}
