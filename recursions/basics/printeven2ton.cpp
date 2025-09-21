#include <bits/stdc++.h>
using namespace std;
void printeven(int n){
    if(n==2){  
        cout << n<<endl;
        return;
    }
    printeven(n - 1);
    if(n%2==0){
        cout << n;
        cout << endl;
    }
}
int main(){
    printeven(10);
}