#include<bits/stdc++.h>
using namespace std;
bool lemonade(vector<int>bills){
    int five = 0, ten = 0;
    for (int i = 0; i < bills.size();i++){
        if(bills[i]==5){
            five++;
        }
       else if(bills[i]==10){
            if(five!=0){
            ten++;
            five--;
            }
            else{
                return false;
            }
        }
        else if(bills[i]==20){
            if(ten>0&&five>0){
                ten--;
                five--;
            }
            else{
                return false;
            }
        }
    }
    return true;
}
int main(){
    vector<int> bills = {5, 5, 10, 10, 20};
    cout << lemonade(bills);
    return 0;
}