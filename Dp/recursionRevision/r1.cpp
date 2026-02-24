#include<bits/stdc++.h>
using namespace std;
void funk(int n,int idx){
    if(idx==n){
        return;
    }
    cout << "name";
    cout << endl;
    funk(n,idx+1);
}
int main(){
    funk(5,0);
}