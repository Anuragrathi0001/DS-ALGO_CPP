#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int data1,node*next1){
        data = data1;
        next = next1;
    }
    node(int data1){
        data = data1;
        next = nullptr;
    }
};
node *start = nullptr;
node *last = nullptr;
int size = 0;
void push(int x){ 
     node *newnode = new node(x);
    if((start==nullptr)&&(last==nullptr)){
        start = newnode;
        last = newnode;
    }
    else{
        last->next = newnode;
        last = newnode;
    }
    size++;
}
void pop(){
    if(start==nullptr){
        cout << "Queue Underflow\n";
        return ;
    }
        node *temp = start;
        start = start->next;
        if(start==nullptr)
            last = nullptr;
        delete temp;
        size--;
}
int top() {
    if (start == nullptr) {
        cout << "Queue is empty\n";
        return -1;
    }
    return start->data;

}
int main(){
    push(3);
    push(4);
    pop();
   cout<< top();
    return 0;
}