#include<bits/stdc++.h>
using namespace std;
string handler(string s){
    string ans;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size();i++){
        string temp="";
        while(i<s.size()&&s[i]==' ')
            {i++;}
         while(i<s.size()&&s[i]!=' '){
             temp += s[i];
             i++;
         }
         reverse(temp.begin(), temp.end());
         ans += " " + temp;
    }
    return ans.substr(1);
}
int main(){
    string s = " the sky is blue";
 cout<<   handler(s);
    return 0;
}