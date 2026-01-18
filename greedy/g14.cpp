#include <bits/stdc++.h>
using namespace std;

bool comp(vector<int>& a, vector<int>& b) {
    return a[1] < b[1];  // sort by end time
}

int minremovals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), comp);

    int removals = 0;
    int lastEnd = intervals[0][1];

    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] < lastEnd) {
            // overlap → remove current interval
            removals++;
        } else {
            // no overlap
            lastEnd = intervals[i][1];
        }
    }
    return removals;
}

int main() {
    vector<vector<int>> intervals = {{1,2}, {2,3}, {3,4}, {1,3}};
    cout << minremovals(intervals);
    return 0;
}
