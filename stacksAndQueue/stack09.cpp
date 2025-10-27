#include <bits/stdc++.h>
using namespace std;
string pretoin(string s){
    stack<string> st;
    for (int i = s.size() - 1; i >= 0;i--){
        if(isalnum(s[i])){
            st.push(string(1, s[i]));
        }
        else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
            string fir = st.top();
            st.pop();
            string sec=st.top();
            st.pop();
            string ans = "(" + fir + s[i] + sec + ")";
            st.push(ans);
        }
    }
    return st.top();
}
int main(){
    string s = "*+PQ-MN";
  cout<<  pretoin(s);
    return 0;
}