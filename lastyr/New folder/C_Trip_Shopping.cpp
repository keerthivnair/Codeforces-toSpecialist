#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        vector<pair<int, int>> p(n);
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += abs(a[i] - b[i]);
            int start = min(a[i], b[i]);
            int end   = max(a[i], b[i]);
            p[i] = {start, end};
        }

        sort(p.begin(), p.end());

        bool intersect = false;
        ll mindis = LLONG_MAX;

        for (ll i = 0; i < n - 1; i++) {
            ll curr_start = p[i].first;
            ll curr_end   = p[i].second;
            ll next_start = p[i + 1].first;
            ll next_end   = p[i + 1].second;

            if (next_start < curr_end) { 
                
                intersect = true;
                break;
            } else {
                mindis = min(mindis, next_start - curr_end);
            }
        }

        if (intersect) 
            cout << sum << '\n';
        else 
            cout << sum + 2 * mindis << '\n';
    }

    return 0;
}
