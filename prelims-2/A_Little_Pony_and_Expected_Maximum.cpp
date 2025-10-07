#include <bits/stdc++.h>
using namespace std;

// dice questions must be thought in terms of matrices 6 * 6 scaled to if there are more faces
// in an imaginary dice 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long m, n;
    cin >> m >> n;

    long double ans = 0.0;

    for (long long i = 1; i <= m; i++) {
        long double p1 = powl((long double)i / m, n);
        long double p2 = powl((long double)(i - 1) / m, n);
        ans += (p1 - p2) * i;
    }

    cout << fixed << setprecision(12) << ans << "\n";
    return 0;
}
