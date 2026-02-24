#include<bits/stdc++.h>
using namespace std;
int funksum(int i){
if(i==0){
    return 0;
}
return i + funksum(i-1);
}
int main(){
    int n = 6;
  cout<<  funksum(6);
}