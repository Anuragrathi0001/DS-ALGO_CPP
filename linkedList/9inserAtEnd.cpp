#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int data1,node* next1){
        data = data1;
        next = next1;
    }
    node(int data1){
        data = data1;
        next = nullptr;
    }
};
node* insrAtend(node* head,int val){
    node *temp = head;
    node *addendNode = new node(val);
    while(temp){
        if(temp->next==nullptr){
            temp->next = addendNode;
        }
          temp = temp->next;
    }
    return head;
}
void printll(node* head){
    node *temp = head;
    while(temp){
        cout << temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    vector<int> arr = {3, 5, 6, 7, 8, 9};
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++) {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
  node*tempo= insrAtend(head, 2);
  printll(tempo);
    return 0;
}