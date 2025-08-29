#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<ll> pref(n + 2, 0), suff(n + 2, 0);

        
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + a[i];
        }

        
        for (int i = n; i >= 1; i--) {
            suff[i] = suff[i + 1] + a[i];
        }

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;

            ll sum = pref[l - 1] + suff[r + 1] + (ll)(r - l + 1) * k;

            if (sum % 2) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
