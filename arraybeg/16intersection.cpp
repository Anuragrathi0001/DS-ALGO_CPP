#include <bits/stdc++.h>
using namespace std;

void intersection(int arr1[], int arr2[]) {
    vector<int> vec;
    int visited[7] = {0};
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 7; j++) { // fixed `i < 7` → `j < 7`
            if (arr1[i] == arr2[j]&&visited[j]==0) {
                vec.emplace_back(arr1[i]);
                visited[j] = 1;
                break; // optional: to avoid duplicates from multiple matches
            }
            if(arr2[j]>arr1[i])
                break;
        }
    }
    for (auto it : vec) {
        cout << it << " ";
    }
}

int main() { // ✅ fixed function name
    int arr1[8] = {1, 2, 2, 3, 3, 4, 5, 6};
    int arr2[7] = {2, 3, 3, 5, 6, 6, 7};
    intersection(arr1, arr2);

    return 0;
}
