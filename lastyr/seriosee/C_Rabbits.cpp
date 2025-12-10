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

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<char> a(n, 'E');

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {

            
            if (i > 0 && i + 1 < n && s[i - 1] == s[i + 1] && s[i - 1] == '0') {
                if (a[i - 1] == 'E')
                    a[i + 1] = 'E';
                else if (a[i - 1] == 'L')
                    a[i + 1] = 'R';
                else if (a[i - 1] == 'R')
                    a[i + 1] = 'L';
            }

            
            if (i > 0 && i + 1 < n && s[i - 1] == '0' && s[i + 1] == '1') {
                if (a[i - 1] == 'E')
                    a[i - 1] = 'L';
                else if (a[i - 1] == 'L')
                    continue;
                else {
                    cout << "NO\n";
                    return;
                }
            }

            
            if (i > 0 && i + 1 < n && s[i + 1] == '0' && s[i - 1] == '1') {
                if (a[i + 1] == 'E')
                    a[i + 1] = 'R';
                else if (a[i + 1] == 'R')
                    continue;
                else {
                    cout << "NO\n";
                    return;
                }
            }

            
            if (i == 0 && i + 1 < n && s[i + 1] == '0') {
                if (a[i + 1] == 'E')
                    a[i + 1] = 'R';
                else if (a[i + 1] != 'R') {
                    cout << "NO\n";
                    return;
                }
            }
            if (i == n - 1 && i > 0 && s[i - 1] == '0') {
                if (a[i - 1] == 'E')
                    a[i - 1] = 'L';
                else if (a[i - 1] != 'L') {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }

    cout << "YES\n";
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
