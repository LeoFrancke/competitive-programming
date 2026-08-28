// https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0, i = 0, x = 0, missing_number = 0;
    vector<int> number_container;

    cin >> n;

    // index: 0 -> n-1 (there's one missing)
    while (i < n-1) {
        cin >> x;
        number_container.push_back(x);
        i++;
    }

    // sorts the vector in ascending order
    ranges::sort(number_container);
    i = 1;
    while (missing_number == 0) {
        if (i == number_container[i-1]) {
            i++;

        } else {
            missing_number = i;
            break;
        }
    }

    cout << missing_number << "\n";
    return 0;
}

