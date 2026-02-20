#include<bits/stdc++.h>
using namespace std;
bool detect(vector<vector<int>>adj,int v){
    vector<int> vis(v, 0);
    queue < pair<int, int>> q;
    vis[0] = 1;
    q.push({0, -1});
    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for(auto it:adj[node]){
            if(!vis[it]){
            vis[it]=1;
            q.push({it, node});
        }
        else if(it!=parent){
            return true;
        }
    }
    }
    return false;
}
int main(){
    int V = 4;
vector<vector<int>> adj = {
    {1,2},    // 0 connected to 1,2
    {0,2,3},  // 1 connected to 0,2,3
    {0,1},    // 2 connected to 0,1
    {1}       // 3 connected to 1
};
cout<<detect(adj, V);
}