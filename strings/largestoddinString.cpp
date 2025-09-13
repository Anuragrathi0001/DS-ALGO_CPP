#include <bits/stdc++.h>
using namespace std;
string handlerStuff(string &s){
    int i = s.size() - 1;
    while(i>=0){
        if((s.back()-'0')%2==0){
            s.pop_back();
        }
        else if(s.back()-'0'%2!=0){
            return s;
        }
        i--;
    }
    return "";
}
int main(){
    string s = "10133890";
  cout<<  handlerStuff(s);
    return 0;
}