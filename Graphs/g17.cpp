#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstraSet(int v, vector<vector<pair<int,int>>> adj, int src){
    set<pair<int,int>> st;   // {distance, node}
    vector<int> dis(v, 1e9);

    dis[src] = 0;
    st.insert({0, src});

    while(!st.empty()){
        auto it = *(st.begin());
        int dist = it.first;
        int node = it.second;

        st.erase(it);   // IMPORTANT

        for(auto neighbour : adj[node]){
            int adjnode = neighbour.first;
            int weight = neighbour.second;

            if(dist + weight < dis[adjnode]){
                if(dis[adjnode] != 1e9){
                    st.erase({dis[adjnode], adjnode});
                }

                dis[adjnode] = dist + weight;
                st.insert({dis[adjnode], adjnode});
            }
        }
    }
    return dis;
}

int main(){
    int V = 5;

    vector<vector<pair<int,int>>> adj = {
        {{1,2}, {2,4}},
        {{2,1}, {3,7}},
        {{4,3}},
        {{4,1}},
        {}
    };

    int src = 0;

    vector<int> ans = dijkstraSet(V, adj, src);

    for(auto it : ans){
        cout << it << " ";
    }

    return 0;
}
