#include <bits/stdc++.h>
using namespace std;

int jumbbitch2(vector<int> arr) {
    int jumps = 0, far = 0, r = 0;

    for(int i = 0; i < arr.size() - 1; i++) {
        far = max(far, i + arr[i]);
        if(i == r) {
            jumps++;
            r = far;
        }
    }
    return jumps;
}

int main() {
    vector<int> arr = {2, 3, 1, 4, 1, 1, 1, 2};
    cout << jumbbitch2(arr);
    return 0;
}
