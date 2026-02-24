#include <bits/stdc++.h>
using namespace std;
bool func(string str,int ind){
    if(ind>str.size()/2){
        if(str[ind]!=str[str.size()-1-ind]){
            return false;
        }
    }
   return func(str, ind + 1);
}
int main(){
    string str = "abba";
    func(str,0);
}