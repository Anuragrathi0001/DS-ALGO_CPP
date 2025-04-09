#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    int arr[num];

    for (int i = 0; i < num; i++) {
        cout << "Enter the element " << i << " : ";
        cin >> arr[i];
    }

    // Insertion Sort
    for (int i = 1; i < num; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            // swap arr[j] and arr[j-1]
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    cout << "Sorted array:\n";
    for (int i = 0; i < num; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
