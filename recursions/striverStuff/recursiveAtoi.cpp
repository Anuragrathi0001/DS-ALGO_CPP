#include <bits/stdc++.h>
using namespace std;

int atoiRecursive(const string &s, int n, int i = 0) {
    if (i == n) return 0;
    int digit = s[i] - '0';
    int smallAns = atoiRecursive(s, n, i + 1);
    int power = n - i - 1;
    return digit * pow(10, power) + smallAns;
}

int myAtoi(string s) {
    int sign = 1;
    int start = 0;
    if (s[0] == '-') {
        sign = -1;
        start = 1;
    } else if (s[0] == '+') {
        start = 1;
    }
    return sign * atoiRecursive(s, s.size(), start);
}

int main() {
    cout << myAtoi("1234") << endl;
    cout << myAtoi("-5678") << endl;
    cout << myAtoi("+90") << endl;
    return 0;
}
