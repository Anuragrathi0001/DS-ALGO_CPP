#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string a, int i) {
    // Base case: Stop when the pointers meet or cross
    if (i >= a.length() / 2)
        return true;

    // If characters at both ends don't match, it's not a palindrome
    if (a[i] != a[a.length() - 1 - i])
        return false;

    // Recursively check the next pair
    return checkPalindrome(a, i + 1);
}

int main() {
    string a;
    cout << "Enter the string you want to check: ";
    cin >> a;

    if (checkPalindrome(a, 0)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}
