#include<bits/stdc++.h>
using namespace std;
void func(int start,int end){
    if(start==end){
        return;
    }
    cout << start;
    func(start + 1, end);
}
int main(){
    func(1,8);
}