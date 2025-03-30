#include <iostream>
using namespace std;

int gcd(int num1, int num2)
{
    int upper_lim = (num1 < num2) ? num1 : num2; // Using ternary operator for simplicity
    int greFac = 1;

    for (int i = 1; i <= upper_lim; i++)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            greFac = i;
        }
    }
    return greFac;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2; // Corrected input

    cout << "GCD: " << gcd(num1, num2) << endl; // Added descriptive output
    return 0;
}
