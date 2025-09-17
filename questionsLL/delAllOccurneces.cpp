#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *prev;
    node *next;
    node(int data1,node*prev1,node*next1){
        data = data1;
        prev = prev1;
        next = next1;
    }
    node(int data1){
        data = data1;
        prev = nullptr;
        next = nullptr;
    }
};
void printDLL(node*head){
    node *temp = head;
    while(temp){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null";
}
node* delAllOccurences(node* head, int k) {
    if (head == nullptr) return nullptr;

    node* temp = head;
    while (temp) {
        if (temp->data == k) {
            node* nextNode = temp->next;
            node* prevNode = temp->prev;

            // Update head if needed
            if (temp == head) {
                head = nextNode;
            }

            // Link previous node to next node
            if (prevNode) {
                prevNode->next = nextNode;
            }
            // Link next node to previous node
            if (nextNode) {
                nextNode->prev = prevNode;
            }
            delete temp;
            temp = nextNode;
        } else {
            temp = temp->next;
        }
    }
    return head;
}

node*makeDLL(vector<int>arr){
    node *head = new node(arr[0]);
    node *previous = head;
    for (int i = 1; i < arr.size();i++){
        node *temp = new node(arr[i],previous,nullptr);
        previous->next = temp;
        previous = temp;
    }
    return head;

}
int main() {
    vector<int> arr = {10, 4, 10, 10, 6, 10};
    node* head = makeDLL(arr);
    head = delAllOccurences(head, 10);
    printDLL(head);
    return 0;
}
