// 1
// 12
// 123
// 1234
#include <iostream>
using namespace std;
void pattern(int num)
{
    for (int i = 1; i <=num; i++)
    {
        for (int j = 1; j <= i; j++)
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