#include <bits/stdc++.h>
using namespace std;
int calways(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    int numways = calways(n - 1) + calways(n - 2);
    return numways;
}
int main(){
  cout<<  calways(5);
    return 0;
}