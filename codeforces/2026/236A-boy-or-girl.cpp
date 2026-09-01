// https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string username;
    cin >> username;

    set<char> unique_chars;
    for (unsigned int i = 0; i < username.size(); i++) {
        unique_chars.insert(username[i]);
    }

    if (unique_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    cout << "\n";
    return 0;
}

