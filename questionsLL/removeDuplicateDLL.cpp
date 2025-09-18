#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node *back;
    node(int data1,node*next1,node*back1){
        data = data1;
        next = next1;
        back = back1;
    }
    node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
node*makeLL(vector<int>arr){
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size();i++){
        node *temp = new node(arr[i],nullptr,mover);
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
node*removeDuplicates(node*head){
    node *temp = head;
    while(temp&&temp->next!=nullptr){
      node* nextNode = temp->next;
      while(nextNode&&nextNode->data==temp->data){
          nextNode = nextNode->next;
          delete nextNode;
      }
      temp->next = nextNode;
      if(nextNode){
          nextNode->back = temp;
      }
      temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {
        2,
        2,
        2,
        6,
        7,
        8,
        9,
    };
node*head=makeLL(arr);
printLL(head);
cout << endl;
node *remdupli=removeDuplicates(head);
printLL(remdupli);
}