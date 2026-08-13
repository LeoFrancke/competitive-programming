#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    int number_of_dominoes = 0, area = m * n;
    // if (area % 2 == 0) {
    //     number_of_dominoes = area / 2;
    // } else {
    //     // need to check if it works
    //     number_of_dominoes = area / 2;
    // }

    number_of_dominoes = area / 2;

    cout << number_of_dominoes << "\n";

    return 0;
}

