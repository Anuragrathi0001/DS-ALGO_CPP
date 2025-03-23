// ABCDE
// ABCD
// ABC
// AB
// A
#include <iostream>
using namespace std;
void pattern(int num)
{
    for (int j = 0; j < num; j++)
    {
        int alpha = 65;
        for (int i = num; i > j; i--)
        {
            cout << char(alpha);
            alpha += 1;
        }
        cout << endl;
    }
}
int main()
{

    int num;
    cout << "enter the num";
    cin >> num;
    pattern(num);
    return 0;
}