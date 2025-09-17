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
int helper(node*head){
    if(head==nullptr){
        return 1;
    }
   int  carry = helper(head->next);
    head->data = head->data + carry;
    if(head->data<10){
        return 0;
    }
    head->data = 0;
    return 1;
}

node* addOne(node* head) {
 int  carry = helper(head);
    if(carry==1){
        node *newNode = new node(1);
        newNode->next = head;
        return newNode;
    }
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