#include <bits/stdc++.h>
using namespace std;
void find(int N, vector<string> &ans, string &temp,int zero,int ones){
 if(temp.size()==N){
     ans.push_back(temp);
     return;
 }
 temp.push_back('1');
 find(N, ans, temp, zero, ones + 1);
 temp.pop_back();

 if(zero<ones){
     temp.push_back('0');
     find(N, ans, temp, zero + 1, ones);
     temp.pop_back();
 }
} 
int main()
{
    int N = 4;
    vector<string> ans;
    string temp;
    find(N, ans, temp, 0, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        cout << endl;
    }
    
    return 0;
}