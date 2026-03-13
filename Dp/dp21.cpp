#include<bits/stdc++.h>
using namespace std;

int f(int row, int col, int n, vector<vector<int>>& triangle){
    
    if(row == n - 1){
        return triangle[row][col];
    }

    int down = triangle[row][col] + f(row + 1, col, n, triangle);
    int diag = triangle[row][col] + f(row + 1, col + 1, n, triangle);

    return min(down, diag);
}

int main(){

    vector<vector<int>> triangle = {
        {2},
        {3,4},
        {6,5,7},
        {4,1,8,3}
    };

    int n = triangle.size();

    cout << f(0, 0, n, triangle);

    return 0;
}