#include <bits/stdc++.h>
using namespace std;

vector<int> maxslide(vector<int> arr, int k) {
    deque<int> dq;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {

       
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        if (dq.front() <= i - k) {
            dq.pop_front();
        }

        if (i >= k - 1) {
            ans.push_back(arr[dq.front()]);
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 3, -1, -3, 5, 3, 2, 1, 6};
    int k = 3;
    vector<int> ans = maxslide(arr, k);
    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}
