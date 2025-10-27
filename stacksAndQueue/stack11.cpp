#include <bits/stdc++.h>
using namespace std;
string prefixtopostfix(string s){
    stack<string> st;
    for (int i = s.size()-1; i>=0;i++){
        if(isalnum(s[i])){
            st.push(string(1, s[i]));
        }
        else if (s[i] == '-' || s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
            string sec = st.top(); st.pop();
            string fir = st.top(); st.pop();
            string ans = fir + sec + string(1, s[i]);
            st.push(ans);
        }
    }
    return st.top();
}
int main(){
    string s = "/-AB*+DEF";
 cout<<   prefixtopostfix(s);
    return 0;
}