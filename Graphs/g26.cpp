#include<bits/stdc++.h>
using namespace std;
class disjointSet{
    vector<int> rank, parent,Size;
    public:
    disjointSet(int n){
        Size.resize(n + 1, 1);
        rank.resize(n + 1, 0);
        parent.resize(n + 1, 0);
        for (int i = 0; i <= n;i++){
            parent[i] = i;
        }
    }
    int findUPar(int node){

        if(node==parent[node]){
            return node;
        }
        return parent[node] = findUPar(parent[node]);
    }
    void unionByRank(int u,int v){
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if(ulp_u==ulp_v){
            return;
        }
        if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }
        else if(rank[ulp_u]>rank[ulp_v]){
            parent[ulp_v] = ulp_u;
        }
        else{
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
void UnionBySize(int u,int v){
    int ulp_u = findUPar(u);
    int ulp_v = findUPar(v);
    if(ulp_u==ulp_v){
        return;
    }
    if(Size[ulp_u]<Size[ulp_v]){
        parent[ulp_u] = ulp_v;
        Size[ulp_v] += Size[ulp_u];
    }
    else{
        parent[ulp_v] = ulp_u;
        Size[ulp_u] += Size[ulp_v];
    }
}
};
int spanningTree(vector<vector<int>>& edges, int v){

    // Sort edges based on weight
    sort(edges.begin(), edges.end(),
        [](vector<int>& a, vector<int>& b){
            return a[2] < b[2];
        });

    disjointSet ds(v);
    int mstwt = 0;

    for(auto &it : edges){
        int u = it[0];
        int v = it[1];
        int wt = it[2];

        if(ds.findUPar(u) != ds.findUPar(v)){
            mstwt += wt;
            ds.unionByRank(u, v);
        }
    }

    return mstwt;
}

int main(){
    int v = 6;
    vector<vector<int>> edges = {
    {0,1,4},
    {0,2,3},
    {1,2,1},
    {1,3,2},
    {2,3,4},
    {3,4,2},
    {4,5,6}
};

   cout<<spanningTree(edges, v);

    return 0;
}