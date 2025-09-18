#include<bits/stdc++.h>
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
node*makeLL(vector<int>arr){
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size();i++){
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void printLL(node*head){
    node *temp = head;
    while(temp){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null";
}
node*findKthnode(node*head,int n){
    node *temp = head;
    for (int i = 1; i<=n;i++){
        temp = temp->next;
    }
    return temp;
}
node*revl(node*head,int k){
    if(head&&head->next==nullptr){
        return head;
    }
    
    node *tail = head;
    int count = 0;
    while(tail->next!=nullptr){
        count++;
        tail = tail->next;
    }
    if(k%count==0){
        return head;
    }
    k = k % count;
    tail->next = head;
    node *newTail = findKthnode(head, count - k);
    node *newhead = newTail->next;
    newTail->next = nullptr;
    return newhead;
}

int main(){
    vector<int> arr = {2,3,5,6,7,8,9,};
node*head=makeLL(arr);
printLL(head);
cout << endl;
node *rotListLL=revl(head,2);
printLL(rotListLL);
}