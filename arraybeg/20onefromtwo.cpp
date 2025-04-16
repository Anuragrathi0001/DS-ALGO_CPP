#include <bits/stdc++.h>
using namespace std;

int one(int arr[], int num) {
    int maxi = arr[0];
    for (int i = 1; i < num; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    vector<int> hash(maxi + 1, 0);

    for (int i = 0; i < num; i++) {
        hash[arr[i]]++;
    }

    for (int j = 0; j <= maxi; j++) {
        if (hash[j] == 1) {
            return j;
        }
    }

    return -1;
}

int main() {
    int arr[5] = {1, 1, 2, 2, 3};
    cout << one(arr, 5);
    return 0;
}
