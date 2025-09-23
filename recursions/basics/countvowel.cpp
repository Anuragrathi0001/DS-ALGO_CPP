#include <bits/stdc++.h>
using namespace std;
int contvow(string voe,int idx){
    if(idx==-1){
        return 0;
    }
    if(voe[idx]=='a'||voe[idx]=='e'||voe[idx]=='i'||voe[idx]=='o'||voe[idx]=='u'){
        return 1 + contvow(voe, idx - 1);
    }
    return contvow(voe, idx - 1);
}
int main(){
    string str = "aeiou";
   cout<< contvow(str,str.size()-1);
}