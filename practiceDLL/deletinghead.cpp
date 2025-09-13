#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;
    Node(int data1,Node*next1,Node*back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }    
};
void printDll(Node*head){
    Node *temp = head;
    while(temp){
        cout << temp->data << "->";
        temp = temp->next;
    }       cout << "null";

}
Node*delhead(Node* head){
    if(head==NULL||head->next==NULL){
        delete head;
        return NULL;
    }
    Node *prev=head;
    head=head->next;
    head->back=nullptr;
    delete prev;
    return head;
    
}
int main(){
    vector<int>arr={2,3,4,5,6,7,8,9};
    Node*head=new Node(arr[0]);
    Node *prev=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    printDll(head);
  Node*delheader=delhead(head);
  printDll(delheader);


    return 0;
}