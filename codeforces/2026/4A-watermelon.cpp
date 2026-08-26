#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int watermelon_weight;
	cin >> watermelon_weight;

	if ((watermelon_weight % 2 == 0) and (watermelon_weight > 2)) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	cout << "\n";
	return 0;
}
