#include <bits/stdc++.h>
using namespace std;

bool allDistinct(string s, int low, int high, int distinct) {
    vector<bool> alpha(26, 0);
    int count = 0;
    for (int i = low; i <= high; i++) {
        if (alpha[s[i] - 'A'] == 0) {
            alpha[s[i] - 'A'] = 1;
            count++;
        }
    }
    return count == distinct;
}

int sdw(string s, int distinct) {
    int low = 0, high = 0, len = INT_MAX;
    while (high < s.size()) {
        if (allDistinct(s, low, high, distinct)) {
            len = min(len, high - low + 1);
            low++;  // shrink window
        } else {
            high++; // expand window
        }
    }
    return (len == INT_MAX) ? -1 : len;
}

int main() {
    string s = "AABBBCBBAC";
    cout << sdw(s, 3);
    return 0;
}
