#include <bits/stdc++.h>
using namespace std;
bool handler(string s,string t){
    if(s.size()!=t.size()){
        return false;
    }
    vector<int> s1(26, 0);
    vector<int> t1(26, 0);
    for (int i = 0; i < s.size();i++){
        s1[s[i]-'a']++;
        t1[t[i]-'a']++;
    }
    for (int i = 0; i < s1.size() - 1;i++){
        if(s1[i]!=t1[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string s = "anagram";
    string t = "nagaram";
cout<< handler(s, t);
    return 0;
}