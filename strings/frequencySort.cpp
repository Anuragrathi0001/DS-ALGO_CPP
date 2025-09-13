#include<bits/stdc++.h>
using namespace std;
 string freqSort(string s){
     unordered_map<int,char> mpp;
     for (int i = 0; i < s.size();i++){
         mpp[s[i]]++;
     }
     vector<pair<int, char>> arr(mpp.begin(),mpp.end());
        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
   string result;
        for (auto &p : arr) {
            result.append(p.second, p.first);
        }
        return result;
  }
int main(){
    string s = "tree";
   cout<< freqSort(s);
    return 0;
}