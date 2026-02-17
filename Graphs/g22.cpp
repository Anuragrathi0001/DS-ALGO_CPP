#include <bits/stdc++.h>
using namespace std;
vector<int>bellmanFord(vector<vector<int>>edges,int n,int src){
    vector<int> dist(n, 1e8);
 dist[src] = 0;
    for (int i = 0; i < n - 1;i++){
        for(auto it:edges){
            int u=it[0];
            int v = it[1];
            int dst = it[2];
            if(dist[u]!=1e8&&dist[u]+dst<dist[v]){
                dist[v] = dist[u] + dst;
            }
        }
    }
//last relaxation
for(auto it:edges){
    int u=it[0];
    int v = it[1];
    int wt = it[2];
    if(dist[u]!=1e8&&dist[u]+wt<dist[v]){
        return {-1};
    }
}
return dist;
}

int main()
{
    int n = 5;
    vector<vector<int>> edges = {
        {0, 1, -1},
        {0, 2, 4},
        {1, 2, 3},
        {1, 3, 2},
        {1, 4, 2},
        {3, 2, 5},
        {3, 1, 1},
        {4, 3, -3}
    };
    int src = 0;
   vector<int>ans= bellmanFord(edges, n, src);
   for(auto it:ans){
       cout << it;
   }
    return 0;
}
