#include <bits/stdc++.h>
using namespace std;
void greetBday(int dayLeft){
    if(dayLeft<1){
        return;
    }
    if(dayLeft%2==0){
        cout << dayLeft;
        cout << endl;
    }
    greetBday(dayLeft - 1);
}
int main(){
    greetBday(10);
    return 0;
}