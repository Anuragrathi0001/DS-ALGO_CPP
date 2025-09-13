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
Node *insertBeforeKthElm(Node*head ,int k){
    Node *temp = head;
    int count = 0;
    while(temp){
        count++;
        if(count==k){
            break;
        }
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *newNode = new Node(3, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
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
   Node* newhead = insertBeforeKthElm(head,4);
   printDll(newhead);
   return 0;
}