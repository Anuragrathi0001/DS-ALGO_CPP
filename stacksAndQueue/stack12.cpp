#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {6, 0, 8, 1, 3};
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {
        int nextGreater = -1;  
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }
        ans.push_back(nextGreater);
    }

    for (auto it : ans) {
        cout << it << " ";
    }

    return 0;
}
