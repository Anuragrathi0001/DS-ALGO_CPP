#include <bits/stdc++.h>
using namespace std;
bool checkstr(string str,int idx,int count){
if(count<0){
    return false;
}
if(idx==str.length()){
    return count == 0;
}
if(str[idx]=='('){
    return checkstr(str, idx + 1, count + 1);
}
if(str[idx]==')'){
    return checkstr(str, idx + 1, count-1);
}
return checkstr(str, idx + 1, count + 1) || checkstr(str, idx + 1, count - 1) || checkstr(str, idx + 1, count);
}

int main(){
    string str = "((*)";
   cout<< checkstr(str,0,0);

    return 0;

}