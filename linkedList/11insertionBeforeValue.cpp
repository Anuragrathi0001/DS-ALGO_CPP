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
node* insertBeforeElm(node* head,int search,int elm){
    if(head==NULL){
        return NULL;
    }
    if(head->data==elm){
        node *temp = new node(elm);
        temp->next = head;
        return temp;
    }
    node *mover = head;
    while(mover){
        node *moverminus1;
        if(mover->data==search){
            node *x = new node(elm);
            x->next = mover;
            moverminus1->next = x;
        }
      moverminus1 = mover;
      mover = mover->next;
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
    printll(head);
    cout << endl;
  node* tempo= insertBeforeElm(head, 5,10);
  printll(tempo);

  return 0;
}