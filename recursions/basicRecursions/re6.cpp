// print backtracking from 1 to n
#include <bits/stdc++.h>
using namespace std;
void printnum(int num1)
{if(num1<1)
        return;
    printnum(num1 - 1);
    cout << num1;
}
int main()
{
    cout << "enter the value of the number";
    int num1;
    cin >> num1;
    printnum(num1);

    return 0;
}