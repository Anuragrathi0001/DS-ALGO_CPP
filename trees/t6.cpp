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
vector<int>itpost(node*root){

}
int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    vector<int> ans = itinorder(root);
    for(auto it:ans){
        cout << it << " ";
    }
    return 0;
}