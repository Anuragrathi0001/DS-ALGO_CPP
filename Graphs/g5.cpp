#include <bits/stdc++.h>
using namespace std;

void bfstuff(vector<vector<int>>& grid,
             vector<vector<int>>& visited,
             int row, int col,
             int n, int m) {

    queue<pair<int,int>> q;
    visited[row][col] = 1;
    q.push({row, col});

    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        for (int dr = -1; dr <= 1; dr++) {
            for (int dc = -1; dc <= 1; dc++) {
                if (dr == 0 && dc == 0) continue;

                int nr = r + dr;
                int nc = c + dc;

                if (nr >= 0 && nr < n &&
                    nc >= 0 && nc < m &&
                    grid[nr][nc] == 1 &&
                    !visited[nr][nc]) {

                    visited[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
    }
}

int numIslands(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> visited(n, vector<int>(m, 0));
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && grid[i][j] == 1) {
                cnt++;
                bfstuff(grid, visited, i, j, n, m);
            }
        }
    }
    return cnt;
}

int main() {
    vector<vector<int>> grid = {
        {0,1,1,0},
        {0,1,1,0},
        {0,0,0,0},
        {1,1,0,1}
    };
    cout << numIslands(grid);
}
