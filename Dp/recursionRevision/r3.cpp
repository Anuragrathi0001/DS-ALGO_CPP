#include<bits/stdc++.h>
using namespace std;
void func(int start,int end){
    if(start==end){
        return;
    }
 
    func(start + 1, end); 
      cout << start;
}
int main(){
    func(1,8);
}