#include <bits/stdc++.h>
using namespace std;
int maxlensubstring(string str){
    int maxlen = 0;
    vector<int> hash(256,0);
    for (int i = 0; i < str.length();i++){
        hash = {0};
        for(int j=i;j<str.length();j++){
           if(hash[str[j]]==1){
               break;
           }
           maxlen = max(maxlen, j - i + 1);
           hash[str[j]]++;
        }
    }
    return maxlen;
}
int main(){
    string str = "cabdzabcd";
    cout<<maxlensubstring(str);
    return 0;
}