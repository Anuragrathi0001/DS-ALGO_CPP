#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][4] = {{0,0,0,1},{0,0,0,0},{1,1,1,1}};
    int ans = 0, maxcnt = 0, ind;
    for (int i = 0; i < 3;i++){
        int rowcnt = 0;
        for (int j = 0; j < 4;j++){
            if(arr[i][j]==1){
                rowcnt += 1;
            }
        }
        if(rowcnt>maxcnt){
            maxcnt = rowcnt;
            ind = i;
        }
    }
    cout << ind;
    return 0;
}