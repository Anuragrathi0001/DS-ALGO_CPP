// print linearly from 1 to n
// print name 5 times by recursion
#include <bits/stdc++.h>
using namespace std;
void printnum(int num1,int num2)
{
    if(num1>num2)
        return;
    cout << num1;
    printnum(num1 + 1, num2);
}
int main()
{
    cout << "enter the value of the two nummbers";
    int num1, num2;
    cin >> num1 >> num2;
    printnum(num1,num2);

    return 0;
}
