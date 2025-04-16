#include <bits/stdc++.h>
using namespace std;

int one(int arr[], int num) {
    int xr = 0;
    for (int i = 0; i < num; i++)
    {
        xr= xr^arr[i];
    }

    return xr;
}

int main() {
    int arr[5] = {1, 1, 2, 2, 3};
    cout << one(arr, 5);
    return 0;
}
