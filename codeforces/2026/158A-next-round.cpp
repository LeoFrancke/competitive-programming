#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int counter = 0;
    int nota_de_corte = 1;

    int x;
    vector<int> scores;
    for (int i = 0; i < n; i++) {
        cin >> x;
        scores.push_back(x);

        if ((i + 1 == k) and (x > 0)) {
            nota_de_corte = x;
        }
    }

    for (unsigned int i = 0; i < scores.size(); i++) {
        if (nota_de_corte <= scores[i]) {
            counter += 1;
        }
    }

    cout << counter << "\n";

    return 0;
}

