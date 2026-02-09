#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<vector<int>> &adj, int vis[], int pthvis[]) {
    vis[node] = 1;
    pthvis[node] = 1;

    for (auto it : adj[node]) {
        if (!vis[it]) {
            if (dfs(it, adj, vis, pthvis)) {
                return true;
            }
        }
        else if (pthvis[it]) {
            return true;
        }
    }

    pthvis[node] = 0; // backtrack
    return false;
}

bool iscycle(int v, vector<vector<int>> &adj) {
    int vis[v] = {0};
    int pthvis[v] = {0};

    for (int i = 0; i < v; i++) {
        if (!vis[i]) {
            if (dfs(i, adj, vis, pthvis)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int v = 6;
    vector<vector<int>> adj = {
        {1},   // 0 -> 1
        {2},   // 1 -> 2
        {0},   // 2 -> 0 (cycle)
        {4},   // 3 -> 4
        {5},   // 4 -> 5
        {}     // 5
    };

    cout << iscycle(v, adj); 
    return 0;
}
