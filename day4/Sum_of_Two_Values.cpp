#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for (auto &val : a) cin >> val;

    map<ll, int> mpp;  
    for (int i = 0; i < n; ++i) {
        ll target = x - a[i];
        if (mpp.count(target)) {
            cout << mpp[target] << " " << (i + 1) << "\n";
            return 0;
        }
        mpp[a[i]] = i + 1;
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}
