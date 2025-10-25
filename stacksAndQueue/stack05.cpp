#include <bits/stdc++.h>
using namespace std;

class st {
    stack<pair<int, int>> s;

public:
    void pushel(int x) {
        if (s.empty()) {
            s.push({x, x});
        } else {
            s.push({x, min(x, s.top().second)});
        }
    }

    int getmin() {
        if (s.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return s.top().second;
    }

    int pop() {
        if (s.empty()) {
            cout << "Stack underflow\n";
            return -1;
        }
        int el = s.top().first;
        s.pop();
        return el;
    }
};

int main() {
    st s;

    s.pushel(2);
    cout << s.getmin() << endl; // 2

    s.pushel(4);
    s.pushel(6);
    cout << s.pop() << endl;    // 6
    cout << s.pop() << endl;    // 4
    cout << s.getmin() << endl; // 2

    return 0;
}
