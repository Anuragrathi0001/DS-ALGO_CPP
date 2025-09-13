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
    node *temp = head;
    int count0 = 0, count1 = 0, count2 = 0;
    while(temp){
        if(temp->val==0){
            count0++;
        }
        else if(temp->val==1){
            count1++;
        }
        else if(temp->val==2){
            count2++;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp){
        if(count0!=0){
            temp->val = 0;
            count0--;
        }
        else if(count1!=0){
            temp->val = 1;
            count1--;
        }
        else if(count2!=0){
            temp->val = 2;
            count2--;
        }
        temp = temp->next;
    }
    return head;
}
int main(){
    vector<int> arr = {1, 2,0,1,0,2,0,1};
  node*head=makell(arr);
  printll(head);
  node *newnode = sortll(head);
  cout << endl;
  printll(newnode);
  return 0;
}