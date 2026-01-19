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
vector<vector<int>>levelorder(node* root){
    vector<vector<int>> ans;
    if(root==nullptr){
        return {};
    }
    queue<node *> q;
    q.push(root);
    while(!q.empty()){
        int length = q.size();
        vector<int> level;
        for (int i = 0; i <length; i++)
        {
            node *node = q.front();
            q.pop();
            if(node->left!=nullptr){
                q.push(node->left);
            }
            if(node->right!=nullptr){
                q.push(node->right);
            }
            level.push_back(node->data);
        }
        ans.push_back(level);
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
    root->right->right = new node(7);
    vector<vector<int>> ans = levelorder(root);
    for(auto it :ans){
        for(auto it1:it){
            cout << it1<<" ";
        }
        cout << endl;
    }
    return 0;
}