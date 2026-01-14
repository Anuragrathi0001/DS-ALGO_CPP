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
int main(){
    node *newnode = new node(3);
    newnode->left = new node(1);
    newnode->right = new node(4);
    newnode->right->left = new node(0);
    cout << newnode->right->left->data;
}