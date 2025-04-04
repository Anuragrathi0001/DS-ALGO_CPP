#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter the number of elements in the array: ";
    int num;
    cin >> num;

    int arr[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    // Hash array (assuming elements are from 0 to 12)
    int hash[13] = {0};

    // Count frequency
    for (int j = 0; j < num; j++) {
        hash[arr[j]] += 1;
    }

    // Querying
    int queries;
    cout << "Enter number of queries: ";
    cin >> queries;
    while (queries--) {
        int number;
        cout << "Enter number to query: ";
        cin >> number;
        if (number >= 0 && number <= 12)
            cout << "Frequency of " << number << ": " << hash[number] << endl;
        else
            cout << "Number out of range!" << endl;
    }

    return 0; 
}
