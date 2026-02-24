#include<bits/stdc++.h>
using namespace std;
int funcsum(int n,int sum){
    if(n==0){
        return sum;
    }
   return funcsum(n - 1, sum+n);
    
}
int main(){
    int n = 10;
   cout<< funcsum(10,0);
}
