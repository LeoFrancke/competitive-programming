#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned int moves_needed = 0;
    int element = 0;

    // let's iterate over every element in the matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> element;

            if (element == 1) {
                // middle of the matrix: index 2
                moves_needed =  abs(j - 2);
                moves_needed += abs(i - 2);

                // no need to check new elements
                break;
            }
        }
        if (element == 1) break;
    }

    cout << moves_needed << "\n";
    return 0;
}

