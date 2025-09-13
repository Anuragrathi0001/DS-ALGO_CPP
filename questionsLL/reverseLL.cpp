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
node*revl(node*head){
    stack<int> st;
    node *temp = head;
    while(temp){
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while(temp){
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {
        2,
        3,
        5,
        6,
        7,
        8,
        9,
    };
node*head=makeLL(arr);
printLL(head);
cout << endl;
node *revListLL=revl(head);
printLL(revListLL);
}