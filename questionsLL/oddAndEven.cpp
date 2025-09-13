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
node* oddEven(node*head){
    queue<int> oddNode;
    queue<int> evenNode;
    int count = 0;
    node *temp = head;
    while(temp){
        count++;
        if(count%2==0){
            evenNode.push(temp->data);
        }
        else{
            oddNode.push(temp->data);
        }
        temp = temp->next;
    }
    temp = head;
    while(temp){
        if(oddNode.size()==0&&evenNode.size()==0){
            break;
        }
        if(oddNode.size()!=0){
            temp->data = oddNode.front();
            oddNode.pop();
        }
        else {
            temp->data = evenNode.front();
            evenNode.pop();
        }
        temp = temp->next;
    }
    return head;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
   node*head= makell(arr);
   printll(head);
   node *newhead = oddEven(head);
   cout << endl;
   printll(newhead);
   return 0;
}