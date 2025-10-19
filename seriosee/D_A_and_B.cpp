#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll totalDistance(const vector<ll>& pos) {
    ll k = pos.size();
    ll medianIndex = k / 2;
    ll start = pos[medianIndex] - medianIndex;
    ll sum = 0;

    for (ll i = 0; i < k; i++) {
        sum += llabs(pos[i] - (start + i));
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        vector<ll> posA, posB;
        posA.reserve(n);
        posB.reserve(n);

        for (ll i = 0; i < n; i++) {
            if (s[i] == 'a') posA.push_back(i);
            else posB.push_back(i);
        }

        if (posA.size() <= 1 || posB.size() <= 1) {
            cout << 0 << "\n";
            continue;
        }

        ll ans = min(totalDistance(posA), totalDistance(posB));
        cout << ans << "\n";
    }

    return 0;
}
