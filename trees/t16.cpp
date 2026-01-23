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

bool roottonode(node* root,vector<int>&ans,int data){
            if(root==nullptr){
                return {};
            }
            ans.push_back(root->data);
            if(root->data==data) {
                return true;
            }
            if(roottonode(root->left,ans,data)||roottonode(root->right, ans,data)){
                return true;
            }
            ans.pop_back();
            return false;
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
    roottonode(root,ans,6);

    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}
