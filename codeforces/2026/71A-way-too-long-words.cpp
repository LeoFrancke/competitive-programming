#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;
    string current_word;
    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> current_word;

        if (current_word.size() <= 10) {
            cout << current_word;
        } else {
            cout << current_word[0] << (current_word.size() - 2) 
                 << current_word[current_word.size()-1];
        }

        cout << "\n";
    }

    return 0;
}

