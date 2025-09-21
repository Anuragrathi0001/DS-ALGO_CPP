#include <bits/stdc++.h>
using namespace std;
long long pow2(int n){
    if(n==1){
        return 2;
    }
    long long ans = 2 * pow2(n - 1);
    return ans;
}
int main(){
 cout<< pow2(4);
    return 0;
}