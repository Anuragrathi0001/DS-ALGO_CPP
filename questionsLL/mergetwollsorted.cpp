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
node* mergetwoll(node*head1,node*head2){
    vector<int> arr;
    node *temp1 = head1;
    node *temp2 = head2;
    while(temp1){
        arr.push_back(temp1->val);
        temp1 = temp1->next;
    }
    while(temp2){
        arr.push_back(temp2->val);
        temp2 = temp2->next; 
    }
    sort(arr.begin(), arr.end());
   node* newest=  makell(arr);
   return newest;
}
int main(){
    vector<int>arr1 = {3,4,5,6,7,8,9,10};
    vector<int> arr2 = {0, 1, 2, 3, 4, 5, 6};
    node *head1 = makell(arr1);
    printll(head1);
    node *head2 = makell(arr2);
    cout << endl;
    printll(head2);
   node*newlist= mergetwoll(head1, head2);
    cout << endl;
    printll(newlist);
    return 0;
}