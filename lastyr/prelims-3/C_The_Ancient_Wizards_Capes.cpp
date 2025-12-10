#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i,n) for(int i=0;i<(n);i++)

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    f(i,n) cin >> a[i];

    
    if (count(all(a), a[0]) == n)
    {
        if (n & 1)
        {
            if (a[0] == n / 2 + 1)
                cout << 2 << '\n';
            else
                cout << 0 << '\n';
        }
        else
        {
            if (a[0] == n / 2 || a[0] == n / 2 + 1)
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        return;
    }

    vector<char> v(n, 0);

    auto expect = [&](ll i, char val) -> bool {
        if (v[i] == 0) {
            v[i] = val;
            return true;
        }
        return v[i] == val;
    };

    for (int i = 0; i < n - 1; i++) {
        ll del = a[i + 1] - a[i];
        if (del == 1) {
            if (!expect(i, 'L')) {
                cout << 0 << '\n';
                return;
            }
            if (!expect(i + 1, 'L')) {
                cout << 0 << '\n';
                return;
            }
        } 
        else if (del == -1) {
            if (!expect(i, 'R')) {
                cout << 0 << '\n';
                return;
            }
            if (!expect(i + 1, 'R')) {
                cout << 0 << '\n';
                return;
            }
        } 
        else if (del) {
            cout << 0 << '\n';
            return;
        }
    }

    queue<ll> q;
    f(i, n) {
        if (v[i]) q.push(i);
    }

    while (!q.empty()) {
        int x = q.front(); q.pop();
        if (x < n - 1) {
            if (v[x + 1] == 0) {
                v[x + 1] = 'R' + 'L' - v[x];
                q.push(x + 1);
            } 
            else if (v[x + 1] != 'R' + 'L' - v[x] && a[x] == a[x + 1]) {
                cout << 0 << '\n';
                return;
            }
        }
        if (x > 0) {
            if (v[x - 1] == 0) {
                v[x - 1] = 'R' + 'L' - v[x];
                q.push(x - 1);
            }
            if (v[x - 1] != 'R' + 'L' - v[x] && a[x] == a[x - 1]) {
                cout << 0 << '\n';
                return;
            }
        }
    }

    vector<ll> pr(n, 0), po(n, 0);
    for (int i = 1; i < n; i++) {
        pr[i] = pr[i - 1] + (v[i - 1] == 'L');
    }
    for (int i = n - 2; i >= 0; i--) {
        po[i] = po[i + 1] + (v[i + 1] == 'R');
    }

    f(i, n) {
        if (a[i] != pr[i] + po[i] + 1) {
            cout << 0 << '\n';
            return;
        }
    }

    cout << 1 << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
