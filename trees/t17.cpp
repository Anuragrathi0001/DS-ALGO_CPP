#include<bits/stdc++.h>
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

node* lca(node* root,node*p,node*q){
            if(root==nullptr||root==p||root==q){
                return root;
            }
            node *left = lca(root->left, p, q);
            node *right = lca(root->right, p, q);
            if(left==nullptr){
                return right;
            }
            if(right==nullptr){
                return left;
            }
            else{
                return root;
            }
}

int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->right->right = new node(7);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->right->left = new node(6);

    vector<int> ans;
   cout<< lca(root,  root->left->right,root->left->right->left )->data;
    return 0;
}
