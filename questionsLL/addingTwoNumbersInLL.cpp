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
node*addListNodes(node*head1,node*head2){
    node *temp1 = head1;
    node *temp2 = head2;
    if(temp1==NULL){
        return temp2;
    }
    if(temp2==NULL){
        return temp1;
    }
    int carry = 0;
    node *dummy = new node(-1);
    node *curr = dummy;
    while(temp1!=NULL||temp2!=NULL){
        int sum = carry;
        if(temp1)
            sum += temp1->data;
        if(temp2)
            sum += temp2->data;
        node* newNode = new node(sum % 10);
        carry = sum / 10;
        curr->next = newNode;
        curr = newNode;
        if(temp1)
            temp1 = temp1->next;
        if(temp2)
            temp2 = temp2->next;
        if(carry){
            node *carryNode = new node(carry);
            curr->next = carryNode;
        }   
    }
    return dummy->next;
}

int main(){
    vector<int> arr1 = {3,8,7};
    vector<int> arr2 = {5, 2, 4, 1};
    node *head1 = makeLL(arr1);
    node *head2 = makeLL(arr2);
    printLL(head1);
    cout << endl;
    printLL(head2);
    cout << endl;
    node*newhead=addListNodes(head1, head2);
    printLL(newhead);
}