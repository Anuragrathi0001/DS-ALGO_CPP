#include<bits/stdc++.h>
using namespace std;
int priority(char c) {
    if (c == '^') return 3;
    else if (c == '*' || c == '/') return 2;
    else if (c == '+' || c == '-') return 1;
    else return -1;
}

string infixtopostfix(string s){
    stack<char> st;
    string ans;
    for (int i = 0; i < s.size();i++){
       if (isalnum(s[i])) {  
    ans += s[i];
}
        else {
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                while (!st.empty() && st.top() != '(') {
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while (!st.empty() && priority(s[i]) <= priority(st.top())) {
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }

    }
    while (!st.empty()){
        ans += st.top();
        st.pop();
    }
    return ans;
}
int main(){
    string s = "a+b*(c^d-e)";
   cout<< infixtopostfix(s);
    return 0;
}