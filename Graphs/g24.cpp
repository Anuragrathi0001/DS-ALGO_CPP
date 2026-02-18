#include<bits/stdc++.h>
using namespace std;
int findwt(vector<vector<pair<int,int>>>adj,int n){
priority_queue<
    pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>
> pq;
    vector<int> vis(n, 0);
    pq.push({0, 0});
    int sum = 0;
    while(!pq.empty()){
        auto it = pq.top();
        pq.pop();
        int dist = it.first;
        int node = it.second;
        if(vis[node]){continue;}
        vis[node] = 1;
        sum += dist;
        for(auto it:adj[node]){
            int wt = it.second;
            int adjnode = it.first;
            if(!vis[adjnode]){
                pq.push({wt, adjnode});
            }
        }
    }
    return sum;
}
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