#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n), s(n), a(n);
        for (auto &x : p) cin >> x;
        for (auto &x : s) cin >> x;

        // Step 1: Construct candidate array
        for (int i = 0; i < n; ++i) {
            a[i] = gcd(p[i], s[i]);
        }

        // Step 2: Compute prefix and suffix GCDs of a[]
        vector<int> prefix(n), suffix(n);
        prefix[0] = a[0];
        for (int i = 1; i < n; ++i) {
            prefix[i] = gcd(prefix[i - 1], a[i]);
        }

        suffix[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            suffix[i] = gcd(suffix[i + 1], a[i]);
        }

        // Step 3: Compare
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if (prefix[i] != p[i] || suffix[i] != s[i]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
