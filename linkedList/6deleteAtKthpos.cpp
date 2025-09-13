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
node* deleteNodeKth(node* head,int k){
    node* temp = head;
    node *prev = nullptr;
    int count = 0;
    if(head->next==nullptr||head==nullptr){
        return nullptr;
    }
    else{
        while(temp->next!=nullptr){
            count++;
        if(count==k){
        prev->next = temp->next;
        delete temp;
        break;
        } 
        prev=temp;
        temp = temp->next;
    }
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
    vector<int> arr = {3, 4, 5, 6, 7, 8, 9};
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size();i++){
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    printll(head);
    node*temporary= deleteNodeKth(head,4);
    cout << endl;
    printll(temporary);
    return 0;
}