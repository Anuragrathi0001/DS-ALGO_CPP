#include<bits/stdc++.h>
using namespace std;
void revstr(string &str,int low,int high){
if(low>=high){
    return ;  
}
swap(str[low], str[high]);
revstr(str, low + 1, high - 1);
}
int main(){
    string str = "rathi";
    revstr(str,0,str.size()-1);
    cout << str;
    return 0;
}