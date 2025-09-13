#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
    node(int data1, node* next1) {
        data = data1;
        next = next1;
    }
    node(int data1) {
        data = data1;
        next = nullptr;
    }
};

void printll(node* head) {
    node *temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node* removeByVal(node* head, int value) {
    if (head == nullptr) {
        return nullptr;
    }

    if (head->data == value) {
        node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    node *temp = head;
    node *prev = nullptr;
    
    while (temp != nullptr) {
        if (temp->data == value) {
            prev->next = temp->next;
            delete temp;
            break; 
        }
        prev = temp;
        temp = temp->next;
    }
    
    return head;
}

int main() {
    vector<int> arr = {3, 5, 6, 7, 8, 9};
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++) {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    
    int value = 7;
    head = removeByVal(head, value);  
    
    printll(head);
    
    return 0;
}
