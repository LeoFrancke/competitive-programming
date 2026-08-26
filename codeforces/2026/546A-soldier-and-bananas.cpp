// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int first_banana_price = 0, money_available = 0, bananas_to_buy = 0;
    int money_to_borrow = 0, total_cost = 0;

    cin >> first_banana_price >> money_available >> bananas_to_buy;

    // it seems complicated, but it's simple:
    // it's just the sum of an arithmetic progression
    total_cost = ((first_banana_price + (first_banana_price * bananas_to_buy)) * bananas_to_buy) / 2;

    // does he need to borrow money?
    if (total_cost > money_available) {
        money_to_borrow = total_cost - money_available;
    }

    cout << money_to_borrow << "\n";
    return 0;
}

