// 1******1
// 12****21
// 123**321
// 12344321
#include <iostream>
using namespace std;
void pattern(int num)
{
    int n = 1;
    for (int i = 1; i <= num; i++)
    {
        // for the num
        for (int j = 1; j <= i; j++)
        {
            cout << n <<" ";
            n += 1;
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