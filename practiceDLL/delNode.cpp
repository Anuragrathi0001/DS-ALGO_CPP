#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
    node(int data1,node*next1,node*prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }    
};
node* makeDll(vector<int>arr){
    node *head = new node(arr[0]);
    node *back= head;
    for (int i = 1; i < arr.size();i++){
        node *temp = new node(arr[i], nullptr, back);
        back->next = temp;
        back = temp;
    }
    return head;
}
void printDll(node *head){
    node *temp = head;
    while(temp!=NULL){
        cout << temp->data<<"->";
        temp = temp->next;
    }
    cout << "null";}
node* delNode(node* head, node* temp) {
    if (temp == nullptr) return head;

    // If temp is head
    if (temp == head) {
        head = head->next;
        if (head) head->prev = nullptr;
        delete temp;
        return head;
    }

    node* prev = temp->prev;
    node* front = temp->next;

    if (prev) prev->next = front;
    if (front) front->prev = prev;

    delete temp;
    return head;
}

int main(){
    vector<int> arr = {2, 4, 5, 6, 78, 8, 5};
  node*head= makeDll(arr);
  printDll(head);
  node *tempo=delNode(head,head->next->next);
  printDll(tempo);

  return 0;
}