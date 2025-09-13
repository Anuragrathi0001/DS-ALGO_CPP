#include<bits/stdc++.h>
using namespace std;

int presuf(string str) {
    vector<string> pre;
    vector<string> suf;
    int len = 0;
    int i = 0, j = 1;
    string support;

    // build prefixes
    support = "";
    while (i < str.size() - 1) {
        support += str[i];
        pre.push_back(support);
        i++;
    }

    // build suffixes
    support = "";
    while (j < str.size()) {
        support = str.substr(j); // take suffix from position j
        suf.push_back(support);
        j++;
    }

    reverse(suf.begin(), suf.end());

    if (pre.size() == suf.size()) {
        for (int i = 0; i < pre.size(); i++) {
            if (pre[i] == suf[i]) {
                len = max(len, (int)pre[i].size());
            }
        }
    }
    return len;
}

int main() {
    string str = "ABCDEABCD";
    cout << presuf(str);
    return 0;
}
