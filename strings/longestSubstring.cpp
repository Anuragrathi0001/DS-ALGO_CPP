#include<bits/stdc++.h>
using namespace std;
int longestNonrepeatingSubstring(string s){
    vector<bool> count(256,0);
    int low = 0, high = 0, len = 0;
    while(high<s.size()){
        while(count[s[high]]){
            count[s[low]] = 0;
            low++;
        }
        count[s[high]] = 1;
        len = max(len, high - low + 1);
        high++;
    }
    return len;
}
int main(){
    string s = "abcdeabcdef";
  cout<<  longestNonrepeatingSubstring(s);
    return 0;
}