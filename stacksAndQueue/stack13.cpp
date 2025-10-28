#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> arr) {
    stack<int> st;
    vector<int> ans(arr.size());

    st.push(arr.back());
    ans[arr.size() - 1] = -1;

    for (int i = arr.size() - 2; i >= 0; i--) {
        // Pop smaller or equal elements
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if (st.empty()) ans[i] = -1;
        else ans[i] = st.top();

        st.push(arr[i]);
    }

    return ans;
}

int main() {
    vector<int> arr = {6, 0, 1, 8, 3};
    vector<int> ans = NGE(arr);

    for (auto it : ans) {
        cout << it << " ";
    }

    return 0;
}
