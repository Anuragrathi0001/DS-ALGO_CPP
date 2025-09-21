#include <bits/stdc++.h>
using namespace std;
 long long factorial(int n){
    if(n==1){
        return 1;
    }
   long long fact= n * factorial(n - 1);
   return fact;
 }
int main(){
   cout<< factorial(5);
    return 0;
}