#include <bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>adj[],vector<int>&visited,vector<int>&ls){
    visited[node] = 1;
    ls.push_back(node);
    for(auto it:adj[node]){
        if(!visited[it]){
            dfs(it, adj, visited, ls);
        }
    }
}
int main(){
    int n, m;
    cout << "enter the num of nodes and edges";
    cin >> n >> m;
    vector<int> adj[n+1];
    for (int i = 0; i < m;i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int start = 0;
    vector<int> ls;
    vector<int> visited(n, 0);
    dfs(start,adj,visited,ls);
    for(auto it:ls){
        cout << it << " ";
    }
    return 0;
} 