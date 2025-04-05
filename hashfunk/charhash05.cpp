#include <bits/stdc++.h>
using namespace std;
int main(){
    //string input
    string st;
    cout << "enter the string :";
    cin >> st;

    //pre calculation
    map<char, int> mpp;
    for (int i = 0; i < st.length(); i++)
    {
        mpp[st[i]]++;
    }
   //output
for ( auto it:mpp)
{
    cout << it.first << " --> " << it.second <<endl;
}
    return 0;
}