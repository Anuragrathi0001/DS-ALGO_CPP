#include<bits/stdc++.h>
using namespace std;
string retsmallest(string str, int k){
    stack<char> st;
    string ans="";
    for (int i = 0; i < str.length();i++){
        while(!st.empty()&&k>0&&(st.top()-'0')>(str[i]-'0')){
            st.pop();
            k--;
        }
        st.push(str[i]);
    }
    while(k>0){
        st.pop();
        k--;
    }
    if(st.empty()){
        return "0";
    }
    while(!st.empty()){
        ans= ans + st.top();
        st.pop();
    }
    while(ans.size()!=0&&ans.back()=='0'){
        ans.pop_back();
    }
    reverse(ans.begin(),ans.end());

    if(ans == "") {return "0";}
    
    return ans;
}
int main(){
    string str = "1432219";
  cout<<  retsmallest(str,3);
    return 0;
}