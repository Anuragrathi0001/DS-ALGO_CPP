#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<int>& vis, stack<int>& st) {
    vis[node] = 1;

    for (auto it : adj[node]) {
        if (!vis[it]) {
            dfs(it, adj, vis, st);
        }
    }

    // push AFTER all neighbours are processed
    st.push(node);
}

vector<int> toposort(int V, vector<vector<int>>& adj) {
    vector<int> vis(V, 0);
    stack<int> st;

    for (int i = 0; i < V; i++) {
        if (!vis[i]) {
            dfs(i, adj, vis, st);
        }
    }

    vector<int> ans;
    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    return ans;
}

int main() {
    int V = 6;
    vector<vector<int>> adj = {
        {1, 2}, // 0 -> 1, 2
        {3},    // 1 -> 3
        {3},    // 2 -> 3
        {4},    // 3 -> 4
        {5},    // 4 -> 5
        {}      // 5
    };

    vector<int> ans = toposort(V, adj);

    for (int x : ans) cout << x << " ";
    return 0;
}
