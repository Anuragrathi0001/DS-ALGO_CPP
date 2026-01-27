#include <bits/stdc++.h>
using namespace std;

bool comp(vector<int>& a, vector<int>& b){
    return a[0] < b[0];
}

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals){
    vector<vector<int>> ans;
    if (intervals.empty()) return ans;

    sort(intervals.begin(), intervals.end(), comp);

    vector<int> temp = intervals[0];

    for (int i = 1; i < intervals.size(); i++) {
        if (temp[1] >= intervals[i][0]) {
            temp[1] = max(temp[1], intervals[i][1]); // merge
        } else {
            ans.push_back(temp);
            temp = intervals[i];
        }
    }
    ans.push_back(temp); 

    return ans;
}

int main(){
    vector<vector<int>> intervals = {{1, 3},{8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = mergeIntervals(intervals);

    for (auto it : ans) {
        cout << it[0] << " " << it[1] << "   ";
    }
    return 0;
}
