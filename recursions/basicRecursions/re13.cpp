#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
   if(n==0)
    return 1;
   return n * fact(n - 1);
}
int main()
{
    int num;
    int sum = 0;
    cout << "enter the num";
    cin >> num;
    cout << fact(num);
    return 0;
}