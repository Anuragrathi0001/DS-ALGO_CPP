#include <bits/stdc++.h>
using namespace std;

int partitionQ(vector<int>& arr, int start, int end) {
    int pivotElm = arr[end]; // choose last element as pivot
    int pos = start;         // partition index

    for (int i = start; i < end; i++) {
        if (arr[i] <= pivotElm) {
            swap(arr[i], arr[pos]);
            pos++; 
        }
    }
    swap(arr[pos], arr[end]); // place pivot in correct position
    return pos;
}

void quickSort(vector<int>& arr, int start, int end) {
    if (start >= end) {
        return;
    }
    int pivot = partitionQ(arr, start, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
}

int main() {
    vector<int> arr = {2, 4, 2, 1, 4, 63, 45, 0};

    cout << "Before sorting: ";
    for (auto x : arr) {
        cout << x << " ";
    }
    cout << "\n";

    quickSort(arr, 0, arr.size() - 1);

    cout << "After sorting: ";
    for (auto x : arr) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
