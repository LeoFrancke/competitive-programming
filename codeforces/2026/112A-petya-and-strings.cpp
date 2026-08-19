#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string string_1, string_2;
    cin >> string_1;
    cin >> string_2;

    // if string_1 > string_2: output 1
    // if string_1 < string_2: output -1
    // if string_1 = string_2: output 0

    int output = 0;

    for (size_t i = 0; i < string_1.size(); i++) {
        if (tolower(string_1[i]) > tolower(string_2[i])) {
            output = 1;
        } else if (tolower(string_1[i]) < tolower(string_2[i])) {
            output = -1;
        } else {
            // string_1 = string_2
            continue; // goes to beginning of the loop to check the rest of the string
        }

        break;
    }

    cout << output << "\n";
    return 0;
}

