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
node*delhead(node*head){

    node *temp = head;
     head=head->next;
    delete temp;
    return head;
}
node*deltail(node*head){
    node *temp = head;
    while(temp->next->next!=nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
node*delKth(node*head,int k){
   if(head==NULL){
       return NULL;
   }
   if(k==1){
       delhead(head);
   }
   int count = 0;
    node *temp = head;
    node *prev = nullptr;
    while(temp){
        count++;
        if(count==k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
  
    return head;
}
node*delByValue(node*head,int val){

    
        if(head==NULL){
            return NULL;
        }
        else if(head->data=val){
                node *temp = head;
                head = head->next;
                delete temp;
                return head;
        }
        else{
        node *temp = head;
        node *prev = nullptr;
        while(temp){
            if(temp->data==val){
                prev->next = temp->next;
                delete temp;
            }
            prev = temp;
            temp = temp->next;
        }
  return head;
    }
  
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
node*newhead=  delhead(head);
cout << endl;
printLL(newhead);
node*newTail=deltail(newhead);
cout << endl;
printLL(newTail);
cout << endl;
node *newNode=delKth(newTail,4);
printLL(newNode);
node *particularNode = delByValue(newNode,6);
cout << endl;
printLL(particularNode);
}