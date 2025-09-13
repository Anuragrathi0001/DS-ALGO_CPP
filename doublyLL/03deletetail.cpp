#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
    node *back;

    node(int data1, node* next1, node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

void printDLL(node* head) {
    node* temp = head;
    while (temp) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node* makeDLL(vector<int> arr) {
    if (arr.empty()) return nullptr;

    node* head = new node(arr[0]);
    node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

node* removeTail(node* head) {
if(head==NULL||head->next==NULL){
    return NULL;
}
else{
    node *tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->back->next = NULL;
    delete tail;
    return head;
}
}

int main() {
    vector<int> arr = {1, 3, 4, 56, 7, 8, 9};
    node* temp = makeDLL(arr);

    cout << "Original DLL: ";
    printDLL(temp);

    node* removed = removeTail(temp);

    cout << "After Removing : tail ";
    printDLL(removed);

    return 0;
}
