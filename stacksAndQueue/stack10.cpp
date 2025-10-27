#include <bits/stdc++.h>
using namespace std;

string postToPre(string s) {
    stack<string> st;

    for (int i = 0; i < s.size(); i++) {
        if (isalnum(s[i])) {
            st.push(string(1, s[i]));
        }
        else if (s[i] == '-' || s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
            string sec = st.top(); st.pop();
            string fir = st.top(); st.pop();
            string ans = string(1, s[i]) + fir + sec;  // ✅ fixed concatenation
            st.push(ans);
        }
    }

    return st.top();
}

int main() {
    string s = "AB+DE-F*/";
    cout << postToPre(s);
    return 0;
}
