#include <bits/stdc++.h>
using namespace std;
int numWaya(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    int l = numWaya(n - 1);
    int r = numWaya(n - 2);
    return l + r;
}
int main(){
    int n = 3;
    cout<<numWaya(n);
}