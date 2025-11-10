#include <bits/stdc++.h>
using namespace std;

int longStringWithkdistinct(string str, int k){
    int maxlen = 0;
    map<char, int> mpp;

    for(int i = 0; i < str.length(); i++){
        mpp.clear();
        for(int j = i; j < str.length(); j++){

            mpp[str[j]]++;
            if(mpp.size() > k){
                break;
            }
            maxlen = max(maxlen, j - i + 1);
        }
    }
    return maxlen;
}

int main(){
    string str = "aaabbccdd";
    int k = 2;
    cout << longStringWithkdistinct(str, k);
    return 0;
}
