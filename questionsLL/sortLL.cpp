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
         mover = temp;
     }
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
node*sortll(node*head){
    vector<int> arr;
    node *temp = head;
    while(temp){
        arr.push_back(temp->val);
        temp = temp->next;
    }
    sort(arr.begin(), arr.end());
    temp = head;
    int count = 0;
    while(temp){
        temp->val = arr[count];
        temp = temp->next;
        count++;
    }
    return head;
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