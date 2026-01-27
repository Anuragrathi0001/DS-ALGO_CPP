#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> adj[], vector<int>& ans, int nodes) {
    vector<int> visited(nodes + 1, 0);
    queue<int> q;

    q.push(0);          // starting node
    visited[0] = 1;     // mark visited immediately

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        ans.push_back(node);

        for (int i = 0; i < adj[node].size(); i++) {
            int neigh = adj[node][i];
            if (!visited[neigh]) {
                visited[neigh] = 1;
                q.push(neigh);
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Enter the num of nodes and edges: ";
    cin >> n >> m;

    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ans;
    bfs(adj, ans, n);

    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}
