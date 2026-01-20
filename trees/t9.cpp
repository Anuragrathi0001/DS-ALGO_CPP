//iterative preorder
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
int diameter(node*root,int &maxi){
    if(root==nullptr){
        return 0;
    }
    int lh = diameter(root->left,maxi);
    int rh = diameter(root->right,maxi);
    maxi = max(maxi, lh + rh);
    return 1 + max(lh, rh);
}
int main(){
    int maxi=0;
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->left->left->left = new node(1);
    cout<<diameter(root,maxi);
    return 0;
}