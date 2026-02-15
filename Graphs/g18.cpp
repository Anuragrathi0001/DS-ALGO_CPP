#include <bits/stdc++.h>
using namespace std;
int finddest(vector<vector<int>>&grid, int n,int m,pair<int,int>source,pair<int,int>destination){
    vector<vector<int>> dist(n, vector<int>(m, 1e9));
    queue<pair<int, pair<int, int>>> q;
    dist[source.first][source.second] = 0;
    q.push({0, {source.first, source.second}});
    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};
    while (!q.empty())
    {
        int distance = q.front().first;
        int xc = q.front().second.first;
        int yc = q.front().second.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            if (xc + delrow[i] >= 0 &&xc + delrow[i]<n&&yc+delcol[i]>=0&&yc+delcol[i]<m && grid[xc+delrow[i]][yc+delcol[i]]){
                dist[xc + delrow[i]][yc + delcol[i]] = distance + 1;
                if(destination.first==xc+delrow[i]&&destination.second==yc+delcol[i]){
                    return distance + 1;
                }
                q.push({distance + 1 ,{xc + delrow[i], yc + delcol[i]}});

            }
        }
    }
    return -1;
}

int main() {
    vector<vector<int>> grid = {
        {1, 1, 1, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 1},
        {0, 1, 1, 1}
    };
    int n = grid.size();
    int m = grid[0].size();
    pair<int,int> source = {0, 0};
    pair<int,int> destination = {3, 3};
    cout<<finddest(grid, n, m, source, destination);

    return 0;
}
