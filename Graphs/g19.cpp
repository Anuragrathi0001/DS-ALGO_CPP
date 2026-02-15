#include <bits/stdc++.h>
using namespace std;
int findminefforts(vector<vector<int>>& heights,
                   pair<int,int> source,
                   pair<int,int> destination) {

    int n = heights.size();
    int m = heights[0].size();

    vector<vector<int>> efforts(n, vector<int>(m, 1e9));

    priority_queue<
        pair<int, pair<int,int>>,
        vector<pair<int, pair<int,int>>>,
        greater<pair<int, pair<int,int>>>
    > pq;

    efforts[source.first][source.second] = 0;
    pq.push({0, {source.first, source.second}});

    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, 1, 0, -1};

    while(!pq.empty()) {

        int diff = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();

        // ✅ If destination reached
        if(x == destination.first && y == destination.second)
            return diff;

        for(int i = 0; i < 4; i++) {

            int nx = x + dr[i];
            int ny = y + dc[i];

            if(nx >= 0 && ny >= 0 && nx < n && ny < m) {

                int newEffort = max(diff,
                    abs(heights[nx][ny] - heights[x][y]));

                if(newEffort < efforts[nx][ny]) {
                    efforts[nx][ny] = newEffort;
                    pq.push({newEffort, {nx, ny}});
                }
            }
        }
    }

    return -1;  // if unreachable
}

int main(){
  vector<vector<int>> heights = {
    {1, 2, 2},
    {3, 8, 2},
    {5, 3, 5}
};
  pair<int, int> source = {0, 0};
  pair<int, int> destination = {heights.size() - 1, heights[0].size() - 1};
  cout<<findminefforts(heights, source, destination);
  return 0;
}