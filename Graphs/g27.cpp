#include<bits/stdc++.h>
using namespace std;
class disjointSet{
   
    public: vector<int> rank, parent,Size;
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
int numProvinces(int v, vector<vector<int>> adj){
    disjointSet ds(v);

    for(int i = 0; i < v; i++){
        for(int j = i+1; j < v; j++){
            if(adj[i][j] == 1){
                ds.UnionBySize(i, j);
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < v; i++){
        if(ds.findUPar(i) == i){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int V = 4;
vector<vector<int>> adj = {
    {1, 0, 0, 1},
    {0, 1, 1, 0},
    {0, 1, 1, 1},
    {1, 0, 1, 1}
};
cout<<numProvinces(V, adj);
return 0;
}