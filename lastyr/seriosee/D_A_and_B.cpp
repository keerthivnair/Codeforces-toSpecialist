/************************************************************
 * Author: Keerthi.V.Nair
 * Problem: Minimum moves to group identical characters
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define f(i, a, b) for (int i = (a); i < (b); ++i)

void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int min_moves(vector<int> &v) {
    if (v.empty()) return 0;
    int m = v.size() / 2; 
    int moves = 0;
    f(i, 0, v.size()) {
        moves += abs(v[i] - (v[m] - m + i));
    }
    return moves;
}

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> a, b;

    f(i, 0, n) {
        if (s[i] == 'a') a.pb(i);
        else b.pb(i);
    }

    int ans = min(min_moves(a), min_moves(b));
    cout << ans << endl;
}

int32_t main() {
    fastio();
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
