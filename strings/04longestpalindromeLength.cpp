#include <bits/stdc++.h>
using namespace std;
int longestPalimLength(string str){
    vector<int> lower(26, 0), upper(26, 0);
    int count = 0, odd = 0;
    for (int i = 0; i < str.size();i++){
if(str[i]>'a'){
    lower[str[i] - 'a']++;
}
else{
    upper[str[i] - 'A']++;
}
    }
    for (int i = 0; i < 26;i++){
        if(lower[i]%2==0){
            count += lower[i];
        }
        else{
            count += lower[i] - 1;
            odd = 1;
        }
         if(upper[i]%2==0){
            count += upper[i];
        }
        else{
            count += upper[i] - 1;
            odd = 1;
        }
    }
    return (count + odd);
}
int main(){
    string str = "aAAbbA";
   cout<< longestPalimLength(str);

    return 0;
}