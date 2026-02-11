#include<bits/stdc++.h>
using namespace std;
vector<int>toposort(int v,vector<vector<int>>adj){
    vector<int>indegree(v,0);
    for (int i = 0; i < v;i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for (int i = 0; i < v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    vector<int>topo;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);
        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    return topo;
}
int main(){
    int v = 4;
    vector<vector<int>> adj = {
    {1},      // 0
    {2},      // 1
    {3},      // 2
    {1}       // 3
};
vector<int>ans= toposort(v, adj);
for(auto it:ans){
    cout << it << " ";
}

}