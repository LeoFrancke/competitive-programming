#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    cin >> word;

    // toupper() returns an int, but here it auto converts it to char.
    // In C++ strings are mutable:
    word[0] = toupper(word[0]);

    cout << word << "\n";
    return 0;
}

