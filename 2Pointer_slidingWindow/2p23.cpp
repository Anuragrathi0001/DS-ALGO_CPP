#include <bits/stdc++.h>
using namespace std;
int assigncookies(vector<int>greed,vector<int>s){
    int l = 0, r = 0;
    int count = 0;
    sort(s.begin(), s.end());
    sort(greed.begin(), greed.end());
    for (int i = 0; i < s.size();i++){
    if(greed[l]<=s[r]){
        l++;
        count++;
    }
    r++;
    }
    return count;
}
int main(){
    vector<int> greed = {1, 5, 3, 3, 4};
    vector<int> s = {4, 2, 1, 2, 1, 3};
  cout<<  assigncookies(greed, s);
    return 0;
}