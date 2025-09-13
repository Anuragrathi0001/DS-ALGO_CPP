#include <bits/stdc++.h>
using namespace std;

bool hndlerShit(string s, string goal) {
    if (s.size() != goal.size()) {
        return false;
    }
    if (s == goal) {
        return true;
    }

    for (int i = 0; i < s.size() - 1; i++) {
        char temp = s[0];
        for (int j = 0; j < s.size() - 1; j++) {
            s[j] = s[j + 1];
        }
        s.back() = temp;

        if (s == goal) {
            return true;
        }
    }
    return false; 
}

int main() {
    string s = "abcde";
    string goal = "cdeab";
    cout << hndlerShit(s, goal);
    return 0;
}
