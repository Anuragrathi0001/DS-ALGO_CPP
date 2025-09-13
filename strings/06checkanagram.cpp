#include <bits/stdc++.h>
using namespace std;
bool checkPangram(string s1){
    vector<int> ans(26, 0);
    for (int i = 0; i < s1.size();i++){
     if(s1[i]==' '){
         continue;
     }
     else{
         ans[s1[i] - 'a']++;
     }
    }
    for (int i = 0; i < 26;i++){
        if(ans[i]==0){
            return false;
        }
    }
    return true;
}
int main(){
      string s = "the quick brown fox jumps over lazy dog";
  cout<<  checkPangram(s);
    return 0;
}