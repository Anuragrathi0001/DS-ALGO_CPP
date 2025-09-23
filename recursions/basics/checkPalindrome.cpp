#include <bits/stdc++.h>
using namespace std;
bool checkpalim(string &str,int start,int end){
    if(start>=end){
        return 1;
    }
    if(str[start]!=str[end]){
        return 0;
    }
   return   checkpalim(str, start+1, end-1);
}
int main(){
    string str = "paap";
  cout<<  checkpalim(str,0,str.size()-1);
    return 0;
}