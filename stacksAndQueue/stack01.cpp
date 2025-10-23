#include <bits/stdc++.h>
using namespace std;
int pop(int arr[],int top){
      if(top=-1){
          return -1;
      }
      else{
          arr[top] = 0;
          top--;
      }
}
void push(int x,int top,int arr[]){
    if(top=-1){
        top = 0;
        arr[top] = x;
    }
    else{
        top++;
        arr[top] = x;
    }
}
int main(){
    int arr[50];
    int top = -1;
  cout<<  pop(arr, top);
}