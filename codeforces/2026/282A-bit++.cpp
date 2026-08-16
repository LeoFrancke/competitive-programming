#include <bits/stdc++.h>
using namespace std;

int main() {
    // optimization
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // var declarations
    int n = 0;
    int x_value = 0;
    string line;

    // receives 1st input: how many lines will we receive
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> line;

        // no edge cases to worry about, 
        // so a simple condition suffices and speeds up the execution
        if (line.contains("+")) {
            x_value++;
        } else {
            x_value--;
        }
    }

    // output and line break
    cout << x_value << "\n";
    return 0;
}

