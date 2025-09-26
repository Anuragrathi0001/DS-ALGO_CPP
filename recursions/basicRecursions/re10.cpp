// fibonacchi
#include <bits/stdc++.h>
using namespace std;
int fibo(int num)
{
    if (num <=1)
    {
        return num;
    }
    else{
        int last = fibo(num-1);
        int slast = fibo(num-2);
        return last + slast;
    }
}
int main()
{
    int num;
    cout << "enter the value of num";
    cin >> num;
    cout << fibo(num);
    return 0;
}