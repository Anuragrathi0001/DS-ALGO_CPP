#include <bits/stdc++.h>
using namespace std;

void printSb(vector<int>& arr, int idx, int sum, 
             vector<int>& temp, vector<vector<int>>& ans) {
    
    // Base case
    if (idx == arr.size()) {
        if (sum == 0) {
            ans.push_back(temp);
        }
        return;
    }

    // Include current element
    temp.push_back(arr[idx]);
    printSb(arr, idx + 1, sum - arr[idx], temp, ans);

    // Backtrack
    temp.pop_back();

    // Exclude current element
    printSb(arr, idx + 1, sum, temp, ans);
}

int main() {
    vector<int> arr = {1, 2, 1};
    int sum = 2;

    vector<vector<int>> ans;
    vector<int> temp;

    printSb(arr, 0, sum, temp, ans);

    // Print result
    for (auto v : ans) {
        for (auto x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
}