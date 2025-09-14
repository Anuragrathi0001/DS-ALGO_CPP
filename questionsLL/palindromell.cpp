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
bool palin(node*head){
    if(head==NULL){
        return head;
    }
    node *temp = head; 
    stack<int> st;
   while(temp){
      
       st.push(temp->data);
       temp = temp->next;
   }
   temp = head;
   while(temp){
    if(temp->data!=st.top()){
        return false;
    }
    st.pop();
    temp = temp->next;
   }
   return true;
}

int main(){
    vector<int> arr = { 2,3,5,3,2};
node*head=makeLL(arr);
printLL(head);
cout << endl;
bool palindromecheck=palin(head);
cout<<palindromecheck;
}