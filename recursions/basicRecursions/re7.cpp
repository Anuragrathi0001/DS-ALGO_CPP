// print backtracking from n to 1
#include <bits/stdc++.h>
using namespace std;
void printnum(int num1)
{
    if ( num1<1)
        return;   
        cout << num1;
    printnum(num1 - 1);
 
}
int main()
{
    cout << "enter the value of the number";
    int num1;
    cin >> num1;
    printnum(num1);

    return 0;
}