#include <bits/stdc++.h>
using namespace std;

string miniwindowsubs(string str, string k) {
    vector<int> hash(256, 0);
    int l = 0, r = 0, n = str.size(), m = k.size();
    int count = 0; 
    int minlen = INT_MAX;
    int startidx = -1;
    for (int i = 0; i < m; i++) {
        hash[k[i]]++;
    }
    while (r < n) {
        if (hash[str[r]] > 0)
            count++;
        hash[str[r]]--;
        r++;
        while (count == m) {
            if (r - l < minlen) {
                minlen = r - l;
                startidx = l;
            }
            hash[str[l]]++;
            if (hash[str[l]] > 0)
                count--;

            l++;
        }
    }

    return (startidx == -1) ? "" : str.substr(startidx, minlen);
}

int main() {
    string str = "ddaaabbca";
    string k = "abc";
    cout << miniwindowsubs(str, k);
    return 0;
}
