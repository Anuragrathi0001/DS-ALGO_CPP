#include <bits/stdc++.h>
using namespace std;
string strrevs(string str){
    int low = 0, high = str.size() - 1;
    while(low<high){
        swap(str[low], str[high]);
        low++;
        high--;
    }
    return str;
}
int main(){
    string str;
    cout << "Enter the string";
    cin >> str;
   cout<< strrevs(str);
    return 0;
}