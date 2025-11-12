#include <bits/stdc++.h>
using namespace std;

int countsumlessthanorequal(vector<int> arr, int k) {
    int count = 0, sum = 0, l = 0;
    for (int r = 0; r < arr.size(); r++) {
        sum += arr[r];
        while (sum > k) {
            sum -= arr[l];
            l++;
        }
        count += (r - l + 1);
    }
    return count;
}

int countsubarraysumequalsk(vector<int> arr, int k) {
    return countsumlessthanorequal(arr, k) - countsumlessthanorequal(arr, k - 1);
}

int main() {
    vector<int> arr = {1, 0, 1, 0, 1};
    int k = 2;
    cout << countsubarraysumequalsk(arr, k);
    return 0;
}
