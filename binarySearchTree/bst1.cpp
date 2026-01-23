//creation 
#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int data1){
        data = data1;
        left = nullptr;
        right = nullptr;
    }
};
node*searchinbst(node *root,int val){
if(root==nullptr){
    return NULL;
}
node *curr = root;
while(curr!=nullptr){
    if(curr->data==val){
        return curr;
    }
    if(curr->data>val){
        curr = curr->left;
    }
    else{
        curr = curr->right;
    }
}
return nullptr;
}
int main(){
    node *root = new node(8);
    root->left = new node(5);
    root->right = new node(12);
    root->left->left = new node(4);
    root->left->right = new node(7);
    root->left->right->left = new node(6);
    root->right->left = new node(10);
    root->right->right = new node(14);
    root->right->right->left = new node(13);
   cout<< searchinbst(root,10)->data;

    return 0;
}