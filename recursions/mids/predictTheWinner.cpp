#include <bits/stdc++.h>
using namespace std;

int winner(vector<bool>& person, int n, int index, int person_left, int k) {
    if (person_left == 1) {
        for (int i = 0; i < n; i++) {
            if (!person[i]) return i; // last alive
        }
    }

    // move k-1 alive steps
    int steps = k - 1;
    while (steps > 0) {
        index = (index + 1) % n;
        if (!person[index]) steps--;
    }

    // eliminate this person
    person[index] = true;

    // move to next alive person
    while (person[index]) {
        index = (index + 1) % n;
    }

    return winner(person, n, index, person_left - 1, k);
}

int main() {
    int n = 5, k = 3;
    vector<bool> person(n, false);
    cout << "Winner: " << winner(person, n, 0, n, k);
    return 0;
}
