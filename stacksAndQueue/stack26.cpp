#include <bits/stdc++.h>
using namespace std;

// Largest rectangle in histogram
int largestRectangle(vector<int>& heights) {
    stack<int> st;
    int maxA = 0;
    heights.push_back(0); // sentinel

    for(int i=0;i<heights.size();i++){
        while(!st.empty() && heights[st.top()] > heights[i]){
            int h = heights[st.top()];
            st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            maxA = max(maxA, h * width);
        }
        st.push(i);
    }
    return maxA;
}

int maxarea(int matrix[][5], int n, int m){
    vector<int> height(m, 0);
    int ans = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0) height[j] = 0;
            else height[j]++;
        }
        ans = max(ans, largestRectangle(height));
    }
    return ans;
}

int main(){
    int matrix[4][5] = {
        {1,0,1,0,1},
        {1,0,1,1,1},
        {1,1,1,1,1},
        {1,0,0,1,0}
    };

    cout << maxarea(matrix, 4, 5);
    return 0;
}
