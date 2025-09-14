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
    head->next->next=head->next->next->next->next;
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
bool isLooped(node*head){
    map<node *, int> mpp;
    node *temp = head;
    while(temp){
        if(mpp[temp]!=0){
            return true;
        }
        mpp[temp]++;
        temp = temp->next;
    }
    return false;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    node*head= makell(arr);
    printll(head);
    cout << endl;
    cout << isLooped(head);

    return 0;
}