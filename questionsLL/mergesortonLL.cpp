#include <bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node *next;
    node(int val1,node*next1){
        val = val1;
        next = next1;
    }
    node(int val1){
        val = val1;
        next = nullptr;
    }
};
 node*makell(vector<int>arr){
     node *head = new node(arr[0]);
     node *mover = head;
     for (int i = 1; i < arr.size();i++){
         node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;   }
     return head;
}
void printll(node*head){
    node *temp = head;
    while(temp){
        cout << temp->val<<"->";
        temp = temp->next;
        
    }
    cout << "null";
}
node*findMiddle(node*head){
    node *slow = head;
    node *fast = head->next;
    while(fast!=nullptr&&fast->next!=nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
node*mergetwolists(node*list1,node*list2){
    node *dummyNode = new node(-1);
    node *temp = dummyNode;
    while(list1!=nullptr&&list2!=nullptr){
        if(list1->val<list2->val){
            temp->next = list1;
            temp = list1;
            list1 = list1->next;
        }
        else{
            temp->next = list2;
            temp = list2;
            list2 = list2->next;
        }}
        if(list1){
            temp->next = list1;
        }
        else{
            temp->next = list2;
        }
        return dummyNode->next;
}
node*sortll(node*head){
    if(head==nullptr||head->next==nullptr){
        return head;
    }
    node*middle = findMiddle(head);
    node *right = middle->next;
    middle->next = nullptr;
    node *left = head;
    left = sortll(left);
    right = sortll(right);
    return mergetwolists(left, right);
}
int main(){
    vector<int> arr = {3,4,5,63,1,46,7,9};
  node*head=makell(arr);
  printll(head);
  node *newnode = sortll(head);
  cout << endl;
  printll(newnode);
  return 0;
}