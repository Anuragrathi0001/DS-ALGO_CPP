#include<bits/stdc++.h>
using namespace std;
int handler(string s){
    int maxi = 0;
    int curr = 0;
    for (int i = 0; i < s.size();i++){
        if(s[i]=='('){
            curr++;
            maxi = max(maxi,curr);
        }
        else if(s[i]==')'){
            curr--;
        }
        else{
            continue;
        }
    }
    return maxi;
}
int main(){
    string s = "(1)+((2))+(((3)))";
    cout<<handler(s);
    return 0;
}