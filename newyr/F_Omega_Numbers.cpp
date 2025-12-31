#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k;
    cin >> k;

    if (k == 1) {
        cout << "1 1\n";
        return 0;
    }               
    long long idx = k - 2;

    long long a = idx / 2 + 2;   

    long long a_mod = a % MOD;
    long long a3_mod = (a_mod * a_mod) % MOD;
    a3_mod = (a3_mod * a_mod) % MOD;

    if (idx % 2 == 0) {
        cout << a_mod << " " << a3_mod << "\n";
    } else {
        cout << a3_mod << " " << a_mod << "\n";
    }

    return 0;
}
