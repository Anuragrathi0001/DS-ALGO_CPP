#include <bits/stdc++.h>
using namespace std;

int precedence(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infixToPrefix(string infix) {
    stack<char> st;
    string result = "";

    // Step 1: Reverse the infix expression
    reverse(infix.begin(), infix.end());

    // Step 2: Replace ( with ) and vice versa
    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] == '(') {
            infix[i] = ')';
        } else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }

    // Step 3: Convert to postfix
    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        // Operand → directly add to result
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || isdigit(c)) {
            result += c;
        }

        // '(' → push to stack
        else if (c == '(') {
            st.push(c);
        }

        // ')' → pop until '('
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }

        // Operator
        else {
            while (!st.empty() && precedence(st.top()) > precedence(c)) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop remaining operators
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    // Step 4: Reverse result for prefix
    reverse(result.begin(), result.end());

    return result;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    string prefix = infixToPrefix(infix);
    cout << "Prefix expression: " << prefix << endl;

    return 0;
}
