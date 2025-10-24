#include <bits/stdc++.h>
using namespace std;

class q {
    stack<int> s1, s2;

public:
    // Push element (enqueue)
    void push(int x) {
        s1.push(x);
    }

    // Pop element (dequeue)
    void pop() {
        if (s2.empty()) {
            // Move all elements from s1 to s2
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (s2.empty()) {
            cout << "Queue Underflow\n";
            return;
        }
        s2.pop();
    }

    // Get front element
    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (s2.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return s2.top();
    }

    // Check if empty
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    q queu;
    queu.push(1);
    cout << queu.peek() << endl; // 1
    queu.pop();

    queu.push(2);
    cout << queu.peek() << endl; // 2
    queu.pop();

    queu.push(3);
    queu.push(4);
    cout << queu.peek() << endl; // 3
    queu.pop();
    cout << queu.peek() << endl; // 4

    return 0;
}
