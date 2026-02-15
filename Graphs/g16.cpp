#include<bits/stdc++.h>
using namespace std;
vector<int>dijkastra(vector<vector<pair<int,int>>> adj ,int v,int src){
 priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
 vector<int> distarr(v, 1e9);
 distarr[src] = 0;
 pq.push({0, src});
 while(!pq.empty()){
       int dist = pq.top().first;   // ✅ distance
       int node = pq.top().second;  // ✅ node

     pq.pop();
    for(auto it:adj[node]){
    int neignode = it.first;   // ✅ node
    int d = it.second;         // ✅ weight

    if(distarr[neignode] > distarr[node] + d){
        distarr[neignode] = distarr[node] + d;
        pq.push({distarr[neignode], neignode});
    }
}

 }
 return distarr;
}
int main() {
int V = 5;
vector<vector<pair<int,int>>> adj = {
    {{1,2}, {2,4}},      // 0 -> 1(2), 2(4)
    {{2,1}, {3,7}},      // 1 -> 2(1), 3(7)
    {{4,3}},             // 2 -> 4(3)
    {{4,1}},             // 3 -> 4(1)
    {}                   // 4 -> no outgoing edges
};
int src = 0;
vector<int>ans=dijkastra(adj, V, src);
for(auto it:ans){
    cout << it;
}

return 0;
}