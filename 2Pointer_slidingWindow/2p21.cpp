#include <bits/stdc++.h>
using namespace std; 
pair<int,int> miniwindowsubs(string str, string k) {
    int n = str.size();
    int minLen = INT_MAX;
    pair<int,int> ans = {-1, -1};

    for (int i = 0; i < n; i++) {
        unordered_map<char,int> freq;
        for (char c : k) freq[c]++;

        int required = freq.size();
        int formed = 0;

        for (int j = i; j < n; j++) {
            if (freq.count(str[j])) {
                freq[str[j]]--;
                if (freq[str[j]] == 0)
                    formed++;
            }

            if (formed == required) {
                if (j - i + 1 < minLen) {
                    minLen = j - i + 1;
                    ans = {i, j};
                }
                break;
            }
        }
    }

    return ans;
}

int main() {
    string str = "ddaaabbca";
    string k = "abc";
    pair<int,int> ans = miniwindowsubs(str, k);

    if (ans.first == -1)
        cout << "No valid window\n";
    else {
        cout << "Start: " << ans.first << ", End: " << ans.second << "\n";
        cout << "Substring: " << str.substr(ans.first, ans.second - ans.first + 1) << "\n";
    }
    return 0;
}
