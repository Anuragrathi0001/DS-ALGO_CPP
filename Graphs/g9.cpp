class Solution {
private:
bool dfsCheck(int node,vector<vector<int>>&graph,vector<int>&vis,vector<int>&pthvis,vector<int>&check){
    vis[node]=1; pthvis[node]=1;check[node]=0;
    for(auto it:graph[node]){
        if(!vis[it]){
            if(dfsCheck(it,graph,vis,pthvis,check)==true){
                check[node]=0;
                return true;
            }
        }
        else if(pthvis[it]){check[node]=0;return true;}
    }
    check[node]=1;
    pthvis[node]=0;
    return false;
}    
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int>vis(v,0);
        vector<int>pthvis(v,0);
        vector<int>check(v,0);
        vector<int>safeNodes;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                dfsCheck(i,graph,vis,pthvis,check);
            }
        }
        for(int i=0;i<v;i++){
            if(check[i]==1){
                safeNodes.push_back(i);
            }
        }
        return safeNodes;
    }
};