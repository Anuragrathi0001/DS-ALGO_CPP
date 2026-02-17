#include <bits/stdc++.h>
using namespace std;
void applyFW(vector<vector<int>>&matrix){
    int n = matrix.size();
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(matrix[i][j]==-1){
                matrix[i][j] = 1e8;
            }
            if(i==j){
                matrix[i][j] = 0;
            }
        }
    }
    for (int k = 0; k < n;k++){
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++){
                matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
            }
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(matrix[i][j]==1e8){
                matrix[i][j] = -1;
            }
        }
    }
}
int main(){
    int n = 4;
    vector<vector<int>> matrix = {
        {0, 5, -1, 10},
        {-1, 0, 3, -1},
        {-1, -1, 0, 1},
        {-1, -1, -1, 0}
    };
    applyFW(matrix);
    for (int i = 0; i < matrix.size();i++){
        for (int j = 0; j < matrix[0].size();j++){
            cout << matrix[i][j]<<" ";
        }
        cout << endl;
    }
        return 0;
}