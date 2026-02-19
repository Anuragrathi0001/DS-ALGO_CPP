#include <bits/stdc++.h>
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
int main(){
    disjointSet ds(7);
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);
    ds.unionByRank(4, 5);
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);
    if(ds.findUPar(3)==ds.findUPar(2)){
        cout << "same";
    }
    else{
        cout << "not same";
    }
    return 0;
}