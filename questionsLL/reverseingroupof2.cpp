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

node* makeLL(vector<int> arr) {
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++) {
        node *temp = new node(arr[i], nullptr, mover);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(node* head) {
    node *temp = head;
    while (temp) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null" << endl;
}

// ✅ Correct getkthnode
node* getkthnode(node* head, int k) {
    k -= 1;
    while (head != nullptr && k > 0) {
        head = head->next;
        k--;
    }
    return head;
}

// ✅ Reverse a sublist (doubly linked)
node* reversell(node* head) {
    node* prev = nullptr;
    node* temp = head;
    while (temp) {
        node* front = temp->next;
        temp->next = prev;
        temp->back = front;   // important for doubly linked
        prev = temp;
        temp = front;
    }
    return prev;
}

node* reverseinKgroup(node* head, int k) {
    node *temp = head;
    node *prevlast = nullptr;
    while (temp) {
        node* kthnode = getkthnode(temp, k);
        if (kthnode == nullptr) {
            if (prevlast) {
                prevlast->next = temp;
                temp->back = prevlast;
            }
            break;
        }
        node* nextNode = kthnode->next;
        kthnode->next = nullptr;

        // reverse current k-group
        node* newHead = reversell(temp);

        if (temp == head) {
            head = kthnode;   // update overall head
        } else {
            prevlast->next = kthnode;
            kthnode->back = prevlast;
        }

        prevlast = temp;
        temp = nextNode;
    }
    return head;
}

int main() {
    vector<int> arr = {2, 2, 2, 6, 7, 8, 9};
    node* head = makeLL(arr);

    cout << "Original list: ";
    printLL(head);

    head = reverseinKgroup(head, 3);

    cout << "Reversed in groups of 3: ";
    printLL(head);

    return 0;
}
