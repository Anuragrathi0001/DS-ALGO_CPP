#include<bits/stdc++.h>
using namespace std;
void subsequence(string str,int index,int size,vector<string>&ans,string temp){
 if(index==size){
     ans.push_back(temp);
     return;
 }
 //not included
 subsequence(str, index + 1, size, ans, temp);
 //included
 temp.push_back(str[index]);
 subsequence(str, index + 1, size, ans, temp);
 temp.pop_back();
}
int main(){
    string str = "abc";
    vector<string> ans;
    string temp;
    subsequence(str, 0, str.size(), ans, temp);
    for (int i = 0; i < ans.size();i++){
        cout << ans[i] << endl;
    }
        return 0;
}