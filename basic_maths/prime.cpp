#include <iostream>
#include <cmath>
using namespace std;

void prime(int num)
{
    if (num <= 1)
    {
        cout << "Not prime";
        return;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << "Not prime";
            return;
        }
    }

    cout << "Prime";
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    prime(num);
    return 0;
}
