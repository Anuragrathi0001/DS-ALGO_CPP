#include <bits/stdc++.h>
using namespace std;
bool checkstuff(vector<int>bills){
    int f = 0, t = 0, tw = 0;
    for (int i = 0;i<bills.size();i++){
        if(bills[i]==5){
            f++;
        }
        else if(bills[i]==10){
            f--;
            tw++;
            if(f!=0){
                return true;
            }
        }
        else{
            tw++;
            if(f>3&&(f>=1&&t>0)){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<int>bills={5,5,10,10,20};
   cout<< checkstuff(bills);
    return 0;
}