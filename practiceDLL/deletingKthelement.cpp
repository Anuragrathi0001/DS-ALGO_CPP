#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;
    Node(int data1,Node*next1,Node*back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }    
};
void printDll(Node*head){
    Node *temp = head;
    while(temp){
        cout << temp->data << "->";
        temp = temp->next;
    }       cout << "null";
}
Node*delkth(Node*head,int k){
  if(head==NULL){
      return NULL;
  }
  int cnt = 0;
  Node *Knode = head;
  while(Knode->next!=NULL){
      cnt++;
      if(cnt==k){
          break;
      }
      Knode = Knode->next;
  }
  Node *prev = Knode->back;
  Node *front = Knode->next;
  if(prev==NULL&&front==NULL){
      return NULL;
  }
  else if(prev==NULL){
      Knode = Knode->next;
      front->back = nullptr;
  }
  else if(front==NULL){
      Knode->back = nullptr;
      prev->next = nullptr;
  }
  prev->next = front;
  front->back = prev;
  Knode->back = nullptr;
  Knode ->next = nullptr;
  delete Knode;
  return head;
}

int main(){
    vector<int>arr={2,3,4,5,6,7,8,9};
    Node*head=new Node(arr[0]);
    Node *prev=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    printDll(head);
    Node*deleteKthelem=delkth(head,1);
    cout << endl;
    printDll(deleteKthelem);



    return 0;
}