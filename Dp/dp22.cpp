#include <bits/stdc++.h>
using namespace std;
int f(int i,int j,vector<vector<int>>matrix){
    if(j<0||j>=matrix[0].size()){
        return -1e9;
    }
    if(i==0){
        return matrix[0][j];
    }
    int left = matrix[i][j] + f(i - 1, j - 1, matrix);
    int right = matrix[i][j] + f(i - 1, j + 1, matrix);
    int up = matrix[i][j] + f(i - 1, j, matrix);
    return max(left, max(right, up));
}
int main(){
    vector<vector<int>> matrix = {
    {10, 2, 3, 4},
    {3, 7, 1, 6},
    {8, 5, 9, 3},
    {4, 6, 2, 8}
};
    int stuff = 0;
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < m;i++){
    stuff=max(stuff,f(n-1,i, matrix));
}
cout << stuff;
}