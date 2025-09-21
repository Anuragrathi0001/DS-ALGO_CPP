#include <bits/stdc++.h>
using namespace std;
void greetBday(int dayLeft){
    if(dayLeft<1){
        return;
    }  
     greetBday(dayLeft - 1);
     cout << dayLeft; 
     cout << endl;

}
int main(){
    greetBday(10);
    return 0;
}