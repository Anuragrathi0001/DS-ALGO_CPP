#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;  // Return the correct partition index
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pindex = partition(arr, low, high);
        quicksort(arr, low, pindex - 1);
        quicksort(arr, pindex + 1, high);
    }
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

    quicksort(arr, 0, num - 1);  // Sorting the array

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
