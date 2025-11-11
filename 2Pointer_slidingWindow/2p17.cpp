#include <bits/stdc++.h>
using namespace std;
int cntmaxlen(string str,int k){
    int maxlen = 0;
    for (int i = 0; i < str.length();i++){
        vector<int> mpp(26, 0);
        for (int j = i; j < str.length(); j++)
        {
            mpp[str[j] - 'A']++;
            int maxf = *max_element(mpp.begin(), mpp.end());
            int changes = (j - i + 1) - maxf;
            if(changes<=k){
                maxlen = max(maxlen, j - i + 1);
            }
            else{
                break;
            }
        }
        
    }
    return maxlen;
}
int main(){
    string str = "AABABBA";
    int k = 2;
   cout<< cntmaxlen(str, k);
    return 0;
}