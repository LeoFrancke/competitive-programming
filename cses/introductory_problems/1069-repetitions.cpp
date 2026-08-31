// https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string dna_sequence;
    cin >> dna_sequence;
    int i = 0, repetition = 1, counter = 1;

    for (const char letter : dna_sequence) {
        if (i > 0) {
            if (letter == dna_sequence[i-1]) {
                counter += 1;
            } else {
                counter = 1;
            }
        }

        if (counter > repetition) {
            repetition = counter;
        }

        i++;
    }

    cout << repetition << "\n";
    return 0;
}

