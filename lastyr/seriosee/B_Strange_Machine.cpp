/************************************************************
 * Author: Keerthi.V.Nair
 * Competitive Programming Template
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(x) (int)((x).size())
#define f(i, a, b) for (int i = (a); i < (b); ++i)

const int INF = 1e18;
const int MOD = 1e9 + 7;

void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(int p, const string &s) {
    int n = sz(s);
    int b = count(all(s), 'B');
    if (b == 0) {
        cout << p << endl;
        return;
    }

    int i = 0, c = 0;
    while (p > 0) {
        c++;
        if (s[i] == 'B') p /= 2;
        else p -= 1;
        i = (i + 1) % n;
    }

    cout << c << endl;
}

int32_t main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        while (q--) {
            int p;
            cin >> p;
            solve(p, s);
        }
    }

    return 0;
}
