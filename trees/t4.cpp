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
vector<int>itpreorder(node*root){
    vector<int> ans;
    stack<node *> st;
    st.push(root);
    while(!st.empty()){
        node*root=st.top();
        st.pop();
        if(root->right!=nullptr){
            st.push(root->right);
        }
        if(root->left!=nullptr){
            st.push(root->left);
        }
        ans.push_back(root->data);
    }
    return ans;
}
int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(7);
    root->left->left = new node(3);
    root->left->right = new node(4);
    root->left->right->left = new node(5);
    root->left->right->right = new node(6);
    vector<int> ans = itpreorder(root);
    for(auto it:ans){
        cout << it << " ";
    }
    return 0;
}