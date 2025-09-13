#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
      Node(int data1){
        data = data1;
        next = nullptr;
    }
};
int countnodes(Node* head){
    Node *temp = head;
    int count = 0;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    return count;
}
int main(){
    vector<int> arr = {8, 6, 1, 2, 3};
    Node *head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size();i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    cout << head->data<<"is the element at the head index"<<endl;
  cout<< countnodes(head)<<" is the count of nodes";
}