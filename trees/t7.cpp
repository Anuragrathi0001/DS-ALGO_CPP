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
vector<vector<int>>itpostorder(node*root){
    vector<vector<int>> ans;
    vector<int> pre, in, post;
    stack<pair<node *, int>> st;
    st.push({root, 1});
    while(!st.empty()){
     if(st.top().second==1){
         pre.push_back(st.top().first->data);
         st.top().second = 2;
         if(st.top().first->left!=nullptr){
             st.push({st.top().first->left, 1});
         }
     }
     else if(st.top().second==2){
        in.push_back(st.top().first->data);
         st.top().second = 3;
         if(st.top().first->right!=nullptr){
             st.push({st.top().first->right, 1});
         }
     }
     else{
         post.push_back(st.top().first->data);
         st.pop();
     }
    }
    ans.push_back(pre);
    ans.push_back(in);
    ans.push_back(post);
    return ans;
} 
int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    vector<vector<int>> ans = itpostorder(root);
    for(auto it:ans){
      for(auto it1:it){
          cout << it1;
      }
      cout << endl;
    }
    return 0;
}