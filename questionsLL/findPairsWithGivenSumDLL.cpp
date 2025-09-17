#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *prev;
    node *next;
    node(int data1, node* prev1, node* next1) {
        data = data1;
        prev = prev1;
        next = next1;
    }
    node(int data1) {
        data = data1;
        prev = nullptr;
        next = nullptr;
    }
};

void printDLL(node* head) {
    node *temp = head;
    while (temp) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null\n";
}

vector<pair<int,int>> findpairsWithGivenSum(node* head, int k) {
    vector<pair<int,int>> result;
    node *temp = head;

    while (temp) {
        node *second = temp->next; // reset for each temp
        while (second) {
            if (temp->data + second->data == k) {
                result.push_back({temp->data, second->data});
            }
            second = second->next;
        }
        temp = temp->next;
    }
    return result;
}

node* makeDLL(vector<int> arr) {
    node *head = new node(arr[0]);
    node *previous = head;
    for (int i = 1; i < arr.size(); i++) {
        node *temp = new node(arr[i], previous, nullptr);
        previous->next = temp;
        previous = temp;
    }
    return head;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 9};
    node* head = makeDLL(arr);

    vector<pair<int,int>> pairs = findpairsWithGivenSum(head, 5);

    for (auto p : pairs) {
        cout << "(" << p.first << ", " << p.second << ")\n";
    }

    return 0;
}

