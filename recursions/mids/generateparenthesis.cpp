#include <bits/stdc++.h>
using namespace std;
void parentheses(int n,int left,int right,vector<string>&ans,string temp){
    if(left+right==2*n){
        ans.push_back(temp);
        return;
    }
    if(left<n){
        temp.push_back('(');
        parentheses(n, left + 1, right, ans, temp);
        temp.pop_back();
    }
    if(right<left){
        temp.push_back(')');
        parentheses(n, left, right + 1, ans, temp);
        temp.pop_back();
    }
}
int main(){
    int left = 0, right = 0;
    vector<string> ans;
    string temp = "";
    parentheses(3, left, right, ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        cout << endl;
    }
    
    return 0;
}