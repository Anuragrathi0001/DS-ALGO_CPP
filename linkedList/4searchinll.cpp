#include<bits/stdc++.h>
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
void findNode(node* head,int n){
    node *temp = head;
    int count = 0;
    while(temp){
        count++;
        if(temp->data==n){
            cout << "Found at count " << count;
            break;
        }
        temp = temp->next;
    }
}
int main(){
    vector<int> arr = {2, 3, 4, 5, 6, 7};
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size();i++){
        node *temp = new node(arr[i]);
        mover->next=temp;
        mover = temp;
    }
    findNode(head, 5);
    return 0;
}