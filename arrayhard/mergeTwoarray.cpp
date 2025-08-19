#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merged(vector<int> arr1, vector<int> arr2) {
    int n = arr1.size();
    int m = arr2.size();

    int i = n - 1;
    int j = 0;

    // Swap elements to make sure after sorting, elements in arr1 are smaller or equal to arr2
    while (i >= 0 && j < m) {
        if (arr1[i] > arr2[j]) {
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        } else {
            // If arr1[i] <= arr2[j], since arr1 is sorted and arr2 sorted, no more swaps needed
            break;
        }
    }

    // Sort both arrays individually
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    vector<vector<int>> ans;
    ans.push_back(arr1);
    ans.push_back(arr2);

    return ans;
}

void printVector(const vector<int>& v) {
    for (int val : v) {
        cout << val << " ";
    }
    cout << "\n";
}

int main() {
    cout << "the starts\n";

    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {0, 2, 6, 8, 9};

    vector<vector<int>> answer = merged(arr1, arr2);

    cout << "Array 1: ";
    printVector(answer[0]);  // print arr1 after merging
    cout << "Array 2: ";
    printVector(answer[1]);  // print arr2 after merging

    return 0;
}
