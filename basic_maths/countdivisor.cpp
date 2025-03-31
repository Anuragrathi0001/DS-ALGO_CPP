#include <iostream>

using namespace std;
int sumDivisor(int num)
{
    int sum = 0;
    // Loop through numbers to find divisors of num
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    sum = sum + j;
                }
            }
        }
    }
    return sum;
}
int main()
{
    int num;
    cout << "enter the num\n";
    cin >> num;
    cout << sumDivisor(num);
    return 0;
}