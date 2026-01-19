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
vector<int>itinorder(node*root){
    vector<int> ans;
    stack<node *> st;
    node *curr = root;
    while (!st.empty() || curr != nullptr)
    {
        while(curr!=nullptr){
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        ans.push_back(curr->data);
        curr = curr->right;
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
    vector<int> ans = itinorder(root);
    for(auto it:ans){
        cout << it << " ";
    }
    return 0;
}