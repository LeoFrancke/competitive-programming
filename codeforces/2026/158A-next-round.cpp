#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // n: number of total participants
    // k: cut-off score's place
    int n, k;
    cin >> n >> k;

    int counter = 0;
    int cut_off_score = 1;

    vector<int> scores;
    int score = 0;
    for (int i = 0; i < n; i++) { // for # of participants
        cin >> score;
        scores.push_back(score);

        if ((i + 1 == k) and (score > 0)) {
            cut_off_score = score;
        }
    }

    // count how many participants got score >= cut_off_score
    for (size_t i = 0; i < scores.size(); i++) {
        if (scores[i] >= cut_off_score) {
            counter += 1;
        }
    }

    cout << counter << "\n";
    return 0;
}

