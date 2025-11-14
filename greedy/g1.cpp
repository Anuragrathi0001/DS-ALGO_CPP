#include <bits/stdc++.h>
using namespace std;
bool checkstuff(vector<int>bills){
    int f = 0, t = 0, tw = 0;
    for (int i = 0;i<bills.size();i++){
        if(bills[i]==5){
            f++;
        }
        else if(bills[i]==10){
         
            t++;   f--;
            if(f<0){
                return true;
            }
        }
        else if(bills[i]==20){
            tw++;
            if(f>2){
                f -= 3; return true;}
            else if(f>0&&t>0){
                f--;
                t--;
                return true;
            }
            return false;
            }
        }
    
    return false;
}