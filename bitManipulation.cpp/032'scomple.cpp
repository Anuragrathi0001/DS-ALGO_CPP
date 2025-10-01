#include<bits/stdc++.h>
using namespace std;
string Zcomplement(string num){
    string ans = "";
    bool spotOne = 0;
    for (int i = num.size(); i >=0; i++)
    { 
      if(num[i]=='1'){
          spotOne = 1;
      }
      if((num[i]=='0'||num[i]=='1')&&spotOne==1){
      if(num[i]=='0'){
          ans.push_back('1');
      }
      if(num[i]=='1'){
          ans.push_back('0');
      }
      }
      if((num[i]=='0'||num[i]=='1')&&spotOne==0){
      if(num[i]=='0'){
          ans.push_back('0');
      }
      if(num[i]=='1'){
          ans.push_back('1');
      }
      }      

      
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    string num = "100100";
 cout<< Zcomplement(num);
    return 0;
}