#include <bits/stdc++.h>
using namespace std;
long long sqsum(int n){
    if(n==1){
        return 1;
    }
  long long   sum = n * n + sqsum(n - 1);
  return sum;
}
int main(){
   cout<< sqsum(5); 
    return 0;
}