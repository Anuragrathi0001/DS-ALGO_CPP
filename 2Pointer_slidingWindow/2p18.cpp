#include<bits/stdc++.h>
using namespace std;
int maxlenofsamecharbychangingkchars(string str ,int k){
    int l = 0, maxlen = 0;
    map<char, int> mpp;
    for (int r= 0; r < str.length(); r++)
    {
        mpp[str[r]]++;
        int maxfreq = 0;
     for(auto &it : mpp){
            maxfreq = max(maxfreq, it.second);
        }

        while((r-l+1)-maxfreq>k){
            mpp[str[l]]--;
            l++;
           
        }
        if((r-l+1)-maxfreq<=k){ 
            int len = r - l + 1;
               maxlen = max(maxlen, len);
           
        }
    }
    return maxlen;
}
int main(){
    string str = "AAABBCCD";
    int k = 2;
   cout<< maxlenofsamecharbychangingkchars(str, k);
    return 0;

}