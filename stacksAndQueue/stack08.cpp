#include <bits/stdc++.h>
using namespace std;

string postToInfix(string s) {
    stack<string> st;

    for (int i = 0; i < s.size(); i++) {
        if (isalnum(s[i])) {  // operand
            st.push(string(1, s[i]));
        } 
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
            string sec = st.top(); st.pop();
            string fir = st.top(); st.pop();
            string answ = "(" + fir + s[i] + sec + ")";
            st.push(answ);
        }
    }

    return st.top(); // ✅ correct return
}

int main() {
    string s = "AB-DE+F*/";
    cout << postToInfix(s);
    return 0;
}
