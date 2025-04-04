#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    char ch;
    int arr[26] = {0};
    cout << "Enter the string: ";
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        arr[a[i] - 'a'] +=1;
    }
    cout << "Enter the alphabet";
    cin >> ch;
    cout << "The occurences of " << ch << " is " << arr[ch - 'a'];
    return 0;
}