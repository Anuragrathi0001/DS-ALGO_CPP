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

vector<int> rightview(node* root){
    vector<int> ans;
    if(root == nullptr) return ans;

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        int len = q.size();
        for(int i = 0; i < len; i++){
            node* curr = q.front();
            q.pop();

            // first node of each level (rightmost)
            if(i == 0){
                ans.push_back(curr->data);
            }

            if(curr->right) q.push(curr->right);
            if(curr->left) q.push(curr->left);
        }
    }
    return ans;
}

int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->right->right = new node(7);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->right->left = new node(6);

    vector<int> ans = rightview(root);

    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}
