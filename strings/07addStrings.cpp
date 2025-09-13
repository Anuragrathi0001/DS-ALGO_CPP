#include <bits/stdc++.h>
using namespace std;

string addfunk(string str1, string str2) {
    int index1 = str1.size() - 1, index2 = str2.size() - 1;
    string ans;
    int carry = 0;
    int sum = 0;

    while (index2 >= 0) {
        sum = (str1[index1] - '0') + (str2[index2] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index1--;
        index2--;
    }

    while (index1 >= 0) {
        sum = (str1[index1] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index1--;
    }

    if (carry) {
        ans += char('0' + carry);   // ✅ fixed
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string str1 = "26583";
    string str2 = "938";
    if (str1.size() > str2.size()) {
        cout << addfunk(str1, str2);
    } else {
        cout << addfunk(str2, str1);
    }
    return 0;
}
