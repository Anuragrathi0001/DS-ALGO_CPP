#include <bits/stdc++.h>
using namespace std;
vector<char> removeOuterParen(string s){
    vector<char> ans;
    int counter=0;
    for (int i = 0; i < s.size();i++){
      if(s[i]=='('){  
          if(counter!=0){
         ans.push_back(s[i]);}
         counter++;
       
       
      }
      else if(s[i]==')'){
         counter--;
          if(counter!=0){
          ans.push_back(s[i]);
         }
        
      }
     }
     return ans;
    }
int main(){
    string str = "(()())(())";
  vector < char>ans=  removeOuterParen(str);
    for(auto it:ans){
        cout << it;
    }
    return 0;
}