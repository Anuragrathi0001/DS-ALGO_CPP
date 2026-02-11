#include <bits/stdc++.h>
using namespace std;

vector<int> shortestpathundirected(int V, int E, vector<vector<int>> edges) {

    vector<int> adj[V];

    // Build graph
    for(auto it : edges) {
        int u = it[0];
        int v = it[1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dist(V, INT_MAX);
    queue<int> q;

    int src = 0;
    dist[src] = 0;
    q.push(src);

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        for(auto neighbour : adj[node]) {
            if(dist[neighbour] == INT_MAX) {   // not visited
                dist[neighbour] = dist[node] + 1;
                q.push(neighbour);
            }
        }
    }

    return dist;
}

int main() {

    int V = 7;
    int E = 7;

    vector<vector<int>> edges = {
        {0,1},
        {0,2},
        {1,3},
        {2,3},
        {3,4},
        {4,5},
        {5,6}
    };

    vector<int> ans = shortestpathundirected(V, E, edges);

    for(auto it : ans) {
        cout << it << " ";
    }

    return 0;
}
