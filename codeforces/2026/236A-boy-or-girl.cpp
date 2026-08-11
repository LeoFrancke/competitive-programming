#include <bits/stdc++.h>

// using namespace std;
// avoiding the above code for now, just to get a feel of the language

int main() {
    std::string username;
    std::cin >> username;

    std::set<char> unique_chars;
    for (unsigned int i = 0; i < username.size(); i++) {
        unique_chars.insert(username[i]);
    }

    if (unique_chars.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!" << "\n";
    } else {
        std::cout << "IGNORE HIM!" << "\n";
    }

    return 0;
}

