#include<bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int>> mat){
    int n = mat.size();
    int low = 0;
    int high = n - 1;
    while(low < high){
        if(mat[low][high] == 1){
            low++;         // low knows high → low can't be celebrity
        }
        else{
            high--;        // low doesn't know high → high can't be celebrity
        }
    }

    int cand = low;

    // Step 2: Verify candidate
    for(int i = 0; i < n; i++){
        if(i != cand){
            // Candidate should not know i, and i must know candidate
            if(mat[cand][i] == 1 || mat[i][cand] == 0){
                return -1;
            }
        }
    }

    return cand;
}

int main(){
    vector<vector<int>> mat = {{0,1,1,0}, {0,0,0,0}, {0,1,0,0}, {1,1,0,0}};
    cout << celebrity(mat);
    return 0;
}
