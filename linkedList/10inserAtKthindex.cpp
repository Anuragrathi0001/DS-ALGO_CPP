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
node* insertAtKth(node* head,int elm,int k){
    if(head==NULL){
        if(k==1){
            node *temp = new node(elm);
            return temp;
        }
    }
    if(k==1){
        node *temp1 = new node(elm);
        temp1->next = head;
        return temp1;
    }
    node *temp = head;
    int cnt = 0;
    while (temp)
    {
        cnt++;
        if(cnt==k-1){
            node *x = new node(elm);
            x->next = temp->next;
            temp->next = x;
            break;
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
    printll(head);
   node * tempo= insertAtKth(head, 1, 3);
   cout << endl;
   printll(tempo);

   return 0;
}