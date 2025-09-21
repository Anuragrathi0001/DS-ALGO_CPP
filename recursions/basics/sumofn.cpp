#include <bits/stdc++.h>
using namespace std;
long long sumre(int n){
    if(n==1){
        return 1;
    }
    long long sum = n + sumre(n - 1);
    return sum;
}
int main(){
   cout<< sumre(10);
    return 0;
}