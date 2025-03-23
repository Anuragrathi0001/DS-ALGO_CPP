// 12345
// 1234
// 123
// 12
// 1
#include <iostream>
using namespace std;
void pattern(int num)
{
    for (int i = num; i >0; i--)
    {
        for (int j = 1; j<=i; j++)
        {
            cout << j;
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