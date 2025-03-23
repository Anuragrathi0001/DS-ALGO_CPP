// A
// BB
// CCC
// DDDD

#include <iostream>
using namespace std;
void pattern(int num)
{
    int character = 64;
    for (int i = 1; i <= num; i++)
    {
        // for the num

        character += 1;
        for (int j = 1; j <= i; j++)
        {
            cout << char(character);
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