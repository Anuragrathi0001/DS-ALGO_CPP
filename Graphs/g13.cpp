#include<bits/stdc++.h>
using namespace std;

vector<int> toposort(vector<vector<int>> adj, int v){
    vector<int> indegree(v, 0);

    for (int i = 0; i < v; i++){
        for(auto it : adj[i]){
            indegree[it]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < v; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    vector<int> ans;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (auto it : adj[node]){
            indegree[it]--;
            if(indegree[it] == 0){
                q.push(it);
            }
        }
    }

    return ans;
}

string findAlienStuff(vector<string> words, int numwords, int lenAlien){

    vector<vector<int>> adj(lenAlien);

    for (int i = 0; i < numwords - 1; i++){
        string s1 = words[i];
        string s2 = words[i + 1];
        int len = min(s1.size(), s2.size());

        bool foundDifference = false;

        for (int ptr = 0; ptr < len; ptr++){
            if(s1[ptr] != s2[ptr]){
                adj[s1[ptr] - 'a'].push_back(s2[ptr] - 'a');
                foundDifference = true;
                break;
            }
        }

        // 🔥 Invalid prefix case
        if(!foundDifference && s1.size() > s2.size()){
            return "";
        }
    }

    vector<int> ans = toposort(adj, lenAlien);

    // 🔥 Cycle detection
    if(ans.size() < lenAlien) return "";

    string retAns = "";
    for(auto it : ans){
        retAns += char(it + 'a');
    }

    return retAns;
}

int main(){
    vector<string> words = {
        "baa",
        "abcd",
        "abca",
        "cab",
        "cad"
    };

    int numwords = 5;
    int lenAlien = 4;

    cout << findAlienStuff(words, numwords, lenAlien);
}
