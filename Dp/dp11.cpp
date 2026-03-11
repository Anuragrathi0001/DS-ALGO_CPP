#include <bits/stdc++.h>
using namespace std;
int f(int i,int j){
    if(i==0&&j==0){
        return 1;
    }
    if(i<0||j<0){
        return 0;
    }
    int l = f(i, j - 1);
    int r = f(i -1, j);
    return l + r;
}
int main(){
    vector<vector<int>> grid1 = {
    {0,0,0},
    {0,0,0},
    {0,0,0}
};
    int i =grid1.size() - 1;
    int j = grid1[0].size() - 1;
    cout<< f(i,j);
    return 0;
}