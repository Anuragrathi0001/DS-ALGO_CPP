#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int data1,node*next1){
        data = data1;
        next = next1;
    }
    node(int data1){
        data = data1;
        next = nullptr;
    }
};
node* makell(vector<int>arr){
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size();i++){
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void printll(node*head){
    node *temp = head;
    while(temp){
        cout << temp->data<<"->";
        temp = temp->next;
    }
    cout << "null";
}
node* reverse(node* head) {
    node* prev = nullptr;
    node* curr = head;
    while (curr) {
        node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

node* addOne(node* head) {
    head = reverse(head);

    node* temp = head;
    int carry = 1;  

    while (temp && carry) {
        int sum = temp->data + carry;
        temp->data = sum % 10;
        carry = sum / 10;

        if (carry && temp->next == nullptr) {
            temp->next = new node(carry);
            carry = 0;
        }
        temp = temp->next;
    }
    head = reverse(head);
    return head;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
   node*head= makell(arr);
   printll(head);
   node *newhead = addOne(head);
   cout << endl;
   printll(newhead);
   return 0;
}