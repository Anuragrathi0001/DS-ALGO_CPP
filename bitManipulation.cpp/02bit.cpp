#include <bits/stdc++.h>
using namespace std;
int binToDdecimal(string num){
    int ans;
    for (int i =0; i<num.size(); i++)
    {
        ans = ans + int(num[num.size()-i-1]) * pow(2, i);
    }
    return ans;
}
int main(){
    string num = "111";
   cout<< binToDdecimal(num);
    return 0;
}