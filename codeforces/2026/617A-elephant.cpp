#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int friends_house = 1, minimum_steps = 1;
    cin >> friends_house;

    // more than 1 step
    if (friends_house > 5) {
        minimum_steps = friends_house / 5;

        if (friends_house % 5 != 0) minimum_steps++;
    }

    cout << minimum_steps << "\n";
    return 0;
}

