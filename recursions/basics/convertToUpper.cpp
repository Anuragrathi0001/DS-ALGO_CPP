#include<bits/stdc++.h>
using namespace std;
void toUpperc(string &str,int idx){
 if(idx>=str.size()){
     return;
 }
 str[idx] = str[idx] - 'a' + 'A';
 toUpperc(str, idx + 1);
}
int main(){
    string str = "anurag";
    toUpperc(str,0);
    cout << str;
    return 0;
}