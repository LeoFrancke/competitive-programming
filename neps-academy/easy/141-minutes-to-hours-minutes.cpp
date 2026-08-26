// https://neps.academy/exercise/141

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m = 0;
    cin >> m;

    int hours = 0, minutes = 0;
    if (m >= 1) {
        hours = m / 60;
        minutes = m % 60;
    }

    cout << hours << "\n" << minutes << "\n";
    return 0;
}

