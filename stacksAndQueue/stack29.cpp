#include <bits/stdc++.h>
using namespace std;
int celebrity(vector<vector<int>>mat){
    int n = mat.size();
    vector<int> knowme(n);
    vector<int> iknow(n);
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(mat[i][j]==1){
                knowme[j]++;
                iknow[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(knowme[i]==n-1&&iknow[i]==0){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<vector<int>> mat = {{0,1,1,0}, {0,0,0,0}, {0,1,0,0}, {1,1,0,0}};
    cout<<celebrity(mat);
    return 0;
}