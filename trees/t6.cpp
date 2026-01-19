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
vector<int>itpostorder(node*root){
    if(root==nullptr){
        return {};
    }
    vector<int> ans;
    stack<node *> st1;
    stack<node *> st2;
    st1.push(root);
    while(!st1.empty()){
        node *curr = st1.top();
        st2.push(st1.top());
        st1.pop();
       if(curr->left!=nullptr) 
           st1.push(curr->left);
       if(curr->right!=nullptr)
           st1.push(curr->right);
        }
        while(!st2.empty()){
            ans.push_back(st2.top()->data);
            st2.pop();
        }
        return ans;
} 
int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    vector<int> ans = itpostorder(root);
    for(auto it:ans){
        cout << it << " ";
    }
    return 0;
}