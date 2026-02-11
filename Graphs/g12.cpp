#include<bits/stdc++.h>
using namespace std;
vector<int>findsafenode(int v,vector<vector<int>>adj){
    vector<vector<int>> rev(v);
    vector<int> indegree(v);
    for (int i = 0; i < v;i++){
        for(auto it:adj[i]){
            rev[it].push_back(i);
               indegree[i]++;
        }
    }
    queue<int> q;
    vector<int> ans;
    for (int i = 0; i < v;i++){
       
            if(indegree[i]==0){
                q.push(i);
            }
        
    }
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(auto it:rev[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main(){
    int v = 7;
    vector<vector<int>> adj = {
        {1}, // 0 -> 1
        {2}, // 1 -> 2
        {3}, // 2 -> 3
        {1}, // 3 -> 1 (cycle)
        {5}, // 4 -> 5
        {6}, // 5 -> 6
        {}   // 6 -> terminal node
    };
   vector<int>ans= findsafenode(v,adj);
   for(auto it :ans){
       cout << it << " ";
   }
}