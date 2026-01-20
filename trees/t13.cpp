#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *left;
    node *right;
    node(int data1) {
        data = data1;
        left = nullptr;
        right = nullptr;
    }
};
vector<int> topview(node*root){
     vector<int> ans;
    if(root==nullptr){
        return ans;
    }
    queue<pair<node *, int>>q;
    map<int, int> mpp;
    q.push({root, 0});
    while(!q.empty()){
        node *curr = q.front().first;
        int line = q.front().second;
        q.pop();
        if(mpp.find(line)==mpp.end()){
            mpp[line] = curr->data;
        }
        if(curr->left!=nullptr){
            q.push({curr->left, line - 1});
        }
        if(curr->right!=nullptr){
            q.push({curr->right, line + 1});
        }
    }
    for(auto it:mpp){
        ans.push_back(it.second);
    }
}


int main() {
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    vector<int>ans=topview(root);
    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}
