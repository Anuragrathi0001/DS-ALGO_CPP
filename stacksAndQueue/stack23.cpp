#include <bits/stdc++.h>
using namespace std;

vector<int> findnse(vector<int>& arr) {
    int n = arr.size();
    stack<int> st;
    vector<int> nse(n, n); // default: n (means no smaller element to right)
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        nse[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    return nse;
}

vector<int> findpsee(vector<int>& arr) {
    int n = arr.size();
    stack<int> st;
    vector<int> psee(n, -1); // default: -1 (means no smaller element to left)
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] > arr[i]) {
            st.pop();
        }
        psee[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return psee;
}

int sumsubarrmin(vector<int>& arr) {
    int n = arr.size();
    vector<int> nse = findnse(arr);
    vector<int> psee = findpsee(arr);
    long long total = 0;
    int mod = 1e9 + 7;

    for (int i = 0; i < n; i++) {
        long long left = i - psee[i];
        long long right = nse[i] - i;
        total = (total + (left * right % mod) * arr[i]) % mod;
    }
    return total;
}

int main() {
    vector<int> arr = {1, 4, 6, 7, 3, 7, 8, 1};
    cout << sumsubarrmin(arr);
    return 0;
}
