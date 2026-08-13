// https://cses.fi/problemset/task/1068/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // unsigned: only positive values. it allows the variable to hold 2x more data.
    unsigned long long n;
    cin >> n;

    for (unsigned int i = 0; n != 1; i++) {
        cout << n << " ";

        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n*3 + 1;
        }
    }

    // output last value (1) and finish.
    cout << 1 << endl;

    return 0;
}

