//    *
//   ***
//  *****
#include <iostream>
using namespace std;
void pattern(int num)
{
    for (int i=0;i<num;i++)
    {for (int j = 0; j<num-i-1; j++)
    {
        cout << " ";
    }
    for (int j = 0; j < 2*i+1; j++)
    {
        cout << "*";
    }
    for (int j = 0; j<num - i - 1; j++)
    {
        cout << " ";
    }
    cout << endl;
    }
}
int main()
{
    int num;
    cout << "enter the num \n ";
    cin >> num;
    pattern(num);
    return 0;
}