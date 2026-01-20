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
int calmaxpsum(node*root,int &maxsum){
    if(root==nullptr){
        return 0;
    }
    int lh = max(0,calmaxpsum(root->left, maxsum));
    int rh = max(0,calmaxpsum(root->right, maxsum));
    maxsum = max(maxsum,root->data+lh + rh);
    return root->data + max(lh, rh);
}
int main(){
    int maxsum = INT_MIN;
    node *root = new node(-10);
    root->left = new node(9);
    root->right = new node(20);
    root->right->left = new node(15);
    root->right->right = new node(7);
    calmaxpsum(root, maxsum);
    cout << maxsum;
    return 0;
}