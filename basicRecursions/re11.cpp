#include <bits/stdc++.h>
using namespace std;
int nsums(int n,int sum){
    if(n<1)
        return sum;
    else{
    nsums(n - 1, sum+n);
    }
}
int main(){
    int num;
    int sum = 0;
    cout << "enter the num";
    cin >> num;
    cout<<nsums(num,sum);
    return 0;
}