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
int main(){
    vector<int> arr = {1, 2, 3, 5};
    Node *head = new Node(arr[0]);
    Node * mover= head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    cout << head->data;
    cout << head->next;

    return 0;
}