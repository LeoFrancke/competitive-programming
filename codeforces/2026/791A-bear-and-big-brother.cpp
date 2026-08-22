#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int years = 0;
    int a = 0, b = 0;
    cin >> a >> b;

    while (a <= b) {
        a = a * 3;
        b = b * 2;
        years += 1;
    }

    cout << years << "\n";
    return 0;
}

