#include <bits/stdc++.h>
using namespace std;
string decToBin(int num){
    string ans;
    while(num!=1){
        if(num%2==0){
            ans.push_back('0');
          
        }
        if(num%2!=0){
            ans.push_back('1');
           
        } 
    num = num / 2; 
    }
    if(num==1){
        ans.push_back('1');
    }
  
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    int num = 13;
    cout<<decToBin(num);
}