#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0, i = 0;
    cin >> n;

    int a, b, c, sum = 0, team_solutions = 0;
    while (i < n) {
        cin >> a >> b >> c;
        sum = a + b + c;

        // Are at least 2 positives?
        if (sum >= 2) {
            team_solutions += 1;
        }

        i++;
    }

    // Number of solutions the team will implement
    cout << team_solutions << "\n";
    return 0;
}

