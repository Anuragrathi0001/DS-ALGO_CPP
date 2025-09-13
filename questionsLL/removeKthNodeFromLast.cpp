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
node* removenthfromlast(node*head,int n){
    node *fast = head;
    for (int i = 0; i < n;i++){
        fast = fast->next;
    }
    node *slow = head;
    while(fast->next!=NULL){
        slow = slow->next;
        fast = fast->next;
    }
    if(fast==NULL){
        return head->next;
    }
    node *delnode = slow->next;
    slow->next=slow->next->next;
    delete delnode;
    return head;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
   node*head= makell(arr);
   printll(head);
   node *newhead = removenthfromlast(head,3);
   cout << endl;
   printll(newhead);
   return 0;
}