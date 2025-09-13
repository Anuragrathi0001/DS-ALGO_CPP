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
    node *temp = head;
    int count = 0;
    while(temp){
        count++;
        temp = temp->next;
    }
    int loc = count - n;
    if(loc==0){
        return head->next;
    }
    else{
        temp = head;
        for (int i = 1; i < loc;i++){
            temp = temp->next;
        }
        node *helper = temp->next;
        temp->next = temp->next->next;
        delete helper;
        return head;
    }
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