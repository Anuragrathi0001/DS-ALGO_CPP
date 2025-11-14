#include <bits/stdc++.h>
using namespace std;
bool checkstuff(vector<int> bills) {
    int f = 0, t = 0;  
    for (int i = 0; i < bills.size(); i++) {
        if (bills[i] == 5) {
            f++;
        }
        else if (bills[i] == 10) {
            if (f == 0) return false;
            f--;
            t++;
        } 
        else { 
            if (t > 0 && f > 0) {
                t--;
                f--;
            }
            else if (f >= 3) {
                f -= 3;
            }
            else {
                return false;
            }
        }
    }
    return true;   
}

int main(){
    vector<int>bills={5,5,10,10,20};
   cout<< checkstuff(bills);
    return 0;
}