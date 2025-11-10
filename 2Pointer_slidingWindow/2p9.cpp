#include <bits/stdc++.h>
using namespace std;
int maxlenstuff(string str){
    int l = 0, r = 0, maxlen = 0;
    vector<int> hash(256, -1);
    while(r<str.length()){
        if(hash[str[r]]>-1&&hash[str[r]]>=l){
            l = hash[str[r]] + 1;
        }
        maxlen = max(maxlen, r-l+1);
        hash[str[r]] = r; r++;
    }
    return maxlen;
}
int main (){
    string str = "cadbzabcd";
    cout<<maxlenstuff(str);
    return 0;
}
