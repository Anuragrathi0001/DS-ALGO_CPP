#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    vector<int> temp; // Temporary vector to store merged result
    int left = low;
    int right = mid + 1;
    
    // Merge the two halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    
    // If there are remaining elements in the left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // If there are remaining elements in the right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy the sorted subarray into the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergesort(int arr[], int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);       // Sort the left half
    mergesort(arr, mid + 1, high);  // Sort the right half
    merge(arr, low, mid, high);     // Merge the sorted halves
}

int main() {
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    int arr[num];
    
    // Input array elements
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    mergesort(arr, 0, num - 1);  // Sorting the array
    
    cout << "Sorted array: ";
    for (int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
