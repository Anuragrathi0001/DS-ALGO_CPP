#include <bits/stdc++.h>
using namespace std;

int pop(int arr[], int &top) {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        return -1;
    } else {
        int val = arr[top];
        arr[top] = 0;
        top--;
        return val;
    }
}

void push(int x, int arr[], int &top) {
    if (top == 49) {
        cout << "Stack Overflow" << endl;
        return;
    } else {
        top++;
        arr[top] = x;
    }
}

int main() {
    int arr[50];
    int top = -1;

    cout << pop(arr, top) << endl;   // Stack underflow expected

    push(2, arr, top);               // Push value 2
    cout << pop(arr, top) << endl;   // Pop and print the value
}
