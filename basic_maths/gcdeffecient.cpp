#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    pair<int, int> lcmAndGcd(int a, int b)
    {
        int num1 = a, num2 = b;
        // Calculate GCD using Euclidean algorithm
        while (a > 0 && b > 0)
        {
            if (a > b)
            {
                a = a % b;
            }
            else
            {
                b = b % a;
            }
        }

        // If a is zero, b is the GCD
        int gcd = (a == 0) ? b : a;
        // Calculate LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
        int lcm = (num1 * num2) / gcd;

        // Return both GCD and LCM as a pair
        return {lcm, gcd};
    }
};

int main()
{
    Solution solution;
    int a = 12, b = 15;
    pair<int, int> result = solution.lcmAndGcd(a, b);
    cout << "LCM: " << result.first << ", GCD: " << result.second << endl;
    return 0;
}
