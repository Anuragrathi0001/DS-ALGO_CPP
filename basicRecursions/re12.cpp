#include <bits/stdc++.h>
using namespace std;
int nsums(int n)
{
    if(n==0)
        return 0;
        else{
            return n + nsums(n - 1);
        }
}
int main()
{
    int num;
    int sum = 0;
    cout << "enter the num";
    cin >> num;
    cout << nsums(num);
    return 0;
}