#include<bits/stdc++.h>
using namespace std;
int findwt(vector<vector<int>>)
int main(){
    
    int n = 5;

    vector<vector<pair<int,int>>> adj = {
        { {1,2}, {3,6} },              // 0
        { {0,2}, {2,3}, {3,8}, {4,5} },// 1
        { {1,3}, {4,7} },              // 2
        { {0,6}, {1,8} },              // 3
        { {1,5}, {2,7} }               // 4
    };
    cout<<findwt(adj, n);
}