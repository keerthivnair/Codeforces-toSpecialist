#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    // First special pair
    if (k == 1) {
        cout << "1 1\n";
        return 0;
    }

    // Skip (1,1)
    k--;

    int idx = k - 1;

    // Which 'a' this belongs to
    int a = idx / 2 + 2;

    // a^3 % MOD safely (NO int128)
    int a_mod = a % MOD;
    int a3 = (a_mod * a_mod) % MOD;
    a3 = (a3 * a_mod) % MOD;

    if (idx % 2 == 0) {
        cout << a_mod << " " << a3 << "\n";
    } else {
        cout << a3 << " " << a_mod << "\n";
    }

    return 0;
}
