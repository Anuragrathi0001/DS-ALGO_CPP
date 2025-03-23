// *
// **
// ***
// ****
#include <iostream>
using namespace std;
void pattern(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout << "*";
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