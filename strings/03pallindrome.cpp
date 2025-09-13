#include <bits/stdc++.h>
using namespace std;
bool checkpalin(string str){
    int low = 0;
    int high = str.size() - 1;
    while(low<high){
        if(str[low]!=str[high]){
            return false;
            break;
        }
        low++;
        high--;
    }
    return true;
}
int main(){
    string str = "anurag";
 if(checkpalin(str)){
     cout << true;
 }
 else{
     cout << false;
 }
    return 0;
}