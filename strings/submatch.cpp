#include <bits/stdc++.h>
using namespace std;
 int checksubstr(string s,string s1){
     int i = 0;
     int j = 0;
     int switche = 0, cnt = 0, cnt2=0;
     while (i < s.size())
     { 
        if(s[i]==s1[0]){
            switche = 1;
            cnt = i;
     }
      while(j < s1.size() && switche)
     {
         if (s[i] == s1[j]){
             cnt2++;
         }
         j++;
     }
     i++;
       }  if(cnt2==s1.size()){
         return cnt;
     }
     return -1;
 }
 int main()
{
    string s = "abcabdefg";
  cout<<  checksubstr(s, "def");
    return 0;
}