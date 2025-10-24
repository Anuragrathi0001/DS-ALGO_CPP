#include <bits/stdc++.h>
using namespace std;
void push(int x,int arr[],int &start,int &end,int &currSize){
    if(currSize==50){
        cout << "queue full";
    }
    if(currSize==0){
        start = 0, end = 0;
    }
    else{
        end = (end + 1) % 50;
    }
    arr[end] = x;
    currSize += 1;
}
int pop(int arr[],int &currSize,int &start,int &end){
    if(currSize==0){
        cout << "empty array";
    }
    int el = arr[start];
    if(currSize=1){
        start = -1, end = -1;
    }
    else{
        start = (start + 1) % 50;
    }
    currSize -= 1;
    return el;
}
int main(){
    int arr[50];
    int currSize = 0;
    int start = -1;
    int end = -1;
    push(2, arr, start, end, currSize);
    push(4, arr, start, end, currSize);
  cout<<  pop(arr, currSize, start, end);
}