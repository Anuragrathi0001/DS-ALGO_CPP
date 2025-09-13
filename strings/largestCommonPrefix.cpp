#include <bits/stdc++.h>
using namespace std;
string lcp(vector<string>strs){
    string ans = "";
    sort(strs.begin(), strs.end());
    for (int i = 0; i < strs[0].size();i++){
        if(strs[0][i]==strs[strs.size()-1][i]){
            ans.push_back(strs[0][i]);
        }
        else{
            break;
        }
    }
    return ans;
}
int main(){
    vector<string> strs = {"flower", "flow", "flight"};
  cout<<  lcp(strs);
    return 0;
}
