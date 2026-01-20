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

vector<vector<int>> zigzag(node* root) {
    vector<vector<int>> ans;
    if (root == nullptr) return ans;

    queue<node*> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty()) {
        int len = q.size();
        vector<int> level(len);

        for (int i = 0; i < len; i++) {
            node* curr = q.front();
            q.pop();

            int index = leftToRight ? i : (len - 1 - i);
            level[index] = curr->data;

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }

        ans.push_back(level);
        leftToRight = !leftToRight;
    }
    return ans;
}

int main() {
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);

    vector<vector<int>> ans = zigzag(root);

    for (auto &level : ans) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
