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

void inorderstore(node* root, vector<int>& ans) {
    if (root == nullptr) {
        return;
    }
    inorderstore(root->left, ans);
    if (root->left == nullptr && root->right == nullptr) {
        ans.push_back(root->data);
    }
    inorderstore(root->right, ans);
}

void boundarytraversal(node* root, vector<int>& ans) {
    if (root == nullptr) {
        return;
    }

    // root added once
    ans.push_back(root->data);

    // left boundary (excluding leaves)
    node *curr = root->left;
    while (curr != nullptr) {
        if (curr->left != nullptr || curr->right != nullptr) {
            ans.push_back(curr->data);
        }
        if (curr->left != nullptr) {
            curr = curr->left;
        } else {
            curr = curr->right;
        }
    }

    // leaf nodes
    inorderstore(root, ans);

    // right boundary (excluding leaves, stored first)
    vector<int> temp;
    node *curr1 = root->right;
    while (curr1 != nullptr) {
        if (curr1->left != nullptr || curr1->right != nullptr) {
            temp.push_back(curr1->data);
        }
        if (curr1->right != nullptr) {
            curr1 = curr1->right;
        } else {
            curr1 = curr1->left;
        }
    }

    // add right boundary in reverse
    for (int i = temp.size() - 1; i >= 0; i--) {
        ans.push_back(temp[i]);
    }
}

int main() {
    vector<int> ans;
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);

    boundarytraversal(root, ans);

    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}
