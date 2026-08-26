// https://neps.academy/exercise/1486

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0, i = 0, number = 0;
    vector<int> numbers;
    cin >> n;

    while (i < n) {
        cin >> number;
        if (number == 0) {
            numbers.pop_back();
        } else {
            numbers.push_back(number);
        }

        i++;
    }

    // sum of vector numbers.
    cout << accumulate(numbers.begin(), numbers.end(), 0) << "\n";
    return 0;
}

