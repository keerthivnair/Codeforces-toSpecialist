#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, j, k;
        cin >> n >> j >> k;

        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        ll el_val = a[k];
        sort(a.begin() + 1, a.end());  

        
        ll pos_left = upper_bound(a.begin() + 1, a.end(), el_val) - a.begin();

        if (pos_left >= n - k + 1) {
            cout << "YES" << endl;
            continue;
        }

        
        ll pos_right = lower_bound(a.begin() + 1, a.end(), el_val) - a.begin();

        if (pos_right >= n - k + 1) {
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
    }
    return 0;
}
