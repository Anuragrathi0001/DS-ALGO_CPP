#include <bits/stdc++.h>
using namespace std;
string rws(string s){
    string ans = "";
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size();i++){
        string word = "";
        int j = 0;
        while(i<s.size()&&s[i]!=' '){
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        ans += " " + word;
    }
    return ans.substr(1);
}
int main(){
    string s = " the sky is good";
  cout<<  rws(s);
    return 0;
}