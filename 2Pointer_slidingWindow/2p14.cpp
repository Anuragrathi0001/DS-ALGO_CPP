#include<bits/stdc++.h>
using namespace std;
int maxlenSubstrwkstuff(string str,int k){
    int maxlen = 0, l = 0;
    map<char, int> mpp;
    for (int r = 0; r < str.length();r++){ 
        mpp[str[r]]++;
        while(mpp.size()>k){
            mpp[str[l]]--;
            if((mpp[str[l]])==0){ 
                mpp.erase(str[l]);
            } l++;
        }
        if(mpp.size()<=k){
            maxlen = max(maxlen, r- l + 1);
           
        }
        
    }
    return maxlen;
}
int main(){
    string str = "aaabbccd";
    int k = 2;
   cout<< maxlenSubstrwkstuff(str,k);
    return 0;
}