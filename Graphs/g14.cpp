#include <bits/stdc++.h>
using namespace std;
void topoSort(int node, vector<vector<pair<int,int>>>&adj,vector<int>&vis,stack<int>&st){
    vis[node] = 1;
    for(auto it:adj[node]){
        if(!vis[it.first]){
        topoSort(it.first, adj, vis, st);}
    }
    st.push(node);
}
vector<int>findmincost(int v,int e,vector<vector<int>>edges){
 vector<vector<pair<int,int>>>adj(v);
 for(auto it:edges){
    int u=it[0];
    int ve = it[1];
    int weight = it[2];
    adj[u].push_back({ve, weight});
 }
 //topoSort
 vector<int> vis(v);
 stack<int> st;
 for (int i = 0; i < v; i++)
 {
    if(!vis[i]){
        topoSort(i, adj, vis, st);
    }
 }
 //Distance thing
 vector<int>dist(v,1e9);
 dist[0] = 0;
 while(!st.empty()){
    int node=st.top();
    st.pop();
    for(auto it:adj[node]){
        int u=it.first;
        int wt = it.second;
        if(dist[node]+wt<dist[u]){
            dist[u] = dist[node] + wt;
        }
    }
 }
 return dist;
}
int main(){
    int V = 6;   // number of vertices
    int E = 8;   // number of edges
    vector<vector<int>> edges = {
        {0, 1, 2},
        {0, 2, 4},
        {1, 2, 1},
        {1, 3, 7},
        {2, 4, 3},
        {4, 3, 2},
        {3, 5, 1},
        {4, 5, 5}
    };
  vector<int>ans=findmincost(V, E, edges);
  for(auto it:ans){
      cout << it;
  }

    return 0;
}