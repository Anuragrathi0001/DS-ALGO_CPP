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

void printll(node* head){
    node *temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node* delatbeg(node* head){
    if(head->next==nullptr){
        return head;
    }
    node *temp = head;
    head = head->next;
    free(temp);
    return head;
}
node* deleteatend(node* head){
    node *temp = head;
    while(temp->next->next!=nullptr){
        temp = temp->next;
    }
    temp->next = nullptr;
    return head;
}

int main(){
    vector<int> arr = {5, 4, 3, 2, 7};
    node* head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size();i++){
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    printll(head);
    cout << endl;
    head= delatbeg(head);
    printll(head);
    cout << endl;
    head = deleteatend(head);
    printll(head);

    return 0;
}